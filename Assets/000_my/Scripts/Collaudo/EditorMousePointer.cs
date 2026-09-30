#if UNITY_EDITOR
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using Artemis.Vr;   // VrHud

namespace Artemis.EditorTools
{
    /// <summary>
    /// Puntatore a MOUSE per collaudare in Editor senza visore e senza il simulatore XRI.
    ///
    /// Perche' esiste: l'interazione VR passa da XRI (interactor, ray, poke) e dalla lettura
    /// diretta dei dispositivi XR — due catene che in Editor senza HMD non si accendono, o si
    /// accendono a meta'. Per verificare la LOGICA (chi e' docente, chi segue le scene, chi puo'
    /// abbattere) non serve simulare la VR: serve poter premere i pulsanti. Questo componente
    /// fa quello e nient'altro.
    ///
    /// Cosa fa:
    ///  - clic sinistro sulla HUD world-space -> preme il pulsante sotto il cursore, chiamando
    ///    direttamente il suo onClick (niente EventSystem, niente XRUIInputModule: sono proprio
    ///    i pezzi che in Editor non collaborano);
    ///  - clic sinistro nel mondo -> equivale al grilletto: misura un fusto in area, propone o
    ///    martella un albero in Simulation;
    ///  - tasto destro tenuto premuto -> ruota la testa; WASD/QE -> cammina e sale/scende.
    ///
    /// Usa l'INPUT SYSTEM (Mouse.current / Keyboard.current) e non la vecchia classe Input:
    /// il progetto ha "Active Input Handling = Input System Package", quindi ogni chiamata a
    /// UnityEngine.Input lancia un'eccezione a ogni frame.
    ///
    /// PERCHE' E' INDISPENSABILE IN UN'APP CON GAUSSIAN SPLATTING, e non un comodo accessorio:
    /// in Play Mode l'SDK LCC forza PlatformType.PC, e in visore via Link si vede in DIPLOPIA.
    /// Gli splat si collaudano quindi solo in build standalone, ed e' per questo che
    /// LCCRendererVR ha skipInEditor acceso: in Editor lo splat non si carica affatto. Senza un
    /// puntatore a mouse, l'unico modo di provare cambio scena, HUD, posa del player e
    /// interazioni sarebbe fare un build e indossare il visore a ogni modifica.
    ///
    /// Racchiuso in #if UNITY_EDITOR: non finisce mai in una build per il visore.
    /// Da mettere su un oggetto sempre presente (lo stesso del flusso delle scene).
    /// </summary>
    public class EditorMousePointer : MonoBehaviour
    {
        [Header("Attivazione")]
        [Tooltip("Spegnilo quando provi col visore collegato via Link, altrimenti mouse e " +
                 "controller si contendono le stesse azioni.")]
        [SerializeField] private bool active = true;
        [Tooltip("Disattiva da solo se rileva un visore collegato.")]
        [SerializeField] private bool disableWhenHmdPresent = true;

        [Header("Movimento")]
        [SerializeField] private float moveSpeed = 3f;
        [SerializeField] private float fastMultiplier = 3f;
        [SerializeField] private float lookSpeed = 3f;

        [Header("Puntamento nel mondo")]
        [SerializeField] private float maxRayDistance = 60f;

        [Header("Mirino")]
        [SerializeField] private bool drawCrosshair = true;
        [SerializeField] private Color crosshairColor = new Color(1f, 0.9f, 0.2f, 0.9f);

        /// <summary>
        /// Clic nel mondo (fuori dalla HUD), con il raggio dalla camera. Gli strumenti si
        /// iscrivono qui per ricevere l'equivalente del grilletto quando si collauda col mouse.
        ///
        /// Esempio, in un componente strumento:
        ///     void OnEnable()  { EditorMousePointer.OnWorldTrigger += Act; }
        ///     void OnDisable() { EditorMousePointer.OnWorldTrigger -= Act; }
        ///     void Act(Ray ray) { ... }
        /// Racchiuderlo in #if UNITY_EDITOR, come questo componente.
        /// </summary>
        public static System.Action<Ray> OnWorldTrigger;

        private Camera cam;
        private Transform rig;
        private float yaw, pitch;
        private Texture2D dot;

        // ---- ciclo di vita ---------------------------------------------------------------------

        private void Start()
        {
            if (disableWhenHmdPresent && UnityEngine.XR.XRSettings.isDeviceActive)
            {
                Debug.Log("[EditorMousePointer] visore attivo: puntatore a mouse disattivato.");
                active = false;
            }
        }

        private void Update()
        {
            if (!active) return;
            if (!EnsureRefs()) return;

            var mouse = Mouse.current;
            if (mouse == null) return;      // nessun mouse collegato: niente da fare

            Look(mouse);
            Move();

            if (mouse.leftButton.wasPressedThisFrame) Click(mouse);
        }

        private bool EnsureRefs()
        {
            if (cam == null) cam = Camera.main;
            if (cam == null) return false;
            if (rig == null)
            {
                var origin = FindFirstObjectByType<Unity.XR.CoreUtils.XROrigin>();
                rig = origin != null ? origin.transform : null;
            }
            return rig != null;
        }

        // ---- navigazione -----------------------------------------------------------------------

        /// Tasto destro premuto = mouse-look. Ruota il RIG in imbardata e la camera in
        /// beccheggio, cosi' il movimento resta orizzontale come in VR.
        private void Look(Mouse mouse)
        {
            if (!mouse.rightButton.isPressed) return;
            // delta e' in pixel per frame: si scala per avere una sensibilita' simile al vecchio
            // GetAxis("Mouse X"), che era gia' normalizzato.
            Vector2 d = mouse.delta.ReadValue() * 0.05f;
            yaw += d.x * lookSpeed;
            pitch = Mathf.Clamp(pitch - d.y * lookSpeed, -80f, 80f);
            rig.rotation = Quaternion.Euler(0f, yaw, 0f);
            cam.transform.localRotation = Quaternion.Euler(pitch, 0f, 0f);
        }

        private void Move()
        {
            var kb = Keyboard.current;
            if (kb == null) return;

            float s = moveSpeed * (kb.leftShiftKey.isPressed ? fastMultiplier : 1f) * Time.deltaTime;
            Vector3 fwd = Vector3.ProjectOnPlane(cam.transform.forward, Vector3.up).normalized;
            Vector3 right = Vector3.ProjectOnPlane(cam.transform.right, Vector3.up).normalized;

            Vector3 d = Vector3.zero;
            if (kb.wKey.isPressed) d += fwd;
            if (kb.sKey.isPressed) d -= fwd;
            if (kb.dKey.isPressed) d += right;
            if (kb.aKey.isPressed) d -= right;
            if (kb.eKey.isPressed) d += Vector3.up;
            if (kb.qKey.isPressed) d -= Vector3.up;

            if (d.sqrMagnitude < 0.001f) return;

            // Il CharacterController impedisce le scritture dirette sul transform: si spegne
            // per un istante, come fa XrRigPlacer quando posa il rig.
            var cc = rig.GetComponentInChildren<CharacterController>();
            bool had = cc != null && cc.enabled;
            if (had) cc.enabled = false;
            rig.position += d.normalized * s;
            if (had) cc.enabled = true;
        }

        // ---- clic -----------------------------------------------------------------------------------

        private void Click(Mouse mouse)
        {
            var ray = cam.ScreenPointToRay(mouse.position.ReadValue());

            if (PressHudButton(ray)) return;    // la HUD ha la precedenza, come col ray VR
            PullTrigger(ray);
        }

        /// Trova il pulsante della HUD sotto il cursore e ne invoca l'onClick DIRETTAMENTE.
        /// Si scavalca l'EventSystem di proposito: in Editor senza HMD l'XRUIInputModule non
        /// produce eventi, ed e' esattamente il pezzo che rende la HUD inutilizzabile.
        private bool PressHudButton(Ray ray)
        {
            var hud = VrHud.Instance;
            if (hud == null) return false;

            var canvasT = hud.transform.Find("VrHudCanvas");
            if (canvasT == null) return false;
            var rt = canvasT.GetComponent<RectTransform>();
            if (rt == null) return false;

            var plane = new Plane(-canvasT.forward, canvasT.position);
            if (!plane.Raycast(ray, out float enter)) return false;

            Vector3 hit = ray.GetPoint(enter);
            Vector3 local = rt.InverseTransformPoint(hit);
            var r = rt.rect;
            if (local.x < r.xMin || local.x > r.xMax || local.y < r.yMin || local.y > r.yMax) return false;

            // Il pulsante piu' PROFONDO che contiene il punto: le righe della tabella stanno
            // dentro contenitori che a loro volta potrebbero essere cliccabili.
            Button best = null;
            foreach (var b in canvasT.GetComponentsInChildren<Button>(false))
            {
                if (!b.interactable) continue;
                var brt = b.GetComponent<RectTransform>();
                if (brt == null) continue;
                Vector3 bl = brt.InverseTransformPoint(hit);
                if (!brt.rect.Contains(new Vector2(bl.x, bl.y))) continue;
                if (best == null || brt.IsChildOf(best.transform)) best = b;
            }

            if (best == null) return true;      // colpito il pannello ma non un pulsante: assorbe
            best.onClick.Invoke();
            Debug.Log($"[EditorMousePointer] premuto '{best.name}'.");
            return true;
        }

        /// <summary>
        /// Equivalente del grilletto. Gli strumenti che devono reagire si iscrivono a
        /// <see cref="OnWorldTrigger"/>: cosi' questo componente non conosce nessuno strumento in
        /// particolare e non va toccato ogni volta che se ne aggiunge uno.
        ///
        /// La lezione che ha portato a questa forma: la versione precedente cercava gli strumenti
        /// per nome, uno dopo l'altro, e usciva al primo trovato. Bastava che uno strumento
        /// esistesse in una scena dove non serviva — succede quando vive in un prefab presente
        /// ovunque — perche' intercettasse tutti i clic, e da fuori sembravano tre guasti diversi
        /// e scollegati. Con un evento, chi non deve reagire semplicemente non e' iscritto.
        /// </summary>
        private void PullTrigger(Ray ray)
        {
            if (OnWorldTrigger == null)
            {
                Debug.Log("[EditorMousePointer] clic nel mondo, ma nessuno strumento e' iscritto " +
                          "a OnWorldTrigger.");
                return;
            }
            OnWorldTrigger.Invoke(ray);
        }

        // ---- mirino -----------------------------------------------------------------------------------

        private void OnGUI()
        {
            if (!active || !drawCrosshair) return;
            if (dot == null)
            {
                dot = new Texture2D(1, 1);
                dot.SetPixel(0, 0, crosshairColor);
                dot.Apply();
            }
            var mouse = Mouse.current;
            if (mouse == null) return;
            Vector2 p = mouse.position.ReadValue();
            GUI.DrawTexture(new Rect(p.x - 5, Screen.height - p.y - 1, 11, 2), dot);
            GUI.DrawTexture(new Rect(p.x - 1, Screen.height - p.y - 5, 2, 11), dot);

            GUI.Label(new Rect(10, 10, 620, 20),
                "MOUSE: sinistro = pulsante HUD / grilletto · destro tenuto = guarda · WASD = cammina · QE = su-giu' · Shift = veloce");
        }
    }
}
#endif
