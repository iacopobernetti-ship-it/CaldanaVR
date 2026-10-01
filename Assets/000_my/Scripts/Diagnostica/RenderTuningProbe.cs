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
    /// Scheda "Tuning" della HUD con due comandi regolabili IN VISORE, a caldo:
    ///  - SCALA DI RISOLUZIONE degli occhi: la leva sul costo per pixel, cioe' sui 25 ms "di
    ///    fondo" che restano anche con la distanza di vista corta;
    ///  - PIANO VICINO (near clip): XGRIDS raccomanda 0.2-0.3 m, contro 0.01 del rig XRI. Gli
    ///    splat a pochi centimetri dagli occhi si proiettano enormi e ridipingono mezzo schermo:
    ///    tagliarli puo' pesare sul costo di fondo. Il prezzo e' che anche mani e controller
    ///    piu' vicini di quella distanza vengono tagliati: si guarda anche quello.
    ///
    /// La DISTANZA DI VISTA non sta piu' qui: la governa AdaptiveFar, e due componenti che
    /// scrivono lo stesso Far si annullerebbero a vicenda.
    ///
    /// Perche' a caldo e non un valore in Inspector: ogni tentativo costerebbe una build.
    ///
    /// Perche' i valori sono STATICI: camera e HUD rinascono a ogni cambio scena (niente
    /// persistenza, §3). Tenendo la scelta in una statica la si riapplica alla camera nuova, e
    /// si confrontano i luoghi a parita' di impostazioni.
    ///
    /// La scala si cambia con XRSettings.eyeTextureResolutionScale e NON con il Render Scale
    /// dell'asset URP: scrivere sull'asset a runtime in Editor lo modificherebbe su disco, e
    /// il valore sbagliato finirebbe nel commit senza che nessuno l'abbia deciso.
    ///
    /// Dopo un cambio del piano vicino si chiama SetForceRefresh: il manuale dice che l'SDK tiene
    /// in cache i parametri della camera, e senza refresh la modifica non arriverebbe agli splat.
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
        [Tooltip("Valori provati in sequenza: 0.01 e' quello del rig XRI, 0.2-0.3 quello " +
                 "raccomandato da XGRIDS.")]
        [SerializeField] private float[] nearSteps = { 0.01f, 0.05f, 0.1f, 0.2f, 0.3f };

        // -1 = non ancora scelto: alla prima scena si parte dai valori che la camera ha gia'.
        private static float scale = -1f;
        private static int nearIndex = -1;

        private TMP_Text scaleLabel, nearLabel;
        private bool built;
        private bool? appliedShow;
        private Camera cam;

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
            if (c != null && c != cam) { cam = c; Apply(); }
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

            scaleLabel = hud.MakeLabel(page, "", 20);
            var scaleRow = hud.MakeRow(page);
            hud.MakeButton(scaleRow, "− 0.1", () => { scale = Round(Mathf.Clamp(scale - scaleStep, scaleMin, scaleMax)); Apply(); });
            hud.MakeButton(scaleRow, "+ 0.1", () => { scale = Round(Mathf.Clamp(scale + scaleStep, scaleMin, scaleMax)); Apply(); });

            nearLabel = hud.MakeLabel(page, "", 20);
            var nearRow = hud.MakeRow(page);
            hud.MakeButton(nearRow, "− near", () => { nearIndex = Mathf.Max(0, nearIndex - 1); Apply(); });
            hud.MakeButton(nearRow, "+ near", () => { nearIndex = Mathf.Min(nearSteps.Length - 1, nearIndex + 1); Apply(); });

            built = true;
            Apply();
        }

        private void Apply()
        {
            float near = nearSteps[Mathf.Clamp(nearIndex, 0, nearSteps.Length - 1)];
            if (cam != null && !Mathf.Approximately(cam.nearClipPlane, near))
            {
                cam.nearClipPlane = near;
                var lcc = FindFirstObjectByType<LCCManager>();
                if (lcc != null) lcc.SetForceRefresh();
            }

            // La scala rialloca le texture degli occhi: la si tocca solo quando cambia davvero,
            // non a ogni riapplicazione per cambio camera.
            if (!Mathf.Approximately(XRSettings.eyeTextureResolutionScale, scale))
                XRSettings.eyeTextureResolutionScale = scale;

            if (scaleLabel != null) scaleLabel.text = $"Resolution scale: {scale:F1}";
            if (nearLabel != null) nearLabel.text = $"Near clip: {near:0.00} m";

            // Nel log con l'etichetta, cosi' dal logcat si ricostruisce quale combinazione era
            // attiva mentre si leggeva un certo frametime.
            Debug.Log($"[RenderTuningProbe] scala = {scale:F1} · near = {near:0.00} m " +
                      $"(scena '{gameObject.scene.name}').");
        }

        /// Il gradino piu' vicino al valore che la camera ha gia': cosi' la sonda parte dalla
        /// configurazione del prefab invece di imporne una sua.
        private int ClosestNearIndex(float v)
        {
            int best = 0;
            for (int i = 1; i < nearSteps.Length; i++)
                if (Mathf.Abs(nearSteps[i] - v) < Mathf.Abs(nearSteps[best] - v)) best = i;
            return best;
        }

        /// Arrotonda al decimo: sommando 0.1 in virgola mobile si arriva a 0.7000001, e
        /// l'etichetta e il confronto con il valore precedente diventerebbero inaffidabili.
        private static float Round(float v) => Mathf.Round(v * 10f) / 10f;
    }
}
