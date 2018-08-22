class Eventhandlers;
class CBA_Extended_EventHandlers_base;
class TransportPylonsComponent_base;

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
    class B_Heli_Light_01_F;
    class B_UAV_06_F;
    class B_UAV_06_medical_F;
    class Heli_Light_01_dynamicLoadout_base_F;
    class rhsusf_M1220_M2_usarmy_wd;
    class rhsusf_M1220_M2_usarmy_d;
    class burnes_husky_W;
    class burnes_husky;
    class B_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
    {
        class Components;
    };

    //----------------------------------Air------------------------------------
    class STAF_md500 : B_Heli_Light_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "MD-500 (Modified)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_heli_pilot";
        editorPreview = "\staf_pmc_main\eden\STAF_md500.jpg";
        animationList[] = {"AddDoors",0,"AddBenches",1,"AddBackseats",1,"BenchL_Up_instant",0,"BenchR_Up_instant",0,"AddHoldingFrame",1,"AddTread_Short",0,"AddTread",1};

    		weapons[] = {"CMFlareLauncher"};
    		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
        memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
        memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};

        hiddenSelections[] = {"Camo1","clan"};
        selectionClan = "";
        maximumLoad = 5000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    /*class STAF_md500_defender : B_Heli_Light_01_dynamicLoadout_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "MD-500 Defender";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_heli_pilot";
        editorPreview = "\staf_pmc_main\eden\STAF_md500.jpg";
        animationList[] = {"AddTread_Short",0,"AddTread",1};

    		weapons[] = {"CMFlareLauncher","M134_minigun"};
    		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","5000Rnd_762x51_Belt"};
        memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
        memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};

        hiddenSelections[] = {"Camo1","clan"};
        selectionClan = "";
        maximumLoad = 5000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };

        class Components: Components
        {
          class TransportPylonsComponent{
            uiPicture = "\A3\Air_F\Heli_Light_01\Data\UI\Heli_Light_01_3DEN_CA.paa";
            class Pylons{};
          };
        };
    };*/

    //----------------------------------Naval-----------------------------------
    class STAF_rubberboat : B_Boat_Transport_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_main\eden\STAF_rubberboat.jpg";

        hiddenSelections[] = {"camo1","clan"};
        selectionClan = "";
        maximumLoad = 5000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    //----------------------------------Ground----------------------------------

    class STAF_truck_transport : C_Truck_02_transport_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Transport";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        editorPreview = "\staf_pmc_main\eden\STAF_truck_transport.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";
        maximumLoad = 20000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
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
        editorPreview = "\staf_pmc_main\eden\STAF_truck_box.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";
        maximumLoad = 30000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
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
        editorPreview = "\staf_pmc_main\eden\STAF_truck_fuel.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";
        maximumLoad = 5000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";";
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
        editorPreview = "\staf_pmc_main\eden\STAF_truck_covered.jpg";

        hiddenSelections[] = {"Camo1","Camo2","camo3","clan"};
        selectionClan = "";
        maximumLoad = 20000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
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
        editorPreview = "\staf_pmc_main\eden\STAF_offroad.jpg";

        hiddenSelections[] = {"camo1","camo2","camo3","camo4","clan"};
        selectionClan = "";
        textureList[] = {"Black",1,"Blue",0,"Green",0,"Orange",0,"Red",0,"White",0};
        maximumLoad = 10000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
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
        editorPreview = "\staf_pmc_main\eden\STAF_offroad_pickup.jpg";

        hiddenSelections[] = {"Camo","camo2","clan"};
        selectionClan = "";
        textureList[] = {"Red",0,"Beige",0,"White",0,"Blue",0,"Darkred",0,"Bluecustom",1};
        maximumLoad = 10000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
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
        editorPreview = "\staf_pmc_main\eden\STAF_suv.jpg";

        acceleration = 5;
        armor = 130;
        armorStructural = 5;
        armorGlass = 2;
        armorWheels = 0.75;
        Maxspeed = 100;

        hiddenSelections[] = {"Camo1","clan"};
        selectionClan = "";
        textureList[] = {"Red",0,"Black",1,"Gey",0,"Orange",0};
        maximumLoad = 10000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_caiman_woodland : rhsusf_M1220_M2_usarmy_wd {

        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        maximumLoad = 10000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_caiman_desert : rhsusf_M1220_M2_usarmy_d {

        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        maximumLoad = 10000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_husky_woodland : burnes_husky_W {

        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        maximumLoad = 10000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_husky_desert : burnes_husky {

        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor";
        maximumLoad = 10000;

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
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
        editorPreview = "\staf_pmc_main\eden\STAF_quadcopter.jpg";
    };

    class STAF_hexacopter : B_UAV_06_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        side = 1;
        faction = "STAF_PMC";
        selectionClan = "";
        crew = "B_UAV_AI";
        editorPreview = "\staf_pmc_main\eden\STAF_quadcopter.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_hexacopter_ammo : B_UAV_06_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Ammo)";
        side = 1;
        faction = "STAF_PMC";
        selectionClan = "";
        crew = "B_UAV_AI";
        editorPreview = "\staf_pmc_main\eden\STAF_quadcopter.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_hexacopter_medical : B_UAV_06_medical_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        side = 1;
        faction = "STAF_PMC";
        selectionClan = "";
        crew = "B_UAV_AI";
        editorPreview = "\staf_pmc_main\eden\STAF_quadcopter.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    //----------------------------------Turret----------------------------------
};
