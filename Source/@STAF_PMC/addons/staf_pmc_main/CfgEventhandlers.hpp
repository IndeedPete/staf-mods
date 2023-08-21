class Extended_Respawn_EventHandlers {
  class CAManBase {
    class STAF_CAManBase_respawn_eh {
      Respawn = "_this call STAF_PMC_fnc_respawn_equipment;";
    };
  };
};

class Extended_PreInit_EventHandlers {
    STAF_PMC_PreInit = call compile preprocessFileLineNumbers "\staf_pmc_main\XEH_preInit.sqf";
};

class Extended_PostInit_EventHandlers {
    STAF_PMC_postInit = call compile preprocessFileLineNumbers "\staf_pmc_main\XEH_postInit.sqf";
};