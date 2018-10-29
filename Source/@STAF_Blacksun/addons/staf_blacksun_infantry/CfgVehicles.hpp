class EventHandlers;
class CfgVehicles {
    class B_Soldier_F;
    class B_Pilot_F;

    //----------------------------BLUFOR---------------------------------------
      //----------------------------SCP------------------------------------------

        class STAF_Blacksun_Leader : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Leader";
            side = 1;
            faction = "STAF_blacksun";
            editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Leader.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_Rifleman : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Rifleman";
            side = 1;
            faction = "STAF_blacksun";
            editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Rifleman.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_Medic : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Medic";
            side = 1;
            faction = "STAF_blacksun";
            editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Medic.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_Explosvie_Specialist : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Explosvie Specialist";
            side = 1;
            faction = "STAF_blacksun";
            editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Explosvie_Specialist.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_MG : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Machine Gunner";
            side = 1;
            faction = "STAF_blacksun";
            editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_MG.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_Marksman : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Marksman";
            side = 1;
            faction = "STAF_blacksun";
            editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Marksman.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_main\scripts\random_uniform.sqf';";
              };
            };
        };

        class STAF_Blacksun_Heli_Pilot : B_Soldier_F {
            author = "STAF";
            scope = 2;
            scopeCurator = 2;
            displayName = "Heli Pilot";
            side = 1;
            faction = "STAF_blacksun";
            editorPreview = "\staf_blacksun_main\eden\STAF_Blacksun_Heli_Pilot.jpg";

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
                  init = "[(_this select 0)] execVM '\staf_blacksun_main\scripts\random_uniform.sqf';";
              };
            };
        };

      //----------------------------OPFOR---------------------------------------
      //----------------------------SCP------------------------------------------

        class STAF_Blacksun_Leader_opf : STAF_Blacksun_Leader {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_opf";
        };

        class STAF_Blacksun_Rifleman_opf : STAF_Blacksun_Rifleman {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_opf";
        };

        class STAF_Blacksun_Medic_opf : STAF_Blacksun_Medic {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_opf";
        };

        class STAF_Blacksun_Explosvie_Specialist_opf : STAF_Blacksun_Explosvie_Specialist {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_opf";
        };

        class STAF_Blacksun_MG_opf : STAF_Blacksun_MG {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_opf";
        };

        class STAF_Blacksun_Marksman_opf : STAF_Blacksun_Marksman {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_opf";
        };

        class STAF_Blacksun_Heli_Pilot_opf : STAF_Blacksun_Heli_Pilot {
          Side = 0;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_opf";
        };

      //----------------------------INDFOR---------------------------------------
      //----------------------------SCP------------------------------------------

        class STAF_Blacksun_Leader_ind : STAF_Blacksun_Leader {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_ind";
        };

        class STAF_Blacksun_Rifleman_ind : STAF_Blacksun_Rifleman {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_ind";
        };

        class STAF_Blacksun_Medic_ind : STAF_Blacksun_Medic {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_ind";
        };

        class STAF_Blacksun_Explosvie_Specialist_ind : STAF_Blacksun_Explosvie_Specialist {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_ind";
        };

        class STAF_Blacksun_MG_ind : STAF_Blacksun_MG {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_ind";
        };

        class STAF_Blacksun_Marksman_ind : STAF_Blacksun_Marksman {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_ind";
        };

        class STAF_Blacksun_Heli_Pilot_ind : STAF_Blacksun_Heli_Pilot {
          Side = 2;
          scope = 2;
          scopeCurator = 2;
          faction = "STAF_blacksun_ind";
        };
};
