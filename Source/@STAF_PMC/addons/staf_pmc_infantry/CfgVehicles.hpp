class CfgVehicles {
    class B_Soldier_F;
    class B_soldier_AT_F;
    class B_soldier_AR_F;
    class B_medic_F;
    class B_soldier_M_F;
    class B_engineer_F;
    class B_Sharpshooter_F;
    class B_Helipilot_F;
    class B_helicrew_F;
    class B_Pilot_F;
    class C_Man_1;

    class B_Soldier_F_base: B_Soldier_F
    {
      class EventHandlers;
    };

    class B_soldier_AT_F_base: B_soldier_AT_F
    {
      class EventHandlers;
    };

    class B_soldier_AR_F_base: B_soldier_AR_F
    {
      class EventHandlers;
    };

    class B_medic_F_base: B_medic_F
    {
      class EventHandlers;
    };

    class B_soldier_M_F_base: B_soldier_M_F
    {
      class EventHandlers;
    };

    class B_engineer_F_base: B_engineer_F
    {
      class EventHandlers;
    };

    class B_Sharpshooter_F: B_Sharpshooter_F
    {
      class EventHandlers;
    };

    //----------------------------Men------------------------------------------
    class STAF_contractor : B_Soldier_F_base {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "STAF_Scientist";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_infantry\scripts\random_uniform.sqf';";
          };
          class RespawnEH
          {
            respawn = "[(_this select 0), (_this select 1)] execVM '\staf_pmc_infantry\scripts\random_uniform_respawn.sqf';";
          };
        };
    };

    class STAF_contractor_at : B_soldier_AT_F_base {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (AT)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_at.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "STAF_Scientist";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA"};

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA"};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_infantry\scripts\random_uniform.sqf';";
          };
          class RespawnEH
          {

            respawn = "[(_this select 0), (_this select 1)] execVM '\staf_pmc_infantry\scripts\random_uniform_respawn.sqf';";
          };
        };
    };

    class STAF_contractor_mg : B_soldier_AR_F_base {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (MG)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_mg.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "STAF_Scientist";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_MG_OGA_OD" , "OGA_G_Helmet1" };
        weapons[] = { "STAF_rifle_m249" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_MG_OGA_OD" , "OGA_G_Helmet1" };
        respawnWeapons[] = { "STAF_rifle_m249" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" };

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_infantry\scripts\random_uniform.sqf';";
          };
          class RespawnEH
          {

            respawn = "[(_this select 0), (_this select 1)] execVM '\staf_pmc_infantry\scripts\random_uniform_respawn.sqf';";
          };
        };
    };

    class STAF_contractor_medic : B_medic_F_base {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field Medic";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_medic.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "STAF_Scientist";
        backpack = "STAF_B_Kitbag_medic_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_infantry\scripts\random_uniform.sqf';";
          };
          class RespawnEH
          {

            respawn = "[(_this select 0), (_this select 1)] execVM '\staf_pmc_infantry\scripts\random_uniform_respawn.sqf';";
          };
        };
    };

    class STAF_contractor_marksman : B_soldier_M_F_base {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_marksman.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "STAF_Scientist";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        weapons[] = { "STAF_rifle_m14" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        respawnWeapons[] = { "STAF_rifle_m14" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_infantry\scripts\random_uniform.sqf';";
          };
          class RespawnEH
          {

            respawn = "[(_this select 0), (_this select 1)] execVM '\staf_pmc_infantry\scripts\random_uniform_respawn.sqf';";
          };
        };
    };

    class STAF_contractor_engineer : B_engineer_F_base {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_engineer.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F" };
        uniformClass = "STAF_Scientist";
        backpack = "STAF_B_Kitbag_engineer_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "ACE_VMM3" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "ACE_VMM3" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_infantry\scripts\random_uniform.sqf';";
          };
          class RespawnEH
          {

            respawn = "[(_this select 0), (_this select 1)] execVM '\staf_pmc_infantry\scripts\random_uniform_respawn.sqf';";
          };
        };
    };

    class STAF_contractor_bodyguard : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bodyguard";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_bodyguard.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "STAF_Marshal";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "VSM_Bowman_cap_Black" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "VSM_Bowman_cap_Black" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };
    };

    //---------------------------Special----------------------------------------
    /*class STAF_contractor_cbrn : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_cbrn.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "skn_m04_gas_mask_blu", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_indep_blk";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blu"  , "skn_m04_gas_mask_blu" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blu" , "skn_m04_gas_mask_blu" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };
    };

    /*class STAF_contractor_sharpshooter : B_Sharpshooter_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_sharpshooter.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        weapons[] = { "STAF_rifle_gm6" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "5Rnd_127x108_Mag" , "SmokeShell" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_gm6" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "5Rnd_127x108_Mag" , "SmokeShell" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };
    };*/

    /*class STAF_contractor_diver : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_diver.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_B_survival_uniform";
        backpack = "B_AssaultPack_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };
    };

    /*class STAF_contractor_helipilot : B_Helipilot_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_helipilot.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "VSM_Bowman_cap_Black" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "VSM_Bowman_cap_Black" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };
    };*/

    /*class STAF_contractor_copilot : B_helicrew_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_copilot.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "H_Watchcap_khk" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "H_Watchcap_khk" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };
    };*/

    /*class STAF_contractor_helipilot_heavy : B_Helipilot_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot (Heavy)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_helipilot_heavy.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "MCB_Camo_Cyre_TS";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_PilotHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_PilotHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };
    };*/

    /*class STAF_contractor_copilot_heavy : B_helicrew_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew (Heavy)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_copilot_heavy.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "MCB_Camo_Cyre_TS";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_CrewHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_CrewHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };
    };*/

    /*class STAF_contractor_pilot : B_Pilot_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_contractor_pilot.jpg";
        editorSubcategory = "EdSubcat_special";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_Marshal";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_Peltor_OD" };
        weapons[] = { "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_Peltor_OD" };
        respawnWeapons[] = { "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" };
    };*/

    //---------------------------VIP--------------------------------------------

    class STAF_boss : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Boss";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_boss.jpg";
        editorSubcategory = "EdSubcat_vip";
        genericNames = "STAF_VIPNames";

        identityTypes[] = { "Syndikat_Boss_F" , "Male02ENGFRE" };
        uniformClass = "HITMAN_47_SUIT";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "HITMAN_47_Hidden_Vest" , "G_Aviator" };
        weapons[] = { "Desert_Eagle" , "Throw" , "Put" };
        magazines[] = { "7Rnd_50_AE" , "7Rnd_50_AE" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "HITMAN_47_Hidden_Vest" , "G_Aviator" };
        respawnWeapons[] = { "Desert_Eagle" , "Throw" , "Put" };
        respawnMagazines[] = { "7Rnd_50_AE" , "7Rnd_50_AE" };
    };

    class STAF_client_american : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (American)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_client_american.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = { "NoGlasses" , "LanguageENG_F" ,"Head_NATO"};
        uniformClass = "tacs_Suit_VIP";


        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_usblack" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_usblack" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };

    class STAF_client_british : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (British)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_client_british.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGB_F" };
        uniformClass = "tacs_Suit_VIP";


        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Hat_checker" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Hat_checker" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };

    class STAF_client_chinese : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Chinese)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_client_chinese.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = { "Head_Asian" , "LanguageCHI_F" };
        uniformClass = "HITMAN_47_SUIT";


        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "G_Aviator" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "G_Aviator" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };

    class STAF_client_african : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (African)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_client_african.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_African" , "LanguageENGFRE_F" };
        uniformClass = "HITMAN_47_SUIT";


        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_gry" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_gry" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };

    class STAF_client_greek : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Greek)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_client_greek.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Greek" , "LanguageGRE_F" };
        uniformClass = "STAF_Marshal";


        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_sgg" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_sgg" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };

    class STAF_client_scientist : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Scientist)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_client_scientist.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGB_F" };
        uniformClass = "STAF_Scientist";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_blu" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_blu" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };

    class STAF_client_un : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (UN)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\eden\STAF_client_un.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGFRE_F" };
        uniformClass = "M81_Camo_crye";


        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "LOP_V_Carrier_OLV" , "LOP_H_Beret_UN" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "LOP_V_Carrier_OLV" , "LOP_H_Beret_UN" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };
};
