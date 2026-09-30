using Unity.XR.CoreUtils;
using UnityEngine;

namespace Caldana.Flow
{
    /// <summary>
    /// Porta il player XR sul punto di partenza del LUOGO appena caricato, e garantisce che ci sia
    /// del terreno sotto i piedi prima di restituire la gravita'.
    ///
    /// Versione per CaldanaMR. Rispetto all'originale di SilvoVR cadono le dipendenze dalla
    /// simulazione forestale (il suolo generato da StandBuilder non esiste qui): restano le tre
    /// cose che sono costate una sessione di debug e che valgono identiche.
    ///
    ///  1. L'ANCORA E' IL CENTRO DEL COLLIDER, non un oggetto piazzato a mano. Uno SpawnPoint
    ///     messo a occhio finisce facilmente vicino al bordo della mesh, e nessuno lo rimisura
    ///     piu'; il centro dell'ingombro ha terreno sotto per definizione.
    ///  2. OGNI POSIZIONE VIENE VERIFICATA prima di sbloccare il CharacterController. La versione
    ///     precedente calcolava lo scostamento e si fidava: se la sonda non trovava terreno entro
    ///     il tempo massimo, scriveva un avviso e lasciava cadere il player comunque.
    ///  3. LO SCOSTAMENTO FRA PARTECIPANTI dipende da `LocalClientId`, cioe' dallo stato di rete.
    ///     E' il motivo per cui la stessa build su due visori con lo stesso ruolo apparente
    ///     atterrava in due punti diversi — uno dentro il collider, l'altro sistematicamente
    ///     fuori. Deterministico, non casuale, e per questo sembrava inspiegabile.
    ///
    /// Le mesh di rilievo hanno BUCHI, anche verso il centro: un raggio a vuoto non dice "qui non
    /// c'e' il luogo", dice "qui non c'e' un triangolo". Da cui la ricerca a spirale.
    ///
    /// CON L'ADDITIVO IL RUOLO CAMBIA IN MEGLIO: il player vive in Core e non si ricostruisce piu',
    /// quindi questo componente non deve piu' inseguire un rig che nasce tardi. Vive nella scena
    /// del luogo, parte quando quella scena viene caricata, posa il player e finisce li'.
    ///
    /// Va sull'oggetto SpawnPoint di ogni scena-luogo (piazza e vie).
    /// </summary>
    public class XrRigPlacer : MonoBehaviour
    {
        [Header("Ancora")]
        [Tooltip("Usa il CENTRO dei collider del terreno di questa scena invece del punto piazzato " +
                 "a mano. E' la scelta robusta.")]
        [SerializeField] private bool useColliderCentre = true;

        [Tooltip("Punto di ripiego, e sorgente della DIREZIONE dello sguardo iniziale. " +
                 "Vuoto = il transform di questo oggetto.")]
        [SerializeField] private Transform spawnPoint;

        [Header("Sparpagliamento in sessione")]
        [Tooltip("Raggio entro cui distanziare i partecipanti attorno all'ancora (m). Tenerlo " +
                 "piccolo: la classe deve restare a portata di voce e di sguardo, e ogni metro in " +
                 "piu' e' un metro piu' vicino al bordo.")]
        [SerializeField] private float scatterRadius = 0.8f;

        [Header("Aggancio al suolo")]
        [SerializeField] private bool snapToGround = true;
        [Tooltip("Layer del collider del terreno di questa scena.")]
        [SerializeField] private LayerMask groundLayer = ~0;
        [Tooltip("Semilunghezza della sonda verticale: deve abbracciare il luogo dal punto piu' " +
                 "basso al piu' alto.")]
        [SerializeField] private float probeHeight = 100f;
        [SerializeField] private float groundOffset = 0.05f;

        [Header("Congelamento")]
        [SerializeField] private bool freezeUntilPlaced = true;
        [Tooltip("Valvola: sblocca comunque dopo questo tempo. Alla scadenza si posa il player " +
                 "sull'ancora, NON su una quota inventata.")]
        [SerializeField] private float maxFreezeSeconds = 8f;

        [Header("Rete di sicurezza")]
        [Tooltip("Riprende il player se scende sotto la quota di posa di questo margine (m). " +
                 "Serve contro le cause che non conosciamo: qualunque sia il motivo, cadere per " +
                 "sempre e' l'unico esito davvero inaccettabile davanti a una classe. " +
                 "0 = disattivata.")]
        [SerializeField] private float fallRescueDepth = 8f;
        [SerializeField] private int maxRescues = 5;

        [Header("Ritentativi")]
        [SerializeField] private float giveUpAfterSeconds = 10f;
        [SerializeField] private float retryInterval = 0.25f;

        [Header("Diagnostica")]
        [Tooltip("Stampa TUTTE le superfici incontrate lungo la verticale nel punto di posa, con " +
                 "quota e normale. E' la misura che dice se la regola del 'punto piu' basso' sta " +
                 "pescando qualcosa sotto il terreno vero. Da spegnere prima delle dimostrazioni.")]
        [SerializeField] private bool logGroundProbe = true;

        private bool placed;
        private float started, nextTry;
        private CharacterController frozen;

        private Vector3 lastGoodPosition;
        private bool hasLastGood;
        private int rescues, attempt;

        // ---- ciclo di vita ---------------------------------------------------------------------

        private void Start()
        {
            started = Time.time;
            Freeze();              // prima del primo passo di fisica: nessuna caduta visibile
        }

        private void Freeze()
        {
            if (!freezeUntilPlaced || frozen != null) return;
            var origin = FindFirstObjectByType<XROrigin>();
            if (origin == null) return;
            var cc = origin.GetComponentInChildren<CharacterController>();
            if (cc == null || !cc.enabled) return;
            cc.enabled = false;
            frozen = cc;
        }

        private void Unfreeze()
        {
            if (frozen != null) { frozen.enabled = true; frozen = null; }
        }

        // ---- posa -------------------------------------------------------------------------------

        private void Update()
        {
            if (placed) { WatchForFalls(); return; }
            if (Time.time < nextTry) return;
            nextTry = Time.time + retryInterval;

            Freeze();

            var origin = FindFirstObjectByType<XROrigin>();
            if (origin == null)
            {
                if (Time.time - started > giveUpAfterSeconds)
                {
                    Debug.LogWarning("[XrRigPlacer] nessun XROrigin entro il timeout — rinuncio.");
                    placed = true;
                    Unfreeze();
                }
                return;
            }

            bool timedOut = Time.time - started > maxFreezeSeconds;

            if (!TryResolveAnchor(out Vector3 anchor, out float extent))
            {
                // Il collider puo' non essere ancora registrato nella fisica: si aspetta
                // CONGELATI, che e' tutto il senso del congelamento.
                if (!timedOut) return;

                anchor = FallbackSpawn().position;
                extent = 0f;
                Debug.LogWarning("[XrRigPlacer] ancora non risolta entro il tempo massimo: uso il " +
                                 "punto di ripiego. Controlla groundLayer e il collider del luogo.");
            }

            Vector3 pos = ChoosePosition(anchor, extent, out string how);
            var spawn = FallbackSpawn();
            origin.transform.SetPositionAndRotation(pos, Quaternion.Euler(0f, spawn.eulerAngles.y, 0f));

            placed = true;
            lastGoodPosition = pos;
            hasLastGood = true;
            Unfreeze();

            Debug.Log($"[XrRigPlacer] player posato a {pos} in '{gameObject.scene.name}' ({how}).");
            if (logGroundProbe) LogVerticalHits(pos.x, pos.z);
        }

        private Transform FallbackSpawn() => spawnPoint != null ? spawnPoint : transform;

        private bool TryResolveAnchor(out Vector3 anchor, out float extent)
        {
            anchor = Vector3.zero; extent = 0f;

            if (useColliderCentre && TryTerrainBounds(out Bounds b))
            {
                extent = Mathf.Min(b.extents.x, b.extents.z);
                if (!TrySampleGroundNear(b.center.x, b.center.z, extent * 0.6f, out Vector3 g))
                    return false;
                anchor = new Vector3(g.x, g.y + groundOffset, g.z);
                return true;
            }

            var sp = FallbackSpawn();
            if (snapToGround)
            {
                if (!TrySampleGround(sp.position.x, sp.position.z, out float y)) return false;
                anchor = new Vector3(sp.position.x, y + groundOffset, sp.position.z);
            }
            else anchor = sp.position;

            return true;
        }

        /// <summary>
        /// Ingombro complessivo dei collider sul layer del terreno IN QUESTA SCENA. Il filtro sulla
        /// scena e' nuovo rispetto a SilvoVR e con l'additivo e' indispensabile: durante una
        /// transizione possono coesistere due luoghi, e includere i collider dell'altro sposterebbe
        /// il centro in mezzo al nulla.
        /// </summary>
        private bool TryTerrainBounds(out Bounds bounds)
        {
            bounds = new Bounds();
            bool any = false;
            var myScene = gameObject.scene;

            foreach (var c in FindObjectsByType<Collider>(FindObjectsInactive.Exclude, FindObjectsSortMode.None))
            {
                if (c == null || c.isTrigger) continue;
                if (c.gameObject.scene != myScene) continue;          // solo il luogo corrente
                if (((1 << c.gameObject.layer) & groundLayer.value) == 0) continue;
                if (c is CharacterController) continue;

                if (!any) { bounds = c.bounds; any = true; }
                else bounds.Encapsulate(c.bounds);
            }
            return any;
        }

        /// Si parte dallo scostamento pieno e lo si accorcia finche' non si trova terreno, fino a
        /// restare sull'ancora. Il punto e' che NON si posa mai nessuno senza aver verificato.
        private Vector3 ChoosePosition(Vector3 anchor, float extent, out string how)
        {
            float limit = scatterRadius;
            if (extent > 0.01f) limit = Mathf.Min(limit, extent / 3f);   // mai vicino al bordo

            Vector3 dir = ScatterDirection();
            float[] factors = { 1f, 0.5f, 0.25f, 0f };

            foreach (float f in factors)
            {
                Vector3 candidate = anchor + dir * (limit * f);

                if (!snapToGround) { how = "senza aggancio al suolo"; return candidate; }

                if (TrySampleGroundNear(candidate.x, candidate.z, 0.5f, out Vector3 g))
                {
                    how = f > 0f ? $"verificato, scostamento {limit * f:F2} m"
                                 : "verificato, centro del luogo";
                    return new Vector3(g.x, g.y + groundOffset, g.z);
                }
            }

            how = "NESSUN terreno trovato: ancora cosi' com'e'";
            Debug.LogWarning($"[XrRigPlacer] nessuna posizione con terreno attorno a {anchor} — " +
                             "controlla groundLayer e il collider del luogo.");
            return anchor;
        }

        /// Angolo aureo: indici successivi si distribuiscono uniformemente sul cerchio senza mai
        /// ripetersi, quindi due persone non si materializzano nello stesso punto — e ognuno sa in
        /// anticipo dove comparira', il che rende le prove ripetibili. Ogni tentativo ruota di 90
        /// gradi: se un punto si e' rivelato sfondabile, non ha senso riprovarlo.
        private Vector3 ScatterDirection()
        {
            var nm = Unity.Netcode.NetworkManager.Singleton;
            ulong id = (nm != null && nm.IsListening) ? nm.LocalClientId : 0UL;
            float a = (id * 137.508f + attempt * 90f) * Mathf.Deg2Rad;
            return new Vector3(Mathf.Cos(a), 0f, Mathf.Sin(a));
        }

        // ---- rete di sicurezza ---------------------------------------------------------------

        private void WatchForFalls()
        {
            if (fallRescueDepth <= 0.01f || !hasLastGood || rescues >= maxRescues) return;

            var origin = FindFirstObjectByType<XROrigin>();
            if (origin == null) return;

            float y = origin.transform.position.y;
            if (y > lastGoodPosition.y - fallRescueDepth) return;

            rescues++;
            attempt++;                  // il punto di prima e' smentito dai fatti: cercane un altro

            Debug.LogWarning($"[XrRigPlacer] CADUTA rilevata (y={y:F1}, posato a {lastGoodPosition.y:F1}): " +
                             $"quel punto non regge il player anche se la sonda ci trovava una " +
                             $"superficie. Cerco un'altra posizione — recupero {rescues}/{maxRescues}.");
            if (logGroundProbe) LogVerticalHits(lastGoodPosition.x, lastGoodPosition.z);

            placed = false;
            started = Time.time;
            nextTry = 0f;
            Freeze();
            origin.transform.position = lastGoodPosition + Vector3.up * 0.5f;
        }

        // ---- sonde del suolo ---------------------------------------------------------------------

        /// <summary>
        /// Punto di terreno valido PIU' VICINO a (x, z): prima il punto stesso, poi anelli via via
        /// piu' larghi, otto direzioni per anello. Esiste per i buchi nelle mesh ricostruite da
        /// scansione: una superficie fotogrammetrica non e' continua, e trattare "nessun triangolo"
        /// come "nessun luogo" e' cio' che mandava il player a cadere.
        /// </summary>
        private bool TrySampleGroundNear(float x, float z, float maxRadius, out Vector3 point)
        {
            point = Vector3.zero;

            if (TrySampleGround(x, z, out float y0))
            {
                point = new Vector3(x, y0, z);
                return true;
            }

            const int dirs = 8;
            float step = Mathf.Max(0.5f, maxRadius / 6f);
            for (float r = step; r <= Mathf.Max(step, maxRadius); r += step)
            {
                for (int i = 0; i < dirs; i++)
                {
                    float a = Mathf.PI * 2f * i / dirs;
                    float px = x + Mathf.Cos(a) * r;
                    float pz = z + Mathf.Sin(a) * r;
                    if (!TrySampleGround(px, pz, out float y)) continue;

                    point = new Vector3(px, y, pz);
                    Debug.Log($"[XrRigPlacer] centro senza terreno (buco nella mesh): uso il punto " +
                              $"valido piu' vicino, a {r:F1} m.");
                    return true;
                }
            }
            return false;
        }

        /// Suolo = superficie PIU' BASSA lungo la verticale, sondata in ENTRAMBE le direzioni: i
        /// raycast non colpiscono le backface dei MeshCollider, quindi su una mesh specchiata
        /// (scala -1, winding misto) un raggio che sale vede solo le facce rivolte in giu', e su
        /// una superficie ordinaria e' cieco. Salendo E scendendo si coprono entrambi i winding, e
        /// il punto piu' basso resta il suolo vero anche sotto una tettoia o un balcone.
        ///
        /// ATTENZIONE: vale per i MESH COLLIDER. Su un BOX pieno "il punto piu' basso" e' la faccia
        /// INFERIORE, e posare il player la' dentro significa compenetrare il pavimento.
        private bool TrySampleGround(float x, float z, out float y)
        {
            y = 0f;
            var up   = Physics.RaycastAll(new Vector3(x, -probeHeight, z), Vector3.up,
                                          probeHeight * 2f, groundLayer);
            var down = Physics.RaycastAll(new Vector3(x,  probeHeight, z), Vector3.down,
                                          probeHeight * 2f, groundLayer);
            float lowest = float.MaxValue;
            for (int i = 0; i < up.Length;   i++) if (up[i].point.y   < lowest) lowest = up[i].point.y;
            for (int i = 0; i < down.Length; i++) if (down[i].point.y < lowest) lowest = down[i].point.y;
            if (lowest == float.MaxValue) return false;
            y = lowest;
            return true;
        }

        private void LogVerticalHits(float x, float z)
        {
            var all = new System.Collections.Generic.List<RaycastHit>();
            all.AddRange(Physics.RaycastAll(new Vector3(x, -probeHeight, z), Vector3.up,
                                            probeHeight * 2f, groundLayer));
            all.AddRange(Physics.RaycastAll(new Vector3(x,  probeHeight, z), Vector3.down,
                                            probeHeight * 2f, groundLayer));
            all.Sort((a, b) => a.point.y.CompareTo(b.point.y));

            var sb = new System.Text.StringBuilder();
            sb.AppendLine($"[XrRigPlacer] sonda verticale in ({x:F2}, {z:F2}) — {all.Count} superfici:");
            foreach (var h in all)
                sb.AppendLine($"    y={h.point.y,8:F2}   normale·su={Vector3.Dot(h.normal, Vector3.up),6:F2}   " +
                              $"'{h.collider.name}'");
            if (all.Count == 0) sb.AppendLine("    (nessuna: qui non c'e' proprio niente)");
            Debug.LogWarning(sb.ToString());
        }
    }
}
