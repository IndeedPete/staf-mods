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