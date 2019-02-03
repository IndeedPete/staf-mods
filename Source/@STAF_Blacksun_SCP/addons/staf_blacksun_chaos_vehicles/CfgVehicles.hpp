class Eventhandlers;

class CfgVehicles {
  class B_LSV_01_armed_F;
  class B_LSV_01_unarmed_F;
  class CUP_O_BRDM2_HQ_RUS;
  class CUP_O_BRDM2_RUS;
  class O_Truck_02_covered_F;
  class O_Truck_02_transport_F;
  class CUP_O_Mi8_CHDKZ;
  class CUP_O_Mi24_V_Dynamic_RU;
  class O_T_Boat_Transport_01_F;
  class C_Boat_Transport_02_F;

  //----------------------------------BLUFOR---------------------------------
    class STAF_Blacksun_Chaos_MRAP_Armed : B_LSV_01_armed_F {
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

    class STAF_Blacksun_Chaos_MRAP : B_LSV_01_unarmed_F {
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

    class STAF_Blacksun_Chaos_Mi8 : CUP_O_Mi8_CHDKZ {
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

    class STAF_Blacksun_Chaos_Mi24 : CUP_O_Mi24_V_Dynamic_RU {
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

    class STAF_Blacksun_Chaos_IFV_Armed : CUP_O_BRDM2_HQ_RUS {
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

    class STAF_Blacksun_Chaos_IFV : CUP_O_BRDM2_RUS {
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

    class STAF_Blacksun_Chaos_Truck : O_Truck_02_transport_F {
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

    class STAF_Blacksun_Chaos_Truck_Covered : O_Truck_02_covered_F {
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
