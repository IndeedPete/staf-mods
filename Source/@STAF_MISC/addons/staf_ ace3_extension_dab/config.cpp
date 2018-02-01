class CfgPatches
{
	class STAF_KKA3_ACE_Extension_Anim
	{
		name = "ACE Extension (Animations)";
		author = "STAF";
		url = "http://steamcommunity.com/id/kokakolaa3";
		requiredVersion = 1.6;
		requiredAddons[] = {"A3_Functions_F","ace_main","KKA3_ACE_Extension_Anim_A2"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgFunctions
{
	class kka3
	{
		class main1
		{
			file = "\kka3_ACE_Extension_Anim\fnc";
			class civtalking1{};
			class civtalking2{};
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class kka3_anim
			{
				displayName = "Animations";
				icon = "\KKA3_ACE_Extension_Anim\data\ui_A.paa";
				class kka3_dance
				{
					displayName = "Dance";
					icon = "\KKA3_ACE_Extension_Anim\data\ui_D.paa";
					class kka3_dab_1
					{
						displayName = "Dab 1";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'ASN_dab1_1'] remoteExec ['playActionNow', 0]";
						icon = "\KKA3_ACE_Extension_Anim\data\ui_dot.paa";
					};
					class kka3_dab_2
					{
						displayName = "Dab 2";
						condition = "";
						exceptions[] = {};
						statement = "[ace_player, 'ASN_dab2_1'] remoteExec ['playActionNow', 0]";
						icon = "\KKA3_ACE_Extension_Anim\data\ui_dot.paa";
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "STAF";
};
