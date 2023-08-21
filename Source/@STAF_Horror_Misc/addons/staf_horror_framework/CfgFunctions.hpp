class CfgFunctions
{
	class STAF_Horror
	{
		class BlacksunArsenal
		{
			file = "\staf_horror_framework\fnc\arsenal\blacksun";
			class bsarsenal{};
			class bsarsenal_backpacks{};
			class bsarsenal_headgear{};
			class bsarsenal_items{};
			class bsarsenal_othermagazines{};
			class bsarsenal_uniforms{};
			class bsarsenal_vests{};
			class bsarsenal_weapons{};
			class bsarsenalInit{};
		};
		class Infection
		{
			file = "\staf_horror_framework\fnc\infection";
			class infection{};
			class infectioncough{};
			class infectioninjection{};
			class infectionpill{};
			class infectiontest{};
		};
		class ZenModule_STAF
		{
			file = "\staf_horror_framework\fnc\zenmodule";
			class zenInit{postinit = 1;};
		};
		class ZenModule_STAF_Horror
		{
			file = "\staf_horror_framework\fnc\zenmodule\STAF_Horror";
			class arsenal_zeus{};
			class cure_zeus{};
			class infect_zeus{};
			class playsound3d_zeus{};
		};
	};
};
