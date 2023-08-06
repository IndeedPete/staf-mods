class CfgFunctions
{
	class STAF_WW2
	{
		class WW2Arsenal
		{
			file = "\staf_ww2_framework\fnc\arsenal";
			class ww2gerArsenalInit{};
			class ww2japArsenalInit{};
			class ww2sovArsenalInit{};
			class ww2ukArsenalInit{};
			class ww2usArsenalInit{};
		};
		class WW2GerArsenal
		{
			file = "\staf_ww2_framework\fnc\arsenal\ger";
			class ww2gerArsenal{};
		};
		class WW2JapArsenal
		{
			file = "\staf_ww2_framework\fnc\arsenal\jap";
			class ww2japArsenal{};
		};
		class WW2SovArsenal
		{
			file = "\staf_ww2_framework\fnc\arsenal\sov";
			class ww2sovArsenal{};
		};
		class WW2USArsenal
		{
			file = "\staf_ww2_framework\fnc\arsenal\us";
			class ww2usArsenal{};
		};
		class WW2UKArsenal
		{
			file = "\staf_ww2_framework\fnc\arsenal\uk";
			class ww2ukArsenal{};
		};
		class Zenmodule_STAFWW2
		{
			file = "\staf_ww2_framework\fnc\zenmodule";

			class ww2zenInit{postinit = 1;};
		};
		class Zenmodule_STAF_WW2
		{
			file = "\staf_ww2_framework\fnc\zenmodule\STAF_WW2";
			class ww2gerArsenalZeus{};
			class ww2japArsenalZeus{};
			class ww2sovArsenalZeus{};
			class ww2usArsenalZeus{};
			class ww2ukArsenalZeus{};
			class musicradio_zeus{};
		};
		class WW2Radio
		{
			file = "\staf_ww2_framework\fnc\radio";
			class radioinit{};
			class radioinitzeus{};
			class radiostop{};
			class frradio{};
			class gerradio{};
			class japradio{};
			class sovradio{};
			class ukradio{};
			class usradio{};
		};
	};
};