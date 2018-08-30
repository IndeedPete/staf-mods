#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles {

  class B_Kitbag_cbr;
	class B_Kitbag_rgr;
	class B_Carryall_khk;
  class B_Bergen_blk;
  class B_UAV_01_backpack_F;
  class O_UAV_01_backpack_F;
  class I_UAV_01_backpack_F;
  class B_AssaultPack_rgr;
  class B_FieldPack_blk;

  // Assault Pack

  class STAF_B_AssaultPack_white_hex: B_AssaultPack_rgr
  {
    baseBackpack = "STAF_B_AssaultPack_white_hex";
		displayName = "STAF Assault Pack (White, HEX)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_compact_hex_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_compact_white_ca.paa";
  };

  class STAF_B_AssaultPack_white_MCAM: B_AssaultPack_rgr
  {
    baseBackpack = "STAF_B_AssaultPack_white_MCAM";
		displayName = "STAF Assault Pack (White, MCAM)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_compact_mcam_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_compact_white_ca.paa";
  };

  class STAF_B_AssaultPack_white_splinter: B_AssaultPack_rgr
  {
    baseBackpack = "STAF_B_AssaultPack_white_splinter";
		displayName = "STAF Assault Pack (White, Splinter)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_compact_splinter_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_compact_white_ca.paa";
  };

  class STAF_B_AssaultPack_white: B_AssaultPack_rgr
  {
    baseBackpack = "STAF_B_AssaultPack_white";
		displayName = "STAF Assault Pack (White)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_compact_white_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_compact_white_ca.paa";
  };

  class STAF_B_AssaultPack_inv: B_AssaultPack_rgr
  {
    baseBackpack = "STAF_B_AssaultPack_inv";
    displayName = "STAF Assault Pack (Invisible)";
    hiddenSelectionsTextures[] = {""};
  	picture = "\staf_pmc_main\arsenal\staf_iconsmall.paa";
    model ="";
  };

  // Carry-All

	class STAF_B_Carryall_MCAM_Black: B_Carryall_khk
	{
		baseBackpack = "STAF_B_Carryall_MCAM_Black";
		displayName = "STAF Carryall Backpack (MCAM Black)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_tortila_MCAM_Black_co.paa"};
		picture = "\staf_pmc_main\arsenal\staf_iconsmall.paa";
	};
  class STAF_B_Carryall_white_hex: B_Carryall_khk
  {
    baseBackpack = "STAF_B_Carryall_white_hex";
		displayName = "STAF Carryall Backpack (White, HEX)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_tortila_hex_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_tortila_white_ca.paa";
  };
  class STAF_B_Carryall_white_MCAM: B_Carryall_khk
  {
    baseBackpack = "STAF_B_Carryall_white_MCAM";
		displayName = "STAF Carryall Backpack (White, MCAM)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_tortila_mcam_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_tortila_white_ca.paa";
  };
  class STAF_B_Carryall_white_splinter: B_Carryall_khk
  {
    baseBackpack = "STAF_B_Carryall_white_splinter";
		displayName = "STAF Carryall Backpack (White, Splinter)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_tortila_splinter_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_tortila_white_ca.paa";
  };
  class STAF_B_Carryall_white: B_Carryall_khk
  {
    baseBackpack = "STAF_B_Carryall_white";
		displayName = "STAF Carryall Backpack (White)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_tortila_white_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_tortila_white_ca.paa";
  };
  class STAF_B_Carryall_dev: B_Carryall_khk
  {
    baseBackpack = "STAF_B_Carryall_dev";
		displayName = "STAF DEV Pack";
		hiddenSelectionsTextures[] = {""};
		picture = "";
    maximumLoad = 999999999999;
  };

  //Kitbag

	class STAF_B_Kitbag_blk: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_blk";
		displayName = "STAF Kitbag (Dark Black)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
	};

  class STAF_B_Kitbag_white_hex: B_Kitbag_rgr
  {
    baseBackpack = "STAF_B_Kitbag_white_hex";
		displayName = "STAF Kitbag (White, HEX)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_fast_hex_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_kitbag_white_ca.paa";
  };

  class STAF_B_Kitbag_white_MCAM: B_Kitbag_rgr
  {
    baseBackpack = "STAF_B_Kitbag_white_MCAM";
		displayName = "STAF Kitbag (White, MCAM)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_fast_mcam_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_kitbag_white_ca.paa";
  };

  class STAF_B_Kitbag_white_splinter: B_Kitbag_rgr
  {
    baseBackpack = "STAF_B_Kitbag_white_splinter";
		displayName = "STAF Kitbag (White, Splinter)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_fast_splinter_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_kitbag_white_ca.paa";
  };

  class STAF_B_Kitbag_white: B_Kitbag_rgr
  {
    baseBackpack = "STAF_B_Kitbag_white";
		displayName = "STAF Kitbag (White)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_fast_white_co.paa"};
		picture = "\staf_pmc_main\arsenal\icon_b_c_kitbag_white_ca.paa";
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

  //Bergen
  class STAF_B_UAV_01_backpack_white_F: B_UAV_01_backpack_F
  {
    baseBackpack = "STAF_B_UAV_01_backpack_F";
		displayName = "STAF UAV Bagpack (White, BLUFOR)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\uav_backpack_white_co.paa"};
  };

  class STAF_O_UAV_01_backpack_white_F: O_UAV_01_backpack_F
  {
    baseBackpack = "STAF_O_UAV_01_backpack_F";
		displayName = "STAF UAV Bagpack (White, OPFOR)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\uav_backpack_white_co.paa"};
  };

  class STAF_I_UAV_01_backpack_white_F: I_UAV_01_backpack_F
  {
    baseBackpack = "STAF_I_UAV_01_backpack_F";
		displayName = "STAF UAV Bagpack (White, INDFOR)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\uav_backpack_white_co.paa"};
  };

  // Field Pack

  class STAF_B_FieldPack_white_hex: B_FieldPack_blk
  {
    baseBackpack = "STAF_B_FieldPack_white_hex";
		displayName = "STAF Field Pack (White, HEX)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_gorod_hex_co.paa"};
  	picture = "\staf_pmc_main\arsenal\staf_iconsmall.paa";
  };

  class STAF_B_FieldPack_white_mcam: B_FieldPack_blk
  {
    baseBackpack = "STAF_B_FieldPack_white_mcam";
		displayName = "STAF Field Pack (White, MCAM)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_gorod_mcam_co.paa"};
  	picture = "\staf_pmc_main\arsenal\staf_iconsmall.paa";
  };

  class STAF_B_FieldPack_white_splinter: B_FieldPack_blk
  {
    baseBackpack = "STAF_B_FieldPack_white_splinter";
		displayName = "STAF Field Pack (White, Splinter)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_gorod_splinter_co.paa"};
  	picture = "\staf_pmc_main\arsenal\staf_iconsmall.paa";
  };

  class STAF_B_FieldPack_white: B_FieldPack_blk
  {
    baseBackpack = "STAF_B_FieldPack_white";
		displayName = "STAF Field Pack (White)";
		hiddenSelectionsTextures[] = {"\staf_pmc_backpacks\txt\backpack_gorod_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\staf_iconsmall.paa";
  };
};
