using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Artemis.Vr;

namespace Artemis.Thermal
{
    /// <summary>
    /// Scheda "Colors" della HUD: come si leggono le temperature superficiali (fase 2).
    /// Equivale al pannello colori di CaldanaMR: scelta della palette, scala automatica o
    /// manuale, legenda con i valori.
    ///
    /// Non rilancia la simulazione: ricolora soltanto. Il colorizer tiene in memoria le
    /// temperature dell'ultima simulazione e l'abbinamento delle facce, quindi cambiare palette
    /// o scala costa millisecondi e nessuna chiamata al servizio.
    ///
    /// AUTO: la scala segue ogni simulazione, stirata fra due percentili (di base 5% e 95%)
    ///       per non sprecare la rampa su poche facce estreme. Massimo contrasto, ma la stessa
    ///       tinta vale temperature diverse in due simulazioni diverse.
    /// MANUAL: scala fissa decisa qui. E' quella che serve per CONFRONTARE due simulazioni
    ///       (due date, due scenari, due luoghi): stesso colore = stessa temperatura.
    ///       Passando a Manual si parte dalla scala che si sta guardando, poi la si ritocca.
    ///
    /// Le scelte sono STATICHE: sopravvivono al cambio di luogo, e vengono riapplicate al
    /// colorizer di ogni scena appena lo si trova. I colori restano per visore: non passano
    /// in rete, come la simulazione stessa (la sincronizzazione e' il passo M2, non ancora fatto).
    ///
    /// Da mettere sull'oggetto App del prefab VrApp, accanto a ThermalPanel.
    /// </summary>
    public class ThermalColorPanel : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Colors";
        [Tooltip("Gradi aggiunti o tolti a ogni pressione dei pulsanti Min/Max in Manual.")]
        [SerializeField] private float rangeStep = 1f;
        [Tooltip("Ampiezza minima della scala manuale (gradi): min e max non possono toccarsi.")]
        [SerializeField] private float minSpan = 2f;
        [Tooltip("Quanti tasselli compongono la barra della legenda.")]
        [SerializeField] private int legendSteps = 32;

        private const float RowHeight = 44f;

        // Palette offerte e nomi brevi per i pulsanti (devono stare in un terzo di pannello).
        private static readonly TemperaturePalette[] Palettes =
        {
            TemperaturePalette.ClassicThermal, TemperaturePalette.HighContrastVR, TemperaturePalette.ArchitecturalWarm,
            TemperaturePalette.IronOxide,      TemperaturePalette.Grayscale,      TemperaturePalette.Viridis,
        };
        private static readonly string[] PaletteNames = { "Thermal", "Contrast", "Warm", "Iron", "Grey", "Viridis" };

        // Scelte statiche: valgono per tutti i luoghi.
        private static int paletteIndex = 0;
        private static bool manual = false;
        private static float manualMin = 15f;
        private static float manualMax = 45f;

        private VrHud hud;
        private bool built;
        private Image[] paletteImages;
        private Image autoImage, manualImage;
        private Button[] rangeButtons;
        private Image[] legendCells;
        private TMP_Text legendMin, legendMid, legendMax, info;
        private ThermalSurface surface;
        private float nextRefresh;
        private int legendPalette = -1;                       // palette dipinta nella barra
        private TriangleTemperatureColorizer legendColorizer; // colorizer da cui e' stata letta

        private void Update()
        {
            if (!built) { TryBuild(); return; }

            // Superficie e colorizer appartengono alla scena: a ogni cambio di luogo se ne trova
            // uno nuovo, con i valori dell'Inspector. Gli si danno subito le scelte di qui.
            if (ThermalSurface.Current != surface)
            {
                if (surface != null) surface.OnChanged -= Refresh;
                surface = ThermalSurface.Current;
                if (surface != null)
                {
                    surface.OnChanged += Refresh;
                    if (surface.Colorizer != null) PushTo(surface.Colorizer);
                }
                Refresh();
            }
            else if (Time.unscaledTime >= nextRefresh)
            {
                nextRefresh = Time.unscaledTime + 0.5f;
                Refresh();
            }
        }

        private void OnDestroy()
        {
            if (surface != null) surface.OnChanged -= Refresh;
        }

        private void TryBuild()
        {
            hud = VrHud.Instance;
            if (hud == null) return;

            var page = hud.CreateTab(tabTitle);
            // Questa pagina ha molte righe: spaziatura ridotta per starci anche con la fascia
            // diagnostica accesa (vale solo per questa pagina, le altre restano come sono).
            var vlg = page.GetComponent<VerticalLayoutGroup>();
            if (vlg != null) vlg.spacing = 6f;

            // --- Palette: due righe da tre ---
            paletteImages = new Image[Palettes.Length];
            RectTransform row = null;
            for (int i = 0; i < Palettes.Length; i++)
            {
                if (i % 3 == 0) row = hud.MakeRow(page, RowHeight);
                int k = i;
                var b = hud.MakeButton(row, PaletteNames[i], () => SetPalette(k));
                paletteImages[i] = b.image;
                SetFont(b.button, 20);
            }

            // --- Legenda: barra di tasselli colorati con la rampa corrente ---
            var bar = hud.MakeRow(page, 26f);
            var barLayout = bar.GetComponent<HorizontalLayoutGroup>();
            if (barLayout != null) barLayout.spacing = 0f;   // tasselli attaccati: una barra continua
            legendCells = new Image[Mathf.Max(2, legendSteps)];
            for (int i = 0; i < legendCells.Length; i++)
            {
                var go = new GameObject($"Legend_{i}", typeof(RectTransform), typeof(Image));
                go.transform.SetParent(bar, false);
                var img = go.GetComponent<Image>();
                img.raycastTarget = false;
                var le = go.AddComponent<LayoutElement>();
                le.flexibleWidth = 1;
                legendCells[i] = img;
            }

            // Valori sotto la barra: estremi e centro della scala.
            var rowVal = hud.MakeRow(page, 22f);
            legendMin = hud.MakeLabel(rowVal, "", 16, TextAlignmentOptions.Left);
            legendMid = hud.MakeLabel(rowVal, "", 16, TextAlignmentOptions.Center);
            legendMax = hud.MakeLabel(rowVal, "", 16, TextAlignmentOptions.Right);

            // --- Scala: automatica o manuale ---
            var rowMode = hud.MakeRow(page, RowHeight);
            autoImage = hud.MakeButton(rowMode, "Auto range", () => SetManual(false)).image;
            manualImage = hud.MakeButton(rowMode, "Manual range", () => SetManual(true)).image;

            // Ritocchi della scala manuale: attivi solo in Manual.
            var rowRange = hud.MakeRow(page, RowHeight);
            rangeButtons = new[]
            {
                hud.MakeButton(rowRange, "Min -", () => ChangeMin(-rangeStep)).button,
                hud.MakeButton(rowRange, "Min +", () => ChangeMin(+rangeStep)).button,
                hud.MakeButton(rowRange, "Max -", () => ChangeMax(-rangeStep)).button,
                hud.MakeButton(rowRange, "Max +", () => ChangeMax(+rangeStep)).button,
            };
            foreach (var b in rangeButtons) SetFont(b, 20);

            info = hud.MakeLabel(page, "", 15);
            var infoLe = info.GetComponent<LayoutElement>();
            if (infoLe != null) infoLe.preferredHeight = 40f;
            info.textWrappingMode = TextWrappingModes.Normal;

            built = true;
            Refresh();
        }

        private static void SetFont(Button b, float size)
        {
            var t = b.GetComponentInChildren<TMP_Text>();
            if (t != null) t.fontSize = size;
        }

        // ---------------------------------------------------------------- azioni

        private void SetPalette(int i)
        {
            paletteIndex = i;
            ApplyNow();
        }

        private void SetManual(bool m)
        {
            if (m == manual) return;

            // Passando a Manual si "congela" la scala che si sta guardando: si parte da li'
            // e si ritocca, invece di ripartire da numeri arbitrari. Arrotondata al grado.
            var c = surface != null ? surface.Colorizer : null;
            if (m && c != null && c.HasColors)
            {
                manualMin = Mathf.Floor(c.LastColorMin);
                manualMax = Mathf.Ceil(c.LastColorMax);
                if (manualMax - manualMin < minSpan) manualMax = manualMin + minSpan;
            }

            manual = m;
            ApplyNow();
        }

        private void ChangeMin(float d)
        {
            manualMin = Mathf.Clamp(manualMin + d, -40f, manualMax - minSpan);
            ApplyNow();
        }

        private void ChangeMax(float d)
        {
            manualMax = Mathf.Clamp(manualMax + d, manualMin + minSpan, 100f);
            ApplyNow();
        }

        /// <summary>Scrive le scelte nel colorizer della scena e, se c'e' gia' un risultato,
        /// ricolora subito.</summary>
        private void ApplyNow()
        {
            var c = surface != null ? surface.Colorizer : null;
            if (c != null)
            {
                PushTo(c);
                // Durante una simulazione non si ricolora: i dati vecchi sono gia' stati
                // scartati, e la simulazione in corso colorera' con queste scelte quando finisce.
                if (surface.HasResult && !surface.Busy) c.ApplyColors();
            }
            Refresh();
        }

        private void PushTo(TriangleTemperatureColorizer c)
        {
            // Palette sempre da preset: un gradiente personalizzato dell'Inspector la
            // ignorerebbe e i pulsanti sembrerebbero non funzionare.
            c.useCustomGradient = false;
            c.palettePreset = Palettes[paletteIndex];

            c.useDynamicRangeFromResponse = !manual;
            c.usePercentileStretch = !manual;
            if (manual)
            {
                c.minTemp = manualMin;
                c.maxTemp = manualMax;
            }
        }

        // ---------------------------------------------------------------- vista

        private void Refresh()
        {
            if (!built) return;

            for (int i = 0; i < paletteImages.Length; i++)
                paletteImages[i].color = i == paletteIndex ? hud.ActiveColor : hud.ButtonColor;

            autoImage.color = manual ? hud.ButtonColor : hud.ActiveColor;
            manualImage.color = manual ? hud.ActiveColor : hud.ButtonColor;
            foreach (var b in rangeButtons) b.interactable = manual;

            var c = surface != null ? surface.Colorizer : null;

            // Barra: la rampa vera del colorizer, quindi sempre quella che si vede sul modello.
            // Ridipinta solo quando cambia palette o luogo: ogni lettura della rampa ricostruisce
            // il gradiente, e farlo due volte al secondo produrrebbe spazzatura per niente.
            if (legendPalette != paletteIndex || legendColorizer != c)
            {
                legendPalette = paletteIndex;
                legendColorizer = c;
                for (int i = 0; i < legendCells.Length; i++)
                {
                    float t = (i + 0.5f) / legendCells.Length;
                    legendCells[i].color = c != null ? c.EvaluateRamp(t) : new Color(0.3f, 0.3f, 0.3f, 1f);
                }
            }

            // Numeri: in Manual quelli scelti; in Auto quelli dell'ultima colorazione, che con
            // lo stiramento ai percentili NON sono il min/max della superficie.
            bool haveScale = manual || (c != null && c.HasColors);
            float lo = manual ? manualMin : (c != null ? c.LastColorMin : 0f);
            float hi = manual ? manualMax : (c != null ? c.LastColorMax : 0f);
            legendMin.text = haveScale ? $"{lo:F1} C" : "--";
            legendMid.text = haveScale ? $"{(lo + hi) * 0.5f:F1} C" : "";
            legendMax.text = haveScale ? $"{hi:F1} C" : "--";

            if (surface == null)
                info.text = "No surface model in this place.";
            else if (!surface.HasResult)
                info.text = manual ? "Manual: fixed scale for every run and place.\nRun a simulation in the Thermal tab."
                                   : "Run a simulation in the Thermal tab.";
            else if (manual)
                info.text = $"Manual: same colour = same temperature in every run.\n" +
                            $"Surface {surface.SurfaceMin:F1} - {surface.SurfaceMax:F1} C";
            else
                info.text = $"Auto: scale stretched on {c.lowerPercentile:0}-{c.upperPercentile:0}% of faces.\n" +
                            $"Surface {surface.SurfaceMin:F1} - {surface.SurfaceMax:F1} C";
        }
    }
}
