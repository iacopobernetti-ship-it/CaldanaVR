using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Artemis.Vr;

namespace Artemis.Places
{
    /// <summary>
    /// La scheda "Places" della HUD: un pulsante per l'hub e uno per ciascun luogo, generati da
    /// PlaceFlow — una fonte sola. Verde = scena attiva; durante un caricamento i pulsanti si
    /// disattivano e la riga di stato mostra il progresso, che e' il feedback che serve quando i
    /// tempi di caricamento degli splat non sono garantiti.
    ///
    /// E' anche il MODELLO per gli altri pannelli: prendi la pagina con CreateTab, costruisci con
    /// MakeButton / MakeLabel / MakeRow, aggiorna a eventi piu' un refresh leggero periodico.
    ///
    /// Sta sullo stesso oggetto di PlaceFlow.
    /// </summary>
    public class PlacePanel : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Places";

        private readonly Dictionary<string, Image> buttonImages = new Dictionary<string, Image>();
        private readonly List<Button> buttons = new List<Button>();
        private TMP_Text status;
        private bool built;
        private float nextRefresh;

        private void Start() { TryBuild(); }

        private void Update()
        {
            if (!built) { TryBuild(); return; }
            if (Time.time < nextRefresh) return;
            nextRefresh = Time.time + 0.5f;
            RefreshColors();
        }

        private void OnDestroy()
        {
            var flow = PlaceFlow.Instance;
            if (flow == null) return;
            flow.OnLoadStarted -= OnLoadStarted;
            flow.OnLoadProgress -= OnLoadProgress;
            flow.OnLoadFinished -= OnLoadFinished;
        }

        // ---------------------------------------------------------------- costruzione

        /// HUD e flusso sono due componenti sullo stesso oggetto, ma l'ordine di Awake fra
        /// componenti non e' garantito: si costruisce appena ci sono entrambi, senza pretese sul
        /// primo frame.
        private void TryBuild()
        {
            var hud = VrHud.Instance;
            var flow = PlaceFlow.Instance;
            if (hud == null || flow == null) return;

            // La scelta del luogo porta dentro tutti i partecipanti: decide chi ospita. Agli altri
            // la scheda non esiste PROPRIO — un pulsante disabilitato inviterebbe comunque a
            // premerlo e a chiedersi perche'. Non si rinuncia per sempre, pero': la sessione
            // potrebbe non essere ancora in piedi, e fra un istante il ruolo sara' chiaro.
            if (!PlaceFlow.CanCommand) return;

            var page = hud.CreateTab(tabTitle);
            hud.MakeLabel(page, "Choose where to go", 20);

            AddButton(hud, flow, flow.Hub.sceneName, flow.Hub.Label);
            foreach (var p in flow.Places)
                AddButton(hud, flow, p.sceneName, p.Label);

            status = hud.MakeLabel(page, "", 18);

            flow.OnLoadStarted += OnLoadStarted;
            flow.OnLoadProgress += OnLoadProgress;
            flow.OnLoadFinished += OnLoadFinished;

            built = true;
            RefreshColors();
        }

        private void AddButton(VrHud hud, PlaceFlow flow, string sceneName, string label)
        {
            var page = hud.CreateTab(tabTitle);          // idempotente: ritorna la stessa pagina
            string scene = sceneName;                    // copia locale per la closure
            var (btn, img) = hud.MakeButton(page, label, () => flow.GoToPlace(scene));
            buttonImages[scene] = img;
            buttons.Add(btn);
        }

        // ---------------------------------------------------------------- eventi flusso

        private void OnLoadStarted(string scene)
        {
            foreach (var b in buttons) b.interactable = false;
            if (status != null) status.text = $"Loading {scene}…";
        }

        private void OnLoadProgress(float p)
        {
            if (status != null && PlaceFlow.Instance != null && PlaceFlow.Instance.IsBusy)
                status.text = $"Loading… {p:P0}";
        }

        private void OnLoadFinished(string scene)
        {
            foreach (var b in buttons) b.interactable = true;
            if (status != null)
                status.text = PlaceFlow.Instance != null && PlaceFlow.Instance.IsOnHub
                    ? ""
                    : "Place ready — the splat may take a few more seconds.";
            RefreshColors();
        }

        // ---------------------------------------------------------------- stato

        private void RefreshColors()
        {
            var hud = VrHud.Instance;
            var flow = PlaceFlow.Instance;
            if (hud == null || flow == null) return;

            string current = flow.CurrentScene;
            foreach (var kv in buttonImages)
                kv.Value.color = kv.Key == current ? hud.ActiveColor : hud.ButtonColor;
        }
    }
}
