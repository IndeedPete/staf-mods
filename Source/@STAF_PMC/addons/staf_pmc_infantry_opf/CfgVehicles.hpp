class EventHandlers;
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
    class B_Assault_Diver;
    class B_Pilot_F;
    class C_Man_1;

    //----------------------------Men------------------------------------------
    class STAF_contractor_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor.jpg";

        identityTypes[] = { "NoGlasses" , "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
          /*class RespawnEH
          {
            respawn = "[(_this select 0), (_this select 1)] execVM '\staf_pmc_main\scripts\random_uniform_respawn.sqf';";
          };*/
        };
    };

    class STAF_contractor_at_opf : B_soldier_AT_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (AT)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_at.jpg";

        identityTypes[] = { "NoGlasses" , "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    class STAF_contractor_mg_opf : B_soldier_AR_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Contractor (MG)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_mg.jpg";

        identityTypes[] = { "NoGlasses" , "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    class STAF_contractor_medic_opf : B_medic_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Field Medic";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_medic.jpg";

        identityTypes[] = { "NoGlasses" , "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    class STAF_contractor_marksman_opf : B_soldier_M_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_marksman.jpg";

        identityTypes[] = { "NoGlasses" , "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    class STAF_contractor_engineer_opf : B_engineer_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_engineer.jpg";

        identityTypes[] = { "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    class STAF_contractor_bodyguard_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Bodyguard";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_bodyguard.jpg";

        identityTypes[] = { "NoGlasses" , "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    class STAF_contractor_heli_pilot_opf : B_Helipilot_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_heli_pilot.jpg";

        identityTypes[] = { "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    class STAF_contractor_diver_opf : B_Assault_Diver {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Diver";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_contractor_diver.jpg";

        identityTypes[] = { "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid", "G_Diving"};
        weapons[] = {"Throw","Put" };
        magazines[] = {};

        class Eventhandlers: Eventhandlers
        {
          class InitEH
          {
              init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform_opf.sqf';";
          };
        };
    };

    //---------------------------VIP--------------------------------------------

    class STAF_boss_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Boss";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_boss.jpg";
        editorSubcategory = "EdSubcat_vip";
        genericNames = "STAF_VIPNames";

        identityTypes[] = { "TanoanHead_A3_08" , "Male02ENGFRE" };
        uniformClass = "HITMAN_47_SUIT";


        linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "HITMAN_47_Hidden_Vest" , "G_Aviator" };
        weapons[] = { "Desert_Eagle" , "Throw" , "Put" };
        magazines[] = { "7Rnd_50_AE" , "7Rnd_50_AE" };

        respawnLinkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid" , "HITMAN_47_Hidden_Vest" , "G_Aviator" };
        respawnWeapons[] = { "Desert_Eagle" , "Throw" , "Put" };
        respawnMagazines[] = { "7Rnd_50_AE" , "7Rnd_50_AE" };
    };

    class STAF_client_american_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (American)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_client_american.jpg";
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

    class STAF_client_british_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (British)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_client_british.jpg";
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

    class STAF_client_chinese_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Chinese)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_client_chinese.jpg";
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

    class STAF_client_african_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (African)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_client_african.jpg";
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

    class STAF_client_greek_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Greek)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_client_greek.jpg";
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

    class STAF_client_scientist_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (Scientist)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_client_scientist.jpg";
        editorSubcategory = "EdSubcat_client";

        identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGB_F" };
        uniformClass = "STAF_Scientist_opf";

        linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_blu" };
        weapons[] = { "Throw" , "Put" };
        magazines[] = {};

        respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "H_Cap_blu" };
        respawnWeapons[] = { "Throw" , "Put" };
        respawnMagazines[] = {};
    };

    class STAF_client_un_opf : B_Soldier_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Client (UN)";
        Side = 0;
        faction = "STAF_PMC_OPF";
        editorPreview = "\staf_pmc_main\eden\STAF_client_un.jpg";
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
