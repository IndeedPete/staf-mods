#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles {

  class B_Kitbag_cbr;
	class B_Kitbag_rgr;
	class B_Carryall_khk;
  class B_AssaultPack_blk;
  class B_Bergen_blk;

	class STAF_B_Carryall_MCAM_Black: B_Carryall_khk
	{
		baseBackpack = "STAF_B_Carryall_MCAM_Black";
		displayName = "STAF Carryall Backpack (MCAM Black)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_tortila_MCAM_Black_co.paa"};
		picture = "\staf_pmc_backpacks\arsenal\icon_b_c_tortila_MCAM_Black.paa";
	};

	class STAF_B_Kitbag_blk: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_blk";
		displayName = "Kitbag (Dark Black)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
	};

	class STAF_B_Kitbag_medic_blk: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_medic_blk";
		displayName = "STAF Medic Kitbag (Black)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_fast_medic_blk_co.paa"};

		class TransportItems
		{
			item_xx(ACE_adenosine,5);
      item_xx(ACE_epinephrine,5);
      item_xx(ACE_morphine,5);
      item_xx(ACE_fieldDressing,20);
      item_xx(ACE_elasticBandage,20);
      item_xx(ACE_packingBandage,20);
      item_xx(ACE_quikclot,20);
      item_xx(ACE_salineIV,3);
      item_xx(ACE_salineIV_500,7);
      item_xx(ACE_salineIV_250,10);
      item_xx(ACE_tourniquet,8);
      item_xx(ACE_surgicalKit,1)
      item_xx(ACE_personalAidKit,4);
      item_xx(ACE_EarPlugs,2);
      item_xx(adv_aceSplint_splint,10);
			};
	};

	class STAF_B_Kitbag_medic_cbr: B_Kitbag_cbr
	{
		baseBackpack = "STAF_B_Kitbag_medic_cbr";
		displayName = "STAF Medic Kitbag (Coyote)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_fast_medic_cbr_co.paa"};

    class TransportItems
		{
			item_xx(ACE_adenosine,5);
      item_xx(ACE_epinephrine,5);
      item_xx(ACE_morphine,5);
      item_xx(ACE_fieldDressing,20);
      item_xx(ACE_elasticBandage,20);
      item_xx(ACE_packingBandage,20);
      item_xx(ACE_quikclot,20);
      item_xx(ACE_salineIV,3);
      item_xx(ACE_salineIV_500,7);
      item_xx(ACE_salineIV_250,10);
      item_xx(ACE_tourniquet,8);
      item_xx(ACE_surgicalKit,1)
      item_xx(ACE_personalAidKit,4);
      item_xx(ACE_EarPlugs,2);
      item_xx(adv_aceSplint_splint,10);
			};
	};

	class STAF_B_Kitbag_medic_rgr: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_medic_rgr";
		displayName = "STAF Medic Kitbag (Green)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_fast_medic_rgr_co.paa"};

    class TransportItems
		{
			item_xx(ACE_adenosine,5);
      item_xx(ACE_epinephrine,5);
      item_xx(ACE_morphine,5);
      item_xx(ACE_fieldDressing,20);
      item_xx(ACE_elasticBandage,20);
      item_xx(ACE_packingBandage,20);
      item_xx(ACE_quikclot,20);
      item_xx(ACE_salineIV,3);
      item_xx(ACE_salineIV_500,7);
      item_xx(ACE_salineIV_250,10);
      item_xx(ACE_tourniquet,8);
      item_xx(ACE_surgicalKit,1)
      item_xx(ACE_personalAidKit,4);
      item_xx(ACE_EarPlugs,2);
      item_xx(adv_aceSplint_splint,10);
			};
	};

  class STAF_B_Kitbag_medic_inv: STAF_B_Kitbag_medic_blk
  {
    baseBackpack = "STAF_B_Kitbag_medic_inv";
    displayName = "STAF Medic Kitbag (Invisible)";
    hiddenSelectionsTextures[] = {""};
		picture = "";

    class TransportItems
		{
			item_xx(ACE_adenosine,5);
      item_xx(ACE_epinephrine,5);
      item_xx(ACE_morphine,5);
      item_xx(ACE_fieldDressing,20);
      item_xx(ACE_elasticBandage,20);
      item_xx(ACE_packingBandage,20);
      item_xx(ACE_quikclot,20);
      item_xx(ACE_salineIV,3);
      item_xx(ACE_salineIV_500,7);
      item_xx(ACE_salineIV_250,10);
      item_xx(ACE_tourniquet,8);
      item_xx(ACE_surgicalKit,1)
      item_xx(ACE_personalAidKit,4);
      item_xx(ACE_EarPlugs,2);
      item_xx(adv_aceSplint_splint,10);
			};
  };

	class STAF_B_Kitbag_exp_blk: STAF_B_Kitbag_blk
	{
		baseBackpack = "STAF_B_Kitbag_exp_blk";
		displayName = "STAF Explosives Kitbag (Black)";
		scope = 2;

		class TransportMagazines
		{
			mag_xx(SatchelCharge_Remote_Mag,3);
      mag_xx(DemoCharge_Remote_Mag,1);
		};

		class TransportItems
		{
			item_xx(ACE_Clacker,1);
			item_xx(ACE_DefusalKit,1);
		};
	};

	class STAF_B_Kitbag_exp_cbr: B_Kitbag_cbr
	{
		baseBackpack = "STAF_B_Kitbag_exp_cbr";
		displayName = "STAF Explosives Kitbag (Coyote)";

    class TransportMagazines
		{
			mag_xx(SatchelCharge_Remote_Mag,3);
      mag_xx(DemoCharge_Remote_Mag,1);
		};

		class TransportItems
		{
			item_xx(ACE_Clacker,1);
			item_xx(ACE_DefusalKit,1);
		};
	};

	class STAF_B_Kitbag_exp_rgr: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_exp_rgr";
		displayName = "STAF Explosives Kitbag (Green)";

    class TransportMagazines
		{
			mag_xx(SatchelCharge_Remote_Mag,3);
      mag_xx(DemoCharge_Remote_Mag,1);
		};

		class TransportItems
		{
			item_xx(ACE_Clacker,1);
			item_xx(ACE_DefusalKit,1);
		};
	};

  class STAF_B_Kitbag_exp_inv: STAF_B_Kitbag_exp_blk
  {
    baseBackpack = "STAF_B_Kitbag_exp_inv";
    displayName = "STAF Explosives Kitbag (Invisible)";
    hiddenSelectionsTextures[] = {""};
		picture = "";

    class TransportMagazines
    {
      mag_xx(SatchelCharge_Remote_Mag,3);
      mag_xx(DemoCharge_Remote_Mag,1);
    };

    class TransportItems
    {
      item_xx(ACE_Clacker,1);
      item_xx(ACE_DefusalKit,1);
    };
  };

	class STAF_B_Kitbag_engineer_blk: STAF_B_Kitbag_blk
	{
		baseBackpack = "STAF_B_Kitbag_engineer_blk";
		displayName = "STAF Engineer Kitbag (Black)";
		scope = 2;

		class TransportItems
		{
			item_xx(ACE_wirecutter,1);
			item_xx(ToolKit,1);
			item_xx(ACE_Clacker,1);
			item_xx(ACE_Flashlight_XL50,3);
			item_xx(ACE_EntrenchingTool,1);
			item_xx(ACE_DefusalKit,1);
		};
	};

	class STAF_B_Kitbag_engineer_cbr: B_Kitbag_cbr
	{
		baseBackpack = "STAF_B_Kitbag_engineer_cbr";
		displayName = "STAF Engineer Kitbag (Coyote)";

    class TransportItems
		{
			item_xx(ACE_wirecutter,1);
			item_xx(ToolKit,1);
			item_xx(ACE_Clacker,1);
			item_xx(ACE_Flashlight_XL50,3);
			item_xx(ACE_EntrenchingTool,1);
			item_xx(ACE_DefusalKit,1);
		};
	};

	class STAF_B_Kitbag_engineer_rgr: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_engineer_rgr";
		displayName = "STAF Engineer Kitbag (Green)";

    class TransportItems
		{
			item_xx(ACE_wirecutter,1);
			item_xx(ToolKit,1);
			item_xx(ACE_Clacker,1);
			item_xx(ACE_Flashlight_XL50,3);
			item_xx(ACE_EntrenchingTool,1);
			item_xx(ACE_DefusalKit,1);
		};
	};

  class STAF_B_Carryall_inv: STAF_B_Carryall_MCAM_Black
  {
    baseBackpack = "STAF_B_Carryall_Inv";
    displayName = "STAF Carryall Backpack (Invisible)";
    hiddenSelectionsTextures[] = {""};
    picture = "";
  };

  class STAF_B_Kitbag_inv: STAF_B_Kitbag_blk
  {
    baseBackpack = "STAF_B_Kitbag_inv";
    displayName = "Kitbag (Invisible)";
    hiddenSelectionsTextures[] = {""};
		picture = "";
  };

  class STAF_B_AssaultPack_inv: B_AssaultPack_blk
  {
    baseBackpack = "STAF_B_AssaultPack_inv";
    displayName = "Assault Pack (Invisible)";
    hiddenSelectionsTextures[] = {""};
		picture = "";
  };

  class STAF_B_Bergen_inv: B_Bergen_blk
  {
    baseBackpack = "STAF_B_Bergen_inv";
    displayName = "Bergen (Invisible)";
    hiddenSelectionsTextures[] = {""};
		picture = "";
  };
};
