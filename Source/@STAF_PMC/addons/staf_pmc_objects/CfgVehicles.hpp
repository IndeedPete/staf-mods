#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define back_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgVehicles {
	class C_IDAP_supplyCrate_F;
	class B_supplyCrate_F;
	class plp_ct_MilBoxLongBlack;
	class plp_ct_MilBoxSmallBlack;

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

	class STAF_Ammobox_Ammo: plp_ct_MilBoxSmallBlack
	{
		displayName = "Basic Ammo (STAF)";
		maximumLoad = 1000;

		class TransportMagazines
		{
			mag_xx(30Rnd_762x39_AK12_Mag_F,25);
			mag_xx(30Rnd_65x39_caseless_mag,25);
			mag_xx(hlc_30rnd_556x45_EPR_G36,20);
			mag_xx(CUP_30Rnd_556x45_PMAG_QP,40);
			mag_xx(20Rnd_762x51_Mag,10);

			mag_xx(150Rnd_762x54_Box,8);
			mag_xx(hlc_200rnd_556x45_B_SAW,8);
			mag_xx(75rnd_762x39_AK12_Mag_F,8);

			mag_xx(1Rnd_HE_Grenade_shell,10);
			mag_xx(1Rnd_Smoke_Grenade_shell,5);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,3);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,3);

			mag_xx(HandGrenade,10);
			mag_xx(SmokeShell,10);
			mag_xx(SmokeShellGreen,3);
			mag_xx(SmokeShellRed,3);

			mag_xx(DemoCharge_Remote_Mag,4);
			mag_xx(SatchelCharge_Remote_Mag,2);
		};
	};
};
