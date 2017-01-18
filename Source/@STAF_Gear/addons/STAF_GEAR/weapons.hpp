/*
// Weapons
class srifle_DMR_03_F;
class srifle_DMR_03_khaki_F;
class MMG_01_tan_F;

class STAF_srifle_DMR_03_Danish_Woodland_F: srifle_DMR_03_F
{
	displayName = "STAF Michelsen's SIG 556 (Woodland)";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\DMR_03_01_Danish_Woodland_CO.paa","\STAF_GEAR\txt\DMR_03_02_Danish_Woodland_CO.paa"};
	picture = "\STAF_GEAR\img\gear_DMR_03_X_Danish_Woodland_CA.paa";
};

class STAF_srifle_DMR_03_Danish_Tan_F: srifle_DMR_03_khaki_F
{
	displayName = "STAF Michelsen's SIG 556 (Tan)";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\DMR_03_01_Danish_Tan_CO.paa","\STAF_GEAR\txt\DMR_03_02_Danish_Tan_CO.paa"};
	picture = "\STAF_GEAR\img\gear_DMR_03_X_Danish_Tan_CA.paa";
};

class STAF_MMG_01_Tiger_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_Tiger_F";
	displayName = "STAF HK121 PEACEMAKER (Tiger)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_Tiger_CO.paa","\STAF_GEAR\txt\MMG_01_02_Tiger_CO.paa","\STAF_GEAR\txt\MMG_01_03_Tiger_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_Tiger_co.paa";

	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_MCAM_Black_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_MCAM_Black_F";
	displayName = "STAF HK121 PEACEMAKER (MCAM Black)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_Tiger_CO.paa","\STAF_GEAR\txt\MMG_01_02_MCAM_Black_CO.paa","\STAF_GEAR\txt\MMG_01_03_MCAM_Black_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_MCAM_Black_co.paa";

	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_Choc_Chip_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_Choc_Chip_F";
	displayName = "STAF HK121 PEACEMAKER (Chocolate Chip)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_Choc_Chip_CO.paa","\STAF_GEAR\txt\MMG_01_02_Choc_Chip_CO.paa","\STAF_GEAR\txt\MMG_01_03_Choc_Chip_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_Choc_Chip_co.paa";

	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_snd";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_ATACS_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_ATACS_F";
	displayName = "STAF HK121 PEACEMAKER (ATACS)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_ATACS_CO.paa","\STAF_GEAR\txt\MMG_01_02_ATACS_CO.paa","\STAF_GEAR\txt\MMG_01_03_ATACS_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_ATACS_co.paa";

	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_Splinter_Snow_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_Splinter_Snow_F";
	displayName = "STAF HK121 PEACEMAKER (Splinter Snow)";
	hiddenSelectionsTextures[] = {"\IP_EUROFORCE\weapons\txt\MMG_01_01_white_CO.paa","\STAF_GEAR\txt\MMG_01_02_Splinter_Snow_CO.paa","\STAF_GEAR\txt\MMG_01_03_Splinter_Snow_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_Splinter_Snow_co.paa";

	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
}; */

// Mod Weapons

class hlc_rifle_G36KMLIC; //HLC G36
class hlc_rifle_G36MLIAG36; //HLC G36 GL
class KA_SCAR_L_Black_Hand; //KA SCAR
class KA_SCAR_L_Black_EGLM; //KA SCAR GL
class KA_SCAR_L_Tan_Hand; //KA SCAR
class KA_SCAR_L_Tan_EGLM; //KA SCAR GL
class rhs_weap_mk18; // RHS MK.18
class rhs_weap_mk18_m320; // RHS MK.18 GL
class arifle_MX_Black_F; //Vanilla MX Black
class arifle_MX_GL_Black_F; //Vanilla MX Black GL
class hlc_m249_pip2; //HLC M249
class LMG_Zafir_F;  //Vanilla Negev
class hlc_smg_mp5a4; // HLC MP5
class SMG_03C_black; //BI P90
class arifle_SPAR_03_blk_F; //Vanilla HK417
class arifle_AK12_F; //Vanilla AK12
class srifle_EBR_F; //Vanilla Mk14 EBR
class srifle_GM6_F; //Vanilla GM6
class srifle_LRR_F; //Vanilla M200
class srifle_DMR_02_F; //Vanilla Bad News
class KA_Glock_17_Single; //KA Glock 17
class rhs_weap_smaw; //RHS SMAW
class rhs_weap_M136; //RHS M136 HEAT
class rhs_weap_M136_hedp; //RHS M136 HEDP
class rhs_weap_M136_hp; //RHS M136 HP
//////////////////////////////////////////////////////////////////////////////////
class STAF_rifle_g36: hlc_rifle_G36KMLIC
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
    item = "rhsusf_acc_eotech_xps3";
    slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
    item = "acc_pointer_IR";
    slot = "PointerSlot";
    };
  };
};

class STAF_rifle_g36_gl: hlc_rifle_G36MLIAG36
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_eotech_xps3";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_scar_blk_xps: KA_SCAR_L_Black_Hand
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_eotech_xps3";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "KA_SCAR_H_Laser_Flashlight_Black_IR";
      slot = "PointerSlot";
    };
    class LinkedItemsMuzzle
    {
      item = "SCAR_10_Inches_Barrel";
      slot = "MuzzleSlot";
    };
  };
};

class STAF_rifle_scar_gl_blk_xps: KA_SCAR_L_Black_EGLM
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_eotech_xps3";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "KA_SCAR_H_Laser_Flashlight_Black_IR";
      slot = "PointerSlot";
    };
    class LinkedItemsMuzzle
    {
      item = "SCAR_10_Inches_Barrel";
      slot = "MuzzleSlot";
    };
  };
};

class STAF_rifle_scar_blk: KA_SCAR_L_Black_Hand //without scope
{
  class LinkedItems
  {
    class LinkedItemsMuzzle
    {
      item = "SCAR_10_Inches_Barrel";
      slot = "MuzzleSlot";
    };
  };
};

class STAF_rifle_scar_gl_blk: KA_SCAR_L_Black_EGLM //without scope
{
  class LinkedItems
  {
    class LinkedItemsMuzzle
    {
      item = "SCAR_10_Inches_Barrel";
      slot = "MuzzleSlot";
    };
  };
};

class STAF_rifle_scar_tan: KA_SCAR_L_Tan_Hand //without scope
{
  class LinkedItems
  {
    class LinkedItemsMuzzle
    {
      item = "SCAR_10_Inches_Barrel";
      slot = "MuzzleSlot";
    };
  };
};

class STAF_rifle_scar_gl_tan: KA_SCAR_L_Tan_EGLM //without scope
{
  class LinkedItems
  {
    class LinkedItemsMuzzle
    {
      item = "SCAR_10_Inches_Barrel";
      slot = "MuzzleSlot";
    };
  };
};

class STAF_rifle_mk18: rhs_weap_mk18
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_eotech_xps3";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_mk18_gl: rhs_weap_mk18_m320
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_eotech_xps3";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_mx: arifle_MX_Black_F
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_eotech_xps3";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_mx_gl: arifle_MX_GL_Black_F
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_eotech_xps3";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_m249: hlc_m249_pip2
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_SpecterDR";
      slot = "CowsSlot";
    };
  };
};

class STAF_rifle_negev: LMG_Zafir_F
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhsusf_acc_SpecterDR";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_mp5: hlc_smg_mp5a4
{
  class LinkedItems
    {
    class LinkedItemsOptic
    {
      item = "optic_Aco_smg";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_flashlight";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_p90: SMG_03C_black
{
};

class STAF_rifle_hk417: arifle_SPAR_03_blk_F
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "optic_DMS";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_ak12: arifle_AK12_F
{
  class LinkedItems
    {
    class LinkedItemsOptic
    {
      item = "optic_DMS";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_ebr: srifle_EBR_F
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "optic_DMS";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
    };
  };
};

class STAF_rifle_gm6: srifle_GM6_F
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "optic_LRPS";
      slot = "CowsSlot";
    };
  };
};

class STAF_rifle_m200: srifle_LRR_F
{
  class LinkedItems
    {
    class LinkedItemsOptic
    {
      item = "optic_LRPS";
      slot = "CowsSlot";
    };
  };
};

class STAF_rifle_mar10: srifle_DMR_02_F
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "optic_LRPS";
      slot = "CowsSlot";
    };
  };
};

class STAF_pistol_glock17: KA_Glock_17_Single
{
  class LinkedItems
  {
    class LinkedItemsAcc
    {
      item = "KA_Flashlight";
      slot = "PointerSlot";
    };
  };
};

class STAF_launcher_smaw: rhs_weap_smaw
{
  class LinkedItems
  {
    class LinkedItemsOptic
    {
      item = "rhs_weap_optic_smaw";
      slot = "CowsSlot";
    };
    class LinkedItemsAcc
    {
      item = "acc_flashlight";
      slot = "PointerSlot";
    };
  };
};

class STAF_launcher_m136_heat: rhs_weap_M136
{
  class LinkedItems
  {
    class LinkedItemsAcc
    {
      item = "rhs_acc_at4_handler";
      slot = "PointerSlot";
    };
  };
};

class STAF_launcher_m136_hedp: rhs_weap_M136_hedp
{
  class LinkedItems
  {
    class LinkedItemsAcc
    {
      item = "rhs_acc_at4_handler";
      slot = "PointerSlot";
    };
  };
};

class STAF_launcher_m136_hp: rhs_weap_M136_hp
{
  class LinkedItems
  {
    class LinkedItemsAcc
    {
      item = "rhs_acc_at4_handler";
      slot = "PointerSlot";
    };
  };
};
