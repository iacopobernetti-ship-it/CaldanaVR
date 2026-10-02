using LCCCore;
using TMPro;
using UnityEngine;
using UnityEngine.XR;
using Artemis.Vr;

namespace Artemis.EditorTools
{
    /// <summary>
    /// SONDA TEMPORANEA — da rimuovere prima del pilot (lista del §6).
    ///
    /// Scheda "Tuning" della HUD con quattro regolazioni IN VISORE, a caldo, una riga ciascuna
    /// nella forma [ - ] valore [ + ]:
    ///  - SCALA DI RISOLUZIONE degli occhi: costo per pixel;
    ///  - PIANO VICINO (near clip): XGRIDS raccomanda 0.2-0.3 m contro 0.01 del rig XRI;
    ///  - START LOD dell'SDK: livello da cui parte il dettaglio (0 = il piu' fine);
    ///  - BUDGET DI SPLAT (SetMaxRenderSplats): quanti splat a schermo, in decine di migliaia.
    ///
    /// Perche' START LOD e BUDGET stanno qui e non solo in Inspector: sul visore lo Start Lod
    /// "sembra non contare", e il budget a 30 faceva sparire lo splat. Il manuale dice due cose
    /// che lo spiegherebbero: lo Start Lod riordina la selezione subito solo nel percorso PC
    /// (RenderCore), mentre sul Quest l'SDK usa il percorso MobileLOD; e il budget, su MobileLOD,
    /// viene passato a OGNI RENDERER, quindi va chiamato dopo il Load — LCCRendererVR invece lo
    /// chiamava prima di GetRender, quando di renderer non ce n'erano. Qui entrambi si applicano
    /// solo a caricamento finito, e si vede subito, in visore, se cambiano qualcosa.
    ///
    /// "SDK" = valore mai toccato da questa sonda: vale quello della scena. La sonda interviene
    /// solo dopo il primo tocco, cosi' non altera il comportamento normale finche' non la si usa.
    ///
    /// La DISTANZA DI VISTA non sta qui: la governa AdaptiveFar, e due componenti che scrivono
    /// lo stesso Far si annullerebbero a vicenda.
    ///
    /// Perche' i valori sono STATICI: camera, HUD e renderer rinascono a ogni cambio scena
    /// (niente persistenza, §3); tenendo la scelta in una statica la si riapplica nella scena
    /// nuova, e si confrontano i luoghi a parita' di impostazioni.
    ///
    /// La scala si cambia con XRSettings.eyeTextureResolutionScale e NON con il Render Scale
    /// dell'asset URP: scrivere sull'asset a runtime in Editor lo modificherebbe su disco.
    ///
    /// Dopo ogni cambio che tocca camera o selezione si chiama SetForceRefresh: il manuale dice
    /// che l'SDK tiene in cache i parametri della camera.
    ///
    /// Da mettere sull'oggetto App del prefab VrApp, accanto a FrameTimeProbe.
    /// </summary>
    public class RenderTuningProbe : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Tuning";
        [Tooltip("Mostra la scheda Tuning. Spenta, la scheda sparisce ma i valori gia' scelti " +
                 "restano applicati. Si cambia anche in Play, dall'Inspector.")]
        [SerializeField] private bool showTab = true;

        [Header("Scala di risoluzione")]
        [SerializeField] private float scaleStep = 0.1f;
        [SerializeField] private float scaleMin = 0.5f;
        [SerializeField] private float scaleMax = 1.0f;

        [Header("Piano vicino (m)")]
        [SerializeField] private float[] nearSteps = { 0.01f, 0.05f, 0.1f, 0.2f, 0.3f };

        [Header("Start LOD (0 = il piu' fine)")]
        [SerializeField] private int lodMin = 0;
        [SerializeField] private int lodMax = 5;

        [Header("Budget di splat (decine di migliaia: 30 = 300 mila)")]
        [SerializeField] private int[] budgetSteps = { 10, 20, 30, 40, 60, 80, 100 };

        // Righe da 60 px: quattro regolazioni stanno nello spazio lasciato dalla fascia
        // diagnostica. 60 e' un po' sotto il comodo per il poke, ma qui si usa il raggio.
        private const float RowHeight = 60f;

        // -1 = non ancora toccato: scala e near partono dai valori della camera, LOD e budget
        // restano quelli della scena finche' non si preme un pulsante.
        private static float scale = -1f;
        private static int nearIndex = -1;
        private static int lod = -1;
        private static int budgetIndex = -1;

        private TMP_Text scaleLabel, nearLabel, lodLabel, budgetLabel;
        private bool built;
        private bool? appliedShow;
        private Camera cam;

        private LCCRendererVR lcc;
        private bool lccApplied;
        private float nextLccCheck;

        private void Update()
        {
            if (!built) { TryBuild(); return; }

            // La scheda si costruisce sempre e si nasconde: cosi' riaccenderla in Play la fa
            // ricomparire, invece di richiedere un nuovo avvio.
            if (appliedShow != showTab && VrHud.Instance != null)
            {
                VrHud.Instance.SetTabVisible(tabTitle, showTab);
                appliedShow = showTab;
            }

            // Il rig puo' comparire dopo la HUD, o essere sostituito: si riapplica quando la
            // camera cambia, non una volta sola in Start.
            var c = Camera.main;
            if (c != null && c != cam) { cam = c; ApplyCamera(); }

            // Il renderer degli splat e' un oggetto della scena-luogo: lo si cerca a ogni scena
            // e, quando ha finito di caricare, gli si riapplicano LOD e budget scelti.
            if (Time.unscaledTime >= nextLccCheck)
            {
                nextLccCheck = Time.unscaledTime + 0.5f;
                var r = FindFirstObjectByType<LCCRendererVR>();
                if (r != lcc) { lcc = r; lccApplied = false; }
                if (lcc != null && lcc.Loaded && !lccApplied) { ApplyLcc(); lccApplied = true; }
            }
        }

        /// Si costruisce appena ci sono HUD e camera, con la solita pazienza sul primo frame:
        /// l'ordine di Awake fra componenti non e' garantito.
        private void TryBuild()
        {
            var hud = VrHud.Instance;
            var c = Camera.main;
            if (hud == null || c == null) return;

            cam = c;
            if (scale < 0f) scale = Mathf.Clamp(XRSettings.eyeTextureResolutionScale, scaleMin, scaleMax);
            if (nearIndex < 0) nearIndex = ClosestNearIndex(c.nearClipPlane);

            var page = hud.CreateTab(tabTitle);

            scaleLabel = Row(hud, page,
                () => { scale = Round(Mathf.Clamp(scale - scaleStep, scaleMin, scaleMax)); ApplyCamera(); },
                () => { scale = Round(Mathf.Clamp(scale + scaleStep, scaleMin, scaleMax)); ApplyCamera(); });

            nearLabel = Row(hud, page,
                () => { nearIndex = Mathf.Max(0, nearIndex - 1); ApplyCamera(); },
                () => { nearIndex = Mathf.Min(nearSteps.Length - 1, nearIndex + 1); ApplyCamera(); });

            lodLabel = Row(hud, page,
                () => { lod = lod < 0 ? lodMin : Mathf.Max(lodMin, lod - 1); ApplyLcc(); },
                () => { lod = lod < 0 ? lodMin : Mathf.Min(lodMax, lod + 1); ApplyLcc(); });

            budgetLabel = Row(hud, page,
                () => { budgetIndex = budgetIndex < 0 ? budgetSteps.Length - 1 : Mathf.Max(0, budgetIndex - 1); ApplyLcc(); },
                () => { budgetIndex = budgetIndex < 0 ? budgetSteps.Length - 1 : Mathf.Min(budgetSteps.Length - 1, budgetIndex + 1); ApplyLcc(); });

            built = true;
            ApplyCamera();
            RefreshLabels();
        }

        /// Una riga [ - ] valore [ + ]: l'etichetta fra i due pulsanti dice che cosa si sta
        /// regolando e quanto vale, senza una riga di testo in piu' sopra.
        private static TMP_Text Row(VrHud hud, Transform page,
                                   UnityEngine.Events.UnityAction minus, UnityEngine.Events.UnityAction plus)
        {
            var row = hud.MakeRow(page, RowHeight);
            hud.MakeButton(row, "-", minus);
            var label = hud.MakeLabel(row, "", 18);
            hud.MakeButton(row, "+", plus);
            return label;
        }

        // ---- applicazione -------------------------------------------------------------------

        private void ApplyCamera()
        {
            float near = nearSteps[Mathf.Clamp(nearIndex, 0, nearSteps.Length - 1)];
            if (cam != null && !Mathf.Approximately(cam.nearClipPlane, near))
            {
                cam.nearClipPlane = near;
                if (lcc != null && lcc.Manager != null) lcc.Manager.SetForceRefresh();
            }

            // La scala rialloca le texture degli occhi: la si tocca solo quando cambia davvero.
            if (!Mathf.Approximately(XRSettings.eyeTextureResolutionScale, scale))
                XRSettings.eyeTextureResolutionScale = scale;

            RefreshLabels();
            Log();
        }

        /// LOD e budget SOLO a caricamento finito, come prescrive il manuale. Prima del Load
        /// non c'e' renderer a cui il percorso MobileLOD possa passare il valore.
        private void ApplyLcc()
        {
            RefreshLabels();
            if (lcc == null || !lcc.Loaded || lcc.Manager == null) return;

            var m = lcc.Manager;
            if (lod >= 0) m.SetStartLod(lod);
            if (budgetIndex >= 0) m.SetMaxRenderSplats(budgetSteps[budgetIndex]);
            if (lod >= 0 || budgetIndex >= 0) m.SetForceRefresh();
            Log();
        }

        private void RefreshLabels()
        {
            float near = nearSteps[Mathf.Clamp(nearIndex, 0, nearSteps.Length - 1)];
            if (scaleLabel != null) scaleLabel.text = $"Scale\n{scale:F1}";
            if (nearLabel != null) nearLabel.text = $"Near\n{near:0.00} m";
            if (lodLabel != null) lodLabel.text = lod < 0 ? "LOD\nscene" : $"LOD\n{lod}";
            if (budgetLabel != null)
                budgetLabel.text = budgetIndex < 0 ? "Splats\nscene"
                                                   : $"Splats\n{budgetSteps[budgetIndex] * 10}k";
        }

        /// Nel log con l'etichetta, cosi' dal logcat si ricostruisce quale combinazione era
        /// attiva mentre si leggeva un certo frametime.
        private void Log()
        {
            float near = nearSteps[Mathf.Clamp(nearIndex, 0, nearSteps.Length - 1)];
            string l = lod < 0 ? "scena" : lod.ToString();
            string b = budgetIndex < 0 ? "scena" : (budgetSteps[budgetIndex] * 10) + "k";
            Debug.Log($"[RenderTuningProbe] scala {scale:F1} · near {near:0.00} m · LOD {l} · " +
                      $"splat {b} · renderer {(lcc != null && lcc.Loaded ? "caricato" : "non pronto")} " +
                      $"(scena '{gameObject.scene.name}').");
        }

        // ---- utilita' ---------------------------------------------------------------------------

        /// Il gradino piu' vicino al valore che la camera ha gia': la sonda parte dalla
        /// configurazione del prefab invece di imporne una sua.
        private int ClosestNearIndex(float v)
        {
            int best = 0;
            for (int i = 1; i < nearSteps.Length; i++)
                if (Mathf.Abs(nearSteps[i] - v) < Mathf.Abs(nearSteps[best] - v)) best = i;
            return best;
        }

        /// Arrotonda al decimo: sommando 0.1 in virgola mobile si arriva a 0.7000001.
        private static float Round(float v) => Mathf.Round(v * 10f) / 10f;
    }
}
