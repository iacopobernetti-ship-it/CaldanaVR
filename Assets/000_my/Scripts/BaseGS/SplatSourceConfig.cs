using UnityEngine;

namespace Artemis.Vr
{
    /// <summary>
    /// Da dove leggere gli splat, deciso in UN SOLO POSTO per tutto il progetto.
    ///
    /// Perche' un asset e non un campo per scena: la sorgente e' una proprieta' della BUILD, non
    /// dell'area. Ripetuta nei quattro LCCRendererVR diventa un valore serializzato per scena —
    /// la trappola piu' cara del progetto, quella per cui una scena resta indietro e il sintomo
    /// si manifesta solo la' dentro. E soprattutto SplatInstaller, che gira nella Base prima che
    /// qualunque area sia caricata, non avrebbe nessun componente da interrogare: l'informazione
    /// deve esistere PRIMA delle scene che la usano.
    ///
    /// DUE SORGENTI, una per il visore e una per l'Editor. In Editor persistentDataPath e' una
    /// cartella del PC (AppData/LocalLow/...) che nessuno riempie: con la sola sorgente
    /// "PersistentData" lo splat sparirebbe dall'Editor, e con lui il collaudo in Editor che ha
    /// reso veloce tutto il lavoro fin qui. In Editor invece StreamingAssets e' una cartella vera,
    /// e contiene gia' gli stessi file che finiranno nell'apk: si legge direttamente da li'.
    ///
    /// Come si crea, una volta sola:
    ///   Project → tasto destro → Create → Artemis → Splat Source Config
    /// Il file DEVE stare in una cartella chiamata "Resources" (per esempio
    /// Assets/000_my/Resources/) e chiamarsi SplatSourceConfig, perche' e' cosi' che viene
    /// ritrovato a runtime senza doverlo agganciare a mano in ogni scena.
    /// </summary>
    [CreateAssetMenu(menuName = "Artemis/Splat Source Config", fileName = "SplatSourceConfig")]
    public class SplatSourceConfig : ScriptableObject
    {
        /// Nome del file dentro Resources. Cambiarlo qui e nel nome dell'asset insieme.
        public const string ResourceName = "SplatSourceConfig";

        [Tooltip("HttpUrl = gli splat si scaricano dall'URL scritto in ogni scena (nessuna " +
                 "installazione sul visore).\n" +
                 "PersistentData = si leggono dal disco del visore; SplatInstaller li copia " +
                 "dall'apk al primo avvio.\n" +
                 "StreamingAssets = solo Editor/PC.")]
        public LCCRendererVR.SplatSource source = LCCRendererVR.SplatSource.HttpUrl;

        [Tooltip("Sorgente usata in EDITOR (Play Mode). StreamingAssets = legge direttamente dalla " +
                 "cartella del progetto, senza installazione. HttpUrl = come prima, dalla rete.")]
        public LCCRendererVR.SplatSource editorSource = LCCRendererVR.SplatSource.StreamingAssets;

        private static SplatSourceConfig cached;
        private static bool searched;

        /// <summary>
        /// L'asset, se c'e'. Ritorna null senza drammi quando non esiste: in quel caso ciascun
        /// componente usa il proprio campo, cioe' il comportamento di prima. Chi aggiunge questa
        /// configurazione a progetto avviato non deve riconfigurare nulla per far ripartire tutto.
        /// </summary>
        public static SplatSourceConfig Get()
        {
            if (searched) return cached;
            searched = true;
            cached = Resources.Load<SplatSourceConfig>(ResourceName);
            if (cached == null)
                Debug.Log("[SplatSourceConfig] nessun asset in Resources: ogni scena usa il " +
                          "proprio campo Source.");
            else
                Debug.Log($"[SplatSourceConfig] sorgente di progetto: {Effective(cached)} " +
                          $"({(Application.isEditor ? "Editor" : "build")}).");
            return cached;
        }

        /// <summary>Sorgente da usare, con ripiego sul valore locale quando l'asset non c'e'.</summary>
        public static LCCRendererVR.SplatSource Resolve(LCCRendererVR.SplatSource fallback)
        {
            var c = Get();
            return c != null ? Effective(c) : fallback;
        }

        /// In Editor vale editorSource, in build source. Application.isEditor e non #if
        /// UNITY_EDITOR, di proposito: e' la stessa cosa a runtime, ma il codice resta uno solo e
        /// non si rischia che una delle due strade smetta di compilare senza che ce ne si accorga.
        private static LCCRendererVR.SplatSource Effective(SplatSourceConfig c) =>
            Application.isEditor ? c.editorSource : c.source;
    }
}
