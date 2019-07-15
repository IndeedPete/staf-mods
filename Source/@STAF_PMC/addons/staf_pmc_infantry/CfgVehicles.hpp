class EventHandlers;
class CfgVehicles {
    class B_Soldier_F;
    class B_soldier_AT_F;
    class B_soldier_AA_F;
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

    //----------------------------BLUFOR---------------------------------------
      //----------------------------Men------------------------------------------
        class STAF_contractor : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Contractor";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor.jpg";

            //identityTypes[] = { "NoGlasses", "Head_NATO" , "LanguageENG_F"}; // Just as a working Backup
            identityTypes[] = { "NoGlasses", "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_contractor_at : B_soldier_AT_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Contractor (AT)";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_at.jpg";

            identityTypes[] = { "NoGlasses", "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

        /*class STAF_contractor_aa : B_soldier_AA_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Contractor (AA)";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_aA.jpg";

            identityTypes[] = { "NoGlasses", "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };*/

        class STAF_contractor_mg : B_soldier_AR_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Contractor (MG)";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_mg.jpg";

            identityTypes[] = { "NoGlasses", "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_contractor_medic : B_medic_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Field Medic";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_medic.jpg";

            identityTypes[] = { "NoGlasses", "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_contractor_marksman : B_soldier_M_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Marksman";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_marksman.jpg";

            identityTypes[] = { "NoGlasses", "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_contractor_engineer : B_engineer_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Engineer";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_engineer.jpg";

            identityTypes[] = { "Head_NATO" , "LanguageENG_F" };
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
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
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_bodyguard.jpg";

            identityTypes[] = { "NoGlasses", "Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_contractor_heli_pilot : B_Helipilot_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Helicopter Pilot";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_heli_pilot.jpg";

            identityTypes[] = {"Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_contractor_diver : B_Assault_Diver {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Diver";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_contractor_diver.jpg";

            identityTypes[] = {"Head_African" , "Head_Asian" , "female_01" , "female_02" , "female_03" , "female_04" , "female_05" , "female2_01" , "female2_02" , "female2_03" , "female2_04" , "female3_01" , "female3_02" , "female3_03" , "female3_04" , "Head_Russian" , "Head_Euro" , "LanguageENG_F", "LanguageENGB_F"};
            uniformClass = "STAF_Scientist";

            linkedItems[] = { "ItemMap" , "ItemCompass" , "ItemWatch" , "ItemRadio" , "ItemAndroid", "G_Diving"};
            weapons[] = {"Throw","Put" };
            magazines[] = {};

            class Eventhandlers: Eventhandlers
            {
              class InitEH
              {
                  init = "[(_this select 0)] execVM '\staf_pmc_main\scripts\random_uniform.sqf';";
              };
            };
        };

      //---------------------------VIP--------------------------------------------

        class STAF_boss : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Boss";
            side = 1;
            faction = "STAF_PMC";
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

        class STAF_client_american : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Client (American)";
            side = 1;
            faction = "STAF_PMC";
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

        class STAF_client_british : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Client (British)";
            side = 1;
            faction = "STAF_PMC";
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

        class STAF_client_chinese : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Client (Chinese)";
            side = 1;
            faction = "STAF_PMC";
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

        class STAF_client_african : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Client (African)";
            side = 1;
            faction = "STAF_PMC";
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

        class STAF_client_greek : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Client (Greek)";
            side = 1;
            faction = "STAF_PMC";
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

        class STAF_client_scientist : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Client (Scientist)";
            side = 1;
            faction = "STAF_PMC";
            editorPreview = "\staf_pmc_main\eden\STAF_client_scientist.jpg";
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
            editorPreview = "\staf_pmc_main\eden\STAF_client_un.jpg";
            editorSubcategory = "EdSubcat_client";

            identityTypes[] = {"NoGlasses", "Head_Euro" , "LanguageENGFRE_F" };
            uniformClass = "M81_Camo_crye";


            linkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "SP_JackEllis1_UNBlue1" , "SP_Beret_Un1" };
            weapons[] = { "Throw" , "Put" };
            magazines[] = {};

            respawnLinkedItems[] = { "ItemWatch" , "ItemRadio" , "ItemAndroid" , "SP_JackEllis1_UNBlue1" , "SP_Beret_Un1" };
            respawnWeapons[] = { "Throw" , "Put" };
            respawnMagazines[] = {};
        };


    //----------------------------OPFOR---------------------------------------
      //----------------------------Men------------------------------------------
        class STAF_contractor_opf : STAF_contractor {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_contractor_at_opf : STAF_contractor_at {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        /*class STAF_contractor_aa_opf : STAF_contractor_aa {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };*/

        class STAF_contractor_mg_opf : STAF_contractor_mg {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_contractor_medic_opf : STAF_contractor_medic {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_contractor_marksman_opf : STAF_contractor_marksman {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_contractor_engineer_opf : STAF_contractor_engineer {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_contractor_bodyguard_opf : STAF_contractor_bodyguard {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_contractor_heli_pilot_opf : STAF_contractor_heli_pilot {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_contractor_diver_opf : STAF_contractor_diver {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

      //---------------------------VIP--------------------------------------------

        class STAF_boss_opf : STAF_boss {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_client_american_opf : STAF_client_american {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_client_british_opf : STAF_client_british {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_client_chinese_opf : STAF_client_chinese {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_client_african_opf : STAF_client_african {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_client_greek_opf : STAF_client_greek {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_client_scientist_opf : STAF_client_scientist {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };

        class STAF_client_un_opf : STAF_client_un {
            Side = 0;
            scope = 2;
            scopeCurator = 2;
            faction = "STAF_PMC_OPF";
        };


        //----------------------------INDFOR---------------------------------------
          //----------------------------Men------------------------------------------
          class STAF_contractor_ind : STAF_contractor {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_contractor_at_ind : STAF_contractor_at {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          /*class STAF_contractor_aa_ind : STAF_contractor_aa {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };*/

          class STAF_contractor_mg_ind : STAF_contractor_mg {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_contractor_medic_ind : STAF_contractor_medic {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_contractor_marksman_ind : STAF_contractor_marksman {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_contractor_engineer_ind : STAF_contractor_engineer {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_contractor_bodyguard_ind : STAF_contractor_bodyguard {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_contractor_heli_pilot_ind : STAF_contractor_heli_pilot {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_contractor_diver_ind : STAF_contractor_diver {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

        //---------------------------VIP--------------------------------------------

          class STAF_boss_ind : STAF_boss {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_client_american_ind : STAF_client_american {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_client_british_ind : STAF_client_british {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_client_chinese_ind : STAF_client_chinese {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_client_african_ind : STAF_client_african {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_client_greek_ind : STAF_client_greek {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_client_scientist_ind : STAF_client_scientist {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };

          class STAF_client_un_ind : STAF_client_un {
              Side = 2;
              scope = 2;
              scopeCurator = 2;
              faction = "STAF_PMC_IND";
          };
};
