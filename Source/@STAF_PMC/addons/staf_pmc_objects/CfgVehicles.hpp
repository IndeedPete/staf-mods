#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define back_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgVehicles {
	class C_IDAP_supplyCrate_F;
	class B_supplyCrate_F;
	class plp_ct_MilBoxBigBlack;
	class plp_ct_MilBoxLongBlack;
	class plp_ct_MilBoxSmallBlack;
	class plp_ct_MilBoxMediumBlack;

	class STAF_SuperBox_Orange: C_IDAP_supplyCrate_F
	{
		displayName = "Super Box (Orange)";
		maximumLoad = 999999999999;

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class STAF_SuperBox_Green: B_supplyCrate_F
	{
		displayName = "Super Box (Green)";
		maximumLoad = 999999999999;

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};

	class STAF_Ammobox_Rifle: plp_ct_MilBoxBigBlack
	{
		displayName = "Rifle Box (STAF)";
		maximumLoad = 2500;

		class TransportWeapons
		{
			weap_xx(STAF_rifle_ak12,1);
			weap_xx(STAF_rifle_G36MLIC,1);
			weap_xx(STAF_rifle_m4a1_blk,1);
			weap_xx(STAF_rifle_scar_blk,1);
			weap_xx(STAF_rifle_scar17_blk,1);
			weap_xx(STAF_rifle_famas_g2_blk,1);
			weap_xx(STAF_Launcher_M320,1);
		};

		class TransportMagazines
		{
			mag_xx(CUP_30Rnd_556x45_G36,12);
			mag_xx(30Rnd_65x39_caseless_mag,12);
			mag_xx(30Rnd_762x39_AK12_Mag_F,18);
			mag_xx(CUP_30Rnd_556x45_PMAG_QP,55);
			mag_xx(CUP_20Rnd_762x51_B_SCAR_bkl,18);

			mag_xx(1Rnd_HE_Grenade_shell,24);
			mag_xx(UGL_FlareGreen_F,5);
			mag_xx(UGL_FlareCIR_F,5);
			mag_xx(UGL_FlareRed_F,5);
			mag_xx(UGL_FlareWhite_F,5);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,5);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
			mag_xx(1Rnd_Smoke_Grenade_shell,5);
			mag_xx(ACE_HuntIR_M203,2);
		};
	};

	class STAF_Ammobox_MG: plp_ct_MilBoxBigBlack
	{
		displayName = "MG Box (STAF)";
		maximumLoad = 2500;

		class TransportWeapons
		{
			weap_xx(STAF_rifle_m249_pip_ris,1);
			weap_xx(STAF_rifle_ng7_black,1);
			weap_xx(STAF_rifle_hk121_blk,1);
		};

		class TransportMagazines
		{
			mag_xx(rhsusf_200Rnd_556x45_box,12);
			mag_xx(150Rnd_762x54_Box,12);
			mag_xx(150Rnd_93x64_Mag,12);
			mag_xx(75rnd_762x39_AK12_Mag_F,12);
			mag_xx(ACE_SpareBarrel,3);
		};
	};

	class STAF_Ammobox_Launcher: plp_ct_MilBoxBigBlack
	{
		displayName = "Launcher Box (STAF)";
		maximumLoad = 2500;

		class TransportWeapons
		{
			weap_xx(STAF_launcher_smaw,1);
			weap_xx(STAF_launcher_Igla,3);
			weap_xx(STAF_launcher_m136_heat,3);
		};

		class TransportMagazines
		{
			mag_xx(CUP_SMAW_HEAA_M,4);
			mag_xx(CUP_SMAW_NE_M,4);
			mag_xx(CUP_SMAW_HEDP_M,4);
			mag_xx(CUP_SMAW_Spotting,6);
		};
	};

	class STAF_Ammobox_Other: plp_ct_MilBoxMediumBlack
	{
		displayName = "Essential Box (STAF)";
		maximumLoad = 750;

		class TransportWeapons
		{
			weap_xx(ACE_VMM3,1);
		};

		class TransportItems
		{
			item_xx(ACE_CableTie,10);
			item_xx(ACE_DefusalKit,2);
			item_xx(ACE_EarPlugs,5);
			item_xx(ACE_EntrenchingTool,3);
			item_xx(ACE_Fortify,2);
			item_xx(ItemAndroid,5);
			item_xx(ACE_HuntIR_monitor,1);
			item_xx(ACE_Clacker,2);
			item_xx(ACE_Flashlight_XL50,4);
			item_xx(ACE_SpraypaintRed,4);
			item_xx(ACE_SpraypaintGreen,4);
			item_xx(ToolKit,1);
			item_xx(ACE_wirecutter,1);
		};
	};

	class STAF_Ammobox_Ammo: C_IDAP_supplyCrate_F
	{
		displayName = "Ammo Box (STAF)";
		maximumLoad = 3000;

		class TransportMagazines
		{

			mag_xx(CUP_30Rnd_556x45_G36,12);
			mag_xx(30Rnd_65x39_caseless_mag,12);
			mag_xx(30Rnd_762x39_AK12_Mag_F,35);
			mag_xx(CUP_30Rnd_556x45_PMAG_QP,45);
			mag_xx(CUP_20Rnd_762x51_B_SCAR_bkl,35);

			mag_xx(rhsusf_200Rnd_556x45_box,3);
			mag_xx(150Rnd_762x54_Box,3);
			mag_xx(150Rnd_93x64_Mag,3);
			mag_xx(75rnd_762x39_AK12_Mag_F,2);

			mag_xx(hlc_30Rnd_9x19_B_MP5,2);
			mag_xx(50Rnd_570x28_SMG_03,2);

			mag_xx(rhsusf_20Rnd_762x51_m80_Mag,4);
			mag_xx(hlc_5rnd_300WM_AP_AWM,2);

			mag_xx(CUP_17Rnd_9x19_glock17,3);
			mag_xx(16Rnd_9x21_Mag,3);

			mag_xx(CUP_SMAW_HEAA_M,4);
			mag_xx(CUP_SMAW_NE_M,2);
			mag_xx(CUP_SMAW_HEDP_M,2);
			mag_xx(CUP_SMAW_Spotting,1);

			mag_xx(1Rnd_HE_Grenade_shell,12);
			mag_xx(UGL_FlareGreen_F,2);
			mag_xx(UGL_FlareCIR_F,2);
			mag_xx(UGL_FlareRed_F,2);
			mag_xx(UGL_FlareWhite_F,2);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
			mag_xx(1Rnd_Smoke_Grenade_shell,3);
			mag_xx(ACE_HuntIR_M203,2);

			mag_xx(HandGrenade,8);
			mag_xx(SmokeShell,12);
			mag_xx(SmokeShellRed,5);
			mag_xx(SmokeShellGreen,5);
			mag_xx(B_IR_Grenade,3);
			mag_xx(Chemlight_green,2);
			mag_xx(Chemlight_red,2);
			mag_xx(ACE_Chemlight_White,2);
			mag_xx(ACE_Chemlight_HiWhite,2);
			mag_xx(ACE_Chemlight_HiRed,2);
			mag_xx(ACE_M14,2);
			mag_xx(ACE_M84,2);

			mag_xx(DemoCharge_Remote_Mag,4);
			mag_xx(SatchelCharge_Remote_Mag,2);
		};
	};
};
