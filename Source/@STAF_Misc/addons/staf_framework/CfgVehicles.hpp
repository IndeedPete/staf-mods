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

	class STAF_Module_Insignia_F: Module_F
	{
		category = "STAF";
		displayName = "Insignia Manager";
		function = "STAF_fnc_ambientciviliansinit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class Key: Edit
			{
			displayName = "Key";
			description = "Enter a custom mission key if you set up a specific configuration in \userconfig\STAF\Insignias\insignias.sqf.";
			defaultValue = "";
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Automatically adds a predefined country insignia to player.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] = {"Automatically adds and maintains custom insignias."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyBrain"};
			};
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

	class STAF_Module_PMC_Arsenal_F: Module_F
	{
		category = "STAF";
		displayName = "PMC Arsenal";
		function = "STAF_fnc_pmcarsenalInit";
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
			description = "This Adds the PMC Arsenal to any Synced Object.";
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

	class STAF_Module_PMC_Vehicle_Equipment_F: Module_F
	{
		category = "STAF";
		displayName = "PMC Vehicle Equipment";
		function = "STAF_fnc_pmcvehicleequipment";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_PMC_Vehicle_Equipment_Type: Combo
  		{
				property = "STAF_Module_PMC_Vehicle_Equipment_Type_Combo";
				displayName = "What Vehicle Type?";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class car	{name = "Car"; value = 0;};
					class mrap	{name = "MRAP"; value = 1;};
					class truck	{name = "Truck"; value = 1;};
					class helismall	{name = "Heli (Small)"; value = 2;};
					class helibig	{name = "Heli (Big)"; value = 3;};
					class boat {name = "Boat"; value = 4;};
					class droneammo {name = "Drone (Ammo)"; value = 5;};
					class dronemedic {name = "Drone (Medical)"; value = 6;};
					class droneexplosive {name = "Drone (Explosive)"; value = 7;};
				};
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync a Vehicle to this module to add Equipment to it!";
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
					class None	{name = "None"; value = None;};
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
						class Idle_Standing_1 {name = "Idle_Standing_1"; value = Idle_Standing_1;};
						class Idle_Standing_2 {name = "Idle_Standing_2"; value = Idle_Standing_2;};
						class Idle_Standing_3 {name = "Idle_Standing_3"; value = Idle_Standing_3;};
						class Idle_Standing_4 {name = "Idle_Standing_4"; value = Idle_Standing_4;};
						class Idle_Crossed_Arms_5 {name = "Idle_Crossed_Arms_5"; value = Idle_Crossed_Arms_5;};
						class Idle_Standing_Weapon_1 {name = "Idle_Standing_Weapon_1"; value = Idle_Standing_Weapon_1;};
						class Idle_Standing_Weapon_2 {name = "Idle_Standing_Weapon_2"; value = Idle_Standing_Weapon_2;};
						class Idle_Standing_Weapon_3 {name = "Idle_Standing_Weapon_3"; value = Idle_Standing_Weapon_3;};
						class Talking_1 {name = "Talking_1"; value = Talking_1;};
						class Talking_2 {name = "Talking_2"; value = Talking_2;};
						class Talking_Radio {name = "Talking_Radio"; value = Talking_Radio;};
						class Listen_Radio {name = "Listen_Radio"; value = Listen_Radio;};
						class Speech {name = "Speech"; value = Speech;};
						class Hostage_Sitting_1 {name = "Hostage_Sitting_1"; value = Hostage_Sitting_1;};
						class Hostage_Sitting_2 {name = "Hostage_Sitting_2"; value = Hostage_Sitting_2;};
						class Hostage_Sitting_3 {name = "Hostage_Sitting_3"; value = Hostage_Sitting_3;};
						class Hostage_Sitting_4 {name = "Hostage_Sitting_4"; value = Hostage_Sitting_4;};
						class Hostage_Sitting_5 {name = "Hostage_Sitting_5"; value = Hostage_Sitting_5;};
						class Hostage_Kneeling {name = "Hostage_Kneeling"; value = Hostage_Kneeling;};
						class Sit_Shocked_1 {name = "Sit_Shocked_1"; value = Sit_Shocked_1;};
						class Sit_Shocked_2 {name = "Sit_Shocked_2"; value = Sit_Shocked_2;};
						class Kneel_Afraid_1 {name = "Kneel_Afraid_1"; value = Kneel_Afraid_1;};
						class Kneel_Afraid_2 {name = "Kneel_Afraid_2"; value = Kneel_Afraid_2;};
						class Injured_Bed_1 {name = "Injured_Bed_1"; value = Injured_Bed_1;};
						class Injured_Bed_2 {name = "Injured_Bed_2"; value = Injured_Bed_2;};
						class Injured_Bed_3 {name = "Injured_Bed_3"; value = Injured_Bed_3;};
						class Injured_lyingarm_1 {name = "Injured_lyingarm_1"; value = Injured_lyingarm_1;};
						class Injured_lyingchest_2 {name = "Injured_lyingchest_2"; value = Injured_lyingchest_2;};
						class Injured_lyinghead_3 {name = "Injured_lyinghead_3"; value = Injured_lyinghead_3;};
						class Injured_lyingleg_4 {name = "Injured_lyingleg_4"; value = Injured_lyingleg_4;};
						class Injured_lying_5 {name = "Injured_lying_5"; value = Injured_lying_5;};
						class Injured_Weapon_Arm {name = "Injured_Weapon_Arm"; value = Injured_Weapon_Arm;};
						class Injured_Weapon_Chest {name = "Injured_Weapon_Chest"; value = Injured_Weapon_Chest;};
						class Injured_Weapon_Head {name = "Injured_Weapon_Head"; value = Injured_Weapon_Head;};
						class Injured_Weapon_Leg {name = "Injured_Weapon_Leg"; value = Injured_Weapon_Leg;};
						class Injured_Weapon_Angry {name = "Injured_Weapon_Angry"; value = Injured_Weapon_Angry;};
						class Injured_Weapon_Coughing {name = "Injured_Weapon_Coughing"; value = Injured_Weapon_Coughing;};
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
						class Dead_Captured {name = "Dead_Captured"; value = Dead_Captured;};
						class Dead_Chair {name = "Dead_Chair"; value = Dead_Chair;};
						class Typing_Combat_Bowed {name = "Typing_Combat_Bowed"; value = Typing_Combat_Bowed;};
						class Typing_Combat_Kneeling {name = "Typing_Combat_Kneeling"; value = Typing_Combat_Kneeling;};
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

	class STAF_Module_AmbientCivilian_F: Module_F
	{
		category = "STAF";
		displayName = "Ambient Civilians";
		function = "STAF_fnc_ambientCivilian";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_AmbientCivilian_debug: Checkbox
  		{
				property = "STAF_Module_AmbientCivilian_debug_checkbox";
				displayName = "Debug";
				typeName = "Bool";
				defaultValue = "false";
			};

			class STAF_Module_AmbientCivilian_type: Combo
  		{
				property = "STAF_Module_AmbientCivilian_type_combo";
				displayName = "Civilian Type";
				typeName = "STRING";
				defaultValue = """European""";
				class Values
				{
					class Afghan {name = "Afghan"; value = "Afghan";};
					class African_christ {name = "African (Christian)"; value = "African_christ";};
					class African_islam {name = "African (Islamic)"; value = "African_islam";};
					class Asian {name = "Asian"; value = "Asian";};
					class European	{name = "European"; value = "European";};
					class Middle_Eastern {name = "Middle Eastern"; value = "Middle_Eastern";};
					class Russian {name = "Russian"; value = "Russian";};
					class Takistan {name = "Takistan"; value = "Takistan";};
					class Tanoan {name = "Tanoan"; value = "Tanoan";};
				};
			};

			class STAF_Module_AmbientCivilian_perBuilding: Edit
  		{
				property = "STAF_Module_AmbientCivilian_perBuilding_edit";
				displayName = "Number of Units per Building";
				typeName = "NUMBER";
				defaultValue = "0.1";
				tooltip = "Example: With 10 houses in a Radius and this set to 0.1 there will be one spawned Civilian";
			};

			class STAF_Module_AmbientCivilian_maxCount: Edit
  		{
				property = "STAF_Module_AmbientCivilian_maxCount_edit";
				displayName = "Maximum Number of Groups";
				typeName = "NUMBER";
				defaultValue = "100";
				tooltip = "How many Civilians will be spawned at all";
			};

			class STAF_Module_AmbientCivilian_rate: Edit
  		{
				property = "STAF_Module_AmbientCivilian_rate_edit";
				displayName = "Spawn rate";
				typeName = "NUMBER";
				defaultValue = "3";
				tooltip = "In seconds (lower than 1 is allowed)";
			};

			class STAF_Module_AmbientCivilian_minSpawn: Edit
  		{
				property = "STAF_Module_AmbientCivilian_minSpawn_edit";
				displayName = "Minimum Spawn Distance";
				typeName = "NUMBER";
				defaultValue = "50";
			};

			class STAF_Module_AmbientCivilian_maxSpawn: Edit
  		{
				property = "STAF_Module_AmbientCivilian_maxSpawn_edit";
				displayName = "Maximum Spawn Distance";
				typeName = "NUMBER";
				defaultValue = "500";
			};

			class STAF_Module_AmbientCivilian_blacklist: Edit
  		{
				property = "STAF_Module_AmbientCivilian_blacklist_edit";
				displayName = "Blacklist Marker";
				typeName = "String";
				tooltip = "Example: ""Marker1"",""Marker2"",""Marker3""";
			};

			class STAF_Module_AmbientCivilian_hide: Checkbox
  		{
				property = "STAF_Module_AmbientCivilian_hide_checkbox";
				displayName = "Hide Blacklist Marker";
				typeName = "Bool";
				defaultValue = "true";
			};

			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Spawns Ambient Civilians";
		};
	};

	class STAF_Module_CivilianFleeing_F: Module_F
	{
		category = "STAF";
		displayName = "Civilian Fleeing";
		function = "STAF_fnc_civilianfleeing";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class ModuleDescription: ModuleDescription
		{
			description = "Makes AI Civilians flee when shots fired close to its location!";
		};
	};
};
