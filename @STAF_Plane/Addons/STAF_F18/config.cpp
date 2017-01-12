class CfgPatches
{
	class STAF_F18
	{
		units[] = 
		{
			"STAF_JS_JC_FA18F_Navy",
			"STAF_JS_JC_FA18F_Sand",
			"STAF_JS_JC_FA18F_Green",
			"STAF_JS_JC_FA18E_Navy",
			"STAF_JS_JC_FA18E_Sand",
			"STAF_JS_JC_FA18E_Green"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"JS_JC_FA18"};
		author = "STAF";
		authorUrl = "http://stafclan.com/index.php/BoardList/";
		version = 1.0;
		versionStr = "1.0";
		versionAr[] = {1,0};
	};
};

class CfgVehicles
{
	class JS_JC_FA18E;
	class JS_JC_FA18F;
	
	class STAF_JS_JC_FA18E_Navy: JS_JC_FA18E
	{
		crew = "IP_B_Pilot_F_EF";
		displayName = "STAF F/A-18 E Super Hornet (Navy)";
		faction = "IP_EUROFORCE";
		hiddenSelectionsTextures[] = {"\STAF_F18\txt\FA18EF_Hull_EF_Navy_co.paa","\STAF_F18\txt\FA18EF_Misc_EF_Navy_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa"};
		vehicleClass = "IP_Air_EF";
	};
	
	class STAF_JS_JC_FA18E_Sand: STAF_JS_JC_FA18E_Navy
	{
		displayName = "STAF F/A-18 E Super Hornet (Sand)";
		hiddenSelectionsTextures[] = {"\STAF_F18\txt\FA18EF_Hull_EF_Sand_co.paa","\STAF_F18\txt\FA18EF_Misc_EF_Sand_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa"};
	};
	
	class STAF_JS_JC_FA18E_Green: STAF_JS_JC_FA18E_Navy
	{
		displayName = "STAF F/A-18 E Super Hornet (Green)";
		hiddenSelectionsTextures[] = {"\STAF_F18\txt\FA18EF_Hull_EF_Green_co.paa","\STAF_F18\txt\FA18EF_Misc_EF_Green_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa"};
	};
	
	class STAF_JS_JC_FA18F_Navy: JS_JC_FA18F
	{
		crew = "IP_B_Pilot_F_EF";
		displayName = "STAF F/A-18 F Super Hornet (Navy)";
		faction = "IP_EUROFORCE";
		hiddenSelectionsTextures[] = {"\STAF_F18\txt\FA18EF_Hull_EF_Navy_co.paa","\STAF_F18\txt\FA18EF_Misc_EF_Navy_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\STAF_F18\txt\FA18EF_Misc_EF_Navy_co.paa"};
		vehicleClass = "IP_Air_EF";
	};
	
	class STAF_JS_JC_FA18F_Sand: STAF_JS_JC_FA18F_Navy
	{
		displayName = "STAF F/A-18 F Super Hornet (Sand)";
		hiddenSelectionsTextures[] = {"\STAF_F18\txt\FA18EF_Hull_EF_Sand_co.paa","\STAF_F18\txt\FA18EF_Misc_EF_Sand_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\STAF_F18\txt\FA18EF_Misc_EF_Sand_co.paa"};
	};
	
	class STAF_JS_JC_FA18F_Green: STAF_JS_JC_FA18F_Navy
	{
		displayName = "STAF F/A-18 F Super Hornet (Green)";
		hiddenSelectionsTextures[] = {"\STAF_F18\txt\FA18EF_Hull_EF_Green_co.paa","\STAF_F18\txt\FA18EF_Misc_EF_Green_co.paa","","\js_jc_fa18\data\fa18_cockpit1_co.paa","\js_jc_fa18\data\fa18_cockpit2_ca.paa","\js_jc_fa18\data\fa18_mfd_co.paa","\js_jc_fa18\data\fa18_glass_ca.paa","\js_jc_fa18\data\fa18_ladder_co.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\js_jc_fa18\data\fa18_engine_fire_ca.paa","\STAF_F18\txt\FA18EF_Misc_EF_Green_co.paa"};
	};
};