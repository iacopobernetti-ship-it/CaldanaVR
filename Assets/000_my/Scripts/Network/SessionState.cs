using System;
using Unity.Collections;
using Unity.Netcode;
using UnityEngine;

namespace Artemis.Session
{
    /// <summary>
    /// L'unica verita' condivisa: chi ospita, e sotto quale scenario climatico si sta guardando il
    /// borgo.
    ///
    /// Versione ridotta rispetto a quella di SilvoVR, che portava anche inventario forestale,
    /// proposte, martellata e turni di abbattimento: qui non c'e' nulla di tutto questo. Resta lo
    /// SCHEMA, che e' la parte che vale.
    ///
    /// TOPOLOGIA HOST. Chi ospita e' il server, e ne discendono gratuitamente tre cose che
    /// altrimenti andrebbero difese a mano: solo lui scrive le NetworkVariable (permesso di
    /// scrittura Server, che e' il default), solo lui cambia scena
    /// (`NetworkManager.SceneManager.LoadScene` e' server-only), e gli altri devono passare da RPC
    /// per chiedere qualcosa. La regola "comanda uno solo" e' imposta dal trasporto, non dalla
    /// buona volonta' del codice.
    ///
    /// COSA NON STA QUI, di proposito: il LUOGO corrente. Lo si potrebbe replicare, ma sarebbe una
    /// seconda verita' da tenere allineata alla prima — la scena caricata, che NGO sincronizza
    /// gia' da se' anche a chi si collega tardi. Il luogo si legge da `PlaceFlow.CurrentScene`.
    ///
    /// Va su un prefab con NetworkObject, dichiarato nella Network Prefabs list e spawnato da
    /// SessionBootstrap.
    /// </summary>
    public class SessionState : NetworkBehaviour
    {
        public static SessionState Instance { get; private set; }
        public static event Action OnReady;

        // ---- ruolo ---------------------------------------------------------------------------

        public readonly NetworkVariable<ulong> HostClientId = new NetworkVariable<ulong>(ulong.MaxValue);

        public bool HostAssigned => HostClientId.Value != ulong.MaxValue;
        public bool IAmHost => IsSpawned && NetworkManager != null &&
                               HostClientId.Value == NetworkManager.LocalClientId;

        // ---- clima condiviso -------------------------------------------------------------------

        /// <summary>
        /// Scenario e periodo scelti da chi ospita. Viaggiano in rete per una ragione pratica: chi
        /// partecipa NON deve interrogare il servizio climatico — dieci visori sullo stesso
        /// endpoint sono dieci richieste identiche — ma deve vedere gli stessi numeri, altrimenti
        /// due persone guardano la stessa parete e leggono temperature diverse.
        /// </summary>
        public readonly NetworkVariable<FixedString32Bytes> Scenario =
            new NetworkVariable<FixedString32Bytes>("ssp245");
        public readonly NetworkVariable<int> StartYear = new NetworkVariable<int>(2041);
        public readonly NetworkVariable<int> EndYear = new NetworkVariable<int>(2060);

        /// <summary>Giorno dell'anno e ora simulati, se l'app li espone come comando.</summary>
        public readonly NetworkVariable<int> DayOfYear = new NetworkVariable<int>(196);
        public readonly NetworkVariable<float> HourOfDay = new NetworkVariable<float>(14f);

        /// <summary>Vero quando chi ospita ha gia' pubblicato una scelta vera.</summary>
        public readonly NetworkVariable<bool> HasClimate = new NetworkVariable<bool>(false);

        // ---- ciclo di vita -----------------------------------------------------------------------

        public override void OnNetworkSpawn()
        {
            Instance = this;
            // Chi ospita e' la guida. Lo si scrive una volta sola, dal server.
            if (IsServer && !HostAssigned) HostClientId.Value = NetworkManager.LocalClientId;
            OnReady?.Invoke();
        }

        public override void OnNetworkDespawn() { if (Instance == this) Instance = null; }

        // ---- scritture di chi ospita --------------------------------------------------------------

        public void SetClimate(string scenario, int startYear, int endYear)
        {
            if (!IsServer) return;
            Scenario.Value = scenario ?? "ssp245";
            StartYear.Value = startYear;
            EndYear.Value = endYear;
            HasClimate.Value = true;
        }

        public void SetMoment(int dayOfYear, float hourOfDay)
        {
            if (!IsServer) return;
            DayOfYear.Value = Mathf.Clamp(dayOfYear, 1, 366);
            HourOfDay.Value = Mathf.Repeat(hourOfDay, 24f);
        }
    }
}
