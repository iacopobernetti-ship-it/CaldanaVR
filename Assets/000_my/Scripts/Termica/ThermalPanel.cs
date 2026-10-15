using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Artemis.Climate;
using Artemis.Vr;

namespace Artemis.Thermal
{
    /// <summary>
    /// Scheda "Thermal" della HUD: temperature superficiali del luogo corrente (fase 2).
    ///
    /// Scenario, data e ORE NON si scelgono qui: si scelgono nella scheda Scenario
    /// (ScenarioPanel, valori in ClimateContext), la stessa da cui la scheda Climate prende data
    /// e scenario per gli indici. Un posto solo per una scelta sola.
    ///
    /// Qui si lancia la simulazione, si accende/spegne la sovrapposizione e se ne regola la
    /// trasparenza.
    ///
    /// MULTIPLAYER. Apply e' della GUIDA: per i visitatori e' spento. Apply non simula direttamente: registra una richiesta in ClimateContext, che
    /// SessionState porta a tutti. Ogni visore la esegue da se' (Update), guida compresa: un solo
    /// percorso, uguale da soli e in sessione.
    /// Lo stesso percorso fa ripartire la simulazione ARRIVANDO IN UN LUOGO NUOVO: la superficie
    /// e' nuova, non ha ancora eseguito l'ultima richiesta, quindi la esegue — con la mesh e il
    /// modello sul server di quel luogo, che sono scritti sul suo ThermalSurface. E cosi' anche
    /// chi entra in ritardo vede subito l'ultima simulazione della guida.
    /// Colorazione accesa/spenta e opacita' restano di ciascuno.
    ///
    /// L'ultima riga e' la lettura della sonda (ThermalProbe): sta qui perche' e' qui che si
    /// lancia la simulazione, e il bello della sonda e' rileggere lo stesso punto dopo ogni Apply.
    ///
    /// Da mettere sull'oggetto App del prefab VrApp.
    /// </summary>
    public class ThermalPanel : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Thermal";
        [SerializeField] private float opacityStep = 0.1f;

        private const float RowHeight = 48f;

        // Di ciascun visore, mai in rete.
        private static bool overlayOn = true;
        private static float opacity = 0.6f;

        private VrHud hud;
        private bool built;
        private RectTransform page;

        private static ThermalPanel instance;

        /// <summary>
        /// Vero quando la scheda Thermal e' quella aperta (e la HUD e' visibile). La sonda lavora
        /// solo allora: e' qui che se ne legge il risultato, e con un'altra scheda aperta il
        /// grilletto o il clic servono ad altro.
        /// </summary>
        public static bool IsOpen =>
            instance != null && instance.page != null && instance.page.gameObject.activeInHierarchy;

        private void Awake() { instance = this; }
        private TMP_Text summary, status, overlayText, probe;
        private Button applyButton;
        private ThermalSurface surface;
        private ClimateRequest ran;     // ultima richiesta eseguita su QUESTA superficie
        private float nextRefresh;

        private void Update()
        {
            if (!built) { TryBuild(); return; }

            // La superficie appartiene alla scena: la si ritrova a ogni cambio di luogo.
            if (ThermalSurface.Current != surface)
            {
                if (surface != null) surface.OnChanged -= Refresh;
                surface = ThermalSurface.Current;
                ran = default;          // superficie nuova: l'ultima richiesta va rieseguita qui
                if (surface != null)
                {
                    surface.OnChanged += Refresh;
                    surface.SetOverlay(overlayOn, opacity);
                }
                Refresh();
            }
            else if (Time.unscaledTime >= nextRefresh)
            {
                nextRefresh = Time.unscaledTime + 0.5f;
                Refresh();
            }

            RunPendingRequest();
        }

        /// <summary>
        /// Esegue l'ultima richiesta della guida (o propria) se questa superficie non l'ha ancora
        /// fatta. Durante un calcolo si aspetta: finito quello, si esegue la richiesta PIU'
        /// RECENTE, non quelle intermedie. Si confronta la richiesta intera, non solo il numero:
        /// chi ha lavorato da solo prima di unirsi puo' avere lo stesso numero della guida.
        /// </summary>
        private void RunPendingRequest()
        {
            var req = ClimateContext.ThermalRequest;
            if (surface == null || req.Serial == 0 || req.Equals(ran) || surface.Busy) return;

            ran = req;
            var ch = req.Choice;
            surface.Simulate(ch.Year, ch.Month, ch.Day,
                             ClimateContext.ScenarioId(ch.Scenario), ClimateContext.Hours(ch.HoursMask));
        }

        private void OnDestroy()
        {
            if (instance == this) instance = null;
            if (surface != null) surface.OnChanged -= Refresh;
            ClimateContext.OnChanged -= Refresh;
        }

        private void TryBuild()
        {
            hud = VrHud.Instance;
            if (hud == null) return;

            page = hud.CreateTab(tabTitle);
            var vlg = page.GetComponent<VerticalLayoutGroup>();
            if (vlg != null) vlg.spacing = 6f;   // solo questa pagina

            // Corpo 15: le due righe del riepilogo (prossima simulazione, colori in vista) sono
            // lunghe, e a 17 andrebbero a capo uscendo dallo spazio.
            summary = hud.MakeLabel(page, "", 15);
            SetHeight(summary, 44f);

            var rowAct = hud.MakeRow(page, RowHeight);
            applyButton = hud.MakeButton(rowAct, "Apply", ClimateContext.RequestThermal).button;
            overlayText = hud.MakeButton(rowAct, "", () =>
            {
                overlayOn = !overlayOn;
                if (surface != null) surface.SetOverlay(overlayOn, opacity);
                Refresh();
            }).button.GetComponentInChildren<TMP_Text>();

            var rowOp = hud.MakeRow(page, RowHeight);
            hud.MakeButton(rowOp, "- opacity", () => ChangeOpacity(-opacityStep));
            hud.MakeButton(rowOp, "+ opacity", () => ChangeOpacity(+opacityStep));

            status = hud.MakeLabel(page, "", 15);
            SetHeight(status, 40f);
            status.textWrappingMode = TextWrappingModes.Normal;

            probe = hud.MakeLabel(page, "", 16);
            SetHeight(probe, 40f);
            probe.textWrappingMode = TextWrappingModes.Normal;
            probe.color = new Color(1f, 0.92f, 0.55f, 1f);   // giallo chiaro: si distingue dallo stato

            ClimateContext.OnChanged += Refresh;
            built = true;
            Refresh();
        }

        private static string Hours(int mask) => string.Join(", ", ClimateContext.Hours(mask)) + " h";

        private static void SetHeight(TMP_Text t, float h)
        {
            var le = t.GetComponent<LayoutElement>();
            if (le != null) le.preferredHeight = h;
        }

        private void ChangeOpacity(float d)
        {
            opacity = Mathf.Round(Mathf.Clamp(opacity + d, 0.1f, 1f) * 10f) / 10f;
            if (surface != null) surface.SetOverlay(overlayOn, opacity);
            Refresh();
        }

        private void Refresh()
        {
            if (!built) return;
            bool canEdit = ClimateContext.CanEdit;

            // Prima riga: le scelte correnti della scheda Scenario, che Apply usera'. Seconda:
            // quelle dei colori che si vedono, che possono differire se si e' cambiato qualcosa
            // senza premere Apply.
            var now = ClimateContext.Snapshot();
            var req = ClimateContext.ThermalRequest;
            string applied = req.Serial == 0
                ? "Colours: no simulation yet"
                : $"Colours: {ClimateContext.Describe(req.Choice)}  at {Hours(req.Choice.HoursMask)}";
            summary.text = $"Next: {ClimateContext.Describe(now)}  at {Hours(now.HoursMask)}" +
                           (canEdit ? "" : "  ·  by guide") + "\n" + applied;

            overlayText.text = overlayOn ? $"Overlay ON {opacity:P0}" : "Overlay OFF";

            bool ready = surface != null && !surface.Busy;
            applyButton.interactable = ready && canEdit;

            if (surface == null) status.text = "No surface model in this place.";
            else status.text = surface.Status;

            probe.text = ThermalProbe.Reading;
        }
    }
}
