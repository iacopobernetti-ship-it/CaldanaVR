using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Artemis.Vr;

namespace Artemis.Session
{
    /// <summary>
    /// Scheda "Session": l'ingresso in visita. Finche' non si e' connessi e' l'UNICA scheda della
    /// HUD — gli altri pannelli aspettano — cosi' non c'e' modo di premere pulsanti che non
    /// avrebbero ancora senso.
    ///
    /// Due pulsanti e NESSUNA DIGITAZIONE: la guida apre la visita, i partecipanti vi si
    /// uniscono. Su una tastiera virtuale un indirizzo o un codice di sei caratteri sono un
    /// supplizio, e in gruppo sono anche una fonte di errori. A connessione avvenuta i pulsanti
    /// spariscono e restano lo stato e il numero di presenti.
    ///
    /// Il "finche' non si e' connessi e' l'UNICA scheda" lo realizza la HUD (LockToTab): qui si
    /// decide solo QUANDO bloccare, cioe' finche' VrSession.WorkAllowed e' falso. Con Require
    /// Session spento su VrSession il blocco non scatta mai, e si lavora da soli con tutte le
    /// schede: e' la modalita' per sviluppare senza due visori.
    ///
    /// DIFFERENZA rispetto alla versione SilvoVR: quella si costruiva solo nella scena hub,
    /// perche' entrare o uscire da una sessione mentre la classe era in bosco creava
    /// disallineamenti. Qui la scheda compare ovunque, e la restrizione — se servira' — si
    /// aggiunge con una riga su PlaceFlow: e' una scelta di regia, non un vincolo tecnico.
    /// </summary>
    public class SessionPanel : MonoBehaviour
    {
        [SerializeField] private string tabTitle = "Session";

        [Tooltip("Mostra la scheda solo nella scena hub, come in SilvoVR. Vuoto = ovunque.")]
        [SerializeField] private string onlyInScene = "";

        private bool built;
        private float nextRefresh;
        private VrSession bound;
        private bool locked;

        private RectTransform buttonRow;
        private TMP_Text stateLabel, roleLabel, hintLabel;

        private void Update()
        {
            if (!built) { TryBuild(); return; }

            var s = VrSession.Instance;
            if (s != bound)
            {
                if (bound != null) bound.OnStateChanged -= Refresh;
                bound = s;
                if (bound != null) bound.OnStateChanged += Refresh;
            }

            if (Time.time < nextRefresh) return;
            nextRefresh = Time.time + 0.3f;
            Refresh();
        }

        private void OnDestroy() { if (bound != null) bound.OnStateChanged -= Refresh; }

        /// Se il pannello si spegne mentre blocca, il blocco va tolto: altrimenti la HUD
        /// resterebbe con la sola scheda Session senza nessuno che la sblocchi.
        private void OnDisable()
        {
            if (!locked) return;
            locked = false;
            if (VrHud.Instance != null) VrHud.Instance.Unlock();
        }

        private void TryBuild()
        {
            var hud = VrHud.Instance;
            if (hud == null) return;

            if (!string.IsNullOrWhiteSpace(onlyInScene) &&
                UnityEngine.SceneManagement.SceneManager.GetActiveScene().name != onlyInScene)
            { enabled = false; return; }

            var page = hud.CreateTab(tabTitle);

            stateLabel = hud.MakeLabel(page, "", 20);
            roleLabel  = hud.MakeLabel(page, "", 17);

            buttonRow = hud.MakeRow(page);
            hud.MakeButton(buttonRow, "Create\n(guide)", () => VrSession.Instance?.CreateAsHost());
            hud.MakeButton(buttonRow, "Join\n(visitor)", () => VrSession.Instance?.JoinAsGuest());

            hintLabel = hud.MakeLabel(page, "", 14);

            built = true;
            Refresh();
        }

        private void Refresh()
        {
            if (!built) return;
            var s = VrSession.Instance;

            // Blocco della HUD sulla sola scheda Session finche' il lavoro non e' consentito.
            bool shouldLock = !VrSession.WorkAllowed;
            if (shouldLock != locked && VrHud.Instance != null)
            {
                if (shouldLock) VrHud.Instance.LockToTab(tabTitle);
                else VrHud.Instance.Unlock();
                locked = shouldLock;
            }

            if (s == null)
            {
                stateLabel.text = "session service unavailable";
                return;
            }

            bool connected = VrSession.IsConnected;
            if (buttonRow != null && buttonRow.gameObject.activeSelf == connected)
                buttonRow.gameObject.SetActive(!connected);

            switch (s.Current)
            {
                case VrSession.Phase.Working:
                    stateLabel.text = "connecting…";
                    hintLabel.text = "";
                    break;

                case VrSession.Phase.InSession:
                    stateLabel.text = $"in session · {s.PlayerCount} connected";
                    hintLabel.text = VrSession.IsHost
                        ? "you lead: choose the place, everyone follows"
                        : "wait for the guide to choose the place";
                    break;

                case VrSession.Phase.Failed:
                    stateLabel.text = "not connected";
                    hintLabel.text = s.LastError;
                    break;

                default:
                    stateLabel.text = "not connected";
                    hintLabel.text = s.RequireSession
                        ? "the guide opens the visit, visitors join it"
                        : "solo mode: you can also explore on your own";
                    break;
            }

            roleLabel.text = VrSession.LocalRole switch
            {
                VrSession.Role.Host  => "role: GUIDE",
                VrSession.Role.Guest => "role: visitor",
                _ => s.RequireSession ? "" : "role: solo"
            };
        }
    }
}
