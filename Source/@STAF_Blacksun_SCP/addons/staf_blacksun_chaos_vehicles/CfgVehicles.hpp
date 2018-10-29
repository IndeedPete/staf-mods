class Eventhandlers;

class CfgVehicles {
  class rhs_tigr_m_vdv;
  class rhs_tigr_vdv;
  class rhs_tigr_sts_vdv;
  class rhsgref_BRDM2_HQ_vdv;
  class rhsgref_BRDM2UM_vdv;
  class rhs_kamaz5350_vdv;
  class rhs_kamaz5350_open_vdv;
  class RHS_Mi8mt_vdv;
  class RHS_Mi24V_vdv;
  class O_T_Boat_Transport_01_F;
  class C_Boat_Transport_02_F;

  //----------------------------------BLUFOR---------------------------------
    class STAF_Blacksun_Chaos_MRAP_Armed : rhs_tigr_m_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_MRAP_Armed.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_MRAP_FFV : rhs_tigr_sts_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_MRAP_FFV.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_MRAP : rhs_tigr_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_MRAP.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_Mi8 : RHS_Mi8mt_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Heli_Pilot";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_Mi8.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_Mi24 : RHS_Mi24V_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Heli_Pilot";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_Mi24.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_IFV_Armed : rhsgref_BRDM2_HQ_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_IFV_Armed.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_IFV : rhsgref_BRDM2UM_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_IFV.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_Truck : rhs_kamaz5350_open_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_Truck.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_Truck_Covered : rhs_kamaz5350_vdv {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_Truck_Covered.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Chaos_Rubberboat : O_T_Boat_Transport_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_Rubberboat.jpg";
    };

    class STAF_Blacksun_Chaos_RHIB : C_Boat_Transport_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_chaos";
        crew = "STAF_Blacksun_Chaos_Rifleman";
        editorPreview = "\staf_blacksun_chaos_main\eden\STAF_Blacksun_Chaos_RHIB.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_chaos_main\scripts\blacktexture.sqf"";";
          };
        };
    };

  //----------------------------------OPFOR---------------------------------
    class STAF_Blacksun_Chaos_MRAP_Armed_opf : STAF_Blacksun_Chaos_MRAP_Armed {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_MRAP_FFV_opf : STAF_Blacksun_Chaos_MRAP_FFV {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_MRAP_opf : STAF_Blacksun_Chaos_MRAP {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_Mi8_opf : STAF_Blacksun_Chaos_Mi8 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Heli_Pilot_opf";
    };

    class STAF_Blacksun_Chaos_Mi24_opf : STAF_Blacksun_Chaos_Mi24 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Heli_Pilot_opf";
    };

    class STAF_Blacksun_Chaos_IFV_Armed_opf : STAF_Blacksun_Chaos_IFV_Armed {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_IFV_opf : STAF_Blacksun_Chaos_IFV {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_Truck_opf : STAF_Blacksun_Chaos_Truck {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_Truck_Covered_opf : STAF_Blacksun_Chaos_Truck_Covered {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_Rubberboat_opf : STAF_Blacksun_Chaos_Rubberboat {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    class STAF_Blacksun_Chaos_RHIB_opf : STAF_Blacksun_Chaos_RHIB {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_opf";
            crew = "STAF_Blacksun_Chaos_Rifleman_opf";
    };

    //----------------------------------INDFOR---------------------------------
    class STAF_Blacksun_Chaos_MRAP_Armed_ind : STAF_Blacksun_Chaos_MRAP_Armed {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_MRAP_FFV_ind : STAF_Blacksun_Chaos_MRAP_FFV {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_MRAP_ind : STAF_Blacksun_Chaos_MRAP {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_Mi8_ind : STAF_Blacksun_Chaos_Mi8 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Heli_Pilot_ind";
    };

    class STAF_Blacksun_Chaos_Mi24_ind : STAF_Blacksun_Chaos_Mi24 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Heli_Pilot_ind";
    };

    class STAF_Blacksun_Chaos_IFV_Armed_ind : STAF_Blacksun_Chaos_IFV_Armed {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_IFV_ind : STAF_Blacksun_Chaos_IFV {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_Truck_ind : STAF_Blacksun_Chaos_Truck {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_Truck_Covered_ind : STAF_Blacksun_Chaos_Truck_Covered {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_Rubberboat_ind : STAF_Blacksun_Chaos_Rubberboat {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };

    class STAF_Blacksun_Chaos_RHIB_ind : STAF_Blacksun_Chaos_RHIB {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_chaos_ind";
            crew = "STAF_Blacksun_Chaos_Rifleman_ind";
    };
};
