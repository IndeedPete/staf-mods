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
    class CUP_I_SUV_ION;
    class CUP_BTR90_Base;
    class B_UGV_02_Demining_F;
    class CUP_B_M1126_ICV_M2_Desert;
    class CUP_B_M1128_MGS_Desert;
    class CUP_B_M1126_ICV_MK19_Desert;
    class CUP_B_M1135_ATGMV_Desert;
    class CUP_B_M1130_CV_M2_Desert;
    class CUP_B_M1129_MC_MK19_Desert;
    class CUP_B_M2StaticMG_US;
    class CUP_B_M2StaticMG_MiniTripod_US;
    class CUP_O_2b14_82mm_RU;
    class CUP_O_UH1H_gunship_SLA;
    class rhsusf_m1240a1_m240_usarmy_d;
    class rhsusf_M1232_M2_usarmy_d;
    class rhsusf_m1240a1_m2_usarmy_d;
    class RHSGREF_A29B_HIDF;


    //----------------------------------BLUFOR---------------------------------
      //----------------------------------Air------------------------------------
        /*class STAF_md500 : CUP_B_MH6J_USA {
            author = "STAF";
            scope = 1;
            scopeCurator = 1;
            displayName = "MD-500";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor_heli_pilot";
            editorPreview = "\staf_pmc_main\eden\STAF_md500.jpg";
            animationList[] = {"hideBench",0,"hideFries",0,"hideFLIR",1,"hideUSARMY",1,"hideRACS",1};

            hiddenSelections[] = {"camo1","camo2","camo_bench","clan"};
            selectionClan = "";
            maximumLoad = 600;
        };*/

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
        };

        class STAF_uh1h : CUP_O_UH1H_gunship_SLA {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "UH-1H (Gunship)";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor_heli_pilot";
            gunnerType = "STAF_contractor_heli_pilot";
            editorPreview = "\staf_pmc_main\eden\STAF_uh1h.jpg";
            animationList[] = {};
            hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","clan"};
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_UH1D_CO.paa","\staf_pmc_vehicles\txt\STAF_UH1D_in_CO.paa","\staf_pmc_vehicles\txt\STAF_UH1D_default_co.paa"};
            selectionClan = "";
            maximumLoad = 600;

            typicalCargo[] = {"STAF_contractor_heli_pilot"};
        };

        class STAF_EMB314: RHSGREF_A29B_HIDF {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Embraer EMB 314 Super Tucano";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor_heli_pilot";
            gunnerType = "STAF_contractor_heli_pilot";
            editorPreview = "\staf_pmc_main\eden\STAF_EMB314.jpg";
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_ST_Fuselage_co.paa","\staf_pmc_vehicles\txt\STAF_ST_WingsAndStabs_co.paa","\staf_pmc_vehicles\txt\STAF_ST_EverythingElse_co.paa","rhsgref\addons\rhsgref_a29\tex\jst_prop_blur.paa"};
            animationList[] = {};
            hiddenSelections[] = {"camo0","camo1","camo2","camo3","MFD_Pilot_L","MFD_Pilot_R","MFD_WSO_L","MFD_WSO_R","n1","n2","n3","n4","n5","n6","clan"};
            textureList[] = {"STAF",1};
            selectionClan = "";
            maximumLoad = 600;

            typicalCargo[] = {"STAF_contractor_heli_pilot","STAF_contractor_heli_pilot"};
            class textureSources
            {
                class STAF
                {
                    author = "STAF";
                    displayName = "STAF";
                    textures[] = {"\staf_pmc_vehicles\txt\STAF_ST_Fuselage_co.paa","\staf_pmc_vehicles\txt\STAF_ST_WingsAndStabs_co.paa","\staf_pmc_vehicles\txt\STAF_ST_EverythingElse_co.paa","rhsgref\addons\rhsgref_a29\tex\jst_prop_blur.paa"};
                    factions[] = {};
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
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_truck_02_kab_blk_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
            maximumLoad = 4000;
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
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_truck_02_kab_blk_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
            maximumLoad = 4000;
            ace_refuel_fuelCargo = 10000;
            ace_refuel_hooks[] = {{0.99,-3.47,-0.67},{-1.04,-3.47,-0.67}};
            ace_rearm_defaultSupply = 1200;
            ace_repair_canRepair = 1;
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
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_truck_02_kab_blk_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
            maximumLoad = 500;
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
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_truck_02_kab_blk_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa"};
            maximumLoad = 4000;
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
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_offroad_01_ext_blk_co.paa","\staf_pmc_vehicles\txt\STAF_offroad_01_ext_blk_co.paa"};
            textureList[] = {"Red",0,"Beige",0,"White",0,"Blue",0,"Darkred",0,"Bluecustom",0};
            maximumLoad = 1500;
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
            hiddenSelectionsTextures[] = {"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};
            selectionClan = "";
            textureList[] = {"Red",0,"Black",0,"Gey",0,"Orange",0};
            maximumLoad = 1500;
        };

        class STAF_suv_2 : CUP_I_SUV_ION {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "SUV (Large)";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            //editorPreview = "\staf_pmc_main\eden\STAF_suv.jpg";

            acceleration = 5;
            armor = 130;
            armorStructural = 5;
            armorGlass = 2;
            armorWheels = 0.75;
            Maxspeed = 100;

            hiddenSelections[] = {"camo","clan"};
            maximumLoad = 1500;
        };

        class STAF_caiman : rhsusf_M1232_M2_usarmy_d {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "BAE Caiman";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_caiman.jpg";
            editorSubcategory = "EdSubcat_Cars";
            maximumLoad = 3300;

            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","pintle","camo7","camo8","camo9","clan"};
            selectionClan = "";
            HiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_RG33_Body_CO.paa","\staf_pmc_vehicles\txt\STAF_RG33_Chassis_CO.paa","\staf_pmc_vehicles\txt\STAF_RG33_Accessory2_CO.paa","\staf_pmc_vehicles\txt\STAF_RG33_Armor_CO.paa","\staf_pmc_vehicles\txt\STAF_RG33_TurretD_CO.paa","\staf_pmc_vehicles\txt\STAF_RG33_Wheels_CO.paa","\staf_pmc_vehicles\txt\STAF_mk64mount_d_co.paa","\staf_pmc_vehicles\txt\STAF_MCTAGS_CO.paa","\staf_pmc_vehicles\txt\STAF_camonet_co.paa","\staf_pmc_vehicles\txt\STAF_RG33_USARMY_Decal_ca.paa"};

            typicalCargo[] = {"STAF_contractor"};
        };

        class STAF_MATV_M240 : rhsusf_m1240a1_m240_usarmy_d {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "Oshkosh M-ATV (M249)";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_MATV_M240.jpg";
            editorSubcategory = "EdSubcat_Cars";
            maximumLoad = 2800;

            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","pintle","camo5","camo6","","BFT_screen","clan"};
            selectionClan = "";
            HiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_matv_ext_co.paa","\staf_pmc_vehicles\txt\STAF_matv_wheel_co.paa","\staf_pmc_vehicles\txt\STAF_rg33_turretd_co.paa","\staf_pmc_vehicles\txt\STAF_matv_decal_ca.paa","\staf_pmc_vehicles\txt\STAF_camonet_co.paa","\staf_pmc_vehicles\txt\STAF_mk64mount_d_co.paa","\staf_pmc_vehicles\txt\STAF_m153_co.paa","\staf_pmc_vehicles\txt\STAF_matv_sof_d_co.paa"};
            textureList[] = {"Desert",0,"Olive",0,"Woodland",0,"STAF",1};

            class textureSources {
                class STAF_MATV_M240_black {
                    displayName = "STAF";
                    author = "Moony";
                    textures[] = {"\staf_pmc_vehicles\txt\STAF_matv_ext_co.paa","\staf_pmc_vehicles\txt\STAF_matv_wheel_co.paa","\staf_pmc_vehicles\txt\STAF_rg33_turretd_co.paa","\staf_pmc_vehicles\txt\STAF_matv_decal_ca.paa","\staf_pmc_vehicles\txt\STAF_camonet_co.paa","\staf_pmc_vehicles\txt\STAF_mk64mount_d_co.paa","\staf_pmc_vehicles\txt\STAF_m153_co.paa","\staf_pmc_vehicles\txt\STAF_matv_sof_d_co.paa"};
                    factions[] = {"STAF_PMC", "STAF_PMC_OPF", "STAF_PMC_IND"};
                };
            };
        };

        class STAF_MATV_M2 : rhsusf_m1240a1_m2_usarmy_d {

            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "Oshkosh M-ATV (M2)";
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_MATV_M2.jpg";
            editorSubcategory = "EdSubcat_Cars";
            maximumLoad = 2800;

            hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","pintle","camo5","camo6","","BFT_screen","clan"};
            selectionClan = "";
            HiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_matv_ext_co.paa","\staf_pmc_vehicles\txt\STAF_matv_wheel_co.paa","\staf_pmc_vehicles\txt\STAF_rg33_turretd_co.paa","\staf_pmc_vehicles\txt\STAF_matv_decal_ca.paa","\staf_pmc_vehicles\txt\STAF_camonet_co.paa","\staf_pmc_vehicles\txt\STAF_mk64mount_d_co.paa","\staf_pmc_vehicles\txt\STAF_m153_co.paa","\staf_pmc_vehicles\txt\STAF_matv_sof_d_co.paa"};
            textureList[] = {"Desert",0,"Olive",0,"Woodland",0,"STAF",1};

            class textureSources {
                class STAF_MATV_M2_black {
                    displayName = "STAF";
                    author = "Moony";
                    textures[] = {"\staf_pmc_vehicles\txt\STAF_matv_ext_co.paa","\staf_pmc_vehicles\txt\STAF_matv_wheel_co.paa","\staf_pmc_vehicles\txt\STAF_rg33_turretd_co.paa","\staf_pmc_vehicles\txt\STAF_matv_decal_ca.paa","\staf_pmc_vehicles\txt\STAF_camonet_co.paa","\staf_pmc_vehicles\txt\STAF_mk64mount_d_co.paa","\staf_pmc_vehicles\txt\STAF_m153_co.paa","\staf_pmc_vehicles\txt\STAF_matv_sof_d_co.paa"};
                    factions[] = {"STAF_PMC", "STAF_PMC_OPF", "STAF_PMC_IND"};
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
            hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};
            selectionClan = "";
            textureList[] = {"Black",1,"Olive",0,"Sand",0};
            maximumLoad = 1500;
        };

        /*class STAF_btr90 : CUP_BTR90_Base {
            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "BTR-90";
            faction = "STAF_PMC";
            crew = "STAF_contractor_crew";
            editorPreview = "\staf_pmc_main\eden\STAF_btr90.jpg";
            editorSubcategory = "EdSubcat_APCs";
            maximumLoad = 4500;

            hiddenSelections[] = {"Camo1","Camo2","clan"};
            selectionClan = "";
            hiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_btr90_body_co.paa","\staf_pmc_vehicles\txt\STAF_btr90_body2_co.paa"};

            typicalCargo[] = {"STAF_contractor_crew","STAF_contractor_crew","STAF_contractor_crew"};
        };*/

        class STAF_M1126_ICV_M2 : CUP_B_M1126_ICV_M2_Desert {
            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "M1126 Infantry Carrier Vehicle";
            faction = "STAF_PMC";
            crew = "STAF_contractor_crew";
            editorPreview = "\staf_pmc_main\eden\STAF_M1126_ICV_M2.jpg";
            editorSubcategory = "EdSubcat_APCs";
            maximumLoad = 4500;

            HiddenSelections[] = {"camo","camo1","camo6","camo8","camo7","camo9","camo10","camo11","camoDefault","clan"};
            selectionClan = "";
            HiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_stryker_body1_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_body2_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_body2_blk_co.paa","\staf_pmc_vehicles\txt\STAF_icv_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_alfa_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_alfa_blk_co.paa","\staf_pmc_vehicles\txt\STAF_slat_armor_blk_co.paa","\staf_pmc_vehicles\txt\STAF_slat_armor_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_default_co.paa"};
            typicalCargo[] = {"STAF_contractor_crew","STAF_contractor_crew","STAF_contractor_crew"};
        };

        class STAF_M1128_MGS : CUP_B_M1128_MGS_Desert {
            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "M1128 Mobile Gun System";
            faction = "STAF_PMC";
            crew = "STAF_contractor_crew";
            editorPreview = "\staf_pmc_main\eden\STAF_M1128_MGS.jpg";
            editorSubcategory = "EdSubcat_APCs";
            maximumLoad = 4500;

            HiddenSelections[] = {"camo","camo1","camo2","camo6","camo7","camo10","camoDefault","clan"};
            selectionClan = "";
            HiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_stryker_mgs_body1_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_body2_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_mgs_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_body2_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_alfa_blk_co.paa","\staf_pmc_vehicles\txt\STAF_slat_armor_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_default_co.paa"};

            typicalCargo[] = {"STAF_contractor_crew","STAF_contractor_crew","STAF_contractor_crew"};
        };

        class STAF_M1130_CV_M2 : CUP_B_M1130_CV_M2_Desert {
            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "M1130 Commander's Vehicle";
            faction = "STAF_PMC";
            crew = "STAF_contractor_crew";
            editorPreview = "\staf_pmc_main\eden\STAF_M1130_CV_M2.jpg";
            editorSubcategory = "EdSubcat_APCs";
            maximumLoad = 4500;

            HiddenSelections[] = {"camo","camo1","camo2","camo10","camo8","camoDefault","clan"};
            selectionClan = "";
            HiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_stryker_body1_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_body2_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_command_blk_co.paa","\staf_pmc_vehicles\txt\STAF_slat_armor_blk_co.paa","\staf_pmc_vehicles\txt\STAF_icv_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_default_co.paa"};
            typicalCargo[] = {"STAF_contractor_crew","STAF_contractor_crew","STAF_contractor_crew"};
        };

        class STAF_M1129_MC_MK19 : CUP_B_M1129_MC_MK19_Desert {
            scope = 2;
            scopeCurator = 2;
            side = 1;
            displayName = "M1129 Mortar Carrier";
            faction = "STAF_PMC";
            crew = "STAF_contractor_crew";
            editorPreview = "\staf_pmc_main\eden\STAF_M1129_MC_MK19.jpg";
            editorSubcategory = "EdSubcat_APCs";
            maximumLoad = 4500;

            HiddenSelections[] = {"camo","camo1","camo2","camo10","camo8","camoDefault","clan"};
            selectionClan = "";
            HiddenSelectionsTextures[] = {"\staf_pmc_vehicles\txt\STAF_stryker_body1_mortar_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_body2_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_interior1_mortar_blk_co.paa","\staf_pmc_vehicles\txt\STAF_slat_armor_blk_co.paa","\staf_pmc_vehicles\txt\STAF_icv_blk_co.paa","\staf_pmc_vehicles\txt\STAF_stryker_default_co.paa"};

            typicalCargo[] = {"STAF_contractor_crew","STAF_contractor_crew","STAF_contractor_crew"};
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
            maximumLoad = 600;
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
            maximumLoad = 3200;
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
            maximumLoad = 400;
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
            maximumLoad = 900;
        };

        class STAF_demining_UGV : B_UGV_02_Demining_F {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            side = 1;
            faction = "STAF_PMC";
            selectionClan = "";
            crew = "B_UAV_AI";
            editorPreview = "\staf_pmc_main\eden\STAF_demining_UGV.jpg";
        };

      //----------------------------------Statics---------------------------------

        class STAF_m2_high : CUP_B_M2StaticMG_US {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Browning (High)";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_m2_high.jpg";
        };

        class STAF_m2_low : CUP_B_M2StaticMG_MiniTripod_US {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "M2 Browning (Low)";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_m2_low.jpg";
        };

        class STAF_2B14 : CUP_O_2b14_82mm_RU {

            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Podnos 2B14";
            side = 1;
            faction = "STAF_PMC";
            crew = "STAF_contractor";
            editorPreview = "\staf_pmc_main\eden\STAF_2B14.jpg";
        };

    //----------------------------------OPFOR---------------------------------
      //----------------------------------Air------------------------------------
        /*class STAF_md500_opf : STAF_md500 {
            Side = 0;
            scope = 1;
            scopeCurator = 1;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_heli_pilot_opf";
        };*/

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

        class STAF_uh1h_opf : STAF_uh1h {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_heli_pilot_opf";
            typicalCargo[] = {"STAF_contractor_heli_pilot_opf"};
        };

        class STAF_EMB314_opf: STAF_EMB314 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_heli_pilot_opf";
            typicalCargo[] = {"STAF_contractor_heli_pilot_opf","STAF_contractor_heli_pilot_opf"};
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

        class STAF_suv_2_opf : STAF_suv_2 {
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

        class STAF_MATV_M240_opf : STAF_MATV_M240 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_opf";
        };

        class STAF_MATV_M2_opf : STAF_MATV_M2 {
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

        /*class STAF_btr90_opf : STAF_btr90 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_crew_OPF";
            typicalCargo[] = {"STAF_contractor_crew_OPF","STAF_contractor_crew_OPF","STAF_contractor_crew_OPF"};
        };*/

        class STAF_M1126_ICV_M2_opf : STAF_M1126_ICV_M2 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_crew_OPF";
            typicalCargo[] = {"STAF_contractor_crew_OPF","STAF_contractor_crew_OPF","STAF_contractor_crew_OPF"};
        };

        class STAF_M1128_MGS_opf : STAF_M1128_MGS {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_crew_OPF";
            typicalCargo[] = {"STAF_contractor_crew_OPF","STAF_contractor_crew_OPF","STAF_contractor_crew_OPF"};
        };

        class STAF_M1130_CV_M2_opf : STAF_M1130_CV_M2 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_crew_OPF";
            typicalCargo[] = {"STAF_contractor_crew_OPF","STAF_contractor_crew_OPF","STAF_contractor_crew_OPF"};
        };

        class STAF_M1129_MC_MK19_opf : STAF_M1129_MC_MK19 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_crew_OPF";
            typicalCargo[] = {"STAF_contractor_crew_OPF","STAF_contractor_crew_OPF","STAF_contractor_crew_OPF"};
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

        class STAF_demining_UGV_opf : STAF_demining_UGV {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "I_UAV_AI";
        };

      //----------------------------------Statics---------------------------------

        class STAF_m2_high_opf : STAF_m2_high {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_OPF";
        };

        class STAF_m2_low_opf : STAF_m2_low {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_OPF";
        };

        class STAF_2B14_opf : STAF_2B14 {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
            crew = "STAF_contractor_OPF";
        };

    //----------------------------------INDFOR---------------------------------
      //----------------------------------Air------------------------------------
        /*class STAF_md500_ind : STAF_md500 {
            Side = 2;
            scope = 1;
            scopeCurator = 1;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_heli_pilot_ind";
        };*/

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

        class STAF_uh1h_ind : STAF_uh1h {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_heli_pilot_ind";
            typicalCargo[] = {"STAF_contractor_heli_pilot_ind"};
        };

        class STAF_EMB314_ind: STAF_EMB314 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_heli_pilot_ind";
            typicalCargo[] = {"STAF_contractor_heli_pilot_ind","STAF_contractor_heli_pilot_ind"};
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

        class STAF_suv_2_ind : STAF_suv_2 {
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

        class STAF_MATV_M240_ind : STAF_MATV_M240 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_MATV_M2_ind : STAF_MATV_M2 {
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

        /*class STAF_btr90_ind : STAF_btr90 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_crew_IND";
            typicalCargo[] = {"STAF_contractor_crew_IND","STAF_contractor_crew_IND","STAF_contractor_crew_IND"};
        };*/

        class STAF_M1126_ICV_M2_ind : STAF_M1126_ICV_M2 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_crew_IND";
            typicalCargo[] = {"STAF_contractor_crew_IND","STAF_contractor_crew_IND","STAF_contractor_crew_IND"};
        };

        class STAF_M1128_MGS_ind : STAF_M1128_MGS {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_crew_IND";
            typicalCargo[] = {"STAF_contractor_crew_IND","STAF_contractor_crew_IND","STAF_contractor_crew_IND"};
        };

        class STAF_M1130_CV_M2_ind : STAF_M1130_CV_M2 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_crew_IND";
            typicalCargo[] = {"STAF_contractor_crew_IND","STAF_contractor_crew_IND","STAF_contractor_crew_IND"};
        };

        class STAF_M1129_MC_MK19_ind : STAF_M1129_MC_MK19 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_crew_IND";
            typicalCargo[] = {"STAF_contractor_crew_IND","STAF_contractor_crew_IND","STAF_contractor_crew_IND"};
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

        class STAF_demining_UGV_ind : STAF_demining_UGV {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "I_UAV_AI";
        };

      //----------------------------------Statics---------------------------------

        class STAF_m2_high_ind : STAF_m2_high {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_m2_low_ind : STAF_m2_low {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };

        class STAF_2B14_ind : STAF_2B14 {
            Side = 2;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_IND";
            crew = "STAF_contractor_ind";
        };
};
