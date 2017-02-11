class CfgPatches
{
	class STAF_FRAMEWORK
	{
		units[] =
		{
			"STAF_Module_Radio_F",
			"STAF_Module_Insignia_F",
			"STAF_Module_Arsenal_F",
			"STAF_Module_Base_Medic_F"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
		author = "STAF";
		authorUrl = "http://stafclan.com/index.php/BoardList/";
		version = 1.0;
		versionStr = "1.0";
		versionAr[] = {1,0};
	};
};

class RscStandardDisplay;
class RscPictureKeepAspect;

class RscDisplayLoadMission: RscStandardDisplay
{
    class controls
    {
        class STAF_Logo: RscPictureKeepAspect
        {
            idc = 56897;
            text = "\STAF_FRAMEWORK\STAF_Logo_Desat.paa";
            x = 0.425 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.15 * safezoneH;
            colorText[] = {1,1,1,0.5};
        };
    };
};

class CfgFactionClasses
{
	class NO_CATEGORY;

	class STAF: NO_CATEGORY
	{
		displayName = "STAF";
	};
};

class CfgFunctions
{
	class STAF
	{
		class Ambient
		{
			file = "\STAF_FRAMEWORK\fnc\ambient";
			class arty{};
			class ambientFlyBy{};
			class bombingRun{};
			class deadBody{};
		};
		class Array
		{
			file = "\STAF_FRAMEWORK\fnc\array";
			class clusterArray{};
		};
		class Arsenal
		{
			file = "\STAF_FRAMEWORK\fnc\arsenal";
			class arsenalClientInit{};
			class arsenalInit{};
			class unpackOnContainerClosed{};
			class vehicleLoadout{};
		};
		class ConvoyDefend
		{
			file = "\STAF_FRAMEWORK\fnc\convoyDefend";
			class convoyDefend{};
		};
		class Debug
		{
			file = "\STAF_FRAMEWORK\fnc\debug";
			class track{};
		};
		class Insignia
		{
			file = "\STAF_FRAMEWORK\fnc\insignia";
			class insignia{};
			class insigniaInit{};
		};
		class KeyValueMap
		{
			file = "\STAF_FRAMEWORK\fnc\keyValueMap";
			class createKeyValueMap{};
		};
		class Medical
		{
			file = "\STAF_FRAMEWORK\fnc\medical";
			class ACEHeal{};
			class baseMedic{};
			class baseMedicInit{};
		};
		class Misc
		{
			file = "\STAF_FRAMEWORK\fnc\misc";
			class blackIn{};
			class blackOut{};
			class compileFinal{};
			class createFireEffect{};
			class disable{};
			class enable{};
			class intLight{};
			class launchFlare{};
			class repetitiveCleanup{};
		};
		class Radio
		{
			file = "\STAF_FRAMEWORK\fnc\radio";
			class radio{};
			class radioInit{};
		};
		class SHKPos
		{
			file = "\STAF_FRAMEWORK\fnc\SHK_pos";
			class SHKPos{};
		};
		class View
		{
			file = "\STAF_FRAMEWORK\fnc\view";
			class viewRestrictions{};
		};
	};

	class CHSA
	{
		tag = "CHSA";
		class script
		{
			file = "\STAF_FRAMEWORK\fnc\CHSA";
			class createLocalArsenal {};
			class executeLocalArsenal {};
			class onApply {};
			class createDialog {};
			class updateDialog {};
			class updateLocalArsenal {};
			class localize {};
			class invRestriction {};
			class conditionalIndex {}
			class disconnectedEH {postInit = 1;};
		};
	};

	class ZBE
	{
		class ZBE_Cache
		{
			class main
			{
				file = "\STAF_FRAMEWORK\fnc\ZBE_Cache\main.sqf";
			};
		};
	};
};

class CfgRemoteExecCommands
{
	class setVehicleVarName{};
	class systemChat{};
};

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

#include "cfg\CHSA\dialog.hpp"

class RscTitles
{
	#include "cfg\CHSA\titles.hpp"
};

class CfgMusic
{
	tracks[]={"MKY_Blizzard","MKY_Snowfall"};

	class MKY_Blizzard
	{
		name = "";
		sound[] = {"\STAF_FRAMEWORK\scr\MKY\sounds\m0nkey_blizzard.ogg", db+0, 1.0};
	};
	class MKY_Snowfall
	{
		name = "";
		sound[] = {"\STAF_FRAMEWORK\scr\MKY\sounds\m0nkey_snowfall.ogg", db+0, 1.0};
	};
};

class CfgSounds
{
	class STAF_Pee_And_Fart
	{
		name = "Pee and Fart";
		sound[] = {"\STAF_FRAMEWORK\snd\pee_and_fart.ogg", 1, 1.0, 250};
		titles[] = {};
	};
};

class CfgPostProcessTemplates
{
	class STAF_BrightSnow
	{
		colorCorrections[] = {1, 1, 0, {0, 0, 0, 0}, {2, 0, 0, 1.25}, {2.5, -2.5, 0, 0}};
		displayName = "Bright Snow";
	};

	class STAF_FilmNoir
	{
		colorCorrections[] = {1, 1, -0.003, {0.0, 0.0, 0.0, 0.0}, {0.9, 0.9, 1, 0.4},  {0.199, 0.587, 0.114, 0.0}};
		displayName = "Film Noir";
		filmGrain[] = {0.03, 1, 1, 0.1, 1};
	};

	class STAF_SurferClear
	{
		colorCorrections[] = {1.0, 1.0, 0.0, {0,0,0,0}, {0,0,0,1}, {0,0,0,0}};
		displayName = "Surfer Clear";
	};

	class STAF_SurferBlue
	{
		colorCorrections[] = {1.0, 1.0, 0.0, {0.0,0.0,0.0,0.0}, {0.0,0.5,0.7,0.7}, {0.199,0.587,0.114,0.0}};
		displayName = "Surfer Blue";
	};

	class STAF_GreenHell
	{
		colorCorrections[] = {1,1.08,-0.06, {0.5,0.5,0.5,0}, {1.2, 1.0, 0.2, 0.7}, {0.199, 0.587, 0.114, 0.0}};
		displayName = "Green Hell";
	};

	class STAF_RealIsBrown
	{
		colorCorrections[] = {1,1,0,{0.1,0.2,0.3,-0.5},{1,1,1,0.4},{0.5,0.2,0,1}};
		displayName = "STAF 'Real is Brown' - No Film Grain";
	};
};

class CfgMovesFatigue
{
		/* make sway recovery faster when changing stances, offset by weight */
		aimPrecisionSpeedCoef = 20;  //default 5
		/* disable sprinting for this amount of secs when stamina runs out */
		staminaCooldown = 5;         //default 10
		/* "amount" of stamina, how fast it drains (higher = slower) */
		staminaDuration = 160;        //default 60
		/* restore stamina from 0 to full in this amount of secs */
		staminaRestoration = 50;     //default 30
		/* when terrain gradient prevents sprinting (hill icon),
		 * add this value to stamina gain */
		terrainDrainSprint = -0.75;   //default -1
		/* when terrain gradient forces you to walk (steep hill),
		 * add this value to stamina gain (warning: too low negative values
		 * actually restore stamina due to the character walking) */
		terrainDrainRun = -1.75;      //default -1
};

class CfgInventoryGlobalVariable
{
		/* how much a soldier can carry (weight bar width) */
		maxSoldierLoad = 2000;     //default 1000, ACE 1200
};
