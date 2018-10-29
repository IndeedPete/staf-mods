class Eventhandlers;

class CfgVehicles {
  class O_MRAP_02_F;
  class O_Truck_03_transport_F;
  class O_Truck_03_covered_F;
  class O_Quadbike_01_F;
  class O_Heli_Light_02_unarmed_F;
  class O_Heli_Transport_04_F;
  class I_Heli_Transport_02_F;
  class B_Boat_Transport_01_F;
  class C_Boat_Transport_02_F;

  //----------------------------------BLUFOR---------------------------------
    class STAF_Blacksun_MTF_MRAP : O_MRAP_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_car";
        crew = "STAF_Blacksun_MTF_Rifleman_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_MRAP.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_Truck : O_Truck_03_transport_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_car";
        crew = "STAF_Blacksun_MTF_Rifleman_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Truck.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_Truck_Covered : O_Truck_03_covered_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_car";
        crew = "STAF_Blacksun_MTF_Rifleman_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Truck_Covered.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_Quad : O_Quadbike_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_car";
        crew = "STAF_Blacksun_MTF_Rifleman_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Quad.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_Orca : O_Heli_Light_02_unarmed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_heli";
        crew = "STAF_Blacksun_MTF_Pilot_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Orca.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_Taru : O_Heli_Transport_04_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_heli";
        crew = "STAF_Blacksun_MTF_Pilot_no_mask";
        gunnerType = "STAF_Blacksun_MTF_Pilot_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Taru.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_Merlin : I_Heli_Transport_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_heli";
        crew = "STAF_Blacksun_MTF_Pilot_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Merlin.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_RHIB : C_Boat_Transport_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_boat";
        crew = "STAF_Blacksun_MTF_Rifleman_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_RHIB.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_Rubber : B_Boat_Transport_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_boat";
        crew = "STAF_Blacksun_MTF_Rifleman_no_mask";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Rubber.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_MRAP : O_MRAP_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_car";
        crew = "STAF_Blacksun_MTF_CBRN_Rifleman";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_MRAP.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_Truck : O_Truck_03_transport_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_car";
        crew = "STAF_Blacksun_MTF_CBRN_Rifleman";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_Truck.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_Truck_Covered : O_Truck_03_covered_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_car";
        crew = "STAF_Blacksun_MTF_CBRN_Rifleman";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_Truck_Covered.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_Quad : O_Quadbike_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_car";
        crew = "STAF_Blacksun_MTF_CBRN_Rifleman";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_Quad.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_Orca : O_Heli_Light_02_unarmed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_heli";
        crew = "STAF_Blacksun_MTF_CBRN_Pilot";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Orca.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_Taru : O_Heli_Transport_04_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_heli";
        crew = "STAF_Blacksun_MTF_CBRN_Pilot";
        gunnerType = "STAF_Blacksun_MTF_CBRN_Pilot";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Taru.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_Merlin : I_Heli_Transport_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_heli";
        crew = "STAF_Blacksun_MTF_CBRN_Pilot";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Merlin.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_RHIB : C_Boat_Transport_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_boat";
        crew = "STAF_Blacksun_MTF_CBRN_Rifleman";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_RHIB.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_MTF_CBRN_Rubber : B_Boat_Transport_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun_scp";
        editorSubcategory = "EdSubcat_blacksun_mtf_cbrn_boat";
        crew = "STAF_Blacksun_MTF_CBRN_Rifleman";
        editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Rubber.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_scp_main\scripts\blacktexture.sqf"";";
          };
        };
    };

  //----------------------------------OPFOR---------------------------------
    class STAF_Blacksun_MTF_MRAP_opf : STAF_Blacksun_MTF_MRAP {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_opf";
    };

    class STAF_Blacksun_MTF_Truck_opf : STAF_Blacksun_MTF_Truck {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_opf";
    };

    class STAF_Blacksun_MTF_Truck_Covered_opf : STAF_Blacksun_MTF_Truck_Covered {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_opf";
    };

    class STAF_Blacksun_MTF_Quad_opf : STAF_Blacksun_MTF_Quad {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_opf";
    };

    class STAF_Blacksun_MTF_Orca_opf : STAF_Blacksun_MTF_Orca {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Pilot_no_mask_opf";
    };

    class STAF_Blacksun_MTF_Taru_opf : STAF_Blacksun_MTF_Taru {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Pilot_no_mask_opf";
            gunnerType = "STAF_Blacksun_MTF_Pilot_no_mask_opf";
    };

    class STAF_Blacksun_MTF_Merlin_opf : STAF_Blacksun_MTF_Merlin {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Pilot_no_mask_opf";
    };

    class STAF_Blacksun_MTF_RHIB_opf : STAF_Blacksun_MTF_RHIB {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_opf";
    };

    class STAF_Blacksun_MTF_Rubber_opf : STAF_Blacksun_MTF_Rubber {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_opf";
    };

    class STAF_Blacksun_MTF_CBRN_MRAP_opf : STAF_Blacksun_MTF_CBRN_MRAP {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
    };

    class STAF_Blacksun_MTF_CBRN_Truck_opf : STAF_Blacksun_MTF_CBRN_Truck {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
    };

    class STAF_Blacksun_MTF_CBRN_Truck_Covered_opf : STAF_Blacksun_MTF_CBRN_Truck_Covered {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
    };

    class STAF_Blacksun_MTF_CBRN_Quad_opf : STAF_Blacksun_MTF_CBRN_Quad {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
    };

    class STAF_Blacksun_MTF_CBRN_Orca_opf : STAF_Blacksun_MTF_CBRN_Orca {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Pilot_opf";
    };

    class STAF_Blacksun_MTF_CBRN_Taru_opf : STAF_Blacksun_MTF_CBRN_Taru {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Pilot_opf";
            gunnerType = "STAF_Blacksun_MTF_CBRN_Pilot";
    };

    class STAF_Blacksun_MTF_CBRN_Merlin_opf : STAF_Blacksun_MTF_CBRN_Merlin {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Pilot_opf";
    };

    class STAF_Blacksun_MTF_CBRN_RHIB_opf : STAF_Blacksun_MTF_CBRN_RHIB {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
    };

    class STAF_Blacksun_MTF_CBRN_Rubber_opf : STAF_Blacksun_MTF_CBRN_Rubber {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_opf";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
    };

    //----------------------------------INDFOR---------------------------------
    class STAF_Blacksun_MTF_MRAP_ind : STAF_Blacksun_MTF_MRAP {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_ind";
    };

    class STAF_Blacksun_MTF_Truck_ind : STAF_Blacksun_MTF_Truck {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_ind";
    };

    class STAF_Blacksun_MTF_Truck_Covered_ind : STAF_Blacksun_MTF_Truck_Covered {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_ind";
    };

    class STAF_Blacksun_MTF_Quad_ind : STAF_Blacksun_MTF_Quad {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_ind";
    };

    class STAF_Blacksun_MTF_Orca_ind : STAF_Blacksun_MTF_Orca {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Pilot_no_mask";
    };

    class STAF_Blacksun_MTF_Taru_ind : STAF_Blacksun_MTF_Taru {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Pilot_no_mask_ind";
            gunnerType = "STAF_Blacksun_MTF_Pilot_no_mask_ind";
    };

    class STAF_Blacksun_MTF_Merlin_ind : STAF_Blacksun_MTF_Merlin {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Pilot_no_mask";
    };

    class STAF_Blacksun_MTF_RHIB_ind : STAF_Blacksun_MTF_RHIB {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_ind";
    };

    class STAF_Blacksun_MTF_Rubber_ind : STAF_Blacksun_MTF_Rubber {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_Rifleman_no_mask_ind";
    };

    class STAF_Blacksun_MTF_CBRN_MRAP_ind : STAF_Blacksun_MTF_CBRN_MRAP {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
    };

    class STAF_Blacksun_MTF_CBRN_Truck_ind : STAF_Blacksun_MTF_CBRN_Truck {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
    };

    class STAF_Blacksun_MTF_CBRN_Truck_Covered_ind : STAF_Blacksun_MTF_CBRN_Truck_Covered {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
    };

    class STAF_Blacksun_MTF_CBRN_Quad_ind : STAF_Blacksun_MTF_CBRN_Quad {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
    };

    class STAF_Blacksun_MTF_CBRN_Orca_ind : STAF_Blacksun_MTF_CBRN_Orca {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Pilot_ind";
    };

    class STAF_Blacksun_MTF_CBRN_Taru_ind : STAF_Blacksun_MTF_CBRN_Taru {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Pilot_ind";
            gunnerType = "STAF_Blacksun_MTF_CBRN_Pilot_ind";
    };

    class STAF_Blacksun_MTF_CBRN_Merlin_ind : STAF_Blacksun_MTF_CBRN_Merlin {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Pilot_ind";
    };

    class STAF_Blacksun_MTF_CBRN_RHIB_ind : STAF_Blacksun_MTF_CBRN_RHIB {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
    };

    class STAF_Blacksun_MTF_CBRN_Rubber_ind : STAF_Blacksun_MTF_CBRN_Rubber {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_scp_ind";
            crew = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
    };
};
