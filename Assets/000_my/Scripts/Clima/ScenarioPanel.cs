using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Artemis.Vr;

namespace Artemis.Climate
{
    /// <summary>
    /// Scheda "Scenario" della HUD: l'UNICO posto in cui si sceglie sotto quale clima si guarda
    /// il borgo — scenario di emissione, anno, mese, giorno, ore del giorno.
    ///
    /// Perche' una scheda a parte: prima scenario e data stavano nella scheda Climate e le ore
    /// nella scheda Thermal, e la scheda Thermal usava la data della scheda Climate. Due schede
    /// per una scelta sola: non era chiaro dove si decidesse cosa, ne' che cambiare l'anno per
    /// gli indici cambiasse anche le temperature. Qui si sceglie tutto; Climate e Thermal
    /// prendono cio' che serve loro e tengono solo i propri parametri e il proprio Apply:
    ///  - Climate: data e scenario (le ore non contano per gli indici);
    ///  - Thermal: data, scenario e ore.
    ///
    /// Le ore sono PIU' d'una: il servizio delle temperature prende per ogni faccia il picco fra
    /// le ore scelte (documento CaldanaMR, §5.3). Almeno una resta sempre scelta.
    ///
    /// Non ha un Apply: cambiare qui non lancia nulla. Si preme Apply nella scheda che interessa,
    /// e la riga in fondo dice se le scelte correnti sono gia' state applicate o no.
    ///
    /// MULTIPLAYER. Le scelte sono della GUIDA (ClimateContext, sincronizzato da SessionState):
    /// i visitatori le vedono mentre la guida le fa, con i pulsanti spenti.
    ///
    /// Da mettere sull'oggetto App del prefab VrApp.
    /// </summary>
    public class ScenarioPanel : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Scenario";
        [Tooltip("Passo dei pulsanti dell'anno.")]
        [SerializeField] private int yearStep = 5;
        [Tooltip("Ore proposte. Brevi: stanno tutte su una riga.")]
        [SerializeField] private int[] hourChoices = { 8, 10, 12, 14, 16, 18 };

        // Cinque righe da 44 piu' il riepilogo stanno nella pagina del pannello da 500 px con la
        // fascia diagnostica accesa (circa 280 px utili).
        private const float RowHeight = 44f;

        private VrHud hud;
        private bool built;
        private float nextRefresh;
        private TMP_Text summary, applied;
        private readonly Image[] scenarioImages = new Image[3];
        private Image[] hourImages;
        private readonly System.Collections.Generic.List<Button> guideButtons =
            new System.Collections.Generic.List<Button>();

        private void Update()
        {
            if (!built) { TryBuild(); return; }

            // Il ruolo cambia quando ci si collega, e le richieste arrivano dalla guida: si
            // rinfresca anche senza eventi.
            if (Time.unscaledTime >= nextRefresh)
            {
                nextRefresh = Time.unscaledTime + 0.5f;
                Refresh();
            }
        }

        private void OnDestroy() { ClimateContext.OnChanged -= Refresh; }

        private void TryBuild()
        {
            hud = VrHud.Instance;
            if (hud == null) return;

            var page = hud.CreateTab(tabTitle);
            var vlg = page.GetComponent<VerticalLayoutGroup>();
            if (vlg != null) vlg.spacing = 6f;   // solo questa pagina

            summary = hud.MakeLabel(page, "", 18);
            SetHeight(summary, 30f);

            // Scenario
            var rowScenario = hud.MakeRow(page, RowHeight);
            for (int i = 0; i < ClimateContext.ScenarioLabels.Length; i++)
            {
                int k = i;   // copia per la closure
                var b = hud.MakeButton(rowScenario, ClimateContext.ScenarioLabels[i], () => ClimateContext.SetScenario(k));
                scenarioImages[i] = b.image;
                guideButtons.Add(b.button);
            }

            // Anno e mese
            var rowDate = hud.MakeRow(page, RowHeight);
            guideButtons.Add(hud.MakeButton(rowDate, "- year", () => ClimateContext.ShiftYear(-yearStep)).button);
            guideButtons.Add(hud.MakeButton(rowDate, "+ year", () => ClimateContext.ShiftYear(+yearStep)).button);
            guideButtons.Add(hud.MakeButton(rowDate, "- month", () => ClimateContext.ShiftMonth(-1)).button);
            guideButtons.Add(hud.MakeButton(rowDate, "+ month", () => ClimateContext.ShiftMonth(+1)).button);

            // Giorno: passo da 1 e da 7, per arrivare in fondo al mese senza trenta pressioni.
            var rowDay = hud.MakeRow(page, RowHeight);
            guideButtons.Add(hud.MakeButton(rowDay, "- week", () => ClimateContext.ShiftDay(-7)).button);
            guideButtons.Add(hud.MakeButton(rowDay, "- day", () => ClimateContext.ShiftDay(-1)).button);
            guideButtons.Add(hud.MakeButton(rowDay, "+ day", () => ClimateContext.ShiftDay(+1)).button);
            guideButtons.Add(hud.MakeButton(rowDay, "+ week", () => ClimateContext.ShiftDay(+7)).button);

            // Ore, tutte su una riga
            var rowHours = hud.MakeRow(page, RowHeight);
            hourImages = new Image[hourChoices.Length];
            for (int i = 0; i < hourChoices.Length; i++)
            {
                int hour = hourChoices[i];
                var b = hud.MakeButton(rowHours, $"{hour}h", () => ClimateContext.ToggleHour(hour));
                hourImages[i] = b.image;
                guideButtons.Add(b.button);
            }

            // Stato delle due schede che usano queste scelte.
            applied = hud.MakeLabel(page, "", 14);
            SetHeight(applied, 40f);
            applied.textWrappingMode = TextWrappingModes.Normal;

            ClimateContext.OnChanged += Refresh;
            built = true;
            Refresh();
        }

        private static void SetHeight(TMP_Text t, float h)
        {
            var le = t.GetComponent<LayoutElement>();
            if (le != null) le.preferredHeight = h;
        }

        private void Refresh()
        {
            if (!built) return;
            bool canEdit = ClimateContext.CanEdit;
            var now = ClimateContext.Snapshot();

            summary.text = ClimateContext.Describe(now) + (canEdit ? "" : "  ·  by guide");

            for (int i = 0; i < scenarioImages.Length; i++)
                scenarioImages[i].color = i == now.Scenario ? hud.ActiveColor : hud.ButtonColor;
            for (int i = 0; i < hourImages.Length; i++)
                hourImages[i].color = ClimateContext.HourSelected(hourChoices[i]) ? hud.ActiveColor : hud.ButtonColor;

            // Visitatori: i pulsanti restano visibili (si vede cosa ha scelto la guida) ma spenti.
            foreach (var b in guideButtons) b.interactable = canEdit;

            // Gia' applicate? Per gli indici contano data e scenario, per le temperature anche
            // le ore: una scelta cambiata e non applicata si vede qui, senza aprire le schede.
            applied.text = $"Climate indices: {State(ClimateContext.IndicesRequest, now, false)}\n" +
                           $"Thermal: {State(ClimateContext.ThermalRequest, now, true)}";
        }

        private static string State(ClimateRequest req, ClimateChoice now, bool withHours)
        {
            if (req.Serial == 0) return "not run yet";
            var r = req.Choice;
            bool same = r.Year == now.Year && r.Month == now.Month && r.Day == now.Day &&
                        r.Scenario == now.Scenario && (!withHours || r.HoursMask == now.HoursMask);
            return same ? "up to date" : "press Apply to update";
        }
    }
}
