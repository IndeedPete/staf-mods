class CfgFunctions
{
	class STAF_Horror
	{
		class Infection
		{
			file = "\staf_blacksun_framework\fnc\infection";
			class infection{};
			class infectioncough{};
			class infectioneh{};
			class infectionfx{};
			class infectioninit{};
			class infectioninjection{};
			class infectionpill{};
			class infectionrandomcough{};
			class infectionrandomdying{};
			class infectiontest{};
		};
		class ZenModule
		{
			file = "\staf_blacksun_framework\fnc\zenmodule";
			class cure_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class infect_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class playsound3d_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
	};
};
