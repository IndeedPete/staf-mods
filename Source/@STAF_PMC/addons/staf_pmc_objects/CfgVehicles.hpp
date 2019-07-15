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

	class STAF_Ammobox_Launcher_AA: plp_ct_MilBoxLongBlack
	{
		displayName = "Launchers AA [STAF]";

		class TransportWeapons {};
		class TransportMagazines {};
	};

	class STAF_Ammobox_Launcher_AT: plp_ct_MilBoxLongBlack
	{
		displayName = "Launchers AT [STAF]";

		class TransportWeapons {};
		class TransportMagazines {};
	};

	class STAF_Ammobox_Ammo: plp_ct_MilBoxSmallBlack
	{
		displayName = "Basic Ammo [STAF]";

		class TransportMagazines {};
	};
};
