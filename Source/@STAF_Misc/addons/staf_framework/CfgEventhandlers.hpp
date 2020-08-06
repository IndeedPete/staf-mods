class Extended_Respawn_EventHandlers {
  class CAManBase {
    class STAF_CAManBase_respawn_eh {
      Respawn = "_this call STAF_fnc_respawn_equipment_EH;";
    };
  };
};

class Extended_Init_EventHandlers {
  class CAManBase {
    class STAF_CAManBase_Zeus_init_eh {
      Init = "_this call STAF_fnc_zeusactioninit;";
    };
  };
};

class Extended_PostInit_EventHandlers {
  class CAManBase {
    class STAF_CAManBase_Zeus_Admin_init_eh {
      Init = "_this call STAF_fnc_zeusactioninit_admin;";
    };
  };
};