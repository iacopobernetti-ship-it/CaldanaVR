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
    /// Data e scenario NON si scelgono qui: sono quelli della scheda Climate (ClimateContext).
    /// Due posti per la stessa scelta finirebbero per disallinearsi, e "gli indici dicono 2080,
    /// i colori 2050" e' l'errore che non si vede.
    ///
    /// Qui si scelgono le ORE (piu' d'una: il servizio prende per ogni faccia il picco fra le
    /// ore scelte), si lancia la simulazione, si accende/spegne la sovrapposizione e se ne regola
    /// la trasparenza.
    ///
    /// Le scelte sono STATICHE: sopravvivono al cambio di luogo, come quelle del clima.
    /// I risultati invece no: ogni luogo ha la sua mesh e il suo modello sul server.
    ///
    /// L'ultima riga e' la lettura della sonda (ThermalProbe): sta qui perche' e' qui che si
    /// lancia la simulazione, e il bello della sonda e' rileggere lo stesso punto dopo ogni Apply.
    ///
    /// Da mettere sull'oggetto App del prefab VrApp.
    /// </summary>
    public class ThermalPanel : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Thermal";
        [SerializeField] private int[] hourChoices = { 8, 10, 12, 14, 16, 18 };
        [SerializeField] private float opacityStep = 0.1f;

        // Righe un po' piu' basse e spaziatura ridotta: con la riga della sonda la scheda
        // resta alta quanto prima (352 px).
        private const float RowHeight = 48f;

        private static bool[] selected;
        private static bool overlayOn = true;
        private static float opacity = 0.6f;

        private VrHud hud;
        private bool built;
        private TMP_Text summary, status, overlayText, probe;
        private Image[] hourImages;
        private Button applyButton;
        private ThermalSurface surface;
        private float nextRefresh;

        private void Update()
        {
            if (!built) { TryBuild(); return; }

            // La superficie appartiene alla scena: la si ritrova a ogni cambio di luogo.
            if (ThermalSurface.Current != surface)
            {
                if (surface != null) surface.OnChanged -= Refresh;
                surface = ThermalSurface.Current;
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
        }

        private void OnDestroy()
        {
            if (surface != null) surface.OnChanged -= Refresh;
            ClimateContext.OnChanged -= Refresh;
        }

        private void TryBuild()
        {
            hud = VrHud.Instance;
            if (hud == null) return;

            if (selected == null || selected.Length != hourChoices.Length)
            {
                selected = new bool[hourChoices.Length];
                int i14 = System.Array.IndexOf(hourChoices, 14);
                selected[i14 >= 0 ? i14 : 0] = true;   // di partenza: le 14
            }

            var page = hud.CreateTab(tabTitle);
            var vlg = page.GetComponent<VerticalLayoutGroup>();
            if (vlg != null) vlg.spacing = 6f;   // solo questa pagina

            summary = hud.MakeLabel(page, "", 17);
            SetHeight(summary, 44f);

            // Ore su due righe da tre: pulsanti abbastanza larghi da colpire col raggio.
            hourImages = new Image[hourChoices.Length];
            RectTransform row = null;
            for (int i = 0; i < hourChoices.Length; i++)
            {
                if (i % 3 == 0) row = hud.MakeRow(page, RowHeight);
                int k = i;
                hourImages[i] = hud.MakeButton(row, $"{hourChoices[i]}:00", () => ToggleHour(k)).image;
            }

            var rowAct = hud.MakeRow(page, RowHeight);
            applyButton = hud.MakeButton(rowAct, "Apply", Apply).button;
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

        private static void SetHeight(TMP_Text t, float h)
        {
            var le = t.GetComponent<LayoutElement>();
            if (le != null) le.preferredHeight = h;
        }

        private void ToggleHour(int i)
        {
            selected[i] = !selected[i];
            // Almeno un'ora sempre scelta: una simulazione senza ore non ha senso.
            bool any = false;
            foreach (bool b in selected) any |= b;
            if (!any) selected[i] = true;
            Refresh();
        }

        private void ChangeOpacity(float d)
        {
            opacity = Mathf.Round(Mathf.Clamp(opacity + d, 0.1f, 1f) * 10f) / 10f;
            if (surface != null) surface.SetOverlay(overlayOn, opacity);
            Refresh();
        }

        private void Apply()
        {
            if (surface == null || surface.Busy) return;
            surface.Simulate(ClimateContext.Year, ClimateContext.Month, ClimateContext.Day,
                             ClimateContext.ScenarioApiId, SelectedHours());
        }

        private int[] SelectedHours()
        {
            int n = 0;
            foreach (bool b in selected) if (b) n++;
            var hours = new int[n];
            int j = 0;
            for (int i = 0; i < selected.Length; i++) if (selected[i]) hours[j++] = hourChoices[i];
            return hours;
        }

        private void Refresh()
        {
            if (!built) return;

            summary.text = $"{ClimateContext.ScenarioApiId}  ·  {ClimateContext.Day:00}/{ClimateContext.Month:00}/{ClimateContext.Year}" +
                           "\n(date and scenario: Climate tab)";

            for (int i = 0; i < hourImages.Length; i++)
                hourImages[i].color = selected[i] ? hud.ActiveColor : hud.ButtonColor;

            overlayText.text = overlayOn ? $"Overlay ON {opacity:P0}" : "Overlay OFF";

            bool ready = surface != null && !surface.Busy;
            applyButton.interactable = ready;

            if (surface == null) status.text = "No surface model in this place.";
            else status.text = surface.Status;

            probe.text = ThermalProbe.Reading;
        }
    }
}
