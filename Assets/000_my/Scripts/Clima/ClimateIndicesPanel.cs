using System;
using System.Collections;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Artemis.Vr;

namespace Artemis.Climate
{
    /// <summary>
    /// Regola di rischio per un indice: match sul nome (parole intere) e due soglie.
    /// higherIsWorse = true: valore alto = rischio. false: valore basso = rischio (es. giorni di comfort).
    /// </summary>
    [Serializable]
    public class IndexRiskRule
    {
        [Tooltip("Match sul nome indice, per PAROLE INTERE e senza maiuscole. Es. 'tropical nights'.")]
        public string keyContains = "";
        [Tooltip("true: valori alti = peggio; false: valori bassi = peggio.")]
        public bool higherIsWorse = true;
        [Tooltip("Soglia ARANCIONE (allarme).")]
        public float warn = 0f;
        [Tooltip("Soglia ROSSA (rischio).")]
        public float risk = 0f;
    }

    /// <summary>
    /// Scheda "Climate" della HUD: indici heritage e tourism dell'API FutureClimate, con la
    /// colorazione per rischio. Fase 1 del documento CaldanaMR (§5).
    ///
    /// Da dove viene: e' il ClimateIndicesPanel di CaldanaMR con la stessa LOGICA (richiesta,
    /// regole di rischio, match per parole intere, colorazione) e una VISTA diversa. Quello si
    /// appoggiava a un canvas costruito a mano in scena e collegato campo per campo in
    /// Inspector; qui la vista la costruisce VrHud a runtime, come PlacePanel. Con il cambio
    /// scena tradizionale una UI cablata in Inspector andrebbe ricostruita e ricollegata in
    /// ogni luogo: cinque copie dello stesso cablaggio, cinque posti dove un riferimento resta
    /// vuoto senza che nulla lo dica.
    ///
    /// Due viste nella stessa pagina, come in CaldanaMR: PARAMETRI (scenario, data, tipo e
    /// profilo, finestra e Apply) e RISULTATI (testo colorato, Back).
    ///
    /// I risultati si sfogliano A PAGINE e non con uno scroll: VrHud non ha una vista
    /// scorrevole, e trascinare una barra col raggio del controller e' scomodo. TextMeshPro sa
    /// gia' impaginare da se' (overflow Page): due pulsanti e nessun componente in piu'.
    ///
    /// Le scelte (finestra, modo, tipo, profilo) sono STATICHE, come ClimateContext: devono
    /// sopravvivere al cambio di luogo.
    ///
    /// Tutta la messaggistica e' in inglese, come in CaldanaMR e come i messaggi dell'API.
    ///
    /// Da mettere sull'oggetto App del prefab VrApp, insieme a FutureClimateClient.
    /// </summary>
    public class ClimateIndicesPanel : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Climate";

        [Tooltip("Vuoto = lo cerca sullo stesso oggetto, poi nella scena.")]
        [SerializeField] private FutureClimateClient client;

        [Header("Parametri")]
        [SerializeField] private int windowDaysStep = 5;
        [SerializeField] private int yearStep = 5;
        [Tooltip("ID API dei profili turistici, nell'ordine del pulsante che li fa scorrere. " +
                 "historic_garden escluso per Caldana: e' un borgo, non una villa con giardino " +
                 "(documento CaldanaMR, §4.2).")]
        [SerializeField] private string[] tourismProfileIds = { "urban_cultural", "walking_outdoor" };
        [SerializeField] private string[] tourismProfileLabels = { "Urban", "Walking" };

        [Header("Colorazione rischio indici")]
        [SerializeField] private Color neutralColor = new Color(0.85f, 0.88f, 0.92f);
        [SerializeField] private Color greenColor = new Color(0.35f, 0.80f, 0.45f);
        [SerializeField] private Color orangeColor = new Color(0.96f, 0.62f, 0.20f);
        [SerializeField] private Color redColor = new Color(0.92f, 0.32f, 0.28f);

        [Tooltip("Regole di soglia per indice. Un indice senza regola resta neutro. Il match e' " +
                 "per PAROLE INTERE ('comfort days' NON matcha 'discomfort days'). Le soglie sono " +
                 "SEGNAPOSTO: vanno calibrate con gli esperti di conservazione.")]
        [SerializeField] private IndexRiskRule[] riskRules =
        {
            // Conteggi di giorni/notti avversi: valore alto = peggio, 0 = verde.
            new IndexRiskRule { keyContains = "discomfort days",       higherIsWorse = true,  warn = 5,  risk = 15 },
            new IndexRiskRule { keyContains = "heat stress days",      higherIsWorse = true,  warn = 5,  risk = 15 },
            new IndexRiskRule { keyContains = "danger days",           higherIsWorse = true,  warn = 1,  risk = 5  },
            new IndexRiskRule { keyContains = "warning days",          higherIsWorse = true,  warn = 3,  risk = 10 },
            new IndexRiskRule { keyContains = "tropical nights",       higherIsWorse = true,  warn = 20, risk = 40 },
            new IndexRiskRule { keyContains = "very warm nights",      higherIsWorse = true,  warn = 15, risk = 30 },
            new IndexRiskRule { keyContains = "hot days",              higherIsWorse = true,  warn = 10, risk = 25 },
            new IndexRiskRule { keyContains = "heavy rain days",       higherIsWorse = true,  warn = 5,  risk = 15 },
            new IndexRiskRule { keyContains = "high dtr days",         higherIsWorse = true,  warn = 10, risk = 20 },
            new IndexRiskRule { keyContains = "salt cycle proxy days", higherIsWorse = true,  warn = 5,  risk = 15 },
            new IndexRiskRule { keyContains = "freeze thaw days",      higherIsWorse = true,  warn = 5,  risk = 15 },
            // Positivi: valore alto = meglio.
            new IndexRiskRule { keyContains = "comfort days",          higherIsWorse = false, warn = 20, risk = 10 },
        };

        private static readonly string[] WindowModes = { "centered", "backward", "forward" };
        private static readonly string[] WindowModeLabels = { "Centered", "Backward", "Forward" };
        private static readonly string[] ScenarioLabels = { "SSP1-2.6", "SSP2-4.5", "SSP5-8.5" };

        // Righe da 52 px invece dei 96 di default, e Apply sulla stessa riga della finestra:
        // con la fascia diagnostica accesa la pagina ha circa 300 px utili, e cinque righe da
        // 56 ci finivano sotto. Quattro righe da 52 piu' il riepilogo ci stanno.
        private const float RowHeight = 52f;

        private static int windowDays = 30;   // limiti API: 1..366
        private static int windowMode;        // 0..2
        private static int indexType;         // 0 = heritage, 1 = tourism
        private static int profile;

        private bool built, busy;
        private RectTransform paramsView, resultsView;
        private TMP_Text summary, title, status, body;
        private readonly Image[] scenarioImages = new Image[3];
        private Image heritageImage, tourismImage;
        private Button profileButton;
        private TMP_Text profileText, modeText;
        private VrHud hud;

        private void Update()
        {
            if (!built) TryBuild();
        }

        private void OnDestroy() { ClimateContext.OnChanged -= Refresh; }

        // ---------------------------------------------------------------- costruzione

        /// Si costruisce appena c'e' la HUD, senza pretese sul primo frame: l'ordine di Awake
        /// fra componenti non e' garantito.
        private void TryBuild()
        {
            hud = VrHud.Instance;
            if (hud == null) return;

            if (client == null) client = GetComponent<FutureClimateClient>();
            if (client == null) client = FindFirstObjectByType<FutureClimateClient>();

            var page = hud.CreateTab(tabTitle);
            paramsView = MakeView(page, "ClimateParams");
            resultsView = MakeView(page, "ClimateResults");

            // ---- parametri ----
            summary = hud.MakeLabel(paramsView, "", 18);
            SetHeight(summary, 44f);

            var rowScenario = hud.MakeRow(paramsView, RowHeight);
            for (int i = 0; i < ScenarioLabels.Length; i++)
            {
                int k = i;   // copia per la closure
                scenarioImages[i] = hud.MakeButton(rowScenario, ScenarioLabels[i],
                                                   () => ClimateContext.SetScenario(k)).image;
            }

            var rowDate = hud.MakeRow(paramsView, RowHeight);
            hud.MakeButton(rowDate, "- year", () => ClimateContext.ShiftYear(-yearStep));
            hud.MakeButton(rowDate, "+ year", () => ClimateContext.ShiftYear(+yearStep));
            hud.MakeButton(rowDate, "- month", () => ClimateContext.ShiftMonth(-1));
            hud.MakeButton(rowDate, "+ month", () => ClimateContext.ShiftMonth(+1));

            var rowType = hud.MakeRow(paramsView, RowHeight);
            heritageImage = hud.MakeButton(rowType, "Heritage", () => { indexType = 0; Refresh(); }).image;
            tourismImage = hud.MakeButton(rowType, "Tourism", () => { indexType = 1; Refresh(); }).image;
            // Il profilo e' UN pulsante che fa scorrere le scelte, non uno per profilo: serve
            // solo a Tourism, e cosi' sta sulla stessa riga del tipo invece di occuparne una.
            profileButton = hud.MakeButton(rowType, "", () =>
            {
                profile = (profile + 1) % Mathf.Max(1, tourismProfileIds.Length);
                Refresh();
            }).button;
            profileText = profileButton.GetComponentInChildren<TMP_Text>();

            var rowWindow = hud.MakeRow(paramsView, RowHeight);
            hud.MakeButton(rowWindow, "- 5 d", () => { windowDays = Mathf.Clamp(windowDays - windowDaysStep, 1, 366); Refresh(); });
            hud.MakeButton(rowWindow, "+ 5 d", () => { windowDays = Mathf.Clamp(windowDays + windowDaysStep, 1, 366); Refresh(); });
            modeText = hud.MakeButton(rowWindow, "", () => { windowMode = (windowMode + 1) % WindowModes.Length; Refresh(); })
                          .button.GetComponentInChildren<TMP_Text>();
            hud.MakeButton(rowWindow, "Apply", Fetch);

            // ---- risultati ----
            title = hud.MakeLabel(resultsView, "", 19);
            status = hud.MakeLabel(resultsView, "", 15);

            body = hud.MakeLabel(resultsView, "", 17, TextAlignmentOptions.TopLeft);
            var le = body.GetComponent<LayoutElement>();
            le.preferredHeight = 140f; le.flexibleHeight = 1f;   // cresce quando la diagnostica e' spenta
            body.richText = true;                                // per i tag <color>
            body.overflowMode = TextOverflowModes.Page;           // impaginazione al posto dello scroll

            var rowNav = hud.MakeRow(resultsView, RowHeight);
            hud.MakeButton(rowNav, "< Prev", () => TurnPage(-1));
            hud.MakeButton(rowNav, "Back", ShowParams);
            hud.MakeButton(rowNav, "Next >", () => TurnPage(+1));

            ClimateContext.OnChanged += Refresh;
            built = true;
            ShowParams();
            Refresh();
        }

        /// Una colonna dentro la pagina: le due viste sono sorelle, e se ne accende una sola.
        private static RectTransform MakeView(Transform page, string name)
        {
            var go = new GameObject(name, typeof(RectTransform), typeof(VerticalLayoutGroup), typeof(LayoutElement));
            go.transform.SetParent(page, false);
            var v = go.GetComponent<VerticalLayoutGroup>();
            v.childAlignment = TextAnchor.UpperCenter; v.spacing = 10f;
            v.childControlWidth = true; v.childControlHeight = true;
            v.childForceExpandWidth = true; v.childForceExpandHeight = false;
            var le = go.GetComponent<LayoutElement>();
            le.flexibleWidth = 1f; le.flexibleHeight = 1f;
            return go.GetComponent<RectTransform>();
        }

        private static void SetHeight(TMP_Text t, float h)
        {
            var le = t.GetComponent<LayoutElement>();
            if (le != null) le.preferredHeight = h;
        }

        // ---------------------------------------------------------------- viste

        private void ShowParams()
        {
            paramsView.gameObject.SetActive(true);
            resultsView.gameObject.SetActive(false);
        }

        private void ShowResults()
        {
            paramsView.gameObject.SetActive(false);
            resultsView.gameObject.SetActive(true);
        }

        private void Refresh()
        {
            if (!built) return;

            int s = ClimateContext.ScenarioIndex;
            summary.text = $"{ScenarioLabels[s]}  ·  {ClimateContext.Day:00}/{ClimateContext.Month:00}/{ClimateContext.Year}\n" +
                           $"window {windowDays} days, {WindowModes[windowMode]}";

            for (int i = 0; i < scenarioImages.Length; i++)
                scenarioImages[i].color = i == s ? hud.ActiveColor : hud.ButtonColor;
            heritageImage.color = indexType == 0 ? hud.ActiveColor : hud.ButtonColor;
            tourismImage.color = indexType == 1 ? hud.ActiveColor : hud.ButtonColor;

            // Il profilo resta visibile ma spento con Heritage: farlo sparire sposterebbe gli
            // altri pulsanti della riga, e un pulsante che cambia posto si preme per sbaglio.
            bool tourism = indexType == 1;
            profileButton.interactable = tourism;
            profileText.text = tourism ? ProfileLabel() : "—";
            modeText.text = WindowModeLabels[windowMode];
        }

        private string ProfileLabel()
        {
            if (tourismProfileLabels != null && profile < tourismProfileLabels.Length &&
                !string.IsNullOrEmpty(tourismProfileLabels[profile]))
                return tourismProfileLabels[profile];
            return ProfileId();
        }

        private string ProfileId()
        {
            if (tourismProfileIds == null || tourismProfileIds.Length == 0) return "urban_cultural";
            string id = tourismProfileIds[Mathf.Clamp(profile, 0, tourismProfileIds.Length - 1)];
            return string.IsNullOrEmpty(id) ? "urban_cultural" : id;
        }

        // ---------------------------------------------------------------- richiesta

        private void Fetch()
        {
            if (busy) return;
            bool tourism = indexType == 1;

            ShowResults();
            title.text = tourism ? "Tourism" : "Heritage";
            body.text = "";
            body.pageToDisplay = 1;

            if (client == null)
            {
                // Lo si dice in HUD e non solo nel log: in visore il log non si legge.
                status.text = "Climate client not found on the app object.";
                return;
            }

            status.text = "Loading...";
            StartCoroutine(FetchRoutine(tourism));
        }

        private IEnumerator FetchRoutine(bool tourism)
        {
            busy = true;
            FutureClimateClient.WindowResult res = null;

            string scenario = ClimateContext.ScenarioApiId;
            string mode = WindowModes[windowMode];

            if (tourism)
                yield return client.FetchTourismWindow(scenario, ClimateContext.Year, ClimateContext.Month,
                                                       ClimateContext.Day, windowDays, mode, ProfileId(),
                                                       r => res = r);
            else
                yield return client.FetchHeritageWindow(scenario, ClimateContext.Year, ClimateContext.Month,
                                                        ClimateContext.Day, windowDays, mode,
                                                        r => res = r);

            busy = false;

            if (res == null || !res.ok)
            {
                // Il messaggio dell'API (in inglese) arriva com'e': una data fuori periodo deve
                // spiegarsi da sola, senza rompere nulla.
                status.text = res != null ? res.error : "No response from the climate API.";
                body.text = "";
                yield break;
            }

            title.text = res.headerLine;
            body.text = BuildColoredBody(res);
            body.pageToDisplay = 1;

            // Il numero di pagine si conosce solo dopo che il layout ha dato al testo la sua
            // altezza vera, cioe' al frame dopo: chiederlo subito darebbe il conto sbagliato.
            yield return null;
            UpdatePageStatus();
        }

        // ---------------------------------------------------------------- pagine

        private void TurnPage(int delta)
        {
            body.ForceMeshUpdate();
            int pages = Mathf.Max(1, body.textInfo.pageCount);
            body.pageToDisplay = Mathf.Clamp(body.pageToDisplay + delta, 1, pages);
            UpdatePageStatus();
        }

        private void UpdatePageStatus()
        {
            body.ForceMeshUpdate();
            int pages = Mathf.Max(1, body.textInfo.pageCount);
            status.text = pages > 1 ? $"page {body.pageToDisplay} / {pages}" : "";
        }

        // ---------------------------------------------------------------- colorazione

        private enum Risk { Neutral, Green, Orange, Red }

        private string BuildColoredBody(FutureClimateClient.WindowResult res)
        {
            var sb = new StringBuilder();

            if (!string.IsNullOrEmpty(res.periodText))
                sb.Append(Wrap(res.periodText, neutralColor)).Append("\n\n");

            if (res.indices != null && res.indices.Count > 0)
            {
                foreach (var e in res.indices)
                    sb.Append(Wrap("- " + e.name + ": " + e.valueText, ColorFor(e))).Append('\n');
            }
            else
            {
                sb.Append(Wrap("No indices returned for this window.", neutralColor)).Append('\n');
            }

            if (res.notes != null && res.notes.Count > 0)
            {
                sb.Append('\n').Append(Wrap("Notes", neutralColor)).Append('\n');
                foreach (var n in res.notes)
                    sb.Append(Wrap("- " + n, neutralColor)).Append('\n');
            }

            return sb.ToString();
        }

        private Color ColorFor(FutureClimateClient.IndexEntry e)
        {
            if (e == null || !e.hasValue) return neutralColor;
            switch (Classify(e.name, e.value))
            {
                case Risk.Green:  return greenColor;
                case Risk.Orange: return orangeColor;
                case Risk.Red:    return redColor;
                default:          return neutralColor;
            }
        }

        private Risk Classify(string name, float value)
        {
            if (riskRules == null || string.IsNullOrEmpty(name)) return Risk.Neutral;
            string lname = name.ToLowerInvariant();
            foreach (var r in riskRules)
            {
                if (r == null || string.IsNullOrEmpty(r.keyContains)) continue;
                if (!TokenMatch(lname, r.keyContains.ToLowerInvariant())) continue;

                if (r.higherIsWorse)
                {
                    if (value >= r.risk) return Risk.Red;
                    if (value >= r.warn) return Risk.Orange;
                    return Risk.Green;
                }
                if (value <= r.risk) return Risk.Red;
                if (value <= r.warn) return Risk.Orange;
                return Risk.Green;
            }
            return Risk.Neutral;
        }

        /// Match per PAROLE INTERE contigue: "comfort days" NON matcha "discomfort days".
        /// Con una semplice ricerca di sottostringa i giorni di disagio si colorerebbero con la
        /// regola dei giorni di comfort, cioe' al contrario.
        private static bool TokenMatch(string nameLower, string keyLower)
        {
            char[] sep = { ' ', '\t' };
            string[] nameTok = nameLower.Split(sep, StringSplitOptions.RemoveEmptyEntries);
            string[] keyTok = keyLower.Split(sep, StringSplitOptions.RemoveEmptyEntries);
            if (keyTok.Length == 0 || keyTok.Length > nameTok.Length) return false;

            for (int i = 0; i + keyTok.Length <= nameTok.Length; i++)
            {
                bool all = true;
                for (int j = 0; j < keyTok.Length; j++)
                    if (nameTok[i + j] != keyTok[j]) { all = false; break; }
                if (all) return true;
            }
            return false;
        }

        private static string Wrap(string text, Color c) =>
            "<color=#" + ColorUtility.ToHtmlStringRGB(c) + ">" + text + "</color>";
    }
}
