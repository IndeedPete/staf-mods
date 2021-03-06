class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit; // Default edit box (i.e., text input field)
			class Combo; // Default combo box (i.e., drop-down menu)
			class Checkbox; // Default checkbox (returned value is Bool)
			class CheckboxNumber; // Default checkbox (returned value is Number)
			class ModuleDescription; // Module description
			class Units; // Selection of units on which the module is applied
		};
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyBrain;
			class AnyAI;
			class AnyVehicle;
			class AnyStaticObject;
		};
	};

	class STAF_Module_Base_Medic_F: Module_F
	{
		category = "STAF";
		displayName = "Base Medic";
		function = "STAF_fnc_baseMedicInit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Adds an ACE healing action to every synchronised object.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any object to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};
		};
	};

	class STAF_Module_SpawnWreck_F: Module_F
	{
		category = "STAF";
		displayName = "Spawen Vehicle as Wreck";
		function = "STAF_fnc_spawnwreck";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_SpawnWreck_ACE_Cooking_Off: Combo
  		{
				property = "STAF_Module_SpawnWreck_ACE_Cooking_Off_Combo";
				displayName = "Should the Vehicle Cook off?";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class answer_no	{name = "No"; value = 0;};
					class answer_yes	{name = "Yes";	value = 1;};
				};
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync a Vehicle to this module to spawn it as a wreck!";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any Vehicle to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyVehicle"};
			};
		};
	};

	class STAF_Module_CreateLight_F: Module_F
	{
		category = "STAF";
		displayName = "Create Light Source";
		function = "STAF_fnc_lightinit";
		functionPriority = 2;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 1;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_CreateLight_Choose_Color: Combo
  			{
					property = "STAF_Module_CreateLight_Choose_Color_Combo";
					displayName = "Choose a light source";
					typeName = "STRING";
					defaultValue = "0";
					class Values
					{
						class white	{name = "White"; value = 0;};
						class white_high	{name = "White (Bright)";	value = 1;};
						class yellow	{name = "Yellow";	value = 2;};
						class yellow_high	{name = "Yellow (Bright)";	value = 3;};
						class red	{name = "Red";	value = 4;};
						class red_high	{name = "Red (Bright)";	value = 5;};
					};
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync an Object to this module to let it act as a light source!";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any object to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject"};
			};
		};
	};

	class STAF_Module_AmbientAnimationMP_F: Module_F
	{
		category = "STAF";
		displayName = "Ambient Animation MP";
		function = "STAF_fnc_ambientanimationmp";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_AmbientAnimationMP: Combo
  			{
				property = "STAF_Module_AmbientAnimationMP_Combo";
				displayName = "Choose an Ambient Animation";
				typeName = "STRING";
				defaultValue = "0";
				class Values
				{
					class Stand1	{name = "STAND1";	value = STAND1;};
					class Stand2	{name = "STAND2";	value = STAND2;};
					class Stand_U1	{name = "STAND_U1";	value = STAND_U1;};
					class Stand_U2	{name = "STAND_U2";	value = STAND_U2;};
					class Stand_U3	{name = "STAND_U3";	value = STAND_U3;};
					class WATCH	{name = "WATCH";	value = WATCH;};
					class WATCH2	{name = "WATCH2";	value = WATCH2;};
					class GUARD	{name = "GUARD";	value = GUARD;};
					class LISTEN_BRIEFING	{name = "LISTEN_BRIEFING";	value = LISTEN_BRIEFING;};
					class LEAN_ON_TABLE	{name = "LEAN_ON_TABLE";	value = LEAN_ON_TABLE;};
					class LEAN	{name = "LEAN";	value = LEAN;};
					class SIT_AT_TABLE	{name = "SIT_AT_TABLE";	value = SIT_AT_TABLE;};
					class SIT1	{name = "SIT1";	value = SIT1;};
					class SIT	{name = "SIT";	value = SIT;};
					class SIT3	{name = "SIT3";	value = SIT3;};
					class SIT_U1	{name = "SIT_U1";	value = SIT_U1;};
					class SIT_U2	{name = "SIT_U2";	value = SIT_U2;};
					class SIT_U3	{name = "SIT_U3";	value = SIT_U3;};
					class SIT_HIGH1	{name = "SIT_HIGH1";	value = SIT_HIGH1;};
					class SIT_HIGH	{name = "SIT_HIGH";	value = SIT_HIGH;};
					class SIT_LOW	{name = "SIT_LOW";	value = SIT_LOW;};
					class SIT_LOW_U	{name = "SIT_LOW_U";	value = SIT_LOW_U;};
					class SIT_SAD1	{name = "SIT_SAD1";	value = SIT_SAD1;};
					class SIT_SAD2	{name = "SIT_SAD2";	value = SIT_SAD2;};
					class KNEEL	{name = "KNEEL";	value = KNEEL;};
					class REPAIR_VEH_PRONE	{name = "REPAIR_VEH_PRONE";	value = REPAIR_VEH_PRONE;};
					class REPAIR_VEH_KNEEL	{name = "REPAIR_VEH_KNEEL";	value = REPAIR_VEH_KNEEL;};
					class REPAIR_VEH_STAND	{name = "REPAIR_VEH_STAND";	value = REPAIR_VEH_STAND;};
					class PRONE_INJURED_U1	{name = "PRONE_INJURED_U1";	value = PRONE_INJURED_U1;};
					class PRONE_INJURED_U2	{name = "PRONE_INJURED_U2";	value = PRONE_INJURED_U2;};
					class PRONE_INJURED	{name = "PRONE_INJURED";	value = PRONE_INJURED;};
					class KNEEL_TREAT	{name = "KNEEL_TREAT";	value = KNEEL_TREAT;};
					class KNEEL_TREAT2	{name = "KNEEL_TREAT2";	value = KNEEL_TREAT2;};
					class BRIEFING	{name = "BRIEFING";	value = BRIEFING;};
					class BRIEFING_POINT_LEFT	{name = "BRIEFING_POINT_LEFT";	value = BRIEFING_POINT_LEFT;};
					class BRIEFING_POINT_RIGHT	{name = "BRIEFING_POINT_RIGHT";	value = BRIEFING_POINT_RIGHT;};
					class BRIEFING_POINT_TABLE	{name = "BRIEFING_POINT_TABLE";	value = BRIEFING_POINT_TABLE;};
				};
			};

			class STAF_Module_AmbientAnimationMP_Snap_Object: Edit
  		{
				property = "STAF_Module_AmbientAnimationMP_Snap_Object_Edit";
				displayName = "Assign an Object to snap to!";
			};

			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync an AI Unit to this module to make it play the selected Ambient Animation";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any AI to this module"};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyAI"};
			};
		};
	};

	class STAF_Module_Animation_F: Module_F
	{
		category = "STAF";
		displayName = "SwitchMove Animation";
		function = "STAF_fnc_animation";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_Animation: Combo
  			{
					property = "STAF_Module_Animation_Combo";
					displayName = "Choose an Animation";
					typeName = "STRING";
					defaultValue = "0";
					class Values
					{
						class Idle_Standing_1 {name = "Idle Standing 01"; value = Idle_Standing_1;};
						class Idle_Standing_2 {name = "Idle Standing 02"; value = Idle_Standing_2;};
						class Idle_Standing_3 {name = "Idle Standing 03"; value = Idle_Standing_3;};
						class Idle_Standing_4 {name = "Idle Standing 04"; value = Idle_Standing_4;};
						class Idle_Crossed_Arms_5 {name = "Idle Crossed Arms"; value = Idle_Crossed_Arms_5;};
						class Idle_Standing_Weapon_1 {name = "Idle Standing 01 (Weapon)"; value = Idle_Standing_Weapon_1;};
						class Idle_Standing_Weapon_2 {name = "Idle Standing 02 (Weapon)"; value = Idle_Standing_Weapon_2;};
						class Idle_Standing_Weapon_3 {name = "Idle Standing 03 (Weapon)"; value = Idle_Standing_Weapon_3;};
						class Talking_1 {name = "Talking 01"; value = Talking_1;};
						class Talking_2 {name = "Talking 02"; value = Talking_2;};
						class Talking_Radio {name = "Talking on Radio"; value = Talking_Radio;};
						class Listen_Radio {name = "Listen on Radio"; value = Listen_Radio;};
						class Speech {name = "Speech"; value = Speech;};
						class Hostage_Sitting_1 {name = "Hostage Sitting 01"; value = Hostage_Sitting_1;};
						class Hostage_Sitting_2 {name = "Hostage Sitting 02"; value = Hostage_Sitting_2;};
						class Hostage_Sitting_3 {name = "Hostage Sitting 03"; value = Hostage_Sitting_3;};
						class Hostage_Sitting_4 {name = "Hostage Sitting 04"; value = Hostage_Sitting_4;};
						class Hostage_Sitting_5 {name = "Hostage Sitting 05"; value = Hostage_Sitting_5;};
						class Hostage_Kneeling {name = "Hostage Kneeling"; value = Hostage_Kneeling;};
						class Sit_Shocked_1 {name = "Sit Shocked 01"; value = Sit_Shocked_1;};
						class Sit_Shocked_2 {name = "Sit Shocked 02"; value = Sit_Shocked_2;};
						class Kneel_Afraid_1 {name = "Kneel Afraid 01"; value = Kneel_Afraid_1;};
						class Kneel_Afraid_2 {name = "Kneel Afraid 02"; value = Kneel_Afraid_2;};
						class Injured_Bed_1 {name = "Injured Bed 01"; value = Injured_Bed_1;};
						class Injured_Bed_2 {name = "Injured Bed 02"; value = Injured_Bed_2;};
						class Injured_Bed_3 {name = "Injured Bed 03"; value = Injured_Bed_3;};
						class Injured_lying_5 {name = "Lying Insured"; value = Injured_lying_5;};
						class Injured_lyingarm_1 {name = "Lying Insured Arm"; value = Injured_lyingarm_1;};
						class Injured_lyingchest_2 {name = "Lying Insured Chest"; value = Injured_lyingchest_2;};
						class Injured_lyinghead_3 {name = "Lying Insured Head"; value = Injured_lyinghead_3;};
						class Injured_lyingleg_4 {name = "Lying Insured Leg"; value = Injured_lyingleg_4;};
						class Injured_Weapon_Arm {name = "Lying Insured Arm (Weapon)"; value = Injured_Weapon_Arm;};
						class Injured_Weapon_Chest {name = "Lying Insured Chest (Weapon)"; value = Injured_Weapon_Chest;};
						class Injured_Weapon_Head {name = "Lying Insured Head (Weapon)"; value = Injured_Weapon_Head;};
						class Injured_Weapon_Leg {name = "Lying Insured Leg (Weapon)"; value = Injured_Weapon_Leg;};
						class Injured_Weapon_Angry {name = "Lying Insured Angry"; value = Injured_Weapon_Angry;};
						class Injured_Weapon_Coughing {name = "Lying Insured Coughing (Weapon)"; value = Injured_Weapon_Coughing;};
						class Injured_Weapon_1 {name = "Injured_Weapon_1"; value = Injured_Weapon_1;};
						class Injured_Weapon_2 {name = "Injured_Weapon_2"; value = Injured_Weapon_2;};
						class Injured_Weapon_3 {name = "Injured_Weapon_3"; value = Injured_Weapon_3;};
						class Injured_Weapon_4 {name = "Injured_Weapon_4"; value = Injured_Weapon_4;};
						class Injured_Weapon_5 {name = "Injured_Weapon_5"; value = Injured_Weapon_5;};
						class Injured_Weapon_6 {name = "Injured_Weapon_6"; value = Injured_Weapon_6;};
						class Injured_Weapon_7 {name = "Injured_Weapon_7"; value = Injured_Weapon_7;};
						class Injured_Weapon_7_180 {name = "Injured_Weapon_7_180"; value = Injured_Weapon_7_180;};
						class Injured_Weapon_8 {name = "Injured_Weapon_8"; value = Injured_Weapon_8;};
						class Injured_Pistol_1 {name = "Injured_Pistol_1"; value = Injured_Pistol_1;};
						class Injured_Pistol_2 {name = "Injured_Pistol_2"; value = Injured_Pistol_2;};
						class Dead_Captured {name = "Dead Captured"; value = Dead_Captured;};
						class Dead_Chair {name = "Dead in Chair"; value = Dead_Chair;};
						class Typing_Combat_Bowed {name = "Typing Bowed"; value = Typing_Combat_Bowed;};
						class Typing_Combat_Kneeling {name = "Typing Kneeling"; value = Typing_Combat_Kneeling;};
					};
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync an AI Unit to this module to make it play the selected Animation";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any AI to this module"};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyAI"};
			};
		};
	};

	class STAF_Module_Unlimited_Fuel_F: Module_F
	{
		category = "STAF";
		displayName = "Unlimited Fuel";
		function = "STAF_fnc_unlimitedFuelInit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Gives the Vehicle unlimited Fuel.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any object to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};
		};
	};

	class STAF_Module_Unlimited_Ammo_F: Module_F
	{
		category = "STAF";
		displayName = "Unlimited Ammo";
		function = "STAF_fnc_unlimitedAmmoInit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Gives the Vehicle unlimited Ammo.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any object to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};
		};
	};

	class STAF_Module_Zeus_Action_F: Module_F
	{
		category = "STAF";
		displayName = "(LEGACY) Add Zeus Action";
		function = "";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Adds an ACE action to get zeus access.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any object to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};
		};
	};

	class STAF_Module_DisableVcom_F: Module_F
	{
		category = "STAF";
		displayName = "Disable Vcom";
		function = "STAF_fnc_disable_vcom";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync a unit to this module to disable Vcom on it!";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any unit to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyVehicle","AnyPerson","AnyAI"};
			};
		};
	};

	class STAF_Module_Respawn_Loadout_F: Module_F
	{
		category = "STAF";
		displayName = "(LEGACY) Enable Respawn Arsenal Loadout";
		function = "";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Reapplies the last chosen Arsenal Loadout after respawn";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Does not need to be Syncronised"};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {};
			};
		};
	};

	class STAF_Module_AI_Stationary_F: Module_F
	{
		category = "STAF";
		displayName = "Turn AI Stationary";
		function = "STAF_fnc_stationary_ai_init";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_AI_Stationary: Combo
  			{
					property = "STAF_Module_AI_Stationary_Combo";
					displayName = "Single AI or Group?";
					typeName = "STRING";
					defaultValue = "0";
					class Values
					{
						class group {name = "Group"; value = group;};
						class single {name = "Single AI"; value = single;};
					};
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Turns AI Stationary";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any object to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};
		};
	};
};
