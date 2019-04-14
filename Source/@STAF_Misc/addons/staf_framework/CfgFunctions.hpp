class CfgFunctions
{
	class STAF
	{
		class Ambient
		{
			file = "\STAF_FRAMEWORK\fnc\ambient";
			class deadBody{};
		};
		class Ares
		{
			file = "\STAF_FRAMEWORK\fnc\ares";
			class ace_carryable{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class ace_dragable{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class basemedic_zeus{
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
			class createareamarkerzeus{
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
			class pmcarsenal_zeus{
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
			class unlimitedAmmo_zeus{
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
			class warcrimesnotification{
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
		class Diary
		{
			file = "\STAF_FRAMEWORK\fnc\diary";
			class adddiaryentries{postInit = 1;};
		};
		class Insignia
		{
			file = "\STAF_FRAMEWORK\fnc\insignia";
			class insignia{};
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
			class pmcvehicleequipment {};
		};
		class Medical
		{
			file = "\STAF_FRAMEWORK\fnc\medical";
			class baseMedic{};
			class baseMedicInit{};
		};
		class Misc
		{
			file = "\STAF_FRAMEWORK\fnc\misc";
			class ace_knockout {preInit = 1;};
			class ambientanimationmp {};
			class animation {};
			class createFireEffect{};
			class disable{};
			class enable{};
			class hidebody {preInit = 1;};
			class intLight{};
			class spawnwreck {};
			class trackmarker {};
			class unlimitedFuel {};
			class unlimitedFuelInit {};
			class unlimitedAmmo {};
			class unlimitedAmmoInit {};
		};
	};

	class PLP
	{
		class animations
		{
			delete disabling;
		}
	};
};
