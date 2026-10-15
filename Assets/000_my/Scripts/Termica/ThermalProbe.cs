using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using Unity.XR.CoreUtils;
using Artemis.Vr;

namespace Artemis.Thermal
{
    /// <summary>
    /// Sonda termica, versione semplice (fase 2).
    ///
    /// Si punta il controller destro su una superficie e si preme il grilletto: sul punto
    /// compare un segnaposto, e la scheda Thermal della HUD mostra la temperatura di quella
    /// faccia. Un nuovo colpo sposta il segnaposto; un colpo verso il cielo lo toglie.
    ///
    /// Rispetto a CaldanaMR: niente mirino a sguardo, niente lettura continua, niente marker
    /// di rete. Un solo segnaposto, locale al visore.
    ///
    /// Il segnaposto resta sulla FACCIA, non sul numero: dopo una nuova simulazione (altre ore,
    /// altra data, altro scenario) la HUD rilegge la stessa faccia. Si fissa un punto e si
    /// confrontano le simulazioni senza dover rimirare.
    ///
    /// Si vede con e senza colorazione: e' un oggetto suo, non fa parte della mesh termica.
    ///
    /// Due scelte di progetto:
    ///  - IN EDITOR E NELLA BUILD PER PC il clic sinistro del mouse vale come grilletto, letto
    ///    direttamente da qui (vedi Update).
    ///  - NESSUN COLLIDER. Il raggio si interseca a calcolo con i triangoli della mesh termica
    ///    (25-27 mila: meno di un millesimo di secondo, e solo alla pressione del grilletto).
    ///    Un collider in piu' sulle facciate fermerebbe il raggio del teletrasporto e
    ///    toccherebbe il giocatore; cosi' la sonda non puo' disturbare niente. E l'indice del
    ///    triangolo e' quello della mesh, senza layer da configurare.
    ///  - SEGNAPOSTO AVVICINATO ALLA CAMERA, come la sovrapposizione del piano B: gli splat
    ///    davanti alla superficie lo coprirebbero. Viene spostato lungo la linea di vista, quindi
    ///    resta esattamente sul punto mirato; mai piu' vicino di 1 m, per finire dietro la HUD.
    ///    Ha una grandezza apparente costante: a 3 m come a 40 m resta un pallino leggibile.
    ///
    /// Da mettere sull'oggetto App del prefab VrApp.
    /// </summary>
    public class ThermalProbe : MonoBehaviour
    {
        [Header("Mira")]
        [Tooltip("Da dove parte il raggio. Vuoto: si cerca nel rig l'oggetto con il nome qui sotto " +
                 "e, se manca, si usa lo sguardo (la camera).")]
        [SerializeField] private Transform aimSource;
        [SerializeField] private string aimSourceName = "Right Controller";
        [Tooltip("Mano il cui grilletto lancia la sonda.")]
        [SerializeField] private XRNode hand = XRNode.RightHand;
        [Tooltip("Oltre questa distanza (m) un colpo vale come 'cielo'.")]
        [SerializeField] private float maxDistance = 200f;

        [Header("Segnaposto")]
        [Tooltip("Consigliato: un materiale URP Unlit. Vuoto: si usa il materiale standard (Lit), " +
                 "che funziona ma ha le ombreggiature.")]
        [SerializeField] private Material markerMaterial;
        [SerializeField] private Color markerColor = Color.white;
        [SerializeField] private Color outlineColor = Color.black;
        [Tooltip("Diametro apparente in radianti: 0.015 = circa 15 cm a 10 m.")]
        [SerializeField] private float angularSize = 0.015f;
        [Tooltip("Di quanto (m) il segnaposto viene avvicinato alla camera per non essere coperto " +
                 "dagli splat. Stesso ruolo del Push della sovrapposizione.")]
        [SerializeField] private float push = 3f;
        [Tooltip("Distanza minima dalla camera (m): oltre la HUD, che a 0.7 m lo nasconde.")]
        [SerializeField] private float minDistance = 1f;
        [Tooltip("Dopo gli splat e dopo la sovrapposizione termica (4000-4003).")]
        [SerializeField] private int renderQueue = 4010;

        /// <summary>Riga per la HUD (la mostra ThermalPanel). Vuota se la sonda non c'e'.</summary>
        public static string Reading => instance != null ? instance.BuildReading() : "";

        private static ThermalProbe instance;

        private ThermalSurface surface;
        private bool hasMarker;
        private Vector3 markerPoint;   // punto colpito, in coordinate del mondo
        private int markerTri;         // triangolo colpito: la temperatura si rilegge da qui
        private GameObject marker;
        private readonly List<Material> markerMaterials = new List<Material>();
        private bool triggerWasDown;
        private Camera cam;

        // Copia dei dati della mesh, rifatta solo quando la mesh cambia (il colorizer la
        // sostituisce alla prima simulazione, con gli stessi triangoli nello stesso ordine).
        private Mesh cachedMesh;
        private Vector3[] verts;
        private int[] tris;

        private void Awake() { instance = this; }

        private void OnDestroy()
        {
            if (instance == this) instance = null;
            DestroyMarker();
        }

        private void Update()
        {
            // La superficie appartiene alla scena: cambiando luogo il segnaposto non ha piu' senso.
            if (ThermalSurface.Current != surface)
            {
                surface = ThermalSurface.Current;
                cachedMesh = null;
                Clear();
            }

#if UNITY_EDITOR || UNITY_STANDALONE
            // MOUSE, letto QUI e non tramite EditorMousePointer. Prima il clic arrivava dal suo
            // evento OnWorldTrigger, ma quel componente si spegne da solo quando vede un visore
            // (anche il Meta XR Simulator) e, spento, non passava piu' nulla: la sonda restava
            // muta senza una riga di log. Letto qui, il clic sinistro funziona sempre in Editor e
            // nella build per PC. I clic sulla HUD li scarta Probe (RayHitsPanel), quindi premere
            // un pulsante non sposta la sonda.
            var mouse = UnityEngine.InputSystem.Mouse.current;
            if (mouse != null && mouse.leftButton.wasPressedThisFrame)
            {
                if (cam == null) cam = Camera.main;
                if (cam != null) Probe(cam.ScreenPointToRay(mouse.position.ReadValue()), "mouse");
            }
#endif
            if (surface == null) return;

            // Grilletto letto direttamente dal controller: nessuna azione da collegare
            // nell'Inspector. Conta solo il momento della pressione, non il tenerlo premuto.
            bool down = TriggerDown();
            if (down && !triggerWasDown)
            {
                Transform src = ResolveAim();
                if (src != null) Probe(new Ray(src.position, src.forward), "grilletto");
            }
            triggerWasDown = down;
        }

        private bool TriggerDown()
        {
            var device = InputDevices.GetDeviceAtXRNode(hand);
            return device.isValid &&
                   device.TryGetFeatureValue(CommonUsages.triggerButton, out bool pressed) && pressed;
        }

        private Transform ResolveAim()
        {
            if (aimSource != null) return aimSource;

            var origin = FindFirstObjectByType<XROrigin>();
            if (origin != null)
            {
                foreach (var t in origin.GetComponentsInChildren<Transform>(true))
                {
                    if (t.name == aimSourceName)
                    {
                        aimSource = t;
                        Debug.Log($"[ThermalProbe] raggio dal controller '{t.name}'.");
                        return aimSource;
                    }
                }
            }

            if (cam == null) cam = Camera.main;
            if (cam != null)
                Debug.LogWarning($"[ThermalProbe] '{aimSourceName}' non trovato nel rig: uso lo sguardo.");
            return cam != null ? cam.transform : null;
        }

        // ---------------------------------------------------------------- sonda

        /// Ogni esito finisce nel log, anche quelli in cui non succede niente: "la sonda non
        /// risponde" deve potersi distinguere fra "il clic non arriva", "e' finito sulla HUD" e
        /// "non ha colpito la mesh".
        private void Probe(Ray ray, string source)
        {
            if (surface == null)
            {
                Debug.Log($"[ThermalProbe] {source}: nessuna superficie termica in questo luogo.");
                return;
            }

            // Il grilletto sulla HUD preme un pulsante: non deve anche spostare la sonda.
            var hud = VrHud.Instance;
            if (hud != null && hud.RayHitsPanel(ray, out _)) return;

            if (RaycastSurface(ray, out int tri, out Vector3 point))
            {
                hasMarker = true;
                markerTri = tri;
                markerPoint = point;
                EnsureMarker();
                Debug.Log($"[ThermalProbe] {source}: triangolo {tri}, a {Vector3.Distance(ray.origin, point):F1} m.");
            }
            else
            {
                Clear();   // colpo verso il cielo: si toglie il segnaposto
                Debug.Log($"[ThermalProbe] {source}: nessun triangolo colpito, segnaposto tolto.");
            }
        }

        /// <summary>
        /// Intersezione raggio-triangoli sulla mesh termica (algoritmo di Moller-Trumbore).
        /// Vale per entrambe le facce: il verso dei triangoli di una mesh fotogrammetrica non e'
        /// affidabile, e il triangolo piu' vicino lungo il raggio e' comunque quello giusto.
        /// Il calcolo si fa nelle coordinate della mesh, cosi' scala e rotazione del padre
        /// (l'allineamento -90 dell'OBJ) non contano.
        /// </summary>
        private bool RaycastSurface(Ray ray, out int hitTri, out Vector3 hitPoint)
        {
            hitTri = -1;
            hitPoint = Vector3.zero;

            var mf = surface.GetComponent<MeshFilter>();
            if (mf == null || mf.sharedMesh == null) return false;
            if (mf.sharedMesh != cachedMesh)
            {
                cachedMesh = mf.sharedMesh;
                verts = cachedMesh.vertices;
                tris = cachedMesh.triangles;
            }

            Transform tr = surface.transform;
            Matrix4x4 toLocal = tr.worldToLocalMatrix;
            Vector3 o = toLocal.MultiplyPoint3x4(ray.origin);
            Vector3 d = toLocal.MultiplyVector(ray.direction);

            float best = float.MaxValue;
            int n = tris.Length / 3;
            for (int i = 0; i < n; i++)
            {
                Vector3 a = verts[tris[i * 3]];
                Vector3 e1 = verts[tris[i * 3 + 1]] - a;
                Vector3 e2 = verts[tris[i * 3 + 2]] - a;

                Vector3 p = Vector3.Cross(d, e2);
                float det = Vector3.Dot(e1, p);
                if (det > -1e-12f && det < 1e-12f) continue;   // raggio parallelo al triangolo
                float inv = 1f / det;

                Vector3 s = o - a;
                float u = Vector3.Dot(s, p) * inv;
                if (u < 0f || u > 1f) continue;

                Vector3 q = Vector3.Cross(s, e1);
                float v = Vector3.Dot(d, q) * inv;
                if (v < 0f || u + v > 1f) continue;

                float t = Vector3.Dot(e2, q) * inv;
                if (t > 1e-5f && t < best) { best = t; hitTri = i; }
            }

            if (hitTri < 0) return false;

            hitPoint = tr.localToWorldMatrix.MultiplyPoint3x4(o + d * best);
            if (Vector3.Distance(ray.origin, hitPoint) > maxDistance) { hitTri = -1; return false; }
            return true;
        }

        private void Clear()
        {
            hasMarker = false;
            DestroyMarker();
        }

        // ---------------------------------------------------------------- lettura per la HUD

        private string BuildReading()
        {
            if (surface == null) return "";
            if (!hasMarker) return "Probe: aim at a surface and pull the trigger.";

            if (cam == null) cam = Camera.main;
            float dist = cam != null ? Vector3.Distance(cam.transform.position, markerPoint) : 0f;

            var c = surface.Colorizer;
            if (surface.Busy) return $"Probe ({dist:F0} m): updating...";
            if (c == null || !surface.HasResult || !c.HasColors)
                return $"Probe placed ({dist:F0} m): run a simulation to read it.";

            float temp = c.GetTemperatureFromTriangleIndex(markerTri);
            if (float.IsNaN(temp)) return $"Probe ({dist:F0} m): no value on this face.";
            return $"Probe  {temp:F1} C   ({dist:F0} m away)";
        }

        // ---------------------------------------------------------------- segnaposto

        private void LateUpdate()
        {
            if (marker == null) return;
            if (cam == null) cam = Camera.main;
            if (cam == null) return;

            // Avvicinato alla camera lungo la linea di vista: sullo stesso punto mirato, ma
            // davanti agli splat. Grandezza proporzionale alla distanza a cui viene disegnato:
            // cosi' l'angolo sotto cui lo si vede resta costante.
            Vector3 eye = cam.transform.position;
            Vector3 toPoint = markerPoint - eye;
            float d = toPoint.magnitude;
            if (d < 1e-3f) return;

            float drawn = d - Mathf.Min(push, Mathf.Max(d - minDistance, 0f));
            marker.transform.position = eye + toPoint / d * drawn;
            marker.transform.localScale = Vector3.one * (drawn * angularSize);
        }

        private void EnsureMarker()
        {
            if (marker != null) return;

            // Un oggetto alla radice della scena: col cambio di luogo sparisce con lei.
            // Due sfere: quella esterna, nera, mostra solo l'interno (Cull Front) e fa da
            // contorno; quella bianca sta dentro. Si legge su qualunque palette e sugli splat.
            marker = new GameObject("ThermalProbeMarker");
            MakeBall("Outline", 1.4f, outlineColor, true, renderQueue);
            MakeBall("Core", 1.0f, markerColor, false, renderQueue + 1);
        }

        private void MakeBall(string name, float scale, Color color, bool cullFront, int queue)
        {
            var go = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            go.name = name;
            Destroy(go.GetComponent<Collider>());   // nessun collider: non deve fermare nessun raggio
            go.transform.SetParent(marker.transform, false);
            go.transform.localScale = Vector3.one * scale;

            var r = go.GetComponent<MeshRenderer>();
            var m = new Material(markerMaterial != null ? markerMaterial : r.sharedMaterial);
            if (m.HasProperty("_BaseColor")) m.SetColor("_BaseColor", color);
            else m.color = color;
            if (m.HasProperty("_Cull")) m.SetFloat("_Cull", cullFront ? 1f : 2f);   // 1 = Front, 2 = Back
            m.renderQueue = queue;
            markerMaterials.Add(m);

            r.sharedMaterial = m;
            r.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            r.receiveShadows = false;
        }

        private void DestroyMarker()
        {
            if (marker != null) Destroy(marker);
            marker = null;
            foreach (var m in markerMaterials) if (m != null) Destroy(m);
            markerMaterials.Clear();
        }
    }
}
