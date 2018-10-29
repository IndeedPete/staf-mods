class Eventhandlers;

class CfgVehicles {
  class O_LSV_02_unarmed_F;
  class O_Truck_03_transport_F;
  class O_Truck_03_covered_F;
  class O_Heli_Light_02_unarmed_F;
  class B_Boat_Transport_01_F;
  class B_Quadbike_01_F;
  class B_Heli_Light_01_F;
  class C_SUV_01_F;
  class C_Offroad_01_F;
  class C_Boat_Transport_02_F;

  //----------------------------------BLUFOR---------------------------------
    class STAF_Blacksun_MRAP : O_LSV_02_unarmed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_MRAP.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Truck : O_Truck_03_transport_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Truck.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Truck_Covered : O_Truck_03_covered_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Truck_Covered.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Orca : O_Heli_Light_02_unarmed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Heli_Pilot";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Orca.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Quad : B_Quadbike_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Quad.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Rubberboat : B_Boat_Transport_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Rubberboat.jpg";
    };

    class STAF_Blacksun_Little_Bird : B_Heli_Light_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Heli_Pilot";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Little_Bird.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_SUV : C_SUV_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_SUV.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_Offroad : C_Offroad_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Offroad.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

    class STAF_Blacksun_RHIB : C_Boat_Transport_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "staf_blacksun";
        crew = "STAF_Blacksun_Rifleman";
        editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_RHIB.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_blacksun_main\scripts\blacktexture.sqf"";";
          };
        };
    };

  //----------------------------------OPFOR---------------------------------
    class STAF_Blacksun_MRAP_opf : STAF_Blacksun_MRAP {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    class STAF_Blacksun_Truck_opf : STAF_Blacksun_Truck {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    class STAF_Blacksun_Truck_Covered_opf : STAF_Blacksun_Truck_Covered {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    class STAF_Blacksun_Orca_opf : STAF_Blacksun_Orca {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Heli_Pilot_opf";
    };

    class STAF_Blacksun_Quad_opf : STAF_Blacksun_Quad {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    class STAF_Blacksun_Rubberboat_opf : STAF_Blacksun_Rubberboat {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    class STAF_Blacksun_Little_Bird_opf : STAF_Blacksun_Little_Bird {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Heli_Pilot_opf";
    };

    class STAF_Blacksun_SUV_opf : STAF_Blacksun_SUV {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    class STAF_Blacksun_Offroad_opf : STAF_Blacksun_Offroad {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    class STAF_Blacksun_RHIB_opf : STAF_Blacksun_RHIB {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_opf";
            crew = "STAF_Blacksun_Rifleman_opf";
    };

    //----------------------------------INDFOR---------------------------------
    class STAF_Blacksun_MRAP_ind : STAF_Blacksun_MRAP {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };

    class STAF_Blacksun_Truck_ind : STAF_Blacksun_Truck {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };

    class STAF_Blacksun_Truck_Covered_ind : STAF_Blacksun_Truck_Covered {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };

    class STAF_Blacksun_Orca_ind : STAF_Blacksun_Orca {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Heli_Pilot_ind";
    };

    class STAF_Blacksun_Quad_ind : STAF_Blacksun_Quad {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };

    class STAF_Blacksun_Rubberboat_ind : STAF_Blacksun_Rubberboat {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };

    class STAF_Blacksun_Little_Bird_ind : STAF_Blacksun_Little_Bird {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Heli_Pilot_ind";
    };

    class STAF_Blacksun_SUV_ind : STAF_Blacksun_SUV {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };

    class STAF_Blacksun_Offroad_ind : STAF_Blacksun_Offroad {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };

    class STAF_Blacksun_RHIB_ind : STAF_Blacksun_RHIB {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "staf_blacksun_ind";
            crew = "STAF_Blacksun_Rifleman_ind";
    };
};
