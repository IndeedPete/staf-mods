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
		};
	};

	class STAF_Module_Insignia_F: Module_F
	{
		// Standard object definitions
		category = "STAF";
		// curatorInfoType = "RscDisplayAttributeModuleNuke"; // Menu displayed when the module is placed or double-clicked on by Zeus
		displayName = "STAF Insignia Manager"; // Name displayed in the menu
		function = "STAF_fnc_insigniaInit"; 	// Name of function triggered once conditions are met
		functionPriority = 10; // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		// icon = "\myTag_addonName\data\iconNuke_ca.paa"; // Map icon. Delete this entry to use the default icon
		isDisposable = 0; // 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		is3DEN = 0; // 1 to run init function in Eden Editor as well
		isGlobal = 0; // 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0; // 1 for module waiting until all synced triggers are activated
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.

		// Module arguments
		class Arguments: AttributesBase
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			// class Units: Units {};

			/*/ Module specific arguments
			class Activate
  			{
				displayName = "Activate Automatic Insignias"; // Argument label
				description = "Set whether the this system is activated at all."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"

				class values
				{
					class yes {name = "Yes"; value = 1;  default = 1;};
					class no {name = "No"; value = 0;};
				};
			};*/

			class Key
  			{
				displayName = "Key"; // Argument label
				description = "Enter a custom mission key if you set up a specific configuration in \userconfig\STAF\Insignias\insignias.sqf."; // Tooltip description
				defaultValue = "";
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Automatically adds and maintains radios from 'Task Force Radio' to synchronised units."; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)

			class LocationArea_F
			{
				description[] = // Multi-line descriptions are supported
				{
					"Automatically adds and maintains custom insignias."
				};
				position = 0; // Position is taken into effect
				direction = 0; // Direction is taken into effect
				optional = 0; // Synced entity is optional
				duplicate = 0; // Multiple entities of this type can be synced
				synced[] = {"AnyBrain"}; // Pre-define entities like "AnyBrain" can be used. See the list below
			};
		};
	};

	class STAF_Module_Base_Medic_F: Module_F
	{
		category = "STAF";
		displayName = "STAF Base Medic";
		function = "STAF_fnc_baseMedicInit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class ModuleDescription: ModuleDescription
		{
			description = "Adds an ACE healing action to every synchronised object.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =
				{
					"Synchronise any object to this module."
				};
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
		displayName = "STAF PMC Arsenal";
		function = "STAF_fnc_pmcarsenalInit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class ModuleDescription: ModuleDescription
		{
			description = "This Adds the PMC Arsenal to any Synced Object.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =
				{
					"Synchronise any object to this module."
				};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};
		};
	};

	class STAF_Module_HideBody_F: Module_F
	{
		category = "STAF";
		displayName = "STAF Hide Dead Bodies";
		function = "STAF_fnc_hidebody";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 1;
		isTriggerActivated = 0;
		scope = 2;

		class ModuleDescription: ModuleDescription
		{
			description = "This applies the ""Hide Body"" action to all dead units aside from players.";
			//sync[] = {"LocationArea_F"};

			/*class LocationArea_F
			{
				description[] =
				{
					"Synchronise any object to this module."
				};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};*/
		};
	};

	class STAF_Module_SpawnWreck_F: Module_F
	{
		category = "STAF";
		displayName = "STAF Spawen Vehicle as Wreck";
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
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync a Vehicle to this module if you want it to spawn as a wreck (no explosion)";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any vehicle to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyVehicle"};
			};
		};
	};

	class STAF_Module_AmbientAnimationMP_F: Module_F
	{
		category = "STAF";
		displayName = "STAF Ambient Animation MP";
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
				displayName = "Choose a Ambient Animation";
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
};
