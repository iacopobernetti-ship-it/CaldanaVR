using System.IO;
using LCCCore;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Management;

/// <summary>
/// LCCRendererVR originale XGRIDS + quattro aggiunte:
///
/// 1) SetZDepth sul MANAGER (non sul Renderer — l'errore che avevamo fatto prima, per cui
///    la chiamata non ha mai avuto effetto). Documentazione API: "开关Z深度写入，同时调整渲染队列"
///    = attiva la scrittura Z e contestualmente aggiusta la coda di rendering. E' esattamente
///    cio' che serve perche' gli splat smettano di coprire la UI world-space: scrivendo
///    profondita' ed entrando nella coda giusta, un pannello a 0.7 m davanti al viso non viene
///    piu' sovrascritto da un tronco a 5 m.
///    Nota: e' una delle poche API che NON riporta la limitazione "solo PC/Mac", presente
///    invece su SetMainCamera/AddCamera/RemoveCamera — ed e' per quel vincolo che la strada
///    della camera overlay era condannata in partenza.
///
/// 2) (RIMOSSO) skipInEditor. Impediva il caricamento dello splat in Editor perche' in Play Mode
///    l'SDK forza PlatformType.PC e via Link si vedeva in diplopia. Non serve piu': la diplopia
///    non si presenta con la preview attuale, e il flag era un valore serializzato in quattro
///    scene. Se un giorno la diplopia tornasse lavorando via Link, la si evita staccando il
///    visore invece di riaggiungere un interruttore che si dimentica in una scena su quattro.
///
/// 3) PARAMETRI DI BUDGET esposti in Inspector (guida XGRIDS "SDK Rendering Performance
///    Parameter Configuration"):
///     - SetMaxBufferSplat  = capienza del Buffer GPU, ALLOCAZIONE UNA TANTUM. Su VR:
///       default 100 (= 1 M splat), tetto 200 (= 2 M). DEVE precedere GetRender — e qui lo
///       precede sempre, perche' con "un'area = una scena" ogni ingresso e' un teardown
///       completo e non esiste il caso "cambiare il buffer a renderer vivi" (che
///       richiederebbe il Dispose di tutti).
///     - SetMaxRenderSplats = splat A SCHERMO nel rendering chunked (l'unico percorso su
///       Quest). Su VR: default 60 (= 600 k), minimo 10, massimo = il buffer. Va chiamato
///       DOPO SetMaxBufferSplat. E' il pomello dal miglior rapporto qualita'/prezzo: alzare
///       gli splat visibili DENTRO il buffer non tocca l'allocazione GPU; alzare il buffer si'.
///
///    UNITA' DELL'SDK: decine di migliaia (万). 100 = 1.000.000 di splat. La guida usa la
///    stessa unita' ovunque (es. SetMaxBufferSplat(3000) = 30 M su PC).
///
///    0 = NON chiamare l'API, restano i default di piattaforma. E' il valore di fabbrica di
///    proposito: questo componente vive in QUATTRO scene (Silvo01–04) e i valori sono
///    SERIALIZZATI in ciascuna — la trappola nota: cambiare i default nel codice non tocca i
///    componenti gia' nelle scene. Con 0 il comportamento resta quello attuale finche' non si
///    impostano i numeri, scena per scena, TENENDOLI UGUALI IN TUTTE E QUATTRO: il buffer e'
///    un'allocazione globale e valori diversi fra scene sono solo un modo per confondersi.
///    Il log dichiara cosa e' stato applicato, cosi' una scena rimasta indietro si vede dal
///    logcat (filtro: adb logcat -s Unity | grep LCCRendererVR).
///
/// 4) PIATTAFORMA SDK SCELTA A RUNTIME, non piu' a compilazione (SDK 2.3.0). Prima era
///    #if UNITY_EDITOR || UNITY_STANDALONE -> PC, altrimenti Quest: due soli casi, e lo
///    streaming via Link finiva nel caso PC, cioe' nella pipeline da scrivania applicata a un
///    visore — origine della diplopia (D3D12) e del LOD grossolano senza ambiente (D3D11)
///    segnalati a XGRIDS nella issue #8. La 2.3.0 aggiunge PlatformType.PCVR, un percorso
///    dedicato allo streaming, e le guide Quest 3 lo prescrivono per Link. Ora i casi sono tre:
///     - Android                    -> Quest  (visore standalone)
///     - Windows con visore attivo  -> PCVR   (Editor o build via Link)
///     - Windows senza visore       -> PC     (versione da scrivania)
///    Non si puo' decidere con le direttive di compilazione: Editor e build per PC sono lo
///    stesso eseguibile con o senza visore collegato, e solo a runtime si sa quale dei due.
///    Il log dichiara la piattaforma scelta, cosi' una scelta sbagliata si legge subito.
///    "Visore attivo" = un loader XR e' attivo, NON XRSettings.isDeviceActive: MISURATO in
///    Editor via Link, la sessione OpenXR era gia' creata prima della scena Base, ma
///    isDeviceActive in Start valeva ancora False (diventa vero solo a sessione "running",
///    qualche fotogramma dopo) — e lo splat finiva su PC con il visore indosso.
///
/// NIENTE try/catch attorno alle chiamate SDK, di proposito: la volta scorsa la prudenza aveva
/// ingoiato in silenzio proprio l'errore che avrebbe rivelato il metodo sbagliato. Se fallisce,
/// deve fallire rumorosamente.
/// </summary>
public class LCCRendererVR : MonoBehaviour
{
    public enum SplatSource
    {
        HttpUrl,          // come sempre: l'URL in m_FilePath
        PersistentData,   // cartella scrivibile sul visore, riempita da SplatInstaller (solo Quest; altrove vale StreamingAssets)
        StreamingAssets   // solo Editor/PC: su Android sta DENTRO l'apk e non e' un percorso
    }

    public LCCManager m_manager;

    [Tooltip("URL http dello splat. Usato quando Source = HttpUrl.")]
    public string m_FilePath;

    [Header("Sorgente dei dati")]
    [Tooltip("Usa la sorgente decisa per TUTTO il progetto (asset SplatSourceConfig in una " +
             "cartella Resources). Acceso e' la condizione normale: la sorgente e' una proprieta' " +
             "della build, non dell'area, e tenerla in un posto solo evita che una scena resti " +
             "indietro. Spegnilo se una singola area deve fare eccezione.")]
    [SerializeField] private bool useProjectSource = true;

    [Tooltip("Sorgente di QUESTA scena. Vale solo se 'Use Project Source' e' spento, oppure se " +
             "l'asset di configurazione non esiste.")]
    [SerializeField] private SplatSource source = SplatSource.HttpUrl;

    /// <summary>Sorgente come configurata (progetto o scena), prima dell'adattamento alla
    /// piattaforma.</summary>
    private SplatSource ConfiguredSource =>
        useProjectSource ? Artemis.Vr.SplatSourceConfig.Resolve(source) : source;

    /// <summary>
    /// Sorgente effettivamente in vigore qui.
    ///
    /// FUORI DA ANDROID PersistentData diventa StreamingAssets. PersistentData esiste solo
    /// perche' sul Quest StreamingAssets sta dentro l'apk e l'SDK non lo legge: SplatInstaller
    /// ci copia i dati al primo avvio. Su Windows (Editor e build) StreamingAssets e' gia' una
    /// cartella vera con tutti i dati dentro, e la copia era un doppione di qualche GB fatto al
    /// primo avvio. MISURATO: proprio quel primo avvio, se fatto con il visore in PCVR, restava
    /// fermo al caricamento 0%, mentre i successivi andavano. Ora la copia si fa solo sul Quest
    /// (SplatInstaller) e qui si legge dove i dati gia' sono.
    /// </summary>
    public SplatSource EffectiveSource
    {
        get
        {
            var s = ConfiguredSource;
            if (s == SplatSource.PersistentData && Application.platform != RuntimePlatform.Android)
                return SplatSource.StreamingAssets;
            return s;
        }
    }

    [Tooltip("Percorso RELATIVO del file .lcc/.lcc2 dentro la cartella scelta, separatori '/'. " +
             "Esempio: LCC/Silvo01/Silvo01.lcc — accanto al file deve stare la sua cartella 'data'.")]
    [SerializeField] private string localRelativePath = "LCC/Silvo01/Silvo01.lcc";

    [Tooltip("Attiva la scrittura Z degli splat: senza, il pass LCC copre la UI world-space. " +
             "Se dovesse costare in prestazioni, si spegne da qui e si misura.")]
    public bool splatDepthWrite = true;

    [Header("Budget splat (unita' SDK: decine di migliaia — 100 = 1 M)")]
    [Tooltip("Capienza del Buffer GPU (allocazione una tantum, prima di GetRender). " +
             "VR: default 100 (= 1 M splat), tetto 200 (= 2 M). 0 = non chiamare, default SDK. " +
             "STESSO valore in tutte e quattro le scene-area: e' un'allocazione globale.")]
    [Min(0)] public int maxBufferSplat10k = 0;

    [Tooltip("Splat contemporanei A SCHERMO nel rendering chunked (il percorso Quest). " +
             "VR: default 60 (= 600 k), minimo 10, massimo = il buffer. 0 = non chiamare. " +
             "E' il primo pomello da provare per la qualita': non tocca l'allocazione GPU.")]
    [Min(0)] public int maxRenderSplats10k = 0;

    [Header("Dettaglio (i budget senza questi non cambiano nulla di visibile)")]
    [Tooltip("LOD di partenza (0 = il piu' FINE, 10 = il piu' grosso). Tabella dei tier della " +
             "guida XGRIDS: 2 = Very Low, 1 = Low/Medium, 0 = High/Very High. Era cablato a 2 " +
             "dall'esempio originale: e' il motivo per cui alzare i budget non cambiava nulla — " +
             "partendo dal livello 2, i livelli piu' fini non vengono mai richiesti, per quanto " +
             "buffer si conceda. Si applica dopo il Load, come prescrive l'API.")]
    [Range(0, 10)] public int startLod = 2;

    [Tooltip("SetDetailLevel [1-100]: quanto in profondita' raffinare la gerarchia. 1 = blocca " +
             "il raffinamento anche da vicino, 100 = raffina fino al livello piu' basso. " +
             "0 = non chiamare (default SDK). Governa il dettaglio PERCEPITO insieme a StartLod; " +
             "i budget governano solo quanto materiale puo' fluire.")]
    [Range(0, 100)] public int detailLevel = 0;

    private LCCCore.Renderer m_renderer;

    /// <summary>Vero dopo onLoaded. Serve a chi regola l'SDK a caldo (RenderTuningProbe): il
    /// manuale prescrive che StartLod e il budget di splat si impostino DOPO il Load, e
    /// chiamarli prima — quando non esiste ancora nessun renderer — e' il sospetto principale
    /// del "con Max Render Splats = 30 lo splat sparisce".</summary>
    public bool Loaded { get; private set; }

    /// <summary>Il manager di questa scena, per le regolazioni a caldo.</summary>
    public LCCManager Manager => m_manager;

    /// <summary>Piattaforma SDK in uso in questa scena, decisa in Start. Esposta per la
    /// diagnostica (HUD, sonde): la scelta e' l'unica cosa che distingue i tre percorsi.</summary>
    public PlatformType Platform { get; private set; }

    void Start()
    {
        Platform = ChoosePlatform();
        m_manager.SetPlatformType(Platform);
        // Si stampano ENTRAMBI i segnali: il loader (quello che decide) e isDeviceActive (quello
        // che si usava prima). Se un giorno divergessero in modo diverso da oggi, si legge qui.
        var loader = XRGeneralSettings.Instance?.Manager?.activeLoader;
        Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': piattaforma SDK = {Platform} " +
                  $"(runtime {Application.platform}, loader XR = {(loader != null ? loader.name : "nessuno")}, " +
                  $"isDeviceActive = {XRSettings.isDeviceActive}).");

        // Su PC, con dati LOCALI, l'SDK sceglie da solo fra due percorsi: "Full Load" (tutto il
        // dato in un buffer suo) se il livello piu' fine ha meno splat della soglia, altrimenti
        // "Chunk" (a blocchi, come in streaming). Con HTTP usa SEMPRE Chunk (manuale,
        // SwitchRenderPass). E' l'unica differenza fra le due sorgenti: stessi file (env.sog
        // compreso), stessi log, stessa camera — eppure l'ambiente compariva solo via HTTP.
        // Abbassando la soglia al minimo ammesso (100 = 1 milione) il dato locale prende la
        // stessa strada di quello remoto.
        // Vale per PC e PCVR, che girano entrambi su scheda video da PC: la guida XGRIDS per lo
        // streaming 2.3.0 usa SetFullRenderSplat proprio con PCVR. Sul Quest l'SDK rifiuta la
        // chiamata, quindi li' non si fa.
        if (Platform != PlatformType.Quest && forceChunkOnPc)
        {
            m_manager.SetFullRenderSplat(100);
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': soglia Full Load al minimo " +
                      "(percorso Chunk, come per HTTP).");
        }

        // Tetto di frame rate dell'SDK. Risposta XGRIDS alla issue #8: di default l'SDK limita
        // il rendering a 24 fps quando giudica la scena "statica", e si toglie con
        // SetLockFPS(false). Questo componente non l'aveva mai chiamato; l'esempio della guida
        // PCVR 2.3.0 si'. Un tetto cosi' colpisce Quest e PCVR allo stesso modo, a prescindere
        // dalla potenza del PC — ed e' proprio il lag "uguale nelle due modalita'" che si era
        // misurato. Interruttore per l'A/B: spegnendolo si torna al comportamento precedente.
        if (unlockFps)
        {
            m_manager.SetLockFPS(false);
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': SetLockFPS(false), nessun tetto " +
                      "di frame rate dell'SDK.");
        }

        string path = ResolvePath();
        if (string.IsNullOrEmpty(path)) return;      // ResolvePath ha gia' spiegato perche'

        ApplySplatBudget();
        m_renderer = m_manager.GetRender(this.gameObject.transform);
        m_renderer.Load(path, onProgress, onLoaded);
    }

    /// <summary>
    /// Sceglie la piattaforma SDK in base a dove gira davvero l'app (vedi punto 4 in testa).
    ///
    /// L'ordine conta: anche sul Quest standalone XRSettings.isDeviceActive e' vero, quindi
    /// Android va riconosciuto PRIMA del controllo sul visore. In Editor Application.platform e'
    /// WindowsEditor anche con target di build Android, ed e' giusto cosi': l'Editor via Link
    /// renderizza sul PC, quindi deve prendere PCVR, non Quest.
    ///
    /// Il visore si riconosce dal LOADER XR attivo: con "Initialize XR on Startup" il loader
    /// viene inizializzato prima del caricamento della prima scena, e resta null se l'avvio XR
    /// fallisce (nessun visore, Link spento) o se l'XR all'avvio e' disattivato. Non si usa
    /// XRSettings.isDeviceActive: in Start puo' essere ancora False con la sessione gia' creata
    /// (vedi punto 4 in testa).
    /// </summary>
    private static PlatformType ChoosePlatform()
    {
        if (Application.platform == RuntimePlatform.Android) return PlatformType.Quest;
        var loader = XRGeneralSettings.Instance?.Manager?.activeLoader;
        return loader != null ? PlatformType.PCVR : PlatformType.PC;
    }

    /// <summary>
    /// Dove sta lo splat, secondo la sorgente scelta. Fallisce RUMOROSAMENTE e con il percorso
    /// stampato: un file locale assente e' l'errore piu' probabile di tutta questa via, e senza
    /// il percorso a schermo si finisce a indovinare se ha sbagliato l'adb push o il campo.
    /// </summary>
    private string ResolvePath()
    {
        // Se la piattaforma ha cambiato la sorgente configurata, lo si dice: chi legge il log e
        // vede "StreamingAssets" con una configurazione che dice PersistentData deve sapere perche'.
        if (ConfiguredSource != EffectiveSource)
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': sorgente configurata " +
                      $"{ConfiguredSource}, su {Application.platform} si legge da {EffectiveSource}.");

        switch (EffectiveSource)
        {
            case SplatSource.HttpUrl:
                Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': sorgente HTTP → {m_FilePath}");
                return m_FilePath;

            case SplatSource.PersistentData:
            {
                string p = LocalPath(Application.persistentDataPath);
                if (!File.Exists(p))
                {
                    Debug.LogError($"[LCCRendererVR] '{gameObject.scene.name}': file NON trovato in\n  {p}\n" +
                                   "Copialo sul visore con:\n" +
                                   "  adb push <cartella_locale> /sdcard/Android/data/<package>/files/LCC/\n" +
                                   "La cartella 'data' dello splat deve stare accanto al file.");
                    return null;
                }
                Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': sorgente LOCALE → {p}");
                return p;
            }

            case SplatSource.StreamingAssets:
            {
                // Su Android StreamingAssets non e' una cartella: sta DENTRO l'apk compresso e il
                // percorso e' un URL 'jar:file://…' che solo UnityWebRequest sa aprire. L'SDK LCC
                // apre i file con IO nativo, quindi qui non c'e' niente da leggere. Si dice, non
                // si prova: fallire dopo trenta secondi di caricamento a vuoto sarebbe peggio.
                // Il controllo viene PRIMA di costruire il percorso: un URL 'jar:' non e' un
                // percorso di file, e normalizzarlo come tale non avrebbe senso.
                if (Application.platform == RuntimePlatform.Android ||
                    Application.streamingAssetsPath.Contains("jar:"))
                {
                    Debug.LogError("[LCCRendererVR] StreamingAssets non e' leggibile su Android: sta " +
                                   "dentro l'apk e non e' un percorso di file. Usa PersistentData " +
                                   "con adb push (per provare), oppure servira' una copia " +
                                   "all'avvio guidata da un manifesto (per il pilot).");
                    return null;
                }
                string p = LocalPath(Application.streamingAssetsPath);
                if (!File.Exists(p))
                {
                    Debug.LogError($"[LCCRendererVR] file NON trovato in\n  {p}");
                    return null;
                }
                Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': sorgente StreamingAssets → {p}");
                return p;
            }
        }
        return null;
    }

    /// <summary>
    /// Percorso locale con i separatori NATIVI della piattaforma: '\' su Windows, '/' su Android.
    ///
    /// MISURATO, non supposto. L'SDK, con piattaforma PC, ricava da solo la cartella dei blocchi
    /// di splat cercando nel percorso il separatore di Windows:
    ///  - percorso misto ("…/StreamingAssets\LCC/Caldana05/…", cio' che produce Path.Combine fra
    ///    le cartelle di Unity, che usano '/', e il separatore di Windows): l'indice si apriva e
    ///    compariva "Data loaded", ma la cartella ricavata finiva all'unico '\' presente, cioe'
    ///    StreamingAssets invece di LCC/Caldana05 — blocchi mai trovati, splat invisibile, nessun
    ///    errore;
    ///  - percorso tutto '/': ArgumentOutOfRangeException in DataLoader (Substring con lunghezza
    ///    negativa, cioe' separatore '\' non trovato).
    /// GetFullPath riporta tutto al separatore della piattaforma, e su Windows sono '\' ovunque.
    /// Sul visore il percorso e' gia' tutto '/', e li' l'SDK usa la piattaforma Quest.
    /// Gli URL HTTP non passano di qui: l'SDK li tratta a parte, e li' '/' va benissimo.
    /// Con PCVR il comportamento atteso e' lo stesso di PC (stesso Windows, stesso caricatore):
    /// se con dati locali lo splat non comparisse solo in PCVR, e' il primo punto da misurare.
    /// </summary>
    private string LocalPath(string root) =>
        Path.GetFullPath(Path.Combine(root, localRelativePath));

    /// <summary>
    /// Applica i budget PRIMA di GetRender, nell'ordine prescritto dalla guida
    /// (SetMaxBufferSplat, poi SetMaxRenderSplats). Con 0 non chiama nulla e lo dice,
    /// cosi' dal logcat si legge scena per scena quale configurazione era attiva —
    /// indispensabile quando i valori vivono serializzati in quattro file di scena.
    /// </summary>
    private void ApplySplatBudget()
    {
        if (maxBufferSplat10k > 0)
        {
            m_manager.SetMaxBufferSplat(maxBufferSplat10k);
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': SetMaxBufferSplat({maxBufferSplat10k}) " +
                      $"= {maxBufferSplat10k * 10000:N0} splat nel buffer GPU.");
        }
        else
        {
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': buffer splat al default SDK " +
                      "(VR: 1 M).");
        }

        if (maxRenderSplats10k > 0)
        {
            m_manager.SetMaxRenderSplats(maxRenderSplats10k);
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': SetMaxRenderSplats({maxRenderSplats10k}) " +
                      $"= {maxRenderSplats10k * 10000:N0} splat a schermo.");
        }
        else
        {
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': splat a schermo al default SDK " +
                      "(VR: 600 k).");
        }
    }

    [Header("Distanza di vista massima di questo luogo")]
    [Tooltip("Tetto per AdaptiveFar in QUESTA scena (m). 0 = il tetto generale di AdaptiveFar. " +
             "Nelle vie strette conviene basso (es. 150): lo sfondo e' coperto dalle case, e un " +
             "Far altissimo, quando ci si gira verso un corridoio, costerebbe secondi di scatti " +
             "prima che la regolazione lo riporti giu'. In piazza alto, per vedere l'ambiente.")]
    [Min(0)] public float maxViewDistance = 0f;

    [Header("Frame rate")]
    [Tooltip("Chiama SetLockFPS(false): toglie il tetto di 24 fps che l'SDK applica di default " +
             "quando giudica la scena statica (risposta XGRIDS, issue #8). Acceso e' il valore " +
             "giusto in VR; spento solo per l'A/B.")]
    public bool unlockFps = true;

    [Header("Percorso di rendering su PC")]
    [Tooltip("PC e PCVR (Editor e build per Windows, con o senza visore): forza il percorso a " +
             "blocchi (Chunk) anche con dati locali, come avviene sempre con HTTP. Con il percorso " +
             "Full Load, scelto dall'SDK per i dati locali piu' piccoli, l'ambiente (env.sog) non " +
             "compariva. Sul visore standalone non ha effetto: li' l'SDK usa sempre il suo " +
             "percorso mobile.")]
    public bool forceChunkOnPc = true;

    [Header("Ambiente")]
    [Tooltip("Disegna l'AMBIENTE del rilievo: la nuvola a bassa precisione che riempie lo sfondo " +
             "lontano (colline, cielo catturato). Era spento in modo fisso, eredita' dell'esempio " +
             "XGRIDS. ATTENZIONE: e' comunque tagliato dal Far della camera, quindi con " +
             "AdaptiveFar si vede solo fin dove la distanza di vista arriva.")]
    public bool renderEnvironment = true;

    [Header("Rilascio")]
    [Tooltip("Chiama Dispose sul renderer quando la scena si scarica. Il buffer degli splat e' " +
             "un'allocazione GLOBALE dell'SDK e — documentazione alla mano — viene rilasciato " +
             "SOLO col Dispose dei renderer: distruggere il GameObject non basta, perche' la " +
             "memoria sta dal lato nativo e Unity non ne sa nulla. Senza, ogni area visitata ne " +
             "lascia una copia e il visore rallenta progressivamente a forza di cambiare scena. " +
             "Interruttore per l'A/B: spegnendolo si torna al comportamento precedente.")]
    public bool disposeOnDestroy = true;

    /// <summary>
    /// Rilascio ESPLICITO all'uscita dalla scena.
    ///
    /// Da non confondere con il riuso Dispose+Load a caldo, che fu provato con una sonda e
    /// bocciato su Quest: quello serviva a NON cambiare scena, e resta bocciato. Qui il cambio
    /// scena resta il meccanismo di sempre — si aggiunge solo la restituzione della memoria
    /// mentre si esce, che e' cio' che non e' mai stato fatto.
    ///
    /// Niente try/catch, per la stessa ragione di SetZDepth: se fallisce deve dirlo.
    /// </summary>
    private void OnDestroy()
    {
        if (!disposeOnDestroy || m_renderer == null) return;

        m_renderer.Dispose();
        m_renderer = null;
        Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': renderer disposed " +
                  "(buffer splat restituito all'SDK).");
    }

    private void onProgress(float v)
    {
        Debug.Log("progress:" + v);
    }

    private void onLoaded()
    {
        // StartLod dall'Inspector (era cablato a 2 = tier Very Low). Va dopo il Load,
        // come prescrive l'API. 0 = LOD piu' fine.
        m_manager.SetStartLod(startLod);
        Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': SetStartLod({startLod}) " +
                  $"({(startLod == 0 ? "il piu' fine" : startLod >= 2 ? "tier Very Low" : "tier Low/Medium")}).");

        if (detailLevel > 0)
        {
            m_manager.SetDetailLevel(detailLevel);
            Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': SetDetailLevel({detailLevel}).");
        }

        // Prima era SetEnvironment(false) fisso, copiato dall'esempio XGRIDS: l'ambiente non
        // compariva mai, qualunque fosse il dato. Ora decide la scena. Il manuale avverte che
        // serve un dato che contenga i nodi di ambiente: se il rilievo non li ha, non cambia
        // nulla e non e' un errore.
        m_renderer.SetEnvironment(renderEnvironment);
        Debug.Log($"[LCCRendererVR] '{gameObject.scene.name}': ambiente {(renderEnvironment ? "ACCESO" : "spento")}.");

        if (splatDepthWrite)
        {
            m_manager.SetZDepth(true);
            Debug.Log("[LCCRendererVR] SetZDepth(true) sul MANAGER: gli splat scrivono profondita' " +
                      "e la coda di rendering viene riaggiustata — la HUD dovrebbe restare davanti.");
        }

        Loaded = true;
        Debug.Log("[LCCRendererVR] Data loaded");
    }
}
