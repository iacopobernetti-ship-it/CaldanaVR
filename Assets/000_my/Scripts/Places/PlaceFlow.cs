using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Artemis.Places
{
    /// <summary>
    /// Cambio di LUOGO = cambio di SCENA, con `LoadSceneMode.Single`.
    ///
    /// Un luogo si porta tutto cio' che gli serve e lo ricostruisce: e' l'architettura decisa al
    /// §3 del documento di passaggio. Il caricamento di una scena nuova fa il teardown vero del
    /// renderer LCC, che il riuso `Dispose + Load` a caldo non garantisce su Quest.
    ///
    /// Il caricamento e' ASINCRONO: un `LoadScene` sincrono congela il frame, e in visore un
    /// congelamento e' un pugno nello stomaco. Ogni transizione e' ESPLICITA e ha un progresso
    /// osservabile, perche' con gli splat i tempi non sono garantiti e una schermata ferma senza
    /// spiegazione fa credere che l'app sia bloccata.
    ///
    /// IL RAMO DI RETE C'E' GIA', ANCHE SE L'APP NASCE SINGLE PLAYER. Sono una decina di righe, e
    /// scriverle dopo significherebbe rimettere le mani nel punto da cui dipende tutto il resto.
    /// Quando una sessione non c'e', quel ramo semplicemente non viene percorso.
    ///
    /// In sessione comanda chi ospita: `NetworkManager.SceneManager.LoadScene` e' server-only e
    /// carica su TUTTI, host compreso — un solo percorso di codice, quindi la guida non puo'
    /// vedere qualcosa di diverso dagli altri, ed e' NGO a portare anche chi si collega tardi.
    ///
    /// Va su un oggetto presente in ogni scena (tipicamente il prefab dell'app).
    /// </summary>
    public class PlaceFlow : MonoBehaviour
    {
        [Serializable]
        public class PlaceDef
        {
            [Tooltip("Nome ESATTO della scena in Build Settings.")]
            public string sceneName = "";
            [Tooltip("Etichetta sul pulsante. Vuota = sceneName.")]
            public string label = "";

            public string Label => string.IsNullOrWhiteSpace(label) ? sceneName : label;
        }

        [Tooltip("L'hub: la piazza fotosferica, da cui si smistano i luoghi.")]
        [SerializeField] private PlaceDef hub = new PlaceDef { sceneName = "Piazza", label = "Piazza" };

        [Tooltip("I luoghi, nell'ordine dei pulsanti.")]
        [SerializeField] private List<PlaceDef> places = new List<PlaceDef>();

        public static PlaceFlow Instance { get; private set; }

        /// <summary>
        /// Il luogo da cui si e' arrivati. STATICO di proposito: l'istanza muore col cambio scena
        /// — niente persistenza, §3 — mentre questo dato deve sopravvivere proprio a quel
        /// passaggio. E' l'unico stato che attraversa le scene, ed e' una stringa.
        /// </summary>
        public static string PreviousPlace { get; private set; } = "";

        /// <summary>Chi puo' cambiare luogo adesso: chi ospita, o chiunque fuori sessione.</summary>
        public static bool CanCommand
        {
            get
            {
                var nm = NetworkManager.Singleton;
                return nm == null || !nm.IsListening || nm.IsServer;
            }
        }

        public event Action<string> OnLoadStarted;
        public event Action<float> OnLoadProgress;
        public event Action<string> OnLoadFinished;

        public bool IsBusy { get; private set; }
        public string CurrentScene => SceneManager.GetActiveScene().name;
        public PlaceDef Hub => hub;
        public IReadOnlyList<PlaceDef> Places => places;
        public bool IsOnHub => CurrentScene == hub.sceneName;
        public bool IsOnPlace => !IsOnHub && Declared(CurrentScene);

        // ---- ciclo di vita ---------------------------------------------------------------------

        private void Awake()
        {
            // Il piu' recente PRENDE il posto, non si suicida. Il pattern opposto
            // (if Instance != null -> Destroy(this)) presuppone che Instance sia sempre valido; ma
            // senza persistenza i componenti si ricostruiscono a ogni scena, e se Instance punta
            // ancora a quello morto della scena precedente il nuovo si distrugge da solo — e la
            // classe resta senza istanza VIVA, silenziosamente, per il resto della sessione. Su
            // Quest uscire alla home SOSPENDE l'app: le statiche sopravvivono, quindi nemmeno
            // riaprire rimetterebbe le cose a posto.
            Instance = this;
        }

        private void OnDestroy() { if (Instance == this) Instance = null; }

        private void OnEnable()  { SceneManager.sceneLoaded += OnSceneLoaded; }
        private void OnDisable() { SceneManager.sceneLoaded -= OnSceneLoaded; }

        /// Ricorda la provenienza a OGNI cambio scena, non solo quando si preme il pulsante: in
        /// sessione i partecipanti non lo premono mai — li porta chi ospita — e senza questo non
        /// saprebbero da dove sono arrivati.
        private void OnSceneLoaded(Scene s, LoadSceneMode m)
        {
            if (Declared(s.name)) PreviousPlace = s.name;
        }

        // ---- comandi ---------------------------------------------------------------------------

        public void GoToHub() => GoTo(hub.sceneName);
        public void GoToPlace(string sceneName) => GoTo(sceneName);

        public void GoToPlaceIndex(int index)
        {
            if (index < 0 || index >= places.Count)
            { Debug.LogWarning($"[PlaceFlow] nessun luogo di indice {index} (ne sono dichiarati {places.Count})."); return; }
            GoTo(places[index].sceneName);
        }

        private bool Declared(string sceneName)
        {
            if (string.Equals(sceneName, hub.sceneName, StringComparison.OrdinalIgnoreCase)) return true;
            return places.Exists(p => string.Equals(p.sceneName, sceneName, StringComparison.OrdinalIgnoreCase));
        }

        private void GoTo(string sceneName)
        {
            if (string.IsNullOrWhiteSpace(sceneName)) return;
            if (IsBusy) { Debug.LogWarning($"[PlaceFlow] caricamento gia' in corso — '{sceneName}' ignorato."); return; }
            if (CurrentScene == sceneName) return;

            if (!Declared(sceneName))
            {
                Debug.LogError($"[PlaceFlow] scena '{sceneName}' non dichiarata (ne' hub ne' luogo).");
                return;
            }

            // ---- in sessione comanda chi ospita -------------------------------------------------
            var nm = NetworkManager.Singleton;
            if (nm != null && nm.IsListening)
            {
                if (!nm.IsServer)
                {
                    // Gli altri non chiamano mai questo metodo (la scheda non esiste per loro), ma
                    // se ci arrivassero da un'altra strada vanno fermati qui: due client che
                    // caricano scene diverse sono due visite separate.
                    Debug.Log("[PlaceFlow] solo chi ospita cambia luogo.");
                    return;
                }

                OnLoadStarted?.Invoke(sceneName);
                var status = nm.SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
                if (status != SceneEventProgressStatus.Started)
                    Debug.LogError($"[PlaceFlow] LoadScene di rete '{sceneName}' fallito: {status}");
                return;
            }

            StartCoroutine(LoadRoutine(sceneName));
        }

        private IEnumerator LoadRoutine(string sceneName)
        {
            IsBusy = true;
            OnLoadStarted?.Invoke(sceneName);
            OnLoadProgress?.Invoke(0f);
            Debug.Log($"[PlaceFlow] --- cambio luogo: {CurrentScene} -> {sceneName} ---");

            var op = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Single);
            if (op == null)
            {
                Debug.LogError($"[PlaceFlow] LoadSceneAsync('{sceneName}') nullo: scena in Build Settings?");
                IsBusy = false;
                yield break;
            }

            while (!op.isDone)
            {
                // AsyncOperation.progress arriva a 0.9 e poi salta a done: normalizzato a 0..1.
                OnLoadProgress?.Invoke(Mathf.Clamp01(op.progress / 0.9f));
                yield return null;
            }

            OnLoadProgress?.Invoke(1f);
            IsBusy = false;
            Debug.Log($"[PlaceFlow] scena attiva: {CurrentScene}");
            OnLoadFinished?.Invoke(sceneName);

            // NOTA: questo segna la fine del caricamento SCENA, non dello SPLAT — la nuvola
            // continua a scaricarsi in async dentro la scena nuova. Il player intanto sta gia' su
            // un collider solido.
        }

        // ---- scorciatoie da EDITOR ---------------------------------------------------------------
        // Cambiare luogo senza toccare la UI: clic destro sull'intestazione del componente, in Play
        // mode. Collauda il flusso INDIPENDENTEMENTE dall'input XR — se i pulsanti non rispondono,
        // queste funzionano comunque e isolano "il flusso e' rotto" da "l'input e' rotto".

        [ContextMenu("Vai a: hub")]     private void CtxHub() => GoToHub();
        [ContextMenu("Vai a: luogo 1")] private void CtxP1() => GoToPlaceIndex(0);
        [ContextMenu("Vai a: luogo 2")] private void CtxP2() => GoToPlaceIndex(1);
        [ContextMenu("Vai a: luogo 3")] private void CtxP3() => GoToPlaceIndex(2);
        [ContextMenu("Vai a: luogo 4")] private void CtxP4() => GoToPlaceIndex(3);

        [ContextMenu("Stato: dove siamo")]
        private void CtxState() =>
            Debug.Log($"[PlaceFlow] scena attiva '{CurrentScene}' · occupato={IsBusy} · " +
                      $"luoghi dichiarati={places.Count} · hub='{hub.sceneName}' · comando={CanCommand}");
    }
}
