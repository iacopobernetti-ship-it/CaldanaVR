using UnityEngine;

namespace Caldana.Flow
{
    /// <summary>
    /// Imposta lo sfondo della camera per il LUOGO caricato in questo momento.
    ///
    /// In CaldanaMR e' il componente che realizza la distinzione visiva fra hub e luoghi:
    ///   Piazza    → Skybox, la fotosfera della piazza (ambientazione, e punto di smistamento);
    ///   Via01..04 → Solid Color nero, perche' la via E' il Gaussian Splatting e tutto cio' che
    ///               non e' splat deve sparire nel nero.
    ///
    /// Perche' non si tocca la camera direttamente: la Main Camera vive nel player, che sta in
    /// Core e non si ricostruisce mai. Cambiarne il Background Type dove serve significherebbe un
    /// override sul prefab, cioe' un valore che vale per tutti i luoghi insieme. Qui invece la
    /// scelta e' un oggetto DELLA SCENA DEL LUOGO: si vede nella Hierarchy, si legge
    /// nell'Inspector, e chi apre quella scena capisce subito com'e' configurata.
    ///
    /// DIFFERENZA RISPETTO ALLA VERSIONE SilvoVR. Con le scene additive due luoghi possono
    /// coesistere per un istante durante la transizione, quindi due componenti possono contendersi
    /// la stessa camera. La riapplicazione periodica e' percio' INCONDIZIONATA — non piu' solo
    /// "se la camera e' cambiata" — cosi' l'ultimo componente vivo vince, e l'ultimo vivo e'
    /// sempre quello del luogo appena caricato. Costa una scrittura di due campi ogni mezzo
    /// secondo, che e' nulla.
    ///
    /// Va su un oggetto di ogni scena-luogo (per esempio quello della Directional Light).
    /// </summary>
    public class SceneBackground : MonoBehaviour
    {
        public enum Mode { SolidColor, Skybox }

        [Tooltip("Solid Color = tinta piena (nero nelle vie). Skybox = il materiale qui sotto, " +
                 "o quello gia' impostato nel Lighting della scena.")]
        [SerializeField] private Mode mode = Mode.SolidColor;

        [Tooltip("Tinta di sfondo quando il modo e' Solid Color.")]
        [SerializeField] private Color color = Color.black;

        [Tooltip("Materiale di skybox per questo luogo: nella piazza, la fotosfera. " +
                 "Vuoto = si lascia quello gia' impostato in Lighting → Environment.")]
        [SerializeField] private Material skybox;

        [Tooltip("Ogni quanto riapplicare. Serve perche' durante una transizione additiva due " +
                 "luoghi possono coesistere per un istante.")]
        [SerializeField] private float recheckInterval = 0.5f;

        private float nextCheck;

        private void OnEnable() { nextCheck = 0f; Apply(); }

        private void Update()
        {
            if (Time.time < nextCheck) return;
            nextCheck = Time.time + recheckInterval;
            Apply();
        }

        private void Apply()
        {
            if (mode == Mode.Skybox && skybox != null && RenderSettings.skybox != skybox)
            {
                RenderSettings.skybox = skybox;
                // Senza questo l'illuminazione ambientale resta quella dello skybox precedente:
                // in piazza si vedrebbe la luce di un cielo che non c'e' piu'.
                DynamicGI.UpdateEnvironment();
            }

            var cam = Camera.main;
            if (cam == null) return;

            if (mode == Mode.Skybox)
            {
                if (cam.clearFlags != CameraClearFlags.Skybox)
                {
                    cam.clearFlags = CameraClearFlags.Skybox;
                    Debug.Log($"[SceneBackground] '{gameObject.scene.name}': sfondo Skybox " +
                              $"('{(RenderSettings.skybox != null ? RenderSettings.skybox.name : "nessuno")}').");
                }
            }
            else
            {
                if (cam.clearFlags != CameraClearFlags.SolidColor || cam.backgroundColor != color)
                {
                    cam.clearFlags = CameraClearFlags.SolidColor;
                    cam.backgroundColor = color;
                    Debug.Log($"[SceneBackground] '{gameObject.scene.name}': sfondo Solid Color {color}.");
                }
            }
        }
    }
}
