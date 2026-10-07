#if UNITY_EDITOR || UNITY_STANDALONE
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
    /// Senza un puntatore a mouse, l'unico modo di provare cambio scena, HUD, posa del player e
    /// interazioni sarebbe fare un build e indossare il visore a ogni modifica.
    ///
    /// Vale in Editor e nella BUILD PER PC (Windows, senza visore): e' la versione per chi
    /// rivede il progetto da una scrivania. Racchiuso in #if UNITY_EDITOR || UNITY_STANDALONE:
    /// la build Android per il Quest non lo contiene. Nella build per PC Esc chiude l'app, perche'
    /// a schermo intero non c'e' altro modo evidente di uscire. Se un visore e' collegato (Link),
    /// si spegne da solo e l'app si usa in VR.
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
        /// Racchiuderlo in #if UNITY_EDITOR || UNITY_STANDALONE, come questo componente.
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
#if !UNITY_EDITOR
            // Solo nella build per PC: Esc chiude. In Editor Esc serve a Unity, e li' si esce col
            // pulsante di Play.
            var keys = Keyboard.current;
            if (keys != null && keys.escapeKey.wasPressedThisFrame) { Application.Quit(); return; }
#endif
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

            // All'INIZIO di ogni sguardo si riparte dall'orientamento REALE, non da quello che
            // questo componente ricordava. Il rig non lo gira solo il mouse: XrRigPlacer lo posa
            // con la rotazione Y dello SpawnPoint, e la rete di sicurezza lo riposa dopo una
            // caduta. Con yaw e pitch che partivano da 0, il primo trascinamento buttava via
            // quella rotazione e riportava lo sguardo a nord — cioe' proprio la direzione
            // iniziale che si voleva collaudare.
            if (mouse.rightButton.wasPressedThisFrame) SyncFromRig();

            // delta e' in pixel per frame: si scala per avere una sensibilita' simile al vecchio
            // GetAxis("Mouse X"), che era gia' normalizzato.
            Vector2 d = mouse.delta.ReadValue() * 0.05f;
            yaw += d.x * lookSpeed;
            pitch = Mathf.Clamp(pitch - d.y * lookSpeed, -80f, 80f);
            rig.rotation = Quaternion.Euler(0f, yaw, 0f);
            cam.transform.localRotation = Quaternion.Euler(pitch, 0f, 0f);
        }

        /// Legge imbardata dal rig e beccheggio dalla camera. localEulerAngles restituisce 0..360:
        /// un beccheggio di -10 gradi arriva come 350, e va riportato a -180..180 prima del clamp,
        /// altrimenti il clamp a +80 lo farebbe scattare in alto.
        private void SyncFromRig()
        {
            yaw = rig.eulerAngles.y;
            pitch = Mathf.DeltaAngle(0f, cam.transform.localEulerAngles.x);
            pitch = Mathf.Clamp(pitch, -80f, 80f);
        }

        private void Move()
        {
            var kb = Keyboard.current;
            if (kb == null) return;

            float s = moveSpeed * (kb.leftShiftKey.isPressed ? fastMultiplier : 1f) * Time.deltaTime;
            Vector3 fwd = Vector3.ProjectOnPlane(cam.transform.forward, Vector3.up).normalized;
            Vector3 right = Vector3.ProjectOnPlane(cam.transform.right, Vector3.up).normalized;

            Vector3 h = Vector3.zero;
            if (kb.wKey.isPressed) h += fwd;
            if (kb.sKey.isPressed) h -= fwd;
            if (kb.dKey.isPressed) h += right;
            if (kb.aKey.isPressed) h -= right;

            float v = 0f;
            if (kb.eKey.isPressed) v += 1f;
            if (kb.qKey.isPressed) v -= 1f;

            var cc = rig.GetComponentInChildren<CharacterController>();
            bool hasCc = cc != null && cc.enabled;

            // CAMMINARE (WASD) passa dal CharacterController, come la locomozione vera: i muri
            // fermano, i gradini si salgono. Prima anche il passo in piano si faceva spegnendo il
            // corpo fisico e spostando il rig di peso, e cosi' si attraversava tutto: mesh, muri
            // di collider, barriere. Il collaudo in Editor dava torto a barriere che in visore
            // funzionano — l'esatto contrario di cio' a cui serve.
            if (h.sqrMagnitude > 0.001f)
            {
                Vector3 step = h.normalized * s;
                if (hasCc) cc.Move(step);
                else rig.position += step;
            }

            // SALIRE E SCENDERE (E/Q) resta un volo libero, senza collisioni: serve a guardare
            // la scena dall'alto, cioe' proprio a passare dove i piedi non arrivano. Il corpo
            // fisico si spegne per un istante, come fa XrRigPlacer quando posa il rig.
            if (Mathf.Abs(v) > 0.001f)
            {
                if (hasCc) cc.enabled = false;
                rig.position += Vector3.up * (v * s);
                if (hasCc) cc.enabled = true;
            }
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

            // In inglese: nella build per PC la leggono i revisori del progetto.
            GUI.Label(new Rect(10, 10, 820, 20),
                "MOUSE: left = HUD button · hold right = look around · WASD = walk · Q/E = fly down/up · Shift = faster"
#if !UNITY_EDITOR
                + " · Esc = quit"
#endif
                );
        }
    }
}
#endif
