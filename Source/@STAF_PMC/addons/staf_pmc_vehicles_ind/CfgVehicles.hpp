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
    class B_Heli_Light_01_dynamicLoadout_F: Heli_Light_01_dynamicLoadout_base_F
    {
        class Components;
    };

    //----------------------------------Air------------------------------------
    class STAF_md500_ind : B_Heli_Light_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "MD-500 (Modified)";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_heli_pilot_ind";
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

    /*class STAF_md500_defender_ind : B_Heli_Light_01_dynamicLoadout_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "MD-500 Defender";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_heli_pilot_ind";
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
    class STAF_rubberboat_ind : B_Boat_Transport_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    class STAF_truck_transport_ind : C_Truck_02_transport_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Transport";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    class STAF_truck_box_ind : C_Truck_02_box_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Box";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    class STAF_truck_fuel_ind : C_Truck_02_fuel_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Fuel";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    class STAF_truck_covered_ind : C_Truck_02_covered_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "KamaZ Transport (Covered)";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    class STAF_offroad_ind : C_Offroad_02_unarmed_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    class STAF_offroad_pickup_ind : C_Offroad_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    class STAF_suv_ind : C_SUV_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        Side = 2;
        faction = "STAF_PMC_IND";
        crew = "STAF_contractor_ind";
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

    //----------------------------------Drones----------------------------------
    class STAF_quadcopter_ind : B_UAV_01_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        Side = 2;
        faction = "STAF_PMC_IND";
        selectionClan = "";
        crew = "I_UAV_AI";
        editorPreview = "\staf_pmc_main\eden\STAF_quadcopter.jpg";
    };

    class STAF_hexacopter_ind : B_UAV_06_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican";
        Side = 2;
        faction = "STAF_PMC_IND";
        selectionClan = "";
        crew = "I_UAV_AI";
        editorPreview = "\staf_pmc_main\eden\STAF_quadcopter.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_hexacopter_ammo_ind : B_UAV_06_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Ammo)";
        Side = 2;
        faction = "STAF_PMC_IND";
        selectionClan = "";
        crew = "I_UAV_AI";
        editorPreview = "\staf_pmc_main\eden\STAF_quadcopter.jpg";

        class EventHandlers: Eventhandlers {
          class STAF {
            init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\standardloadout.sqf';";
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
          };
        };
    };

    class STAF_hexacopter_medical_ind : B_UAV_06_medical_F {

        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AL-6 Pelican (Medical)";
        Side = 2;
        faction = "STAF_PMC_IND";
        selectionClan = "";
        crew = "I_UAV_AI";
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
