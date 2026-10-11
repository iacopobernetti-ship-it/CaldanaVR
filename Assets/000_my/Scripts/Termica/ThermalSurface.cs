using System;
using System.Collections;
using UnityEngine;

namespace Artemis.Thermal
{
    /// <summary>
    /// La superficie termica di UN luogo: la mesh low poly della via, colorata per temperatura.
    /// Fase 2 del documento CaldanaMR (§6), strada 2 del §6.1: il servizio SurfaceTemperature
    /// simula proprio questa mesh, caricata sul server come modello (es. "Caldana01LP").
    ///
    /// La catena di una simulazione (documento CaldanaMR, §6.3):
    ///  1. Tmin e Tmax della data e dello scenario da FutureClimate;
    ///  2. temperatura dell'aria a ciascuna ora scelta (profilo a coseno) -> la MASSIMA, coerente
    ///     con l'aggregazione a picco del servizio;
    ///  3. baricentri delle facce del modello (face-debug), una volta per luogo;
    ///  4. simulazione -> una temperatura per faccia;
    ///  5. il colorizer abbina facce e triangoli e scrive i colori.
    /// Su un errore climatico ci si ferma: nessun colore aggiornato, messaggio a schermo.
    ///
    /// CONDIZIONE: la mesh in scena deve essere lo stesso file caricato sul server. Il colorizer
    /// abbina ogni triangolo della scena a una faccia del server e, se anche uno solo resta
    /// scoperto, rinuncia. Il server puo' avere qualche faccia in piu' (triangoli degeneri che
    /// Unity scarta all'import): quelle restano senza abbinamento, ed e' normale.
    ///
    /// Va sull'oggetto della mesh termica (quello con MeshFilter e MeshRenderer), insieme a
    /// TemperatureApiClient (user_id, model_id) e TriangleTemperatureColorizer. E' un oggetto
    /// DISTINTO dall'occlusore: il colorizer sostituisce la mesh dell'oggetto su cui sta, e la
    /// mostra con il materiale semitrasparente ThermalOverlay.
    /// </summary>
    [RequireComponent(typeof(TemperatureApiClient), typeof(TriangleTemperatureColorizer))]
    public class ThermalSurface : MonoBehaviour
    {
        /// <summary>La superficie del luogo corrente: ce n'e' una per scena.</summary>
        public static ThermalSurface Current { get; private set; }

        [Header("Resa")]
        [Tooltip("Materiale con lo shader ThermalOverlayExact. Se assegnato, la sovrapposizione " +
                 "ignora la profondita' degli splat e usa quella della mesh termica: colori continui " +
                 "senza spinte di metri. Vuoto = resa semplice con il materiale del Mesh Renderer " +
                 "(M_ThermalOverlay, piano B).")]
        [SerializeField] private Material exactOverlayMaterial;
        [Tooltip("Usa la resa esatta (se il materiale e' assegnato). Si cambia anche in Play, per " +
                 "confrontare le due rese.")]
        [SerializeField] private bool useExactOverlay = true;

        public bool Busy { get; private set; }
        public bool HasResult { get; private set; }
        public string Status { get; private set; } = "";
        public float AirTemperature { get; private set; }
        public float SurfaceMin { get; private set; }
        public float SurfaceMean { get; private set; }
        public float SurfaceMax { get; private set; }

        public event Action OnChanged;

        public TriangleTemperatureColorizer Colorizer => colorizer;

        private TemperatureApiClient api;
        private TriangleTemperatureColorizer colorizer;
        private MeshRenderer meshRenderer;
        private MaterialPropertyBlock block;
        private bool overlayVisible = true;
        private float overlayOpacity = 0.6f;
        private Material[] simpleMaterials, exactMaterials;
        private bool? appliedExact;

        private static readonly int OpacityId = Shader.PropertyToID("_Opacity");

        private void Awake()
        {
            api = GetComponent<TemperatureApiClient>();
            colorizer = GetComponent<TriangleTemperatureColorizer>();
            if (colorizer.apiClient == null) colorizer.apiClient = api;
            meshRenderer = GetComponent<MeshRenderer>();
            block = new MaterialPropertyBlock();
            // Spenta finche' non c'e' un risultato: una mesh senza colori sarebbe bianca.
            if (meshRenderer != null) meshRenderer.enabled = false;

            // I dati scaricati del client sono campi PUBBLICI serializzati: Unity li salva in
            // scena come oggetti VUOTI (non null, con array di lunghezza zero). Senza azzerarli,
            // "faccie gia' scaricate?" rispondeva si' su un elenco vuoto, il download non partiva
            // e il confronto dei conteggi passava con 0 = 0. Si riparte sempre da zero.
            api.faceDebugData = null;
            api.responseData = null;

            if (meshRenderer != null) simpleMaterials = meshRenderer.sharedMaterials;
            ApplyRenderMode();

            var mf = GetComponent<MeshFilter>();
            if (mf == null || mf.sharedMesh == null)
                Debug.LogWarning($"[ThermalSurface] '{name}' non ha una mesh nel suo Mesh Filter: " +
                                 "il componente va sull'oggetto INTERNO del modello importato, quello " +
                                 "che porta la mesh, non sul padre.");
        }

        private void OnEnable() { Current = this; }

        // Il cambio di resa si sente anche in Play, dall'Inspector: e' un confronto da fare a vista.
        private void Update()
        {
            if (appliedExact != WantExact) { ApplyRenderMode(); SetOverlay(overlayVisible, overlayOpacity); }
        }

        private bool WantExact => useExactOverlay && exactOverlayMaterial != null;

        /// <summary>
        /// Resa esatta: quattro varianti dello stesso materiale, una per passaggio e per coda
        /// (4000..4003). La mesh ha un solo sotto-insieme di triangoli, e con piu' materiali che
        /// sotto-insiemi Unity ridisegna lo stesso con ciascun materiale in piu': e' cosi' che un
        /// renderer solo esegue quattro passaggi in ordine. Le varianti nascono da un materiale
        /// ASSET (new Material(asset)), non da Shader.Find: lo shader entra nella build.
        /// </summary>
        private void ApplyRenderMode()
        {
            if (meshRenderer == null) return;
            bool exact = WantExact;
            appliedExact = exact;
            if (!exact) { if (simpleMaterials != null) meshRenderer.sharedMaterials = simpleMaterials; return; }

            if (exactMaterials == null)
            {
                exactMaterials = new[]
                {
                    // mode, ZTest, ZWrite, ColorMask, Src, Dst, StencilComp, StencilPass, coda
                    Variant("Mark",  0, 4, 0, 0,  1, 0,  8, 2, 4000),   // LEqual, stencil Always/Replace
                    Variant("Reset", 1, 8, 1, 0,  1, 0,  3, 0, 4001),   // Always, stencil Equal/Keep
                    Variant("Depth", 2, 4, 1, 0,  1, 0,  3, 0, 4002),   // LEqual, stencil Equal/Keep
                    Variant("Color", 3, 4, 0, 15, 5, 10, 3, 1, 4003),   // LEqual, blend, stencil Equal/Zero
                };
            }
            meshRenderer.sharedMaterials = exactMaterials;
        }

        private Material Variant(string label, int mode, int zTest, int zWrite, int colorMask,
                                 int src, int dst, int stencilComp, int stencilPass, int queue)
        {
            var m = new Material(exactOverlayMaterial) { name = $"{exactOverlayMaterial.name}_{label}" };
            m.SetFloat("_Mode", mode);
            m.SetFloat("_ZTest", zTest);
            m.SetFloat("_ZWrite", zWrite);
            m.SetFloat("_ColorMask", colorMask);
            m.SetFloat("_SrcBlend", src);
            m.SetFloat("_DstBlend", dst);
            m.SetFloat("_StencilComp", stencilComp);
            m.SetFloat("_StencilPass", stencilPass);
            m.renderQueue = queue;
            return m;
        }
        private void OnDisable() { if (Current == this) Current = null; }

        /// <summary>Visibilita' e trasparenza della sovrapposizione, decise dalla scheda Thermal.</summary>
        public void SetOverlay(bool visible, float opacity)
        {
            overlayVisible = visible;
            overlayOpacity = opacity;
            if (meshRenderer == null) return;
            meshRenderer.enabled = overlayVisible && HasResult;
            meshRenderer.GetPropertyBlock(block);
            block.SetFloat(OpacityId, overlayOpacity);
            meshRenderer.SetPropertyBlock(block);
        }

        public void Simulate(int year, int month, int day, string scenarioApiId, int[] hours)
        {
            if (Busy) return;
            if (hours == null || hours.Length == 0) { Fail("Select at least one hour."); return; }
            StartCoroutine(Run(year, month, day, scenarioApiId, hours));
        }

        private IEnumerator Run(int year, int month, int day, string scenario, int[] hours)
        {
            Busy = true;

            // 1-2. Temperatura dell'aria.
            var climate = FindFirstObjectByType<FutureClimateClient>();
            if (climate == null) { Fail("Climate client not found on the app object."); yield break; }

            SetStatus("Reading air temperature...");
            FutureClimateClient.ClimateResult cr = null;
            yield return climate.FetchDayMinMax(scenario, year, month, day, r => cr = r);
            if (cr == null || !cr.ok) { Fail(cr != null ? cr.error : "No response from the climate API."); yield break; }

            float air = float.MinValue;
            foreach (int h in hours)
                air = Mathf.Max(air, FutureClimateClient.HourlyTemperature(cr.tminC, cr.tmaxC, h));
            AirTemperature = air;

            // 3. Facce del modello, una volta per luogo.
            if (api.faceDebugData == null || api.faceDebugData.face_debug == null ||
                api.faceDebugData.face_debug.Length == 0)
            {
                SetStatus("Downloading model faces...");
                api.faceDebugData = null;
                yield return api.DownloadFaceDebug();
                if (api.faceDebugData == null || api.faceDebugData.face_debug == null ||
                    api.faceDebugData.face_debug.Length == 0)
                {
                    Fail($"Surface model '{api.modelId}' not found on the server.");
                    yield break;
                }
            }

            // Stessa mesh sul server e in scena? Lo si dice con i numeri, invece di lasciar
            // fallire il colorizer con un messaggio generico nel log.
            var mf = GetComponent<MeshFilter>();
            int sceneTris = mf != null && mf.sharedMesh != null ? mf.sharedMesh.triangles.Length / 3 : 0;
            int serverFaces = api.faceDebugData.face_debug.Length;
            if (sceneTris == 0)
            {
                Fail("No mesh on this object: Thermal Surface must sit on the child that carries the mesh.");
                yield break;
            }
            // Il server puo' avere PIU' facce della scena: l'importatore OBJ di Unity scarta i
            // triangoli degeneri (area nulla), il servizio no. Misurato su Caldana01LP: 21496
            // facce sul server, 20984 triangoli in Unity. Il colorizer lo tollera gia': esige
            // solo che ogni triangolo della SCENA trovi una faccia, e le facce in piu' restano
            // senza abbinamento. Bloccare sul conteggio esatto era un errore di questo controllo.
            // Si blocca solo nel caso opposto, che nessuna pulizia spiega: piu' triangoli in scena
            // che facce sul server vuol dire file diversi.
            if (!HasResult && sceneTris > serverFaces)
            {
                Fail($"Model mismatch: server '{api.modelId}' has {serverFaces} faces, " +
                     $"scene mesh has {sceneTris} triangles.");
                yield break;
            }
            if (!HasResult && sceneTris < serverFaces)
                Debug.Log($"[ThermalSurface] '{api.modelId}': {serverFaces - sceneTris} facce del server " +
                          "senza triangolo in scena (degeneri, scartate dall'import di Unity): ignorate.");

            // 4. Simulazione. responseData azzerato prima: il client, su errore, lascerebbe
            // quello vecchio, e si colorerebbe con i numeri della volta precedente.
            api.year = year;
            api.dayOfYear = new DateTime(year, month, day).DayOfYear;
            api.timesOfDay = hours;
            api.meteoStationTemperatureMax = air;
            api.responseData = null;

            SetStatus("Simulating surface temperatures...");
            yield return api.RunSimulation();
            if (api.responseData == null || api.responseData.face_temperatures == null)
            {
                Fail("Surface temperature simulation failed (see log).");
                yield break;
            }

            // 5. Colori. La prima volta il colorizer costruisce l'abbinamento in background.
            SetStatus(HasResult ? "Colouring..." : "Matching faces (first time)...");
            colorizer.ApplyColors();
            yield return new WaitWhile(() => colorizer.IsBusy);

            // Il colorizer, se l'abbinamento fallisce, non sostituisce la mesh: e' il segno che
            // si puo' leggere da fuori.
            if (mf == null || mf.sharedMesh == null || !mf.sharedMesh.name.EndsWith("_TriangleColored"))
            {
                Fail($"Face matching failed: the scene mesh is not the file uploaded as '{api.modelId}'.");
                yield break;
            }

            var meta = api.responseData.metadata;
            if (meta != null)
            {
                SurfaceMin = meta.temperature_min_c;
                SurfaceMean = meta.temperature_mean_c;
                SurfaceMax = meta.temperature_max_c;
            }

            HasResult = true;
            Busy = false;
            SetOverlay(overlayVisible, overlayOpacity);
            SetStatus($"Air {air:F1} C  ·  surface {SurfaceMin:F1} - {SurfaceMax:F1} C (mean {SurfaceMean:F1})");
            Debug.Log($"[ThermalSurface] '{api.modelId}': {Status}");
        }

        private void SetStatus(string s)
        {
            Status = s;
            OnChanged?.Invoke();
        }

        private void Fail(string message)
        {
            Busy = false;
            Debug.LogWarning($"[ThermalSurface] {message}");
            SetStatus(message);
        }
    }
}
