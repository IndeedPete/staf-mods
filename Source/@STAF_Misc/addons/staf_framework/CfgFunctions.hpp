class CfgFunctions
{
	class STAF
	{
		class Ai
		{
			file = "\STAF_FRAMEWORK\fnc\ai";
			class stationary_ai_stationary{};
			class stationary_ai_moving{};
			class stationary_ai_init{};
		};
		class Ambient
		{
			file = "\STAF_FRAMEWORK\fnc\ambient";
			class deadBody{};
			class ambientanimationmp{};
		};
		class Array
		{
			file = "\STAF_FRAMEWORK\fnc\array";
			class clusterArray{};
		};
		class ConvoyDefend
		{
			file = "\STAF_FRAMEWORK\fnc\convoyDefend";
			class convoyDefend{};
		};
		class CuratorEars
		{
			file = "\STAF_FRAMEWORK\fnc\curatorears";
			class curatorearsearszeusaction{};
			class curatorearsearsunitaction{};
			class curatorearsinit{};
		};
		class Debug
		{
			file = "\STAF_FRAMEWORK\fnc\debug";
			class track{};
		};
		class Environment
		{
			file = "\STAF_FRAMEWORK\fnc\Environment";
			class winter_effects_breath{};
		};
		class Diary
		{
			file = "\STAF_FRAMEWORK\fnc\diary";
			class adddiaryentries{postInit = 1;};
		};
		class HideBody
		{
			file = "\STAF_FRAMEWORK\fnc\hidebody";
			class hidebody_notool_inside{};
			class hidebody_notool_outside{};
			class hidebody_tool_inside{};
			class hidebody_tool_outside{};
			class hidebodyinit{preInit = 1;};
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
			class ace_silentkill {preInit = 1;};
			class acex_fortify {postInit = 1;};
			class animation{};
			class createFireEffect{};
			class disable{};
			class disable_vcom{};
			class enable{};
			class forceFollowRoad{};
			class pushbackplane{postInit = 1;};
			class inHouse{};
			class setrespawntimer{};
			class spawnwreck{};
			class trackmarker{};
			class unlimitedFuel{};
			class unlimitedFuelInit{};
			class unlimitedAmmo{};
			class unlimitedAmmoInit{};
		};
		class Respawn
		{
			file = "\STAF_FRAMEWORK\fnc\respawn";
			class respawn_equipment {};
			class respawn_equipment_init {postInit = 1;};
		};
		class ZenContext_Misc_STAF
		{
			file = "\STAF_FRAMEWORK\fnc\zencontext";

			class disable_vcom_context{};
			class enable_vcom_context{};
			class stationary_ai_context{};
			class unstationary_ai_context{};
			class stationary_group_context{};
			class unstationary_group_context{};
		};
		class Zenmodule_Misc_STAF
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF";

			class ace_carryable{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class ace_dragable{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class destroy_without_explosion_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class removecraterzeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class respawntimer_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class unlimitedAmmo_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class unlimitedFuel_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class zeusaction_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
		class Zenmodule_Misc_STAF_AI
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_AI";

			class ai_suicide{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class disable_vcom_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class stationary_ai_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class stationary_group_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
		class Zenmodule_STAF_Misc_Environment
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Environment";

			class enable_sandstorm_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class disable_sandstorm_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			/*class winter_effects_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};*/
		};
		class Zenmodule_STAF_Misc_Equipment
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Equipment";

			class acex_fortify_budget{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class acex_fortify_toggle{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class clearinventory{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
		class Zenmodule_STAF_Misc_Fun
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Fun";

			class hatearmanotification{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class zeushatesplayerbase{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
			class warcrimesnotification{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
		class Zenmodule_STAF_Misc_Medical
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Medical";

			class basemedic_zeus{
				postInit = 1; //1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
				recompile = 1; //1 to recompile the function upon mission start
				headerType = -1; //Set function header type: -1 - no header; 0 - default header; 1 - system header.
			};
		};
		class ZeusAction
		{
			file = "\STAF_FRAMEWORK\fnc\zeusaction";
			class zeusactiondemotion{};
			class zeusactiondemotion_exec{};
			class zeusactioninit{};
			class zeusactioninit_admin{};
			class zeusactionmodule{};
			class zeusactionpromotion{};
			class zeusactionpromotion_exec{};
			class zeusactionpromotion_handleDC{};
			class zeusactionsubaction{};
		};
	};

	class STAF_Scripts
	{
		class ROS_Sandstorm
		{
			file = "\STAF_FRAMEWORK\scr\ROS\scripts";
			class ROS_Sandstorm_Scheduler{};
			class ROShatblowsoff{};
			class ROShurt{};
			class ROSsandstorm{};
			class ROSwindloop{};
		};

		class GF_Breath
		{
			file = "\STAF_FRAMEWORK\scr\GF_Breath";
			class gf_breath{};
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
