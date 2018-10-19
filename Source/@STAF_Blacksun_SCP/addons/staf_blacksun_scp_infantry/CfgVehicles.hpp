class EventHandlers;
class CfgVehicles {
    class B_Soldier_F;
    class B_Pilot_F;

    //----------------------------BLUFOR---------------------------------------
      //----------------------------SCP------------------------------------------
        class STAF_Blacksun_SCP_Guard : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Guard";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_scp";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_SCP_Guard.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_SCP_Scientist : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Scientist";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_scp";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_SCP_Scientist.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_SCP_Prisoner : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Prisoner";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_scp";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_SCP_Prisoner.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_SCP_Worker : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Worker";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_scp";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_SCP_Worker.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

      //----------------------------MTF------------------------------------------
        class STAF_Blacksun_MTF_Rifleman : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Rifleman.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_Grenadier : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Grenadier";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Grenadier.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_MG : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Machinegunner";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_MG.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_Scientist : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Scientist";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Scientist.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_Pilot : B_Pilot_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Helicopter Pilot";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Pilot.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_Rifleman_no_mask : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman (No Mask)";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Rifleman_no_mask.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_Grenadier_no_mask : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Grenadier (No Mask)";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Grenadier_no_mask.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_MG_no_mask : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Machinegunner (No Mask)";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_MG_no_mask.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_Scientist_no_mask : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Scientist (No Mask)";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Scientist_no_mask.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_Pilot_no_mask : B_Pilot_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Helicopter Pilot (No Mask)";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_Pilot_no_mask.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_CBRN_Rifleman : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf_cbrn";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_Rifleman.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_CBRN_Grenadier : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Grenadier";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf_cbrn";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_Grenadier.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_CBRN_MG : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Machinegunner";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf_cbrn";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_MG.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_CBRN_Scientist : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Scientist";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf_cbrn";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_Scientist.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MTF_CBRN_Pilot : B_Pilot_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Helicopter Pilot";
            side = 1;
            faction = "STAF_blacksun_scp";
            editorSubcategory = "EdSubcat_blacksun_mtf_cbrn";
            editorPreview = "\staf_blacksun_scp_main\eden\STAF_Blacksun_MTF_CBRN_Pilot.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_scp_main\scripts\random_uniform.sqf';";
              };
            };
        };

      //----------------------------OPFOR---------------------------------------
      //----------------------------SCP------------------------------------------
        class STAF_Blacksun_SCP_Guard_opf : STAF_Blacksun_SCP_Guard {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_SCP_Scientist_opf : STAF_Blacksun_SCP_Scientist {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_SCP_Prisoner_opf : STAF_Blacksun_SCP_Prisoner {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_SCP_Worker_opf : STAF_Blacksun_SCP_Worker {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

      //----------------------------MTF------------------------------------------
        class STAF_Blacksun_MTF_Rifleman_opf : STAF_Blacksun_MTF_Rifleman {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_Grenadier_opf : STAF_Blacksun_MTF_Grenadier {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_MG_opf : STAF_Blacksun_MTF_MG {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_Scientist_opf : STAF_Blacksun_MTF_Scientist {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_Pilot_opf : STAF_Blacksun_MTF_Pilot {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_CBRN_Rifleman_opf : STAF_Blacksun_MTF_CBRN_Rifleman {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_CBRN_Grenadier_opf : STAF_Blacksun_MTF_CBRN_Grenadier {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_CBRN_MG_opf : STAF_Blacksun_MTF_CBRN_MG {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_CBRN_Scientist_opf : STAF_Blacksun_MTF_CBRN_Scientist {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_CBRN_Pilot_opf : STAF_Blacksun_MTF_CBRN_Pilot {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_Rifleman_no_mask_opf : STAF_Blacksun_MTF_Rifleman_no_mask {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_Grenadier_no_mask_opf : STAF_Blacksun_MTF_Grenadier_no_mask {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_MG_no_mask_opf : STAF_Blacksun_MTF_MG_no_mask {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_Scientist_no_mask_opf : STAF_Blacksun_MTF_Scientist_no_mask {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

        class STAF_Blacksun_MTF_Pilot_no_mask_opf : STAF_Blacksun_MTF_Pilot_no_mask {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_opf";
        };

      //----------------------------INDFOR---------------------------------------
      //----------------------------SCP------------------------------------------
        class STAF_Blacksun_SCP_Guard_ind : STAF_Blacksun_SCP_Guard {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_SCP_Scientist_ind : STAF_Blacksun_SCP_Scientist {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_SCP_Prisoner_ind : STAF_Blacksun_SCP_Prisoner {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_SCP_Worker_ind : STAF_Blacksun_SCP_Worker {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

      //----------------------------MTF------------------------------------------
        class STAF_Blacksun_MTF_Rifleman_ind : STAF_Blacksun_MTF_Rifleman {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_Grenadier_ind : STAF_Blacksun_MTF_Grenadier {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_MG_ind : STAF_Blacksun_MTF_MG {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_Scientist_ind : STAF_Blacksun_MTF_Scientist {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_Pilot_ind : STAF_Blacksun_MTF_Pilot {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_CBRN_Rifleman_ind : STAF_Blacksun_MTF_CBRN_Rifleman {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_CBRN_Grenadier_ind : STAF_Blacksun_MTF_CBRN_Grenadier {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_CBRN_MG_ind : STAF_Blacksun_MTF_CBRN_MG {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_CBRN_Scientist_ind : STAF_Blacksun_MTF_CBRN_Scientist {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_CBRN_Pilot_ind : STAF_Blacksun_MTF_CBRN_Pilot {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_Rifleman_no_mask_ind : STAF_Blacksun_MTF_Rifleman_no_mask {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_Grenadier_no_mask_ind : STAF_Blacksun_MTF_Grenadier_no_mask {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_MG_no_mask_ind : STAF_Blacksun_MTF_MG_no_mask {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_Scientist_no_mask_ind : STAF_Blacksun_MTF_Scientist_no_mask {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };

        class STAF_Blacksun_MTF_Pilot_no_mask_ind : STAF_Blacksun_MTF_Pilot_no_mask {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_scp_ind";
        };
};
