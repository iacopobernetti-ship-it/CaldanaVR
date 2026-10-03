using LCCCore;
using TMPro;
using UnityEngine;

namespace Artemis.Vr
{
    /// <summary>
    /// DISTANZA DI VISTA AUTOMATICA: il Far della camera si accorcia quando il frametime supera
    /// l'obiettivo e si riallunga piano quando c'e' margine.
    ///
    /// Perche' esiste: nelle vie lunghe viste per il lungo le facciate si vedono di taglio, gli
    /// splat si impilano lungo lo sguardo e il costo cresce con i metri inquadrati (misurato:
    /// oltre 140 ms guardando nord nella strozzatura di Street01, 25 ms con Far = 20 m). Un Far
    /// fisso e' un cattivo compromesso: corto dappertutto per salvare il caso peggiore, cioe'
    /// "l'effetto un po' particolare" anche dove non serve. Qui la distanza e' lunga dove il
    /// visore regge e si accorcia solo dove e quando serve.
    ///
    /// Perche' il Far e non SetClip dell'SDK: secondo il manuale la camera principale governa
    /// ritaglio del campo visivo, scelta del LOD e ordinamento, quindi cio' che sta oltre il Far
    /// e' scartato PRIMA di ogni lavoro. SetClip taglia nello shader, a lavoro gia' fatto.
    ///
    /// Risposta ASIMMETRICA, di proposito: giu' in fretta (moltiplicando), su piano (sommando).
    /// Un picco si sente subito e va tolto subito; un bordo della vista che si allontana a
    /// scatti invece si nota, e deve muoversi lento. Fra le due soglie c'e' una fascia morta,
    /// senza la quale la distanza oscillerebbe di continuo attorno all'obiettivo.
    ///
    /// SetForceRefresh dopo ogni cambio: il manuale dice che l'SDK tiene in cache i parametri
    /// della camera, e che una modifica fatta da fuori vale solo dopo il refresh. Senza, il Far
    /// cambierebbe per Unity ma non per la scelta degli splat, cioe' proprio dove conta.
    ///
    /// DISTANZE MOLTO DIVERSE FRA I LUOGHI. L'AMBIENTE del rilievo (lo sfondo a bassa
    /// precisione: colline, valle) sta oltre i 1000 m: misurato, in piazza compare solo con il
    /// Far a 15000, il valore raccomandato da XGRIDS. Da qui tre scelte:
    ///  - la salita e' PROPORZIONALE alla distanza (con un minimo in m/s): a pochi metri il bordo
    ///    si vede e deve muoversi piano, a centinaia di metri non si vede e puo' correre — con
    ///    una salita fissa di 4 m/s ci vorrebbe un'ora per arrivare all'ambiente;
    ///  - a un PICCO (un fotogramma lunghissimo) si dimezza invece di togliere il 20%: partendo
    ///    da migliaia di metri, scendere a scalini del 20% vorrebbe dire secondi di scatti;
    ///  - ogni luogo puo' avere il SUO tetto (LCCRendererVR.maxViewDistance): alto in piazza,
    ///    basso nelle vie, dove lo sfondo e' coperto dalle case e un Far enorme servirebbe solo
    ///    a pagare care le svolte verso i corridoi.
    /// A ogni cambio scena si riparte da Start Far, non dall'ultima distanza: entrare in una via
    /// con la distanza della piazza aperta sarebbe partire dal caso peggiore.
    ///
    /// ATTENZIONE: governa solo il costo che dipende dalla DISTANZA. Se il costo di fondo sta
    /// sopra l'obiettivo, la distanza si ferma al minimo e ci resta, e l'etichetta diventa
    /// arancione: il segnale che il resto del costo va cercato altrove.
    ///
    /// Da mettere sull'oggetto App del prefab VrApp. E' l'UNICO componente che scrive il Far:
    /// due scrittori sulla stessa camera si annullerebbero a vicenda.
    /// </summary>
    public class AdaptiveFar : MonoBehaviour
    {
        [Header("Obiettivo")]
        [Tooltip("Frametime da rispettare (ms). 13.9 = 72 Hz. Finche' il costo di fondo sta sopra " +
                 "il budget, conviene un obiettivo appena sopra quel fondo: toglie i picchi senza " +
                 "schiacciare la distanza al minimo.")]
        [SerializeField] private float targetMs = 13.9f;

        [Header("Limiti della distanza (m)")]
        [SerializeField] private float minFar = 20f;
        [Tooltip("Tetto generale. Ogni luogo puo' abbassarlo con LCCRendererVR.maxViewDistance. " +
                 "15000 = il valore XGRIDS, necessario per vedere l'ambiente del rilievo.")]
        [SerializeField] private float maxFar = 15000f;
        [Tooltip("Distanza a ogni ingresso in un luogo.")]
        [SerializeField] private float startFar = 30f;

        [Header("Risposta")]
        [Tooltip("Ampiezza della finestra di misura (s).")]
        [SerializeField] private float windowSeconds = 0.25f;
        [Tooltip("Fattore di accorciamento quando si e' sopra l'obiettivo: 0.8 = -20% per finestra.")]
        [SerializeField] private float downFactor = 0.8f;
        [Tooltip("Fattore di accorciamento per un PICCO (fotogramma oltre 2.5 volte l'obiettivo).")]
        [SerializeField] private float spikeFactor = 0.5f;
        [Tooltip("Velocita' MINIMA di allungamento (m/s): vale a distanze brevi, dove il bordo si vede.")]
        [SerializeField] private float upMetersPerSecond = 4f;
        [Tooltip("Allungamento PROPORZIONALE (frazione della distanza al secondo): 0.2 = +20%/s. " +
                 "Da 30 m all'ambiente a 15000 m in circa mezzo minuto.")]
        [SerializeField] private float upRelativePerSecond = 0.2f;
        [Tooltip("Secondi di attesa dopo un cambio scena: durante il caricamento i fotogrammi " +
                 "sono irregolari per motivi che con la distanza non c'entrano.")]
        [SerializeField] private float settleSeconds = 1.5f;

        [Tooltip("Un fotogramma piu' lungo di cosi' (ms) e' considerato una PAUSA (visore tolto, " +
                 "menu di sistema) e non un costo di disegno. Deve stare ben sopra i peggiori " +
                 "fotogrammi veri: a 250 ms una scena molto pesante sembrava sempre in pausa, e la " +
                 "regolazione non partiva mai.")]
        [SerializeField] private float pauseMs = 1000f;

        [Header("Diagnostica")]
        [SerializeField] private bool showInHud = true;

        /// <summary>Distanza in vigore, leggibile da altri componenti.</summary>
        public static float CurrentFar { get; private set; } = -1f;

        private Camera cam;
        private LCCManager lcc;
        private LCCRendererVR place;
        private float sceneMax;
        private float windowStart, sumMs, worstMs;
        private int frames;
        private float settleUntil;

        private TMP_Text label;
        private float nextAttach;

        private void Update()
        {
            // Camera nuova = scena nuova (o rig ricostruito): si riapplica la distanza e si
            // aspetta che il caricamento si calmi prima di giudicare i fotogrammi.
            var c = Camera.main;
            if (c == null) return;
            if (c != cam)
            {
                cam = c;
                lcc = null;
                place = null;
                sceneMax = maxFar;
                CurrentFar = Mathf.Clamp(startFar, minFar, maxFar);
                Apply();
                settleUntil = Time.unscaledTime + settleSeconds;
                ResetWindow();
            }

            if (showInHud && label == null && Time.unscaledTime >= nextAttach)
            {
                nextAttach = Time.unscaledTime + 0.5f;
                Attach();
            }

            // Tempo NON scalato, come FrameTimeProbe: misura lo stesso numero che si legge in HUD.
            float ms = Time.unscaledDeltaTime * 1000f;

            // Un fotogramma lunghissimo e' una pausa (visore tolto, menu di sistema), non un
            // costo di disegno: se entrasse nella media farebbe crollare la distanza per niente.
            // La soglia era 250 ms: troppo bassa. Con una vista pesantissima OGNI fotogramma la
            // superava, e il regolatore ignorava proprio il caso per cui esiste — senza
            // accorciare la distanza e senza nemmeno scrivere la sua riga in HUD.
            if (ms > pauseMs) { ResetWindow(); return; }
            if (Time.unscaledTime < settleUntil) { ResetWindow(); return; }

            frames++;
            sumMs += ms;
            if (ms > worstMs) worstMs = ms;
            if (Time.unscaledTime - windowStart < windowSeconds) return;

            float avg = sumMs / frames;
            float elapsed = Time.unscaledTime - windowStart;
            float before = CurrentFar;

            // Giu' anche per un solo fotogramma molto lungo: e' la svolta verso il tunnel, e
            // aspettare che alzi la media vorrebbe dire sentirne due o tre.
            if (worstMs > targetMs * 2.5f)
                CurrentFar = Mathf.Max(minFar, CurrentFar * spikeFactor);
            else if (avg > targetMs * 1.05f)
                CurrentFar = Mathf.Max(minFar, CurrentFar * downFactor);
            else if (avg < targetMs * 0.85f)
            {
                float rate = Mathf.Max(upMetersPerSecond, CurrentFar * upRelativePerSecond);
                CurrentFar = Mathf.Min(sceneMax, CurrentFar + rate * elapsed);
            }
            // Il tetto del luogo puo' arrivare dopo (renderer trovato tardi): lo si rispetta
            // anche quando non si sta salendo.
            CurrentFar = Mathf.Min(CurrentFar, sceneMax);

            if (!Mathf.Approximately(before, CurrentFar)) Apply();
            UpdateLabel();
            ResetWindow();
        }

        private void ResetWindow()
        {
            windowStart = Time.unscaledTime;
            frames = 0; sumMs = 0f; worstMs = 0f;
        }

        private void Apply()
        {
            if (cam != null) cam.farClipPlane = CurrentFar;
            UpdateLabel();   // la riga c'e' subito, non solo alla fine della prima finestra

            // Manager e renderer sono oggetti della scena-luogo: li si ritrova a ogni scena.
            // Dal renderer arriva il tetto di questo luogo; in Base (niente splat) vale quello
            // generale.
            if (place == null)
            {
                place = FindFirstObjectByType<LCCRendererVR>();
                if (place != null && place.maxViewDistance > 0f)
                    sceneMax = Mathf.Clamp(place.maxViewDistance, minFar, maxFar);
            }
            if (lcc == null) lcc = FindFirstObjectByType<LCCManager>();
            if (lcc != null) lcc.SetForceRefresh();
        }

        private void UpdateLabel()
        {
            if (label == null) return;

            // La regolazione continua comunque: si nasconde solo la riga, quando la HUD spegne
            // la fascia diagnostica.
            var hud = VrHud.Instance;
            bool visible = hud != null && hud.ShowDiagnostics;
            if (label.gameObject.activeSelf != visible) label.gameObject.SetActive(visible);
            if (!visible) return;
            bool atMin = CurrentFar <= minFar + 0.01f;
            label.text = $"view {CurrentFar:F0} / {sceneMax:F0} m  (auto · target {targetMs:F1} ms)" +
                         (atMin ? "  · AT MINIMUM" : "");
            // Arancione al minimo: la distanza non ha piu' niente da dare, e il costo che resta
            // non dipende da lei.
            label.color = atMin ? new Color(1f, 0.75f, 0.35f, 0.95f)
                                : new Color(0.6f, 0.85f, 1f, 0.9f);
        }

        /// Etichetta nella canvas della HUD, come FrameTimeProbe: senza toccare VrHud.
        /// Occupa la fascia di SplatInstaller, che con sorgente HTTP non si accende mai; se un
        /// giorno si passa ai dati locali, le due righe si sovrapporranno solo durante
        /// l'installazione, cioe' prima che la distanza conti.
        private void Attach()
        {
            var hud = VrHud.Instance;
            if (hud == null) return;
            var canvasT = hud.transform.Find("VrHudCanvas");
            if (canvasT == null) return;

            var existing = canvasT.Find("AdaptiveFar");
            if (existing != null) { label = existing.GetComponent<TMP_Text>(); UpdateLabel(); return; }

            var go = new GameObject("AdaptiveFar", typeof(RectTransform), typeof(TextMeshProUGUI));
            go.transform.SetParent(canvasT, false);

            var rt = go.GetComponent<RectTransform>();
            rt.anchorMin = new Vector2(0f, 0f);
            rt.anchorMax = new Vector2(1f, 0f);
            rt.pivot = new Vector2(0.5f, 0f);
            rt.offsetMin = new Vector2(8f, 82f);
            rt.offsetMax = new Vector2(-8f, 112f);

            label = go.GetComponent<TextMeshProUGUI>();
            label.fontSize = 15;
            label.alignment = TextAlignmentOptions.Center;
            label.raycastTarget = false;
            label.text = "";
            UpdateLabel();
        }
    }
}
