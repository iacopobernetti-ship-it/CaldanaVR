using System.Text;
using Unity.XR.CoreUtils;
using UnityEngine;

namespace Artemis.EditorTools
{
    /// <summary>
    /// SONDA TEMPORANEA — da rimuovere prima del pilot (aggiungila alla lista del §6).
    ///
    /// Fotografa ogni TELETRASPORTO del rig XR (salto orizzontale oltre jumpThreshold in un
    /// frame): posizione prima/dopo, stato del CharacterController, elenco delle scene caricate
    /// e se sotto il punto d'arrivo esiste davvero un suolo sul layer indicato. Fotografa anche
    /// l'INIZIO di una caduta, per datare l'evento accanto ai log di chi sposta il player.
    ///
    /// Perche' esiste: il player lo sposta XrRigPlacer, che LOGGA sempre la destinazione. Un
    /// TELETRASPORTO fotografato qui SENZA la riga gemella di XrRigPlacer viene da qualcun altro
    /// — un provider di locomozione XRI, un teleport, un componente del luogo in uscita — ed e'
    /// esattamente il caso che dall'interno non si riesce a diagnosticare.
    ///
    /// Va su SimTools nella scena Simulation, sull'istanza STUDENTE.
    /// Adattata a CaldanaMR: al posto dello stato del suolo generato riporta l'elenco delle
    /// SCENE CARICATE, che con il caricamento additivo e' l'informazione decisiva — un
    /// teletrasporto inspiegabile e' quasi sempre un componente del luogo in uscita che agisce
    /// ancora.
    ///
    /// Filtro logcat:  adb logcat -s Unity | grep RIGPROBE
    /// </summary>
    public class RigMoveProbe : MonoBehaviour
    {
        [Tooltip("Salto orizzontale (m) in un frame oltre il quale si fotografa. I movimenti di " +
                 "locomozione stanno sotto: a 90 fps anche correndo si resta sotto i 10 cm/frame.")]
        [SerializeField] private float jumpThreshold = 1.0f;

        [Tooltip("Layer del suolo da sondare nel punto d'arrivo (in Simulation: SimGround).")]
        [SerializeField] private LayerMask groundLayer = ~0;

        [Tooltip("Logga anche l'inizio di una CADUTA (Y che scende oltre questa soglia in un " +
                 "frame senza salto orizzontale): dice QUANDO si e' cominciato a precipitare.")]
        [SerializeField] private float fallThreshold = 0.5f;

        private XROrigin origin;
        private Vector3 lastPos;
        private bool hasLast;
        private bool fallLogged;

        private void LateUpdate()   // dopo tutti gli Update: vede la posizione di fine frame
        {
            if (origin == null)
            {
                origin = FindFirstObjectByType<XROrigin>();
                if (origin == null) return;
                lastPos = origin.transform.position;
                hasLast = true;
                Debug.Log($"[RIGPROBE] aggancio al rig '{origin.name}' a {Fmt(lastPos)}.");
                return;
            }

            Vector3 now = origin.transform.position;
            if (!hasLast) { lastPos = now; hasLast = true; return; }

            Vector2 dh = new Vector2(now.x - lastPos.x, now.z - lastPos.z);
            float dy = now.y - lastPos.y;

            if (dh.magnitude >= jumpThreshold)
            {
                Snapshot("TELETRASPORTO", lastPos, now);
                fallLogged = false;      // un nuovo salto riarma il rilevatore di caduta
            }
            else if (dy <= -fallThreshold && !fallLogged)
            {
                fallLogged = true;       // una sola foto per caduta, non una per frame
                Snapshot("INIZIO CADUTA", lastPos, now);
            }
            else if (dy > 0.01f)
            {
                fallLogged = false;      // risalito (riposato sul suolo): riarma
            }

            lastPos = now;
        }

        private void Snapshot(string evento, Vector3 from, Vector3 to)
        {
            var sb = new StringBuilder();
            sb.AppendLine($"[RIGPROBE] {evento}  frame {Time.frameCount}  t={Time.time:F2}s");
            sb.AppendLine($"  da {Fmt(from)}  a {Fmt(to)}  (salto orizz. " +
                          $"{Vector2.Distance(new Vector2(from.x, from.z), new Vector2(to.x, to.z)):F2} m)");

            // CharacterController: chi era al comando della gravita' in quel momento.
            var cc = origin.GetComponentInChildren<CharacterController>();
            sb.AppendLine($"  CharacterController: {(cc == null ? "ASSENTE" : cc.enabled ? "ATTIVO (gravita' in corso)" : "congelato")}");

            // In quale SCENA si trova il punto d'arrivo. Con le scene additive e' l'informazione
            // che manca piu' spesso: durante una transizione possono coesistere due luoghi, e un
            // teletrasporto "inspiegabile" e' quasi sempre un componente del luogo che sta
            // uscendo che agisce ancora.
            sb.AppendLine($"  Scene caricate: {LoadedScenes()}");

            // C'e' un suolo FISICO sotto il punto d'arrivo?
            bool hit = Physics.Raycast(new Vector3(to.x, to.y + 2f, to.z), Vector3.down,
                                       out var h, 200f, groundLayer);
            sb.AppendLine(hit
                ? $"  Suolo fisico sotto l'arrivo: SI a y={h.point.y:F2} ('{h.collider.name}', layer {LayerMask.LayerToName(h.collider.gameObject.layer)})"
                : "  Suolo fisico sotto l'arrivo: NO sul layer indicato");

            var nm = Unity.Netcode.NetworkManager.Singleton;
            sb.AppendLine($"  Ruolo: {(nm == null || !nm.IsListening ? "offline" : nm.IsServer ? "docente" : "studente")}");

            Debug.LogWarning(sb.ToString());
        }

        private static string Fmt(Vector3 v) => $"({v.x:F2}, {v.y:F2}, {v.z:F2})";

        private static string LoadedScenes()
        {
            var sb = new StringBuilder();
            for (int i = 0; i < UnityEngine.SceneManagement.SceneManager.sceneCount; i++)
            {
                var s = UnityEngine.SceneManagement.SceneManager.GetSceneAt(i);
                if (!s.isLoaded) continue;
                if (sb.Length > 0) sb.Append(" + ");
                sb.Append(s.name);
            }
            return sb.Length > 0 ? sb.ToString() : "(nessuna)";
        }
    }
}
