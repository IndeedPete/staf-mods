class Extended_Respawn_EventHandlers {
  class CAManBase {
    class STAF_CAManBase_respawn_eh {
      Respawn = "_this call STAF_fnc_respawn_equipment;";
    };
  };
};

class Extended_PreInit_EventHandlers {
    STAF_PreInit = call compile preprocessFileLineNumbers "\staf_framework\XEH_preInit.sqf";
};

class Extended_PostInit_EventHandlers {
    STAF_postInit = call compile preprocessFileLineNumbers "\staf_framework\XEH_postInit.sqf";
};