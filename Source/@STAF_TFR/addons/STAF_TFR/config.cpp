class CfgPatches
{
	class STAF_TFR
	{
		units[] = 
		{
			"STAF_tfar_rt1523g_sage",
			"STAF_tfar_rt1523g_altis",
			"STAF_tfar_rt1523g_Green",
			"STAF_tfar_rt1523g_woodland",
			"STAF_tfar_rt1523g_Sand",
			"STAF_tfar_rt1523g_Desert",
			"STAF_tfar_rt1523g_White",
			"STAF_tfar_rt1523g_Snow",
			"STAF_tfar_rt1523g_big_sage",
			"STAF_tfar_rt1523g_big_altis",
			"STAF_tfar_rt1523g_big_Green",
			"STAF_tfar_rt1523g_big_woodland",
			"STAF_tfar_rt1523g_big_Sand",
			"STAF_tfar_rt1523g_big_Desert",
			"STAF_tfar_rt1523g_big_White",
			"STAF_tfar_rt1523g_big_Snow",
			"STAF_tfar_anarc210_Sage",
			"STAF_tfar_anarc210_Altis",
			"STAF_tfar_anarc210_Green",
			"STAF_tfar_anarc210_Woodland",
			"STAF_tfar_anarc210_Sand",
			"STAF_tfar_anarc210_Desert",
			"STAF_tfar_anarc210_White",
			"STAF_tfar_anarc210_Snow"
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
	class tfar_rt1523g;
	class tfar_rt1523g_big;
	class tfar_anarc210;
	
	class STAF_tfar_rt1523g_Sage: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Sage";
		descriptionShort = "RT-1523G (ASIP) Sage long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_sage_co.paa"};
	};
	class STAF_tfar_rt1523g_Altis: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Altis";
		descriptionShort = "RT-1523G (ASIP) Altis long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFAltis_co.paa"};
	};
	class STAF_tfar_rt1523g_Green: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Green";
		descriptionShort = "RT-1523G (ASIP) Green long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_green_co.paa"};
	};
	class STAF_tfar_rt1523g_Woodland: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Woodland";
		descriptionShort = "RT-1523G (ASIP) Woodland long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFWoodland_co.paa"};
	};
	class STAF_tfar_rt1523g_Sand: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Sand";
		descriptionShort = "RT-1523G (ASIP) Sand long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_Sand_co.paa"};
	};
	class STAF_tfar_rt1523g_Desert: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Desert";
		descriptionShort = "RT-1523G (ASIP) Desert long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFDesert_co.paa"};
	};
	class STAF_tfar_rt1523g_White: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) White";
		descriptionShort = "RT-1523G (ASIP) White long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_White_co.paa"};
	};
	class STAF_tfar_rt1523g_Snow: tfar_rt1523g
	{
		displayName = "STAF RT-1523G (ASIP) Snow";
		descriptionShort = "RT-1523G (ASIP) Snow long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_prc117g_EFSnow_co.paa"};
	};
	class STAF_tfar_rt1523g_big_sage: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Sage";
		descriptionShort = "STAF RT-1523G (ASIP) Big Sage long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_sage_co.paa"};
	};
	class STAF_tfar_rt1523g_big_altis: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Altis";
		descriptionShort = "STAF RT-1523G (ASIP) Big Altis long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_altis_co.paa"};
	};
	class STAF_tfar_rt1523g_big_Green: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Green";
		descriptionShort = "STAF RT-1523G (ASIP) Big Green long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_green_co.paa"};
	};
	class STAF_tfar_rt1523g_big_woodland: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Woodland";
		descriptionShort = "STAF RT-1523G (ASIP) Big Woodland long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_woodland_co.paa"};
	};
	class STAF_tfar_rt1523g_big_Sand: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Sand";
		descriptionShort = "STAF RT-1523G (ASIP) Big Sand long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_Sand_co.paa"};
	};
	class STAF_tfar_rt1523g_big_Desert: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Desert";
		descriptionShort = "STAF RT-1523G (ASIP) Big Desert long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_Desert_co.paa"};
	};
	class STAF_tfar_rt1523g_big_White: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big White";
		descriptionShort = "STAF RT-1523G (ASIP) Big White long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_White_co.paa"};
	};
	class STAF_tfar_rt1523g_big_Snow: tfar_rt1523g_big
	{
		displayName = "STAF RT-1523G (ASIP) Big Snow";
		descriptionShort = "STAF RT-1523G (ASIP) Big Snow long range radio 20km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\clf_nicecomm2_crystal_Snow_co.paa"};
	};
	class STAF_tfar_anarc210_Sage: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 Sage";
		descriptionShort = "STAF AN/ARC-210 Sage airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_sage_co.paa"};
	};
	class STAF_tfar_anarc210_Altis: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 Altis";
		descriptionShort = "STAF AN/ARC-210 Altis airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Altis_co.paa"};
	};
	class STAF_tfar_anarc210_Green: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 Green";
		descriptionShort = "STAF AN/ARC-210 Green airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_Green_co.paa"};
	};
	class STAF_tfar_anarc210_Woodland: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 Woodland";
		descriptionShort = "STAF AN/ARC-210 Woodland airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Woodland_co.paa"};
	};
	class STAF_tfar_anarc210_Sand: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 Sand";
		descriptionShort = "STAF AN/ARC-210 Sand airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_Sand_co.paa"};
	};
	class STAF_tfar_anarc210_Desert: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 Desert";
		descriptionShort = "STAF AN/ARC-210 Desert airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Desert_co.paa"};
	};	
	class STAF_tfar_anarc210_White: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 White";
		descriptionShort = "STAF AN/ARC-210 White airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_White_co.paa"};
	};
	class STAF_tfar_anarc210_Snow: tfar_anarc210
	{
		displayName = "STAF AN/ARC-210 Snow";
		descriptionShort = "STAF AN/ARC-210 Snow airborne radio 40km";
		hiddenSelectionsTextures[] = {"\STAF_TFR\txt\backpack_splinter_Snow_co.paa"};
	};
};
