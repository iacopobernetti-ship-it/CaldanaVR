using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Artemis.Places
{
    /// <summary>
    /// Cartello sui MURI DI CONFINE: una scritta che dice quale luogo caricare per proseguire.
    ///
    /// I muri di confine sono cubi con il collider acceso e la mesh spenta: fermano il giocatore
    /// prima delle zone di margine, dove il rilievo e' degradato. Da soli pero' sono un ostacolo
    /// muto — si sbatte contro il nulla senza sapere perche'. La scritta trasforma il limite in
    /// un'indicazione: "di qui si va in Via ..., sceglila dalla scheda Places".
    ///
    /// Posizione: il CENTRO del muro (del suo Box Collider) piu' uno spostamento in Inspector,
    /// espresso negli ASSI DEL MURO e in metri: X lungo il muro, Y in alto, Z attraverso. Negli
    /// assi del muro perche' i muri sono ruotati come le vie, e "50 cm piu' in basso" deve
    /// restare tale qualunque sia l'orientamento. In metri e non scalato col cubo: un muro
    /// largo 6 m e spesso 20 cm deformerebbe qualunque cosa ne fosse figlia.
    ///
    /// Per la stessa ragione la scritta NON e' figlia del muro: nasce a runtime come oggetto a
    /// se', nella stessa scena, e si distrugge con lui. In Editor, fuori dal Play, la posizione
    /// si vede con un gizmo giallo e il testo accanto, cosi' la si sistema senza premere Play.
    ///
    /// Ruota attorno alla verticale per guardare sempre chi legge: i muri si raggiungono da
    /// angolazioni diverse, e un cartello visto di taglio non si legge. Solo attorno alla
    /// verticale, pero': una scritta che si inclina seguendo lo sguardo da' fastidio in visore.
    ///
    /// Testo 3D di TextMeshPro creato a runtime: usa il font di base di TMP (che sta in
    /// Resources ed entra nella build), lo stesso della scritta "Preparing..." gia' collaudata
    /// sul visore. Il bordo scuro serve a leggerla sopra gli splat chiari.
    ///
    /// Il muro va lasciato sul layer Default, NON su PlaceGround: altrimenti XrRigPlacer potrebbe
    /// posare il giocatore sulla sua sommita'.
    ///
    /// Da mettere sul cubo del muro di confine.
    /// </summary>
    public class PlaceSign : MonoBehaviour
    {
        [Tooltip("Testo del cartello, per esempio il nome della via in cui si prosegue.")]
        [TextArea(1, 3)]
        [SerializeField] private string text = "Via ...";

        [Tooltip("Spostamento dal centro del muro, in metri, negli assi del muro: " +
                 "X lungo il muro, Y in alto, Z attraverso il muro.")]
        [SerializeField] private Vector3 offset = Vector3.zero;

        [Tooltip("Altezza del testo (unita' di TextMeshPro 3D): 2.5 = lettere di circa 25 cm, " +
                 "leggibili a una decina di metri.")]
        [SerializeField] private float textSize = 2.5f;

        [SerializeField] private Color color = Color.white;

        [Tooltip("Bordo scuro attorno alle lettere: le rende leggibili sopra gli splat chiari.")]
        [SerializeField] private bool outline = true;

        [Tooltip("Testo in grassetto: piu' leggibile a distanza e sopra sfondi movimentati.")]
        [SerializeField] private bool bold = false;

        [Tooltip("Coda di disegno della scritta. 4000 = dopo gli splat. Con il valore di base " +
                 "(trasparenti, 3000) gli splat venivano disegnati DOPO la scritta e la " +
                 "ricoprivano anche quando stavano dietro: la scritta non scrive profondita', " +
                 "quindi niente li fermava.")]
        [SerializeField] private int renderQueue = 4000;

        private Transform label;

        private void Start()
        {
            var go = new GameObject($"Sign_{name}", typeof(RectTransform), typeof(TextMeshPro));
            // Nella scena del muro, non in quella attiva per caso: cosi' si distrugge con lui.
            SceneManager.MoveGameObjectToScene(go, gameObject.scene);
            label = go.transform;
            label.position = SignPosition();

            var t = go.GetComponent<TextMeshPro>();
            t.text = text;
            t.fontSize = textSize;
            t.color = color;
            // Grassetto di TextMeshPro: ispessisce le lettere nello shader del font, quindi
            // funziona con il font di base senza bisogno di una variante "Bold" del font.
            t.fontStyle = bold ? FontStyles.Bold : FontStyles.Normal;
            t.alignment = TextAlignmentOptions.Center;
            t.textWrappingMode = TextWrappingModes.NoWrap;
            go.GetComponent<RectTransform>().sizeDelta = new Vector2(20f, 5f);
            if (outline)
            {
                t.outlineWidth = 0.2f;
                t.outlineColor = new Color32(0, 0, 0, 255);
            }

            // Dopo gli splat, ma con il test di profondita' normale: gli splat scrivono
            // profondita' (SetZDepth), quindi la scritta resta nascosta solo da cio' che le sta
            // DAVANTI — una casa all'angolo — e non da cio' che le sta dietro. Un "sempre in
            // primo piano" la mostrerebbe invece attraverso i muri da tutta la piazza.
            // fontMaterial (non fontSharedMaterial): un'istanza per questa scritta, cosi' la
            // coda non cambia per tutti i testi che usano il font di base, HUD compresa.
            t.fontMaterial.renderQueue = renderQueue;

            Face();
        }

        private void LateUpdate() => Face();

        private void OnDestroy()
        {
            if (label != null) Destroy(label.gameObject);
        }

        /// Ruota la scritta verso la camera, solo attorno alla verticale.
        private void Face()
        {
            if (label == null) return;
            var cam = Camera.main;
            if (cam == null) return;

            Vector3 dir = label.position - cam.transform.position;
            dir.y = 0f;
            if (dir.sqrMagnitude < 0.0001f) return;
            // L'asse avanti della scritta punta VIA dalla camera: e' cosi' che il testo 3D di
            // TextMeshPro si legge dritto e non a specchio.
            label.rotation = Quaternion.LookRotation(dir.normalized, Vector3.up);
        }

        /// Centro del Box Collider (se c'e') piu' lo spostamento negli assi del muro.
        /// Calcolato dal Box Collider e non da Collider.bounds: bounds fuori dal Play puo' essere
        /// vuoto, e il gizmo deve funzionare anche li'.
        private Vector3 SignPosition()
        {
            var box = GetComponent<BoxCollider>();
            Vector3 centre = box != null ? transform.TransformPoint(box.center) : transform.position;
            return centre + transform.rotation * offset;
        }

#if UNITY_EDITOR
        /// Anteprima in Editor, anche fuori dal Play: dove apparira' la scritta e cosa dira'.
        private void OnDrawGizmos()
        {
            Vector3 p = SignPosition();
            Gizmos.color = new Color(1f, 0.85f, 0.2f, 0.9f);
            Gizmos.DrawWireSphere(p, 0.15f);
            UnityEditor.Handles.Label(p + Vector3.up * 0.25f, text);
        }
#endif
    }
}
