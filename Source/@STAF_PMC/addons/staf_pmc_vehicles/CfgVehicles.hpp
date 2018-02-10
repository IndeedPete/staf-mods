class CfgVehicles {
    class B_Boat_Transport_01_F;
    class B_Quadbike_01_F;
    class C_Truck_02_transport_F;
    class C_Truck_02_covered_F;
    class C_Truck_02_box_F;
    class C_Truck_02_fuel_F;
    class C_Offroad_02_unarmed_F;
    class C_Offroad_01_F;
    class C_SUV_01_F;
    class B_UAV_01_F;
    class EventHandlers;
    class CBA_Extended_EventHandlers_base;

    //----------------------------------Air------------------------------------

    //----------------------------------Naval-----------------------------------
    class STAF_rubberboat : B_Boat_Transport_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_diver_mx";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_rubberboat.jpg";

        hiddenSelections[] = {"camo1","clan"};
        selectionClan = "";
    };

    //----------------------------------Ground----------------------------------
    class STAF_quadbike : B_Quadbike_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_quadbike.jpg";

        hiddenSelections[] = {"camo1","camo2","clan"};
        selectionClan = "";
    };

    class STAF_truck_transport : C_Truck_02_transport_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Transport";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_truck_transport.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\standardloadout.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_truck_box : C_Truck_02_box_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Box";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_truck_box.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\standardloadout.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_truck_fuel : C_Truck_02_fuel_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Fuel";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_truck_fuel.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\standardloadout.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_truck_covered : C_Truck_02_covered_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Transport (Covered)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_truck_covered.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\standardloadout.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_offroad : C_Offroad_02_unarmed_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_offroad.jpg";

        hiddenSelections[] = {"camo1","camo2","camo3","camo4","clan"};
        selectionClan = "";
        textureList[] = {"Black",1,"Blue",0,"Green",0,"Orange",0,"Red",0,"White",0};

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\standardloadout.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_offroad_pickup : C_Offroad_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_offroad_pickup.jpg";

        hiddenSelections[] = {"Camo","camo2","clan"};
        selectionClan = "";
        textureList[] = {"Red",0,"Beige",0,"White",0,"Blue",0,"Darkred",0,"Bluecustom",1};

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\standardloadout.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_suv : C_SUV_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_suv.jpg";

        acceleration = 5;
        armor = 130;
        armorStructural = 5;
        armorGlass = 2;
        armorWheels = 0.75;
        Maxspeed = 100;

        hiddenSelections[] = {"Camo1","clan"};
        selectionClan = "";
        textureList[] = {"Red",0,"Black",1,"Gey",0,"Orange",0};

        class EventHandlers: EventHandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_vehicles\scripts\standardloadout.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    //----------------------------------Drones----------------------------------
    class STAF_quadcopter : B_UAV_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "STAF_PMC";
        selectionClan = "";
        crew = "B_UAV_AI";
        editorPreview = "\staf_pmc_vehicles\eden\STAF_quadcopter.jpg";
    };

    //----------------------------------Turret----------------------------------

};
