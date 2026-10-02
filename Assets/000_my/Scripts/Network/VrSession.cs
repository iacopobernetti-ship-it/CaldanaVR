using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Netcode;
using Unity.Services.Authentication;
using Unity.Services.Core;
using Unity.Services.Multiplayer;
using UnityEngine;

namespace Artemis.Session
{
    /// <summary>
    /// Ingresso in sessione, con RUOLO ESPLICITO: la guida CREA, i partecipanti SI UNISCONO.
    /// Due pulsanti, nessuna digitazione — su una tastiera virtuale un indirizzo IP o un codice
    /// di sei caratteri sono un supplizio, e in aula sono anche una fonte di errori.
    ///
    /// Il nome della sessione e' fisso e uguale per tutti (Inspector): fa da "aula". Chi ospita
    /// la crea e ne diventa HOST; i partecipanti si uniscono a quel nome. Un partecipante che prova
    /// a entrare prima che chi ospita abbia creato riceve un rifiuto chiaro invece di creare per
    /// sbaglio una seconda aula — sarebbe il modo piu' rapido per ritrovarsi due lezioni parallele
    /// che non si vedono.
    ///
    /// Topologia HOST scelta di proposito: chi ospita e' il server, quindi "solo chi ospita
    /// cambia scena", "solo chi ospita scrive lo stato" e "i partecipanti chiedono via RPC" sono
    /// garantiti dal trasporto e non da controlli sparsi nel codice.
    ///
    /// Vive nel prefab dell'app, quindi si ricostruisce a ogni scena: la connessione pero' non si
    /// perde, perche' a tenerla e' il NetworkManager, che invece persiste da solo.
    /// </summary>
    public class VrSession : MonoBehaviour
    {
        public enum Role { Offline, Host, Guest }
        public enum Phase { Idle, Working, InSession, Failed }

        [Header("Aula")]
        [Tooltip("Nome della sessione, uguale su tutti i visori. Cambialo per avere due aule " +
                 "indipendenti sullo stesso progetto.")]
        [SerializeField] private string sessionName = "Caldana-Visita1";
        [Tooltip("Capienza massima: chi ospita piu' i partecipanti.")]
        [SerializeField] private int maxPlayers = 10;

        [Header("Modalita'")]
        [Tooltip("ACCESO: senza sessione la HUD mostra SOLO la scheda Session, e il resto compare " +
                 "dopo la connessione. SPENTO: si lavora da soli con tutte le schede — serve per " +
                 "sviluppare e collaudare senza due visori.")]
        [SerializeField] private bool requireSession = true;

        public static VrSession Instance { get; private set; }

        public Phase Current { get; private set; } = Phase.Idle;
        public string LastError { get; private set; } = "";
        public ISession Session { get; private set; }
        public event Action OnStateChanged;

        // ---- lettura globale: e' su questo che i pannelli decidono se esistere -------------------

        /// <summary>Ruolo del giocatore locale. Offline quando non c'e' sessione.</summary>
        public static Role LocalRole
        {
            get
            {
                var nm = NetworkManager.Singleton;
                if (nm == null || !nm.IsListening) return Role.Offline;
                return nm.IsServer ? Role.Host : Role.Guest;
            }
        }

        public static bool IsHost => LocalRole == Role.Host;
        public static bool IsGuest => LocalRole == Role.Guest;
        public static bool IsConnected => LocalRole != Role.Offline;

        /// <summary>
        /// I pannelli di lavoro possono esistere? Vero quando c'e' una sessione, oppure quando
        /// la sessione non e' richiesta (modalita' sviluppo). Falso significa: mostra solo la
        /// scheda Session.
        /// </summary>
        public static bool WorkAllowed =>
            IsConnected || (Instance != null && !Instance.requireSession) || Instance == null;

        /// <summary>Chi puo' comandare (cambiare area, abbattere, scegliere il clima): chi ospita,
        /// oppure chiunque quando si lavora da soli.</summary>
        public static bool CanCommand => IsHost || LocalRole == Role.Offline;

        public bool RequireSession => requireSession;
        public string SessionName => sessionName;
        public int PlayerCount => Session != null ? Session.PlayerCount : (IsConnected ? 1 : 0);

        // ---- ciclo di vita ------------------------------------------------------------------------

        private void Awake()
        {
            // Il piu' recente prende il posto: il prefab si ricostruisce a ogni scena.
            Instance = this;
            if (IsConnected) Current = Phase.InSession;
        }

        private void OnDestroy() { if (Instance == this) Instance = null; }

        // ---- comandi -----------------------------------------------------------------------------

        public async void CreateAsHost()  => await Create();
        public async void JoinAsGuest()   => await Join();

        public async Task Create()
        {
            if (!await Prepare()) return;
            try
            {
                // IsPrivate = false e' essenziale: una sessione privata non compare nelle
                // query, quindi i partecipanti non potrebbero mai trovarla per nome.
                var options = new SessionOptions
                {
                    Name = sessionName,
                    MaxPlayers = maxPlayers,
                    IsPrivate = false,
                    IsLocked = false
                }.WithRelayNetwork();
                Session = await MultiplayerService.Instance.CreateSessionAsync(options);
                Hook();
                Done($"aula '{sessionName}' aperta — sei chi ospita");
            }
            catch (Exception e) { Fail("creazione fallita: " + e.Message); }
        }

        /// <summary>
        /// Si unisce all'aula CERCANDOLA PER NOME.
        ///
        /// Non si usa JoinSessionByIdAsync: quel metodo vuole l'ID generato dal servizio, non
        /// l'etichetta che diamo noi — passargli il nome della visita produce un "lobby not found"
        /// perfettamente letterale, perche' nessuna lobby ha quell'id. L'id lo conosce solo chi
        /// ha creato la sessione, e farlo digitare ai partecipanti e' esattamente cio' che
        /// volevamo evitare.
        ///
        /// Si interroga quindi l'elenco delle sessioni aperte filtrando sul NOME, e ci si
        /// unisce alla prima che risponde. Con un'aula sola in rete l'esito e' univoco.
        /// </summary>
        public async Task Join()
        {
            if (!await Prepare()) return;
            try
            {
                var options = new QuerySessionsOptions
                {
                    Count = 25,
                    FilterOptions = new List<FilterOption>
                    {
                        new FilterOption(FilterField.Name, sessionName, FilterOperation.Equal)
                    }
                };

                var results = await MultiplayerService.Instance.QuerySessionsAsync(options);
                if (results == null || results.Sessions == null || results.Sessions.Count == 0)
                {
                    Fail("nessuna aula aperta: attendi che chi ospita crei la sessione");
                    return;
                }

                Session = await MultiplayerService.Instance.JoinSessionByIdAsync(results.Sessions[0].Id);
                Hook();
                Done($"collegato all'aula '{sessionName}'");
            }
            catch (Exception e) { Fail("ingresso fallito: " + e.Message); }
        }

        public async Task Leave()
        {
            if (Session == null) return;
            try { await Session.LeaveAsync(); }
            catch (Exception e) { Debug.LogWarning($"[VrSession] uscita: {e.Message}"); }
            Session = null;
            Current = Phase.Idle;
            Raise();
        }

        // ---- interni -------------------------------------------------------------------------------

        private async Task<bool> Prepare()
        {
            if (Current == Phase.Working || Current == Phase.InSession) return false;
            Current = Phase.Working; LastError = ""; Raise();
            try
            {
                if (UnityServices.State != ServicesInitializationState.Initialized)
                    await UnityServices.InitializeAsync();
                if (!AuthenticationService.Instance.IsSignedIn)
                    await AuthenticationService.Instance.SignInAnonymouslyAsync();
                return true;
            }
            catch (Exception e) { Fail("servizi non disponibili: " + e.Message); return false; }
        }

        private void Hook()
        {
            if (Session == null) return;
            Session.PlayerJoined += id => { Debug.Log($"[VrSession] entrato: {id}"); Raise(); };
            Session.PlayerLeaving += id => { Debug.Log($"[VrSession] uscito: {id}"); Raise(); };
        }

        private void Done(string msg)
        {
            Current = Phase.InSession; LastError = "";
            Debug.Log($"[VrSession] {msg} · ruolo {LocalRole}");
            Raise();
        }

        private void Fail(string msg)
        {
            Current = Phase.Failed; LastError = msg;
            Debug.LogError($"[VrSession] {msg}");
            Raise();
        }

        private void Raise() => OnStateChanged?.Invoke();
    }
}
