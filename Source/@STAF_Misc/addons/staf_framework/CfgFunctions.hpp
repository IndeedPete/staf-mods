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
		class Ares
		{
			file = "\STAF_FRAMEWORK\fnc\ares";
			class basemedic_zeus{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class pmcarsenal_zeus{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class respawntime{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class unlimitedFuel_zeus{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class unlimitedAmmo_zeus{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class hatearmanotification{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class clearinventory{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class pmcinventories{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class snow_zeus{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
		class Array
		{
			file = "\STAF_FRAMEWORK\fnc\array";
			class clusterArray{};
		};
		class Arsenal
		{
			file = "\STAF_FRAMEWORK\fnc\arsenal";
			class pmcarsenalInit{};
			class pmcarsenal{};
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
		class Light
		{
			file = "\STAF_FRAMEWORK\fnc\light";
			class light{};
			class lightinit{};
		};
		class Loadouts
		{
			file = "\STAF_FRAMEWORK\fnc\loadouts";
			class boatequipment{};
			class carequipment{};
			class droneammoequipment{};
			class droneexplosionequipment{};
			class dronemedicequipment{};
			class helibigequipment{};
			class helismallequipment{};
			class mrapequipment{};
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
			class hidebody {};
			class inHouse {};
			class spawnwreck {};
			class ambientanimationmp {};
			class animation {};
			class pmcvehicleequipment {};
			class unlimitedFuel {};
			class unlimitedFuelInit {};
			class unlimitedAmmo {};
			class unlimitedAmmoInit {};
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
		class Weather
		{
			file = "\STAF_FRAMEWORK\fnc\weather";
			class coldBreath{};
			class coldBreathACE{};
			class coldBreathTalking{};
			class monitorLifeSigns{};
			class snowFalllight{};
			class snowFallmedium{};
			class snowFallheavy{};
			class snowFallblizzard{};
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
