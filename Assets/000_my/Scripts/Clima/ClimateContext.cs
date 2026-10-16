using System;
using Unity.Netcode;
using UnityEngine;
using Artemis.Session;

namespace Artemis.Climate
{
    /// <summary>
    /// Le scelte che la guida fa per tutti (scheda Scenario): data, scenario, ore della
    /// simulazione termica. Viaggiano in rete come UN blocco unico (SessionState).
    /// I parametri degli indici (tipo, profilo, finestra) NON stanno qui: sono di ciascun visore.
    /// Struttura semplice di soli numeri: si copia byte per byte, senza codice di serializzazione.
    /// </summary>
    [Serializable]
    public struct ClimateChoice : INetworkSerializeByMemcpy, IEquatable<ClimateChoice>
    {
        public int Year, Month, Day, Scenario;                    // data e scenario
        public int HoursMask;                                      // ore: bit h = ora h

        public bool Equals(ClimateChoice o) =>
            Year == o.Year && Month == o.Month && Day == o.Day && Scenario == o.Scenario &&
            HoursMask == o.HoursMask;
    }

    /// <summary>
    /// Un "Apply" della guida: le scelte di quel momento piu' un numero progressivo. Ogni visore
    /// esegue la richiesta quando vede un numero nuovo. Si conservano le scelte DEL MOMENTO e non
    /// si rileggono quelle correnti: se la guida, dopo Apply, sposta l'anno senza riapplicare,
    /// chi entra in ritardo deve vedere i colori che vedono gli altri, non quelli del nuovo anno.
    /// </summary>
    [Serializable]
    public struct ClimateRequest : INetworkSerializeByMemcpy, IEquatable<ClimateRequest>
    {
        public int Serial;              // 0 = nessuna richiesta ancora
        public ClimateChoice Choice;

        public bool Equals(ClimateRequest o) => Serial == o.Serial && Choice.Equals(o.Choice);
    }

    /// <summary>
    /// Stato climatico dell'app: date, scenario, parametri degli indici, ore della simulazione
    /// termica, e le ultime due richieste (indici e temperature).
    ///
    /// STATICO e non un componente in scena: la scelta deve sopravvivere al cambio di luogo.
    /// Con il cambio scena tradizionale ogni componente rinasce, e un MonoBehaviour ripartirebbe
    /// dai valori dell'Inspector a ogni via.
    ///
    /// Le scelte si fanno TUTTE nella scheda Scenario (ScenarioPanel): scenario, data, ore. Le
    /// schede Climate e Thermal ne leggono cio' che serve loro — gli indici la data e lo
    /// scenario, le temperature anche le ore — e aggiungono solo i propri parametri.
    ///
    /// MULTIPLAYER. Qui sta la regola "comanda la guida":
    ///  - data, scenario, ore e l'Apply delle TEMPERATURE si modificano solo se
    ///    VrSession.CanCommand (guida, o da soli); per i visitatori i metodi non fanno nulla, e
    ///    i pannelli ne spengono i pulsanti;
    ///  - SessionState copia di continuo questo stato dalla guida a tutti (ApplyRemote);
    ///  - gli INDICI sono di ciascuno: parametri (WindowDays, WindowMode, IndexType, Profile) e
    ///    Apply restano sul visore. Ognuno interroga quando vuole, con la data e lo scenario
    ///    della guida e con i propri parametri. La richiesta degli indici non viaggia in rete.
    /// I pannelli non sanno nulla della rete: leggono di qui e chiedono di qui.
    ///
    /// IL GIORNO resta sempre una data vera: cambiando mese o anno si riporta all'ultimo giorno
    /// del mese se serve (31/03 -> un mese avanti -> 30/04), invece di produrre un 31/04 che
    /// il servizio rifiuterebbe.
    /// </summary>
    public static class ClimateContext
    {
        /// Periodo coperto dall'API FutureClimate (documento CaldanaMR, §4.1).
        public const int MinYear = 2015;
        public const int MaxYear = 2099;

        public static readonly string[] ScenarioNames = { "ssp126", "ssp245", "ssp585" };
        /// Nomi da mostrare nella HUD, nello stesso ordine di ScenarioNames.
        public static readonly string[] ScenarioLabels = { "SSP1-2.6", "SSP2-4.5", "SSP5-8.5" };
        public static readonly string[] WindowModes = { "centered", "backward", "forward" };

        private static ClimateChoice c = new ClimateChoice
        {
            Year = 2050, Month = 8, Day = 15, Scenario = 2,
            HoursMask = 1 << 14     // di partenza: le 14
        };

        public static int Year => c.Year;
        public static int Month => c.Month;
        public static int Day => c.Day;
        public static int ScenarioIndex => c.Scenario;
        // Parametri degli indici: LOCALI, mai in rete.
        public static int WindowDays { get; private set; } = 30;
        public static int WindowMode { get; private set; } = 0;
        public static int IndexType { get; private set; } = 0;   // 0 = heritage, 1 = tourism
        public static int Profile { get; private set; } = 0;
        public static int HoursMask => c.HoursMask;

        public static string ScenarioApiId => ScenarioId(c.Scenario);
        public static string ScenarioId(int index) =>
            ScenarioNames[Mathf.Clamp(index, 0, ScenarioNames.Length - 1)];
        public static string ScenarioLabel(int index) =>
            ScenarioLabels[Mathf.Clamp(index, 0, ScenarioLabels.Length - 1)];

        /// <summary>Data e scenario in una riga: "SSP5-8.5 · 15/08/2050".</summary>
        public static string Describe(ClimateChoice ch) =>
            $"{ScenarioLabel(ch.Scenario)}  ·  {ch.Day:00}/{ch.Month:00}/{ch.Year}";

        /// <summary>Ultima richiesta di indici e ultima simulazione termica (Serial 0 = nessuna).</summary>
        public static ClimateRequest IndicesRequest { get; private set; }
        public static ClimateRequest ThermalRequest { get; private set; }

        /// <summary>Scatta a ogni cambio delle scelte, locale o arrivato dalla guida.</summary>
        public static event Action OnChanged;

        /// <summary>Chi puo' modificare: la guida, o chiunque quando si lavora da soli.</summary>
        public static bool CanEdit => VrSession.CanCommand;

        public static ClimateChoice Snapshot() => c;

        // ---------------------------------------------------------------- modifiche (solo guida)

        public static void SetScenario(int index)
        {
            if (!CanEdit) return;
            c.Scenario = Mathf.Clamp(index, 0, ScenarioNames.Length - 1);
            Changed();
        }

        public static void ShiftYear(int delta)
        {
            if (!CanEdit) return;
            c.Year = Mathf.Clamp(c.Year + delta, MinYear, MaxYear);
            ClampDay();
            Changed();
        }

        /// Il mese GIRA dentro l'anno senza cambiarlo: andare da gennaio a dicembre con un
        /// passo indietro e' cio' che ci si aspetta da un selettore di mese.
        public static void ShiftMonth(int delta)
        {
            if (!CanEdit) return;
            c.Month = ((c.Month - 1 + delta) % 12 + 12) % 12 + 1;
            ClampDay();
            Changed();
        }

        /// Il giorno GIRA dentro il mese, come il mese dentro l'anno.
        public static void ShiftDay(int delta)
        {
            if (!CanEdit) return;
            int n = DateTime.DaysInMonth(c.Year, c.Month);
            c.Day = ((c.Day - 1 + delta) % n + n) % n + 1;
            Changed();
        }

        private static void ClampDay() =>
            c.Day = Mathf.Clamp(c.Day, 1, DateTime.DaysInMonth(c.Year, c.Month));

        // ---------------------------------------------------------------- indici (di ciascuno)
        // Niente controllo CanEdit: ogni visore sceglie i propri.

        public static void ShiftWindow(int delta)
        {
            WindowDays = Mathf.Clamp(WindowDays + delta, 1, 366);   // limiti API
            Changed();
        }

        public static void CycleWindowMode()
        {
            WindowMode = (WindowMode + 1) % WindowModes.Length;
            Changed();
        }

        public static void SetIndexType(int type)
        {
            IndexType = Mathf.Clamp(type, 0, 1);
            Changed();
        }

        public static void CycleProfile(int count)
        {
            Profile = (Profile + 1) % Mathf.Max(1, count);
            Changed();
        }

        // ---------------------------------------------------------------- ore (solo guida)

        public static bool HourSelected(int hour) => (c.HoursMask & (1 << hour)) != 0;

        /// Almeno un'ora resta sempre scelta: una simulazione senza ore non ha senso.
        public static void ToggleHour(int hour)
        {
            if (!CanEdit || hour < 0 || hour > 23) return;
            int m = c.HoursMask ^ (1 << hour);
            if (m == 0) return;
            c.HoursMask = m;
            Changed();
        }

        /// <summary>Ore della maschera, in ordine crescente.</summary>
        public static int[] Hours(int mask)
        {
            int n = 0;
            for (int h = 0; h < 24; h++) if ((mask & (1 << h)) != 0) n++;
            var hours = new int[n];
            int j = 0;
            for (int h = 0; h < 24; h++) if ((mask & (1 << h)) != 0) hours[j++] = h;
            return hours;
        }

        /// <summary>Apply della scheda Climate: LOCALE, lo preme chiunque. Usa data e scenario
        /// correnti (quelli della guida, in sessione).</summary>
        public static void RequestIndices()
        {
            IndicesRequest = new ClimateRequest { Serial = IndicesRequest.Serial + 1, Choice = c };
        }

        /// <summary>Apply della scheda Thermal: solo la guida; tutti i visori simuleranno.</summary>
        public static void RequestThermal()
        {
            if (!CanEdit) return;
            ThermalRequest = new ClimateRequest { Serial = ThermalRequest.Serial + 1, Choice = c };
        }

        // ---------------------------------------------------------------- dalla guida (rete)

        /// <summary>
        /// Chiamato da SessionState sui visitatori: lo stato della guida sostituisce il proprio.
        /// Scavalca CanEdit di proposito: e' il solo modo in cui un visitatore cambia queste
        /// scelte. Un anno a 0 vuol dire che la guida non ha ancora pubblicato nulla: si ignora.
        /// </summary>
        public static void ApplyRemote(ClimateChoice choice, ClimateRequest thermal)
        {
            if (choice.Year == 0) return;

            ThermalRequest = thermal;

            if (choice.Equals(c)) return;
            c = choice;
            Changed();
        }

        private static void Changed() => OnChanged?.Invoke();
    }
}
