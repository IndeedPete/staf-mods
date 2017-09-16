class CfgVehicles
{
	class Logic;

	class Module_F: Logic
	{
		class ArgumentsBaseUnits
		{
			class Units;
		};

		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	class STAF_Module_Radio_F: Module_F
	{
		// Standard object definitions
		category = "STAF";
		// curatorInfoType = "RscDisplayAttributeModuleNuke"; // Menu displayed when the module is placed or double-clicked on by Zeus
		displayName = "STAF Radio Manager"; // Name displayed in the menu
		function = "STAF_fnc_radioInit"; 	// Name of function triggered once conditions are met
		functionPriority = 10; // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		// icon = "\myTag_addonName\data\iconNuke_ca.paa"; // Map icon. Delete this entry to use the default icon
		isDisposable = 0; // 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		is3DEN = 0; // 1 to run init function in Eden Editor as well
		isGlobal = 0; // 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0; // 1 for module waiting until all synced triggers are activated
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			// class Units: Units {};

			// Module specific arguments
			class Side
  			{
				displayName = "Side"; // Argument label
				description = "Side this module is managing."; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"

				class values
				{
					class side1 {name = "BLUFOR"; value = "BLUFOR"; default = 1;}; // Listbox item
					class side2 {name = "OPFOR"; value = "OPFOR";};
					class side3 {name = "INDEPENDENT"; value = "INDEPENDENT";};
					class side4 {name = "CIVILIAN"; value = "CIVILIAN";};
				};
			};

			class BaseRadio
  			{
				displayName = "Base Radio"; // Argument label
				description = "Radio which will be linked to all players of the set side."; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"

				class values
				{
					class radio1 {name = "RF-7800S-TR (BLUFOR, 2KM)"; value = "tf_rf7800str"; default = 1;}; // Listbox item
					class radio2 {name = "AN/PRC-154 (INDEPENDENT, 2KM)"; value = "tf_anprc154";};
					class radio3 {name = "PNR-1000A (OPFOR, 2KM)"; value = "tf_pnr1000a";};
					class radio4 {name = "AN/PRC-152 (BLUFOR, 5KM)"; value = "tf_anprc152";};
					class radio5 {name = "AN/PRC148-JEM (INDEPENDENT, 5KM)"; value = "tf_anprc148jem";};
					class radio6 {name = "FADAK (OPFOR, 5KM)"; value = "tf_fadak";};
				};
			};

			class AdditionalRadio
  			{
				displayName = "Additional Radio"; // Argument label
				description = "Radio which will be added to all player objects defined below."; // Tooltip description
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"

				class values
				{
					class radio0 {name = "NONE"; value = "";};
					class radio1 {name = "RF-7800S-TR (BLUFOR, 2KM)"; value = "tf_rf7800str";};
					class radio2 {name = "AN/PRC-154 (INDEPENDENT, 2KM)"; value = "tf_anprc154";};
					class radio3 {name = "PNR-1000A (OPFOR, 2KM)"; value = "tf_pnr1000a";};
					class radio4 {name = "AN/PRC-152 (BLUFOR, 5KM)"; value = "tf_anprc152"; default = 1;};
					class radio5 {name = "AN/PRC148-JEM (INDEPENDENT, 5KM)"; value = "tf_anprc148jem";};
					class radio6 {name = "FADAK (OPFOR, 5KM)"; value = "tf_fadak";};
				};
			};

			class AdditionalObjects
  			{
				displayName = "Additional Radio Objects"; // Argument label
				description = "References to player objects of set side which will receive the additional radio. (Add array elements with ''.)"; // Tooltip description
				defaultValue = "[]";
			};

			class AdditionalClasses
  			{
				displayName = "Additional Radio Classes"; // Argument label
				description = "References to player classes of set side which will receive the additional radio. (Add array elements with ''.)"; // Tooltip description
				defaultValue = "[]";
			};

			class JIP
  			{
				displayName = "Support JIP"; // Argument label
				description = "Also handles players not present at mission start."; // Tooltip description
				typeName = "BOOL"; // Value type, can be "NUMBER", "STRING" or "BOOL"

				class values
				{
					class yes {name = "Yes"; value = 1;  default = 1;};
					class no {name = "No"; value = 0;};
				};
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
					"Automatically adds and maintains radios from 'Task Force Radio' to given units."
				};
				position = 0; // Position is taken into effect
				direction = 0; // Direction is taken into effect
				optional = 0; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
				synced[] = {"AnyBrain"}; // Pre-define entities like "AnyBrain" can be used. See the list below
			};
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
		class Arguments: ArgumentsBaseUnits
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

	class STAF_Module_Arsenal_F: Module_F
	{
		// Standard object definitions
		category = "STAF";
		// curatorInfoType = "RscDisplayAttributeModuleNuke"; // Menu displayed when the module is placed or double-clicked on by Zeus
		displayName = "STAF Arsenal Manager"; // Name displayed in the menu
		function = "STAF_fnc_arsenalInit"; 	// Name of function triggered once conditions are met
		functionPriority = 10; // Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		// icon = "\myTag_addonName\data\iconNuke_ca.paa"; // Map icon. Delete this entry to use the default icon
		isDisposable = 0; // 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		is3DEN = 0; // 1 to run init function in Eden Editor as well
		isGlobal = 0; // 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0; // 1 for module waiting until all synced triggers are activated
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.

		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			class Config
  			{
				displayName = "Config"; // Argument label
				description = "Enter the name of a custom config file if you set up a specific configuration in \userconfig\STAF\Arsenal\ or in the mission dir."; // Tooltip description
				defaultValue = "\userconfig\STAF\Arsenal\defaultConfig.sqf";
			};
		};

		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Automatically adds XLA Fixed Arsenal functionality to synchronised objects."; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)

			class LocationArea_F
			{
				description[] = // Multi-line descriptions are supported
				{
					"Synchronise ammo boxes or vehicles to this module."
				};
				position = 0; // Position is taken into effect
				direction = 0; // Direction is taken into effect
				optional = 0; // Synced entity is optional
				duplicate = 0; // Multiple entities of this type can be synced
				synced[] = {"AnyStaticObject", "AnyVehicle"}; // Pre-define entities like "AnyBrain" can be used. See the list below
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
};
