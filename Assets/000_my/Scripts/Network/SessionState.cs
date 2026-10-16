using System;
using Unity.Netcode;
using UnityEngine;
using Artemis.Climate;

namespace Artemis.Session
{
    /// <summary>
    /// L'unica verita' condivisa: chi ospita, e le scelte climatiche della guida.
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
    /// CLIMA CONDIVISO. Viaggiano le SCELTE della guida, non i risultati: data, scenario e ore
    /// (scheda Scenario) e l'Apply delle temperature, con un numero progressivo. Gli indici
    /// climatici (parametri e Apply) restano di ciascun visore. Ogni visore
    /// interroga i servizi da se' con gli stessi parametri e ottiene gli stessi numeri — come in
    /// CaldanaMR. I risultati non potrebbero viaggiare comunque: le temperature sono decine di
    /// migliaia di valori per faccia, e ogni luogo ha la sua mesh e il suo modello sul server.
    /// Da qui viene anche il "riparte da sola nel nuovo luogo": arrivando in un luogo, ogni
    /// visore esegue l'ultima simulazione termica della guida sulla mesh di QUEL luogo.
    ///
    /// La copia e' continua (Update), non a eventi: chi entra in ritardo riceve lo stato com'e'
    /// e lo applica al primo fotogramma, senza un percorso di codice a parte. NGO trasmette una
    /// NetworkVariable solo quando cambia, quindi la copia continua non costa banda.
    ///
    /// COSA NON STA QUI, di proposito: il LUOGO corrente. Lo si potrebbe replicare, ma sarebbe una
    /// seconda verita' da tenere allineata alla prima — la scena caricata, che NGO sincronizza
    /// gia' da se' anche a chi si collega tardi. Il luogo si legge da `PlaceFlow.CurrentScene`.
    /// E nemmeno cio' che e' di ciascuno: parametri degli indici, pagine dei risultati,
    /// colorazione accesa/spenta, opacita', palette, scala, sonda termica, scheda Tuning restano
    /// su ogni visore.
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

        // ---- clima condiviso (scrive solo la guida) ---------------------------------------------

        /// <summary>Scelte correnti della guida: i visitatori le vedono mentre le fa.</summary>
        public readonly NetworkVariable<ClimateChoice> Choice = new NetworkVariable<ClimateChoice>();
        /// <summary>Ultimo Apply della scheda Thermal.</summary>
        public readonly NetworkVariable<ClimateRequest> Thermal = new NetworkVariable<ClimateRequest>();

        // ---- ciclo di vita -----------------------------------------------------------------------

        public override void OnNetworkSpawn()
        {
            Instance = this;
            // Chi ospita e' la guida. Lo si scrive una volta sola, dal server.
            if (IsServer && !HostAssigned) HostClientId.Value = NetworkManager.LocalClientId;
            OnReady?.Invoke();
        }

        public override void OnNetworkDespawn() { if (Instance == this) Instance = null; }

        private void Update()
        {
            if (!IsSpawned) return;

            if (IsServer)
            {
                // Guida: pubblica. Si scrive solo cio' che e' cambiato.
                var choice = ClimateContext.Snapshot();
                if (!Choice.Value.Equals(choice)) Choice.Value = choice;

                var th = ClimateContext.ThermalRequest;
                if (!Thermal.Value.Equals(th)) Thermal.Value = th;
            }
            else
            {
                // Visitatore: adotta lo stato della guida.
                ClimateContext.ApplyRemote(Choice.Value, Thermal.Value);
            }
        }
    }
}
