class CfgPatches
{
	class STAF_TFR
	{
		units[] = 
		{
			"STAF_tf_rt1523g_sage",
			"STAF_tf_rt1523g_altis",
			"STAF_tf_rt1523g_Green",
			"STAF_tf_rt1523g_woodland",
			"STAF_tf_rt1523g_Sand",
			"STAF_tf_rt1523g_Desert",
			"STAF_tf_rt1523g_White",
			"STAF_tf_rt1523g_Snow",
			"STAF_tf_rt1523g_big_sage",
			"STAF_tf_rt1523g_big_altis",
			"STAF_tf_rt1523g_big_Green",
			"STAF_tf_rt1523g_big_woodland",
			"STAF_tf_rt1523g_big_Sand",
			"STAF_tf_rt1523g_big_Desert",
			"STAF_tf_rt1523g_big_White",
			"STAF_tf_rt1523g_big_Snow",
			"STAF_tf_anarc210_Sage",
			"STAF_tf_anarc210_Altis",
			"STAF_tf_anarc210_Green",
			"STAF_tf_anarc210_Woodland",
			"STAF_tf_anarc210_Sand",
			"STAF_tf_anarc210_Desert",
			"STAF_tf_anarc210_White",
			"STAF_tf_anarc210_Snow"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"task_force_radio_items"};
		author = "STAF";
		authorUrl = "http://stafclan.com/index.php/BoardList/";
		version = 1.0;
		versionStr = "1.0";
		versionAr[] = {1,0};
	};
};

class CfgVehicles {
	class tf_rt1523g;
	class tf_rt1523g_big;
	class tf_anarc210;
	
	class STAF_tf_rt1523g_Sage: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Sage";
		descriptionShort = "RT-1523G (ASIP) Sage long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_sage_co.paa"};
	};
	class STAF_tf_rt1523g_Altis: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Altis";
		descriptionShort = "RT-1523G (ASIP) Altis long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFAltis_co.paa"};
	};
	class STAF_tf_rt1523g_Green: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Green";
		descriptionShort = "RT-1523G (ASIP) Green long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_green_co.paa"};
	};
	class STAF_tf_rt1523g_Woodland: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Woodland";
		descriptionShort = "RT-1523G (ASIP) Woodland long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFWoodland_co.paa"};
	};
	class STAF_tf_rt1523g_Sand: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Sand";
		descriptionShort = "RT-1523G (ASIP) Sand long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_Sand_co.paa"};
	};
	class STAF_tf_rt1523g_Desert: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Desert";
		descriptionShort = "RT-1523G (ASIP) Desert long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFDesert_co.paa"};
	};
	class STAF_tf_rt1523g_White: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) White";
		descriptionShort = "RT-1523G (ASIP) White long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_White_co.paa"};
	};
	class STAF_tf_rt1523g_Snow: tf_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Snow";
		descriptionShort = "RT-1523G (ASIP) Snow long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFSnow_co.paa"};
	};
	class STAF_tf_rt1523g_big_sage: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Sage";
		descriptionShort = "STAF RT-1523G (ASIP) Big Sage long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_sage_co.paa"};
	};
	class STAF_tf_rt1523g_big_altis: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Altis";
		descriptionShort = "STAF RT-1523G (ASIP) Big Altis long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_altis_co.paa"};
	};
	class STAF_tf_rt1523g_big_Green: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Green";
		descriptionShort = "STAF RT-1523G (ASIP) Big Green long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_green_co.paa"};
	};
	class STAF_tf_rt1523g_big_woodland: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Woodland";
		descriptionShort = "STAF RT-1523G (ASIP) Big Woodland long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_woodland_co.paa"};
	};
	class STAF_tf_rt1523g_big_Sand: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Sand";
		descriptionShort = "STAF RT-1523G (ASIP) Big Sand long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_Sand_co.paa"};
	};
	class STAF_tf_rt1523g_big_Desert: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Desert";
		descriptionShort = "STAF RT-1523G (ASIP) Big Desert long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_Desert_co.paa"};
	};
	class STAF_tf_rt1523g_big_White: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big White";
		descriptionShort = "STAF RT-1523G (ASIP) Big White long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_White_co.paa"};
	};
	class STAF_tf_rt1523g_big_Snow: tf_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Snow";
		descriptionShort = "STAF RT-1523G (ASIP) Big Snow long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_Snow_co.paa"};
	};
	class STAF_tf_anarc210_Sage: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 Sage";
		descriptionShort = "STAF AN/ARC-210 Sage airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_sage_co.paa"};
	};
	class STAF_tf_anarc210_Altis: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 Altis";
		descriptionShort = "STAF AN/ARC-210 Altis airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Altis_co.paa"};
	};
	class STAF_tf_anarc210_Green: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 Green";
		descriptionShort = "STAF AN/ARC-210 Green airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_Green_co.paa"};
	};
	class STAF_tf_anarc210_Woodland: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 Woodland";
		descriptionShort = "STAF AN/ARC-210 Woodland airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Woodland_co.paa"};
	};
	class STAF_tf_anarc210_Sand: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 Sand";
		descriptionShort = "STAF AN/ARC-210 Sand airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_Sand_co.paa"};
	};
	class STAF_tf_anarc210_Desert: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 Desert";
		descriptionShort = "STAF AN/ARC-210 Desert airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Desert_co.paa"};
	};	
	class STAF_tf_anarc210_White: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 White";
		descriptionShort = "STAF AN/ARC-210 White airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_White_co.paa"};
	};
	class STAF_tf_anarc210_Snow: tf_anarc210
	{
		displayName = "STAF AN/ARC-210 Snow";
		descriptionShort = "STAF AN/ARC-210 Snow airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Snow_co.paa"};
	};
};