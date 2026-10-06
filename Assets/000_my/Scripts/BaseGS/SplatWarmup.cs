using TMPro;
using UnityEngine;
using UnityEngine.Rendering;

namespace Artemis.Vr
{
    /// <summary>
    /// RISCALDAMENTO degli splat nella scena Base, sotto un velo nero.
    ///
    /// Il problema: dopo l'avvio, la PRIMA scena con gli splat — qualunque sia — "sbatte" per
    /// qualche decimo di secondo; le successive no, anche se caricate per la prima volta. Un
    /// costo che si paga una volta per avvio e non per luogo e' un costo di PRIMO USO: sul Quest
    /// (Vulkan) gli shader degli splat vengono preparati dal driver la prima volta che si
    /// disegnano, e l'SDK alloca i suoi buffer e avvia i suoi thread al primo renderer.
    ///
    /// La cura: pagarlo PRIMA, in Base, caricando e disegnando uno splat qualunque per un
    /// istante, dietro un pannello nero attaccato alla camera. Dietro il nero i fotogrammi lunghi
    /// non si vedono come scatti: il visore ripresenta un'immagine ferma e uniforme, invece della
    /// piazza che sobbalza mentre si gira la testa. Poi il renderer si distrugge (Dispose, come
    /// a ogni cambio scena) e il velo sparisce.
    ///
    /// E' ANCHE LA MISURA: se dopo il riscaldamento la prima scena smette di sbattere, la causa
    /// era il primo uso. Se continua, la causa e' altrove. Durata e fotogramma peggiore si
    /// leggono in una riga gialla della HUD (vedi ShowInHud).
    ///
    /// Aspetta la fine dell'installazione dei dati (SplatInstaller): prima i file locali non ci
    /// sono, e il renderer di riscaldamento fallirebbe con "file NON trovato". Per questo
    /// l'oggetto del renderer sta SPENTO in scena e lo accende questo componente.
    ///
    /// Il velo si crea a runtime (un Quad), ma con un materiale ASSET assegnato in Inspector: la
    /// lezione dell'avatar, gli shader cercati a runtime in build spariscono.
    ///
    /// L'esito si legge IN HUD, non solo nel log: il fenomeno esiste solo sul visore, e li' il
    /// log richiede adb. Una riga gialla sopra la fascia diagnostica dice durata e fotogramma
    /// peggiore, e resta qualche secondo dopo la fine.
    ///
    /// Da mettere nella scena Base. Una volta per avvio: Base non si rivisita.
    /// </summary>
    public class SplatWarmup : MonoBehaviour
    {
        [Tooltip("Renderer di riscaldamento, in Base, con lo stesso dato di un luogo (es. la " +
                 "piazza). Il suo oggetto deve essere SPENTO in scena: lo accende questo componente " +
                 "quando i dati sono installati.")]
        [SerializeField] private LCCRendererVR warmupRenderer;

        [Tooltip("Materiale nero URP Unlit (asset, non creato a runtime).")]
        [SerializeField] private Material blackMaterial;

        [Header("Velo")]
        [Tooltip("Distanza del velo dagli occhi (m). Deve stare OLTRE il piano vicino della " +
                 "camera (fino a 0.3 con la sonda Tuning), altrimenti viene tagliato.")]
        [SerializeField] private float coverDistance = 0.5f;
        [Tooltip("Lato del velo (m). 4 m a 0.5 m coprono ben oltre il campo visivo del Quest.")]
        [SerializeField] private float coverSize = 4f;

        [Tooltip("Scritta sul velo. Vuota = velo muto. ASCII di proposito ('...' e non '…'): il " +
                 "font di base di TextMeshPro potrebbe non avere il carattere dei puntini.")]
        [SerializeField] private string coverText = "Preparing...";
        [Tooltip("Altezza della scritta (unita' di TextMeshPro 3D: 0.25 = circa 2.5 cm a mezzo " +
                 "metro, cioe' leggibile senza invadere).")]
        [SerializeField] private float coverTextSize = 0.25f;

        [Header("Fine del riscaldamento")]
        [Tooltip("Secondi minimi di disegno dopo il caricamento.")]
        [SerializeField] private float minSecondsAfterLoad = 1f;
        [Tooltip("Fotogrammi consecutivi sotto la soglia per considerare il riscaldamento finito.")]
        [SerializeField] private int calmFrames = 20;
        [SerializeField] private float calmMs = 20f;
        [Tooltip("Tetto di sicurezza (s): oltre, il velo si toglie comunque.")]
        [SerializeField] private float maxSeconds = 15f;

        [Header("Esito in HUD")]
        [Tooltip("Secondi per cui la riga con l'esito resta visibile dopo la fine.")]
        [SerializeField] private float resultSeconds = 20f;

        public static bool Done { get; private set; }

        private GameObject cover;
        private GameObject coverLabel;
        private float startedAt = -1f, loadedAt = -1f, worstMs;
        private int calm;
        private TMP_Text hudLine;

        /// Il velo nasce in Start, cioe' PRIMA del primo fotogramma disegnato: la sequenza
        /// all'avvio deve essere "nero con scritta -> sala", non "sala -> nero -> sala". Con il
        /// velo creato nel primo Update, come all'inizio, la fotosfera faceva in tempo a
        /// comparire per un istante, e l'effetto era confuso. In Start la camera del prefab
        /// VrApp esiste gia' (gli Awake della scena sono tutti avvenuti).
        private void Start()
        {
            if (Done || warmupRenderer == null || blackMaterial == null) return;
            var cam = Camera.main;
            if (cam != null) MakeCover(cam);
        }

        private void Update()
        {
            if (Done || warmupRenderer == null || blackMaterial == null)
            {
                if (!Done)
                    Debug.LogWarning("[SplatWarmup] renderer o materiale non assegnati: niente riscaldamento.");
                Done = true;
                enabled = false;
                return;
            }

            // Ripiego: se in Start la camera non c'era ancora, il velo nasce qui.
            if (cover == null)
            {
                var cam = Camera.main;
                if (cam == null) return;
                MakeCover(cam);
            }

            // Si parte solo a dati installati: con sorgente HTTP o in Editor non c'e' attesa.
            // Nel frattempo il velo resta, e dice a che punto e' l'installazione: al primo avvio
            // dura parecchio, e un nero muto sembrerebbe un blocco.
            if (startedAt < 0f)
            {
                if (SplatInstaller.Installing)
                {
                    SetCoverText($"{coverText}\nInstalling data {SplatInstaller.Progress01:P0}");
                    return;
                }
                SetCoverText(coverText);
                warmupRenderer.gameObject.SetActive(true);
                startedAt = Time.unscaledTime;
                Debug.Log("[SplatWarmup] riscaldamento avviato sotto il velo nero.");
                ShowInHud("warm-up…");
                return;
            }

            float ms = Time.unscaledDeltaTime * 1000f;
            if (ms > worstMs) worstMs = ms;

            if (Time.unscaledTime - startedAt > maxSeconds) { Finish("tempo massimo raggiunto"); return; }
            if (!warmupRenderer.Loaded) return;
            if (loadedAt < 0f) loadedAt = Time.unscaledTime;

            // Finito quando, a caricamento avvenuto, i fotogrammi sono tornati regolari: un tempo
            // fisso sarebbe o troppo lungo su un visore gia' caldo o troppo corto al primo avvio.
            calm = ms < calmMs ? calm + 1 : 0;
            if (Time.unscaledTime - loadedAt >= minSecondsAfterLoad && calm >= calmFrames)
                Finish("completato");
        }

        private void MakeCover(Camera cam)
        {
            cover = GameObject.CreatePrimitive(PrimitiveType.Quad);
            cover.name = "WarmupCover";
            // Il collider di un primitivo intercetterebbe i raggi dei controller e del suolo.
            Destroy(cover.GetComponent<Collider>());
            cover.transform.SetParent(cam.transform, false);
            cover.transform.localPosition = new Vector3(0f, 0f, coverDistance);
            cover.transform.localRotation = Quaternion.identity;
            cover.transform.localScale = new Vector3(coverSize, coverSize, 1f);

            var r = cover.GetComponent<MeshRenderer>();
            r.sharedMaterial = blackMaterial;
            r.shadowCastingMode = ShadowCastingMode.Off;
            r.receiveShadows = false;

            // Una scritta sul nero: chi prova l'app la prima volta (i revisori del progetto) deve
            // capire che sta lavorando, non pensare a un blocco. Figlia della CAMERA e non del
            // velo, che e' scalato 4x4 e la deformerebbe; un centimetro DAVANTI al velo, perche'
            // il velo scrive profondita' e la nasconderebbe. Leggermente sopra il centro: la HUD
            // sta un po' sotto lo sguardo ed e' disegnata sempre in primo piano.
            if (string.IsNullOrWhiteSpace(coverText)) return;
            coverLabel = new GameObject("WarmupLabel", typeof(RectTransform), typeof(TextMeshPro));
            coverLabel.transform.SetParent(cam.transform, false);
            coverLabel.transform.localPosition = new Vector3(0f, 0.06f, coverDistance - 0.01f);
            coverLabel.transform.localRotation = Quaternion.identity;
            var rt = coverLabel.GetComponent<RectTransform>();
            rt.sizeDelta = new Vector2(1f, 0.2f);
            var t = coverLabel.GetComponent<TextMeshPro>();
            t.text = coverText;
            t.fontSize = coverTextSize;
            t.alignment = TextAlignmentOptions.Center;
            t.color = new Color(0.9f, 0.9f, 0.9f, 1f);
        }

        /// Riga nella canvas della HUD, come le sonde: senza toccare VrHud. Sta appena SOPRA la
        /// fascia diagnostica (che arriva a 112), e solo se la diagnostica e' accesa.
        private void ShowInHud(string text)
        {
            var hud = VrHud.Instance;
            if (hud == null || !hud.ShowDiagnostics) return;

            if (hudLine == null)
            {
                var canvasT = hud.transform.Find("VrHudCanvas");
                if (canvasT == null) return;
                var go = new GameObject("SplatWarmup", typeof(RectTransform), typeof(TextMeshProUGUI));
                go.transform.SetParent(canvasT, false);
                var rt = go.GetComponent<RectTransform>();
                rt.anchorMin = new Vector2(0f, 0f); rt.anchorMax = new Vector2(1f, 0f);
                rt.pivot = new Vector2(0.5f, 0f);
                rt.offsetMin = new Vector2(8f, 116f); rt.offsetMax = new Vector2(-8f, 146f);
                hudLine = go.GetComponent<TextMeshProUGUI>();
                hudLine.fontSize = 15;
                hudLine.alignment = TextAlignmentOptions.Center;
                hudLine.raycastTarget = false;
                hudLine.color = new Color(1f, 0.85f, 0.4f, 0.95f);
            }
            hudLine.text = text;
        }

        private void SetCoverText(string text)
        {
            if (coverLabel == null) return;
            var t = coverLabel.GetComponent<TextMeshPro>();
            if (t != null && t.text != text) t.text = text;
        }

        private void Finish(string why)
        {
            Done = true;
            float total = startedAt >= 0f ? Time.unscaledTime - startedAt : 0f;
            Debug.Log($"[SplatWarmup] {why} in {total:F1} s · fotogramma peggiore {worstMs:F0} ms.");
            ShowInHud($"warm-up {total:F1} s · worst frame {worstMs:F0} ms ({why})");
            if (hudLine != null) Destroy(hudLine.gameObject, resultSeconds);

            // Il renderer si distrugge come a ogni cambio scena: OnDestroy fa il Dispose e
            // restituisce il buffer all'SDK prima che la piazza lo richieda.
            if (warmupRenderer != null) Destroy(warmupRenderer.gameObject);
            if (cover != null) Destroy(cover);
            if (coverLabel != null) Destroy(coverLabel);
            enabled = false;
        }
    }
}
