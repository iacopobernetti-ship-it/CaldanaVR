using System;
using UnityEngine;

namespace Artemis.Climate
{
    /// <summary>
    /// Data e scenario climatico sotto cui si sta guardando il borgo: sostituisce il
    /// ThermalSimNetworkController di CaldanaMR (documento CaldanaMR, §5.2), che qui non esiste.
    ///
    /// STATICO e non un componente in scena: la scelta deve sopravvivere al cambio di luogo.
    /// Con il cambio scena tradizionale ogni componente rinasce, e un MonoBehaviour ripartirebbe
    /// dai valori dell'Inspector a ogni via — si sceglie il 2080 in piazza e in Street01 si
    /// ritrova il 2050. E' l'unico stato climatico, ed e' fatto di quattro numeri.
    ///
    /// GIORNO FISSO al 15, di proposito: con la finestra centrata di 30 giorni il 15 copre il
    /// mese, e non si rischiano date inesistenti come il 31/02. Tre pulsanti in meno in una HUD
    /// dove lo spazio e' poco.
    ///
    /// Se l'app diventera' multiplayer, chi partecipa leggera' questi valori da SessionState
    /// invece di sceglierli: e' questa classe il punto in cui la sostituzione avviene.
    /// </summary>
    public static class ClimateContext
    {
        /// Periodo coperto dall'API FutureClimate (documento CaldanaMR, §4.1).
        public const int MinYear = 2015;
        public const int MaxYear = 2099;

        public static readonly string[] ScenarioNames = { "ssp126", "ssp245", "ssp585" };

        public static int Year { get; private set; } = 2050;
        public static int Month { get; private set; } = 8;
        public static int Day => 15;
        public static int ScenarioIndex { get; private set; } = 2;

        public static string ScenarioApiId => ScenarioNames[Mathf.Clamp(ScenarioIndex, 0, ScenarioNames.Length - 1)];

        public static event Action OnChanged;

        public static void SetScenario(int index)
        {
            ScenarioIndex = Mathf.Clamp(index, 0, ScenarioNames.Length - 1);
            OnChanged?.Invoke();
        }

        public static void ShiftYear(int delta)
        {
            Year = Mathf.Clamp(Year + delta, MinYear, MaxYear);
            OnChanged?.Invoke();
        }

        /// Il mese GIRA dentro l'anno senza cambiarlo: andare da gennaio a dicembre con un
        /// passo indietro e' cio' che ci si aspetta da un selettore di mese, e spostare l'anno
        /// in silenzio sarebbe una sorpresa.
        public static void ShiftMonth(int delta)
        {
            Month = ((Month - 1 + delta) % 12 + 12) % 12 + 1;
            OnChanged?.Invoke();
        }
    }
}
