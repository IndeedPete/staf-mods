class CfgFunctions
{
	class STAF_Horror
	{

		class Ares
		{
			file = "\staf_blacksun_framework\fnc\ares";
			class playsound3d_zeus{
				preInit = 0; //(formerly known as "forced") 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				preStart = 0; //1 to call the function upon game start, before title screen, but after all addons are loaded.
				recompile = 1; //1 to recompile the function upon mission start
				ext = ".sqf"; //Set file type, can be ".sqf" or ".fsm" (meaning scripted FSM). Default is ".sqf".
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
	};
};
