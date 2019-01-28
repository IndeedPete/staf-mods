class Eventhandlers;
class CBA_Extended_EventHandlers_base;
class TransportPylonsComponent_base;

class CfgVehicles {
    class B_Boat_Transport_01_F;
    class C_Truck_02_transport_F;
    class C_Truck_02_covered_F;
    class C_Truck_02_box_F;
    class C_Truck_02_fuel_F;
    class C_Offroad_02_unarmed_F;
    class C_Offroad_01_F;
    class C_SUV_01_F;
    class B_UAV_01_F;
    class CUP_B_MH6J_USA;
    class CUP_B_AH6M_USA;
    class B_UAV_06_F;
    class B_UAV_06_medical_F;
    class CUP_B_Mastiff_HMG_GB_W;
    class CUP_B_Mastiff_HMG_GB_D;
    class CUP_B_UH60M_US;
    class burnes_husky_W;
    class burnes_husky;
    class B_LSV_01_unarmed_F;

    //----------------------------------BLUFOR---------------------------------
      //----------------------------------Air------------------------------------
        class STAF_md500 : CUP_B_MH6J_USA {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "MD-500 (Modified)";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor_heli_pilot";
            editorPreview = "\staf_pmc_main\eden\STAF_md500.jpg";
            animationList[] = {"hideBench",0,"hideFries",0,"hideFLIR",1,"hideUSARMY",1,"hideRACS",1};

            hiddenSelections[] = {"camo1","camo2","camo_bench","clan"};
            selectionClan = "";
            maximumLoad = 600;
            /*ace_fastroping_enabled = 1;
            ace_fastroping_ropeOrigins[] = {
                {1.111,-0.075,-0.903},
                {1.111,1.237,-0.903},
                {-1.111,-0.075,-0.903},
                {-1.111,1.237,-0.903}
            };*/

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",0,""hideFLIR"",1,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle; [(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_helismallequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

        class STAF_md500_defender : CUP_B_AH6M_USA {
          author = "STAF";
          scope = 2;
          scopeCurator = 2;
          displayName = "MD-500 Defender";
          side = 1;
          faction = "STAF_PMC";
          crew = "STAF_contractor_heli_pilot";
          editorPreview = "\staf_pmc_main\eden\STAF_md500.jpg";
          animationList[] = {"hideBench",0,"hideFries",0,"hideFLIR",1,"hideUSARMY",1,"hideRACS",1};

          hiddenSelections[] = {"camo1","camo2","camo_weapons","clan"};
          selectionClan = "";

          class EventHandlers: Eventhandlers {
            class STAF {
              init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",1,""hideFLIR"",1,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle;";
              class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
            };
          };
        };

        class STAF_uh60m : CUP_B_UH60M_US {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-60M";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor_heli_pilot";
            gunnerType = "STAF_contractor_heli_pilot";
            editorPreview = "\staf_pmc_main\eden\STAF_uh60m.jpg";
            animationList[] = {};
            hiddenSelections[] = {"camo1","camo2","camo3","clan"};
            selectionClan = "";
            maximumLoad = 600;

            typicalCargo[] = {"STAF_contractor_heli_pilot"};

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0), nil, [""Hide_ESSS2x"",1,""Hide_ESSS4x"",1,""Hide_Nose"",1,""Navyclan_hide"",1,""Navyclan2_hide"",1,""Blackhawk_Hide"",1,""Hide_FlirTurret"",1,""Hide_Probe"",1,""Doorcock_Hide"",0,""Filters_Hide"",1]] call BIS_fnc_initVehicle; [(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_helismallequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

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
            maximumLoad = 160;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_boatequipment.sqf"";";
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
            maximumLoad = 4000;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
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
            maximumLoad = 4000;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
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
            maximumLoad = 500;

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
            maximumLoad = 4000;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
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
            maximumLoad = 1500;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf"";";
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
            maximumLoad = 1500;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf""; [(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf"";";
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
            maximumLoad = 1500;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

        class STAF_caiman : CUP_B_Mastiff_HMG_GB_D {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "BAE Caiman";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_caiman.jpg";
            editorSubcategory = "EdSubcat_Cars";
            maximumLoad = 3300;

            hiddenSelections[] = {"tex1","tex2","tex3","tex_turret","camo1","camo2","tex4","clan"};
            selectionClan = "";
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_tex1_blk_co.paa","\staf_pmc_vehicles\txt\STAF_tex2_blk_co.paa","\staf_pmc_vehicles\txt\STAF_tex3_blk_co.paa","\staf_pmc_vehicles\txt\STAF_turretbig_blk_co.paa","\staf_pmc_vehicles\txt\STAF_bar_armourF_blk_co.paa","\staf_pmc_vehicles\txt\STAF_bar_armourR_blk_co.paa","\staf_pmc_vehicles\txt\STAF_tex4_blk_co.paa"};

            typicalCargo[] = {"STAF_contractor"};

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

        /*class STAF_caiman_woodland : CUP_B_Mastiff_HMG_GB_W {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "BAE Caiman (Woodland)";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_caiman_woodland.jpg";
            editorSubcategory = "EdSubcat_Cars";
            maximumLoad = 2800;

            hiddenSelections[] = {"tex1","tex2","tex3","tex_turret","camo1","camo2","tex4","clan"};
            selectionClan = "";
            hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa","\staf_pmc_vehicles\txt\STAF_tex2_wld_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex3_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"};

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

        class STAF_caiman_desert : CUP_B_Mastiff_HMG_GB_D {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "BAE Caiman (Desert)";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_caiman_desert.jpg";
            editorSubcategory = "EdSubcat_Cars";
            maximumLoad = 2800;

            hiddenSelections[] = {"tex1","tex2","tex3","tex_turret","camo1","camo2","tex4","clan"};
            selectionClan = "";
            hiddenSelectionsTextures[] = {"\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex1_co.paa","\staf_pmc_vehicles\txt\STAF_tex2_tan_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex3_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_turretbig_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourF_co.paa","cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_bar_armourR_co.paa","\cup\wheeledvehicles\cup_wheeledvehicles_ridgeback\data\woodland\wd_tex4_co.paa"};

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };*/

        class STAF_husky_woodland : burnes_husky_W {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "Husky TSV (Woodland)";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_husky_woodland.jpg";
            maximumLoad = 2800;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

        class STAF_husky_desert : burnes_husky {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "Husky TSV (Desert)";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_husky_desert.jpg";
            maximumLoad = 2800;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

        class STAF_lsv : B_LSV_01_unarmed_F {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Polaris DAGOR";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_lsv.jpg";
            hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4","clan"};
            selectionClan = "";
            textureList[] = {"Black",1,"Olive",0,"Sand",0};
            maximumLoad = 1500;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf""; (_this select 0) setObjectTexture [4, """"];";
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
            Side = 1;
            faction = "STAF_PMC";
            selectionClan = "";
            crew = "B_UAV_AI";
            editorPreview = "\staf_pmc_main\eden\STAF_hexacopter.jpg";
            maximumLoad = 500;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "(_this select 0) setcaptive true;";
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
            editorPreview = "\staf_pmc_main\eden\STAF_hexacopter_ammo.jpg";
            maximumLoad = 3000;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_droneammoequipment.sqf""; (_this select 0) setcaptive true;";
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
            editorPreview = "\staf_pmc_main\eden\STAF_hexacopter_medical.jpg";
            maximumLoad = 300;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_dronemedicequipment.sqf""; (_this select 0) setcaptive true;";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };

        class STAF_hexacopter_explosive : B_UAV_06_F {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "AL-6 Pelican (Explosives)";
            side = 1;
            faction = "STAF_PMC";
            selectionClan = "";
            crew = "B_UAV_AI";
            editorPreview = "\staf_pmc_main\eden\STAF_hexacopter.jpg";
            maximumLoad = 800;

            class EventHandlers: Eventhandlers {
              class STAF {
                init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_droneexplosionequipment.sqf""; (_this select 0) setcaptive true;";
                class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
              };
            };
        };


    //----------------------------------OPFOR---------------------------------
      //----------------------------------Air------------------------------------
        class STAF_md500_opf : STAF_md500 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_heli_pilot_opf";
        };

        class STAF_md500_defender_opf : STAF_md500_defender {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_heli_pilot_opf";
        };

        class STAF_uh60m_opf : STAF_uh60m {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_heli_pilot_opf";
            typicalCargo[] = {"STAF_contractor_heli_pilot_opf"};
        };

      //----------------------------------Naval-----------------------------------
        class STAF_rubberboat_opf : STAF_rubberboat {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

      //----------------------------------Ground----------------------------------

        class STAF_truck_transport_opf : STAF_truck_transport {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_truck_box_opf : STAF_truck_box {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_truck_fuel_opf : STAF_truck_fuel {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_truck_covered_opf : STAF_truck_covered {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_offroad_opf : STAF_offroad {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_offroad_pickup_opf : STAF_offroad_pickup {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_suv_opf : STAF_suv {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_caiman_opf : STAF_caiman {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        /*class STAF_caiman_woodland_opf : STAF_caiman_woodland {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_caiman_desert_opf : STAF_caiman_desert {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };*/

        class STAF_husky_woodland_opf : STAF_husky_woodland {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_husky_desert_opf : STAF_husky_desert {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_lsv_opf : STAF_lsv {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

      //----------------------------------Drones----------------------------------
        class STAF_quadcopter_opf : STAF_quadcopter {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_opf : STAF_hexacopter {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_ammo_opf : STAF_hexacopter_ammo {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_medical_opf : STAF_hexacopter_medical {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_explosive_opf : STAF_hexacopter_explosive {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "I_UAV_AI";
        };


    //----------------------------------OPFOR---------------------------------
      //----------------------------------Air------------------------------------
        class STAF_md500_ind : STAF_md500 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_heli_pilot_ind";
        };

        class STAF_md500_defender_ind : STAF_md500_defender {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_heli_pilot_ind";
        };

        class STAF_uh60m_ind : STAF_uh60m {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_heli_pilot_ind";
            typicalCargo[] = {"STAF_contractor_heli_pilot_ind"};
        };

      //----------------------------------Naval-----------------------------------
        class STAF_rubberboat_ind : STAF_rubberboat {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

      //----------------------------------Ground----------------------------------

        class STAF_truck_transport_ind : STAF_truck_transport {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_truck_box_ind : STAF_truck_box {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_truck_fuel_ind : STAF_truck_fuel {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_truck_covered_ind : STAF_truck_covered {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_offroad_ind : STAF_offroad {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_offroad_pickup_ind : STAF_offroad_pickup {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_suv_ind : STAF_suv {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_caiman_ind : STAF_caiman {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        /*class STAF_caiman_woodland_ind : STAF_caiman_woodland {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_caiman_desert_ind : STAF_caiman_desert {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };*/

        class STAF_husky_woodland_ind : STAF_husky_woodland {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_husky_desert_ind : STAF_husky_desert {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_lsv_ind : STAF_lsv {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

      //----------------------------------Drones----------------------------------
        class STAF_quadcopter_ind : STAF_quadcopter {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_ind : STAF_hexacopter {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_ammo_ind : STAF_hexacopter_ammo {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_medical_ind : STAF_hexacopter_medical {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "I_UAV_AI";
        };

        class STAF_hexacopter_explosive_ind : STAF_hexacopter_explosive {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "I_UAV_AI";
        };
};
