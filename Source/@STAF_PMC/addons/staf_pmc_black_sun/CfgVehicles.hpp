class CfgVehicles {
    class B_Soldier_F;
    class B_engineer_F;
    class B_Sharpshooter_F;

    class STAF_pmc_black_sun_cqc : B_Soldier_F
    {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "CQC";
        side = 1;
        faction = "STAF_black_sun";
        editorPreview = "\staf_pmc_black_sun\eden\STAF_pmc_black_sun_cqc.jpg";

        identityTypes[] = {"NoGlasses","Head_NATO","LanguageENG_F"};
        uniform = "skn_u_nbc_bluf_wd";
        backpack = "B_ViperLightHarness_oli_F";
        weapons[] = {"STAF_rhs_weap_M590_8RD_black_sun","STAF_KA_Glock_18_Single_black_sun","ACE_Vector","Throw","Put"};

        magazines[] = {"KA_17Rnd_9x19_Subsonic_Mag","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","rhsusf_8Rnd_00Buck","Chemlight_green","Chemlight_green","ACE_Chemlight_IR","ACE_Chemlight_IR","Chemlight_red","Chemlight_red","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","SmokeShellRed","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","ACE_M84","ACE_M84"};
        items[] = {"ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_adenosine","ACE_adenosine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_personalAidKit","ACE_personalAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
        linkedItems[] = {"skn_b_nbc_carrier_wd","H_HelmetB_black","skn_m50_gas_mask_hood_wd","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemAndroid","STAF_SAN_Headlamp_black_sun"};
    };

    class STAF_pmc_black_sun_rifleman : B_Soldier_F
    {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "STAF_black_sun";
        editorPreview = "\staf_pmc_black_sun\eden\STAF_pmc_black_sun_rifleman.jpg";

        identityTypes[] = {"NoGlasses","Head_NATO","LanguageENG_F"};
        uniform = "skn_u_nbc_bluf_wd";
        backpack = "B_ViperLightHarness_oli_F";

        weapons[] = {"STAF_hlc_rifle_G36A1_black_sun","STAF_KA_Glock_18_Single_black_sun","ACE_Vector","Throw","Put"};
        magazines[] = {"KA_17Rnd_9x19_Subsonic_Mag","KA_17Rnd_9x19_Subsonic_Mag","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","Chemlight_green","Chemlight_green","ACE_Chemlight_IR","ACE_Chemlight_IR","Chemlight_red","Chemlight_red","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","SmokeShellRed","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","ACE_M84","ACE_M84","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36","hlc_30rnd_556x45_SOST_G36"};
        items[] = {"ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_adenosine","ACE_adenosine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_personalAidKit","ACE_personalAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","HLC_Optic_G36dualoptic35x"};
        linkedItems[] = {"skn_b_nbc_carrier_wd","H_HelmetB_black","skn_m50_gas_mask_hood_wd","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemAndroid","STAF_SAN_Headlamp_black_sun"};
    };

    class STAF_pmc_black_sun_scientist : B_Soldier_F
    {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Scientist";
        side = 1;
        faction = "STAF_black_sun";
        editorPreview = "\staf_pmc_black_sun\eden\STAF_pmc_black_sun_scientist.jpg";

        identityTypes[] = {"NoGlasses","Head_NATO","LanguageENG_F"};
        uniform = "skn_u_nbc_bluf_wd";
        backpack = "B_ViperLightHarness_oli_F";

        weapons[] = {"STAF_hlc_smg_mp5sd6_black_sun","STAF_KA_Glock_18_Single_black_sun","ACE_Vector","Throw","Put"};
        magazines[] = {"KA_17Rnd_9x19_Subsonic_Mag","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","Chemlight_green","Chemlight_green","ACE_Chemlight_IR","ACE_Chemlight_IR","Chemlight_red","Chemlight_red","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","SmokeShellRed","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","ACE_M84","ACE_M84"};
        items[] = {"ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_adenosine","ACE_adenosine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","MineDetector","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_personalAidKit","ACE_personalAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
        linkedItems[] = {"skn_b_nbc_carrier_wd","H_HelmetB_black","skn_m50_gas_mask_hood_wd","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemAndroid","STAF_SAN_Headlamp_black_sun"};
    };

    class STAF_pmc_black_sun_sharpshooter : B_Soldier_F
    {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "STAF_black_sun";
        editorPreview = "\staf_pmc_black_sun\eden\STAF_pmc_black_sun_sharpshooter.jpg";

        identityTypes[] = {"NoGlasses","Head_NATO","LanguageENG_F"};
        uniform = "skn_u_nbc_bluf_wd";
        backpack = "B_ViperLightHarness_oli_F";

        weapons[] = {"STAF_srifle_LRR_F_black_sun","STAF_hlc_smg_mp5k_black_sun","ACE_Vector","Throw","Put"};
        magazines[] = {"ACE_7Rnd_408_305gr_Mag","ACE_7Rnd_408_305gr_Mag","ACE_7Rnd_408_305gr_Mag","ACE_7Rnd_408_305gr_Mag","ACE_7Rnd_408_305gr_Mag","ACE_7Rnd_408_305gr_Mag","ACE_7Rnd_408_305gr_Mag","Chemlight_green","Chemlight_green","ACE_Chemlight_IR","ACE_Chemlight_IR","Chemlight_red","Chemlight_red","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","B_IR_Grenade","SmokeShellGreen","SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","SmokeShellRed","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","ACE_M84","ACE_M84","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_9x19_SD_MP5"};
        items[] = {"ACE_CableTie","ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_XL50","ACE_adenosine","ACE_adenosine","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_personalAidKit","ACE_personalAidKit","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
        linkedItems[] = {"skn_b_nbc_carrier_wd","H_HelmetB_black","skn_m50_gas_mask_hood_wd","ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemAndroid","STAF_SAN_Headlamp_black_sun"};
    };
};
