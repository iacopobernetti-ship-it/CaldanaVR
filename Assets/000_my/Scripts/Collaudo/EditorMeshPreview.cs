#if UNITY_EDITOR
using UnityEngine;

namespace Artemis.EditorTools
{
    /// <summary>
    /// Rende VISIBILE la mesh del rilievo mentre si lavora in Editor.
    ///
    /// Perche' serve, ed e' meno ovvio di quanto sembri. In una scena-luogo la mesh ha due
    /// mestieri: collider per la posa del player e sonda, e **occlusore depth-only** — cioe' un
    /// materiale che scrive solo profondita' e non tinge un pixel. In build va benissimo, perche'
    /// cio' che si vede sono gli splat. Ma in Editor gli splat NON CI SONO: LCCRendererVR ha
    /// skipInEditor acceso, perche' in Play Mode l'SDK forza PlatformType.PC e in visore via Link
    /// si vedrebbe in diplopia.
    ///
    /// Il risultato e' che in Editor la scena appare NERA e vuota: mesh invisibile, splat assenti,
    /// sfondo nero. Si cammina alla cieca, e il collaudo del cambio scena e della posa del player
    /// — che in Editor si fa col puntatore a mouse — diventa impossibile per la ragione piu'
    /// sciocca.
    ///
    /// Questo componente scambia il materiale con uno visibile all'ingresso in Play e lo rimette
    /// com'era all'uscita. E' racchiuso in #if UNITY_EDITOR, quindi nella build non esiste: non
    /// c'e' la solita spunta da ricordarsi di togliere prima di compilare, che sarebbe
    /// esattamente il tipo di cosa che si dimentica.
    ///
    /// Da mettere sullo stesso oggetto che ha il MeshRenderer dell'occlusore, in ogni scena-luogo.
    /// </summary>
    [RequireComponent(typeof(MeshRenderer))]
    public class EditorMeshPreview : MonoBehaviour
    {
        [Tooltip("Materiale usato in Editor al posto dell'occlusore. Vuoto = ne viene generato " +
                 "uno grigio opaco al volo, che basta per orientarsi.")]
        [SerializeField] private Material previewMaterial;

        [Tooltip("Spegnilo per vedere la scena com'e' davvero in build (mesh invisibile). " +
                 "Utile per verificare che l'occlusore sia montato e non tinga nulla.")]
        [SerializeField] private bool showInEditor = true;

        private MeshRenderer rend;
        private Material original;

        private void Awake()
        {
            if (!showInEditor) return;
            rend = GetComponent<MeshRenderer>();
            if (rend == null) return;

            original = rend.sharedMaterial;
            rend.sharedMaterial = previewMaterial != null ? previewMaterial : Fallback();

            Debug.Log($"[EditorMeshPreview] '{gameObject.scene.name}': mesh resa visibile per il " +
                      "collaudo in Editor. In build questo componente non esiste.");
        }

        private void OnDestroy()
        {
            // Rimettere l'originale non e' pignoleria: sharedMaterial scrive sull'ASSET, e senza
            // il ripristino la scena resterebbe salvata con il materiale di anteprima addosso.
            if (rend != null && original != null) rend.sharedMaterial = original;
        }

        /// Grigio opaco generato al volo. Vale solo in Editor, dove Shader.Find trova sempre
        /// tutto: in build sarebbe la strada per il magenta, ma in build questo codice non c'e'.
        private static Material Fallback()
        {
            var sh = Shader.Find("Universal Render Pipeline/Lit") ?? Shader.Find("Standard");
            var m = new Material(sh) { name = "M_EditorPreview" };
            if (m.HasProperty("_BaseColor")) m.SetColor("_BaseColor", new Color(0.55f, 0.55f, 0.55f));
            if (m.HasProperty("_Color")) m.SetColor("_Color", new Color(0.55f, 0.55f, 0.55f));
            return m;
        }
    }
}
#endif
