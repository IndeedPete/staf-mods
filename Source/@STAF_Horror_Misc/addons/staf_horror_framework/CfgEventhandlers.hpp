class Extended_Respawn_EventHandlers {
  class CAManBase {
    class STAF_CAManBase_respawn_eh {
      Respawn = "_this call STAF_Horror_fnc_InfectionEh;";
    };
  };
};

class Extended_PreInit_EventHandlers {
    STAF_Horror_PreInit = call compile preprocessFileLineNumbers "\staf_horror_framework\XEH_preInit.sqf";
};

class Extended_PostInit_EventHandlers {
    STAF_Horror_postInit = call compile preprocessFileLineNumbers "\staf_horror_framework\XEH_postInit.sqf";
};