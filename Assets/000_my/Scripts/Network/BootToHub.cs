using UnityEngine;
using UnityEngine.SceneManagement;

namespace Artemis.Session
{
    /// <summary>
    /// Scena di AVVIO: fa partire l'app e passa subito all'hub (la piazza). Non viene piu'
    /// rivisitata.
    ///
    /// Perche' una scena a parte invece di partire dalla piazza: il NetworkManager va in una
    /// scena caricata UNA VOLTA SOLA. Si conserva da se' fra un cambio scena e l'altro, ma se
    /// stesse nella piazza ogni ritorno in piazza ne creerebbe un secondo — due gestori della
    /// rete nella stessa app, con errori che compaiono solo al secondo giro. Per la stessa
    /// ragione accanto a lui sta SessionBootstrap, e non nel prefab VrApp.
    ///
    /// Caricamento ASINCRONO, come in PlaceFlow: un caricamento sincrono congela il primo
    /// fotogramma, e in visore un blocco all'avvio sembra un'app piantata.
    ///
    /// Da mettere su un oggetto della scena Base, che deve essere la PRIMA in Build Profiles.
    /// In Editor il Play va avviato da Base: partendo dalla piazza il NetworkManager non c'e'.
    /// </summary>
    public class BootToHub : MonoBehaviour
    {
        [Tooltip("Nome ESATTO della scena hub in Build Profiles.")]
        [SerializeField] private string hubScene = "Piazza";

        private void Start()
        {
            Debug.Log($"[BootToHub] avvio: passo a '{hubScene}'.");
            var op = SceneManager.LoadSceneAsync(hubScene, LoadSceneMode.Single);
            if (op == null)
                Debug.LogError($"[BootToHub] scena '{hubScene}' non trovata: e' in Build Profiles?");
        }
    }
}
