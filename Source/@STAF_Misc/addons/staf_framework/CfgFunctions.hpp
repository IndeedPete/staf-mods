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
		class HideBody
		{
			file = "\STAF_FRAMEWORK\fnc\hidebody";
			class hidebody_notool_inside{};
			class hidebody_notool_outside{};
			class hidebody_tool_inside{};
			class hidebody_tool_outside{};
			class hidebodyaction{};
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
			class ace_knockout {};
			class ace_silentkill {};
			class animation{};
			class createFireEffect{};
			class disable{};
			class disable_vcom{};
			class enable{};
			class forceFollowRoad{};
			class replaceInString{};
			class inHouse{};
			class setrespawntimer{};
			class spawnwreck{};
			class turbanDown{};
			class turbanUp{};
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
			class respawn_equipmentSave {};
		};
		class Zenmodule_STAF
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule";

			class zenInit{postinit = 1;};
		};
		class Zenmodule_STAF_Main
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Main";

			class aceCarryable{};
			class aceDragable{};
			class destroyWithoutExplosion{};
			class removeCrater{};
			class respawnTimer{};
			class unlimitedAmmoZeus{};
			class unlimitedFuelZeus{};
			class addZeusAction{};
		};
		class Zenmodule_STAF_AI
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_AI";

			class aiSuicide{};
			class groupCombatBehaviour{};
			class disableVcom{};
			class stationaryAI{};
			class stationaryGroup{};
		};
		class Zenmodule_STAF_Environment
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Environment";

			class sandstormEnable{};
			class sandstormDisable{};
		};
		class Zenmodule_STAF_Equipment
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Equipment";

			class fortifyBudget{};
			class fortifyToggle{};
			class fortifyBox{};
			class clearInventory{};
		};
		class Zenmodule_STAF_Fun
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Fun";

			class zeusHatesArma{};
			class zeusHatesPlayerbase{};
			class warcrimesNotification{};
		};
		class Zenmodule_STAF_Medical
		{
			file = "\STAF_FRAMEWORK\fnc\zenmodule\STAF_Medical";

			class baseMedicZeus{};
		};
		class ZeusAction
		{
			file = "\STAF_FRAMEWORK\fnc\zeusaction";
			class zeusactiondemotion{};
			class zeusactiondemotion_exec{};
			class zeusactionmodule{};
			class zeusactionpromotion{};
			class zeusactionpromotion_exec{};
			class zeusactionpromotion_handleDC{};
		};
	};

	class STAF_Scripts
	{
		class ROS_Sandstorm
		{
			file = "\STAF_FRAMEWORK\scr\ROS\scripts";
			class ROS_Sandstorm_Scheduler{};
			class ROS_hatblowsoff{};
			class ROS_hurt{};
			class ROS_sandstorm{};
			class ROS_windloop{};
		};
	};
	class PLP
	{
		class animations
		{
			delete disabling;
		};
	};
};
