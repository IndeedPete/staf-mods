class CBA_Extended_EventHandlers_base;

class CfgVehicles {
    class B_Soldier_F;
    class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
    class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_GL_F;
    class B_Soldier_GL_F_OCimport_01 : B_Soldier_GL_F { scope = 0; class EventHandlers; };
    class B_Soldier_GL_F_OCimport_02 : B_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AT_F;
    class B_soldier_AT_F_OCimport_01 : B_soldier_AT_F { scope = 0; class EventHandlers; };
    class B_soldier_AT_F_OCimport_02 : B_soldier_AT_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_soldier_M_F;
    class B_soldier_M_F_OCimport_01 : B_soldier_M_F { scope = 0; class EventHandlers; };
    class B_soldier_M_F_OCimport_02 : B_soldier_M_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AR_F;
    class B_soldier_AR_F_OCimport_01 : B_soldier_AR_F { scope = 0; class EventHandlers; };
    class B_soldier_AR_F_OCimport_02 : B_soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_Sharpshooter_F;
    class B_Sharpshooter_F_OCimport_01 : B_Sharpshooter_F { scope = 0; class EventHandlers; };
    class B_Sharpshooter_F_OCimport_02 : B_Sharpshooter_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_soldier_exp_F;
    class B_soldier_exp_F_OCimport_01 : B_soldier_exp_F { scope = 0; class EventHandlers; };
    class B_soldier_exp_F_OCimport_02 : B_soldier_exp_F_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_F;
    class B_soldier_UAV_F_OCimport_01 : B_soldier_UAV_F { scope = 0; class EventHandlers; };
    class B_soldier_UAV_F_OCimport_02 : B_soldier_UAV_F_OCimport_01 { class EventHandlers; };

    class B_engineer_F;
    class B_engineer_F_OCimport_01 : B_engineer_F { scope = 0; class EventHandlers; };
    class B_engineer_F_OCimport_02 : B_engineer_F_OCimport_01 { class EventHandlers; };

    class B_Helipilot_F;
    class B_Helipilot_F_OCimport_01 : B_Helipilot_F { scope = 0; class EventHandlers; };
    class B_Helipilot_F_OCimport_02 : B_Helipilot_F_OCimport_01 { class EventHandlers; };

    class B_helicrew_F;
    class B_helicrew_F_OCimport_01 : B_helicrew_F { scope = 0; class EventHandlers; };
    class B_helicrew_F_OCimport_02 : B_helicrew_F_OCimport_01 { class EventHandlers; };

    class B_Pilot_F;
    class B_Pilot_F_OCimport_01 : B_Pilot_F { scope = 0; class EventHandlers; };
    class B_Pilot_F_OCimport_02 : B_Pilot_F_OCimport_01 { class EventHandlers; };

    class C_Man_1;
    class C_Man_1_OCimport_01 : C_Man_1 { scope = 0; class EventHandlers; };
    class C_Man_1_OCimport_02 : C_Man_1_OCimport_01 { class EventHandlers; };

    class STAF_contractor_g36 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (G36)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_g36.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_GS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_scar : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (SCAR)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_scar.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_GS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_mk18 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (Mk18)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_mk18.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_GS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_mx : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (MX)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_mx.jpg";


        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_GS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_4" , "VSM_Beanie_Black" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_g36_GL : B_Soldier_GL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (G36) (GL)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_g36_GL.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_BS_GP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        weapons[] = { "STAF_rifle_g36_gl" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_SmokeRed_Grenade_shell" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        respawnWeapons[] = { "STAF_rifle_g36_gl" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_SmokeRed_Grenade_shell" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_scar_GL : B_Soldier_GL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (SCAR) (GL)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_scar_GL.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_BS_GP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        weapons[] = { "STAF_rifle_scar_gl_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "1Rnd_SmokeRed_Grenade_shell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        respawnWeapons[] = { "STAF_rifle_scar_gl_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "1Rnd_SmokeRed_Grenade_shell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_mk18_GL : B_Soldier_GL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (Mk18) (GL)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_mk18_GL.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_BS_GP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        weapons[] = { "STAF_rifle_mk18_gl" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "1Rnd_SmokeRed_Grenade_shell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        respawnWeapons[] = { "STAF_rifle_mk18_gl" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "1Rnd_SmokeRed_Grenade_shell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_mx_GL : B_Soldier_GL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (MX) (GL)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_mx_GL.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_BS_GP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        weapons[] = { "STAF_rifle_mx_gl" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_SmokeRed_Grenade_shell" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_RAV_MG_M81" , "VSM_M81_OPS" };
        respawnWeapons[] = { "STAF_rifle_mx_gl" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "1Rnd_SmokeRed_Grenade_shell" , "1Rnd_Smoke_Grenade_shell" , "Chemlight_green" , "Chemlight_green" , "3Rnd_HE_Grenade_shell" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_g36_AT : B_soldier_AT_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (G36) (AT)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_g36_AT.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_TS_BP_BB";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        weapons[] = { "STAF_rifle_g36" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_scar_AT : B_soldier_AT_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (SCAR) (AT)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_scar_AT.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_TS_BP_BB";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_mk18_AT : B_soldier_AT_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (Mk18) (AT)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_mk18_AT.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_TS_BP_BB";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_contractor_mx_AT : B_soldier_AT_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (MX) (AT)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_contractor_mx_AT.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_TS_BP_BB";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        weapons[] = { "STAF_rifle_mx" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_5" , "MCB_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_launcher_smaw" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "rhs_mag_smaw_SR" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" , "rhs_mag_smaw_HEAA" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_medic_g36 : B_medic_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field Medic (G36)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_medic_g36.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_ES_BP_BB";
        backpack = "STAF_B_Kitbag_medic_rgr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_medic_scar : B_medic_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field medic (SCAR)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_medic_scar.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_ES_BP_BB";
        backpack = "STAF_B_Kitbag_medic_rgr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_medic_mk18 : B_medic_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field Medic (Mk18)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_medic_mk18.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_ES_BP_BB";
        backpack = "STAF_B_Kitbag_medic_rgr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_medic_mx : B_medic_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field Medic (MX)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_medic_mx.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_ES_BP_BB";
        backpack = "STAF_B_Kitbag_medic_rgr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_operator_OGA_OD" , "VSM_Bowman_cap_balaclava_Black" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_marksman_spar17 : B_soldier_M_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman (Spar-17)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_marksman_spar17.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_RS_BS_TP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        weapons[] = { "STAF_rifle_hk417" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        respawnWeapons[] = { "STAF_rifle_hk417" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_marksman_ak12 : B_soldier_M_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman (Ak-12)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_marksman_ak12.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_RS_BS_TP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        weapons[] = { "STAF_rifle_ak12" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        respawnWeapons[] = { "STAF_rifle_ak12" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "30Rnd_762x39_Mag_F" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_marksman_emr1 : B_soldier_M_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman (Emr-1)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_marksman_emr1.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_RS_BS_TP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        weapons[] = { "STAF_rifle_ebr" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "M90d_Vest_4" , "H_Watchcap_khk" };
        respawnWeapons[] = { "STAF_rifle_ebr" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "20Rnd_762x51_Mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_mg_m249 : B_soldier_AR_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner (M249)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_mg_m249.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_TP_TB";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_MG_OGA_OD" , "OGA_G_Helmet1" };
        weapons[] = { "STAF_rifle_m249" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_MG_OGA_OD" , "OGA_G_Helmet1" };
        respawnWeapons[] = { "STAF_rifle_m249" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" , "hlc_200rnd_556x45_M_SAW" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_mg_negev : B_soldier_AR_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner (Negev)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_mg_negev.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_TP_TB";
        backpack = "tacs_Backpack_Kitbag_DarkBlack";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_MG_OGA_OD" , "OGA_G_Helmet1" };
        weapons[] = { "STAF_rifle_negev" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "150Rnd_762x54_Box_Tracer" , "150Rnd_762x54_Box_Tracer" , "150Rnd_762x54_Box_Tracer" , "150Rnd_762x54_Box_Tracer" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_LBT6094_MG_OGA_OD" , "OGA_G_Helmet1" };
        respawnWeapons[] = { "STAF_rifle_negev" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "150Rnd_762x54_Box_Tracer" , "150Rnd_762x54_Box_Tracer" , "150Rnd_762x54_Box_Tracer" , "150Rnd_762x54_Box_Tracer" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_sharpshooter_gm6 : B_Sharpshooter_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter (Gm6)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_sharpshooter_gm6.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        weapons[] = { "STAF_rifle_gm6" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "5Rnd_127x108_Mag" , "SmokeShell" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_gm6" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "5Rnd_127x108_Mag" , "SmokeShell" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "5Rnd_127x108_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_sharpshooter_mar10 : B_Sharpshooter_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter (Mar-10)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_sharpshooter_mar10.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        weapons[] = { "STAF_rifle_mar10" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "10Rnd_338_Mag" , "Chemlight_green" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_mar10" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "10Rnd_338_Mag" , "Chemlight_green" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "10Rnd_338_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_sharpshooter_m200 : B_Sharpshooter_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sharpshooter (M200)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_sharpshooter_m200.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        weapons[] = { "STAF_rifle_m200" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "7Rnd_408_Mag" , "Chemlight_green" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_CarrierRig_Gunner_OGA" , "MC_Helmet2" };
        respawnWeapons[] = { "STAF_rifle_m200" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "7Rnd_408_Mag" , "Chemlight_green" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "7Rnd_408_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_teamleader_g36 : B_Soldier_TL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader (G36)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_teamleader_g36.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_BS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_teamleader_scar : B_Soldier_TL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader (SCAR)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_teamleader_scar.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_BS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_teamleader_mk18 : B_Soldier_TL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader (Mk18)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_teamleader_mk18.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_BS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_teamleader_mx : B_Soldier_TL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader (MX)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_teamleader_mx.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_BS_BP_BB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemcTab" , "MCB_Vest_5" , "VSM_Black_OPS" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_exp_g36 : B_soldier_exp_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist (G36)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_exp_g36.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
        backpack = "STAF_B_Kitbag_exp_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "Chemlight_green" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "Chemlight_green" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_exp_scar : B_soldier_exp_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist (SCAR)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_exp_scar.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
        backpack = "STAF_B_Kitbag_exp_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_exp_mk18 : B_soldier_exp_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist (Mk18)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_exp_mk18.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
        backpack = "STAF_B_Kitbag_exp_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_exp_mx : B_soldier_exp_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist (MX)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_exp_mx.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_LS_CLRS_TP_BB";
        backpack = "STAF_B_Kitbag_exp_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "Chemlight_green" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "MCB_Vest_1" , "VSM_Bowman_cap_Tan" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "Chemlight_green" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "SatchelCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "DemoCharge_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" , "ClaymoreDirectionalMine_Remote_Mag" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_uav_g36 : B_soldier_UAV_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist (G36)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_uav_g36.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_RS_BS_DGP_BB";
        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_uav_scar : B_soldier_UAV_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist (SCAR)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_uav_scar.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_RS_BS_DGP_BB";
        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_uav_mk18 : B_soldier_UAV_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist (Mk18)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_uav_mk18.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_RS_BS_DGP_BB";
        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_uav_mx : B_soldier_UAV_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Specialist (MX)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_uav_mx.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Combat_RS_BS_DGP_BB";
        backpack = "B_UAV_01_backpack_F";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "M90_Vest_4" , "VSM_Beanie_OD" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_engineer_g36 : B_engineer_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (G36)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_engineer_g36.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F" };
        uniformClass = "MC_GS_Camo_SS";
        backpack = "STAF_B_Kitbag_engineer_cbr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        weapons[] = { "STAF_rifle_g36" , "ACE_VMM3" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        respawnWeapons[] = { "STAF_rifle_g36" , "ACE_VMM3" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_engineer_scar : B_engineer_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (SCAR)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_engineer_scar.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F" };
        uniformClass = "MC_GS_Camo_SS";
        backpack = "STAF_B_Kitbag_engineer_cbr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "ACE_VMM3" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "ACE_VMM3" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_engineer_mk18 : B_engineer_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (MK18)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_engineer_mk18.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F" };
        uniformClass = "MC_GS_Camo_SS";
        backpack = "STAF_B_Kitbag_engineer_cbr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        weapons[] = { "STAF_rifle_mk18" , "ACE_VMM3" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "ACE_VMM3" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_engineer_mx : B_engineer_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer (MX)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_engineer_mx.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F" };
        uniformClass = "MC_GS_Camo_SS";
        backpack = "STAF_B_Kitbag_engineer_cbr";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        weapons[] = { "STAF_rifle_mx" , "ACE_VMM3" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "B_UavTerminal" , "VSM_MBSS_CB" , "VSM_BackwardsHat_Peltor_tan" , "VSM_Facemask_tan_Peltor_glasses" };
        respawnWeapons[] = { "STAF_rifle_mx" , "ACE_VMM3" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (isServer) then {_unit = _this select 0;_unit setUnitLoadout [['STAF_rifle_mx','','acc_pointer_IR','rhsusf_acc_eotech_xps3',['30Rnd_65x39_caseless_mag',30],[],''],[],['ACE_VMM3','','','',[],[],''],['MC_GS_Camo_SS',[['ACE_fieldDressing',2],['ACE_morphine',1],['30Rnd_65x39_caseless_mag',4,30]]],['VSM_MBSS_CB',[['30Rnd_65x39_caseless_mag',6,30]]],['B_AssaultPack_cbr',[['ACE_DefusalKit',1],['ACE_EntrenchingTool',1],['ACE_wirecutter',1],['ToolKit',1]]],'VSM_BackwardsHat_Peltor_tan','VSM_Facemask_tan_Peltor_Goggles',[],['ItemMap','ItemAndroid','ItemRadio','ItemCompass','ItemWatch','']];reload _unit;};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_diver_g36 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver (G36)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_diver_g36.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_B_survival_uniform";
        backpack = "B_AssaultPack_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_diver_scar : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver (SCAR)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_diver_scar.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_B_survival_uniform";
        backpack = "B_AssaultPack_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_diver_mk18 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver (MK18)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_diver_mk18.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_B_survival_uniform";
        backpack = "B_AssaultPack_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_diver_mx : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver (MX)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_diver_g36.jpg";

        identityTypes[] = { "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_B_survival_uniform";
        backpack = "B_AssaultPack_blk";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_RebreatherB" , "rhsusf_opscore_bk", "G_B_Diving" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_mtp_g36 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (G36) (MTP)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_mtp_g36.jpg";

        identityTypes[] = { "skn_m50_gas_mask_hood", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_mtp";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk", "skn_m50_gas_mask_hood" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_mtp_scar : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (SCAR) (MTP)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_mtp_scar.jpg";

        identityTypes[] = { "skn_m50_gas_mask_hood", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_mtp";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk"  , "skn_m50_gas_mask_hood" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_mtp_mk18 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (Mk18) (MTP)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_mtp_mk18.jpg";

        identityTypes[] = { "skn_m50_gas_mask_hood", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_mtp";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_mtp_mx : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (MX) (MTP)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_mtp_mx.jpg";


        identityTypes[] = { "skn_m50_gas_mask_hood", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_mtp";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_wd_g36 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (G36) (Woodland)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_wd_g36.jpg";

        identityTypes[] = { "skn_m50_gas_mask_hood_wd", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_wd";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        weapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        respawnWeapons[] = { "STAF_rifle_g36" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_wd_scar : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (SCAR) (Woodland)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_wd_scar.jpg";

        identityTypes[] = { "skn_m50_gas_mask_hood_wd", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_wd";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        weapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        respawnWeapons[] = { "STAF_rifle_scar_blk_xps" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_wd_mk18 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (Mk18) (Woodland)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_wd_mk18.jpg";

        identityTypes[] = { "skn_m50_gas_mask_hood_wd", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_wd";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        weapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        respawnWeapons[] = { "STAF_rifle_mk18" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "SmokeShell" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "30Rnd_556x45_Stanag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_cbrn_wd_mx : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "CBRN Unit (MX) (Woodland)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_cbrn_wd_mx.jpg";


        identityTypes[] = { "skn_m50_gas_mask_hood_wd", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "skn_u_nbc_bluf_wd";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        weapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "skn_b_nbc_xrt_tac_blk" , "skn_m50_gas_mask_hood_wd" };
        respawnWeapons[] = { "STAF_rifle_mx" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "30Rnd_65x39_caseless_mag" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" , "HandGrenade" , "HandGrenade" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_bodyguard_mp5 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bodyguard (MP5)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_bodyguard_mp5.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_Marshal";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "VSM_Bowman_cap_Black" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "VSM_Bowman_cap_Black" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_bodyguard_p90 : B_Soldier_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bodyguard (P90)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_bodyguard_p90.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_Marshal";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "VSM_Bowman_cap_Black" };
        weapons[] = { "STAF_rifle_p90" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "SmokeShell" , "50Rnd_570x28_SMG_03" , "50Rnd_570x28_SMG_03" , "50Rnd_570x28_SMG_03" , "50Rnd_570x28_SMG_03" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "VSM_Bowman_cap_Black" };
        respawnWeapons[] = { "STAF_rifle_p90" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "SmokeShell" , "50Rnd_570x28_SMG_03" , "50Rnd_570x28_SMG_03" , "50Rnd_570x28_SMG_03" , "50Rnd_570x28_SMG_03" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_helipilot : B_Helipilot_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_helipilot.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "VSM_Bowman_cap_Black" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "VSM_Bowman_cap_Black" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_copilot : B_helicrew_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_copilot.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "tacs_Uniform_Garment_LS_OS_EP_TB";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "H_Watchcap_khk" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "V_TacVest_blk" , "H_Watchcap_khk" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_helipilot_heavy : B_Helipilot_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot (Heavy)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_helipilot_heavy.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "MCB_Camo_Cyre_TS";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_PilotHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_PilotHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_copilot_heavy : B_helicrew_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Crew (Heavy)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_copilot_heavy.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "MCB_Camo_Cyre_TS";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_CrewHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        weapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "tacs_Vest_Tactical_DarkBlack" , "H_CrewHelmetHeli_B" , "VSM_balaclava_Black_Skull" };
        respawnWeapons[] = { "STAF_rifle_mp5" , "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "hlc_30Rnd_9x19_B_MP5" , "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" , "SmokeShell" , "SmokeShellGreen" , "Chemlight_green" , "Chemlight_green" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_pilot : B_Pilot_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_pilot.jpg";

        identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"};
        uniformClass = "U_Marshal";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_Peltor_OD" };
        weapons[] = { "STAF_pistol_glock17" , "Throw" , "Put" };
        magazines[] = { "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "VSM_Peltor_OD" };
        respawnWeapons[] = { "STAF_pistol_glock17" , "Throw" , "Put" };
        respawnMagazines[] = { "KA_17Rnd_9x19_Mag" , "KA_17Rnd_9x19_Mag" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_boss : B_Soldier_TL_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Boss";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_boss.jpg";
        editorSubcategory = "EdSubcat_vip";
        genericNames = "STAF_VIPNames";

        identityTypes[] = { "Syndikat_Boss_F" , "Male02ENGFRE" };
        uniformClass = "HITMAN_47_SUIT";
        backpack = "";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "HITMAN_47_Hidden_Vest" , "G_Aviator" };
        weapons[] = { "Desert_Eagle" , "Throw" , "Put" };
        magazines[] = { "7Rnd_50_AE" , "7Rnd_50_AE" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "HITMAN_47_Hidden_Vest" , "G_Aviator" };
        respawnWeapons[] = { "Desert_Eagle" , "Throw" , "Put" };
        respawnMagazines[] = { "7Rnd_50_AE" , "7Rnd_50_AE" };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_client_american : C_Man_1_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (American)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_client_american.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = { "NoGlasses" , "LanguageENG_F" ,"Head_NATO"};
        uniformClass = "tacs_Suit_VIP";
        backpack = "";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_usblack" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_usblack" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_client_british : STAF_client_american {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (British)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_client_british.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGB_F" };
        uniformClass = "tacs_Suit_VIP";
        backpack = "";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Hat_checker" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Hat_checker" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_client_chinese : STAF_client_british {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Chinese)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_client_chinese.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = { "Head_Asian" , "LanguageCHI_F" };
        uniformClass = "HITMAN_47_SUIT";
        backpack = "";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "G_Aviator" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "G_Aviator" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_client_african : STAF_client_chinese {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (African)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_client_african.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_African" , "LanguageENGFRE_F" };
        uniformClass = "HITMAN_47_SUIT";
        backpack = "";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_gry" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_gry" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_client_greek : STAF_client_african {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Greek)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_client_greek.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Greek" , "LanguageGRE_F" };
        uniformClass = "U_Marshal";
        backpack = "";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_sgg" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Bandanna_sgg" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_client_scientist : STAF_client_greek {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Scientist)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_client_scientist.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGB_F" };
        uniformClass = "U_C_Scientist";
        backpack = "";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_blu" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_blu" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_client_un : STAF_client_scientist {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (UN)";
        side = 1;
        faction = "STAF_PMC";
        editorPreview = "\staf_pmc_infantry\staf\addons\staf_pmc_infantry\eden\STAF_client_un.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGFRE_F" };
        uniformClass = "M81_Camo_crye";
        backpack = "";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "LOP_V_Carrier_OLV" , "LOP_H_Beret_UN" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "LOP_V_Carrier_OLV" , "LOP_H_Beret_UN" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "tacs_Insignia_ZombieOutbreakResponseTeam_Black";
    };
};
