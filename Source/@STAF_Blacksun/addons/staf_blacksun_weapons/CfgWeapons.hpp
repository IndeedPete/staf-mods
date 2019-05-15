class CfgWeapons {
  class CUP_arifle_HK416_Black;
  class CUP_arifle_HK416_M203_Black;
  class CUP_arifle_HK416_CQB_Black;
  class srifle_DMR_02_F;
  class hlc_lmg_mk48;
  class hgun_ACPC2_F;
  class SMG_03C_black;


  // Rifles
  class STAF_rifle_416D165: CUP_arifle_HK416_Black
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "hlc_optic_hensoldtzo_hi_docter";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_M";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_rifle_416D165_gl: CUP_arifle_HK416_M203_Black
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "hlc_optic_hensoldtzo_hi_docter";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_M";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_rifle_416C: CUP_arifle_HK416_CQB_Black
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "hlc_optic_hensoldtzo_hi_docter";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_M";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_srifle_DMR_02: srifle_DMR_02_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_nightstalker";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_338_black";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_lmg_mk48: hlc_lmg_mk48
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "hlc_optic_hensoldtzo_hi_docter";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_H_MG_blk_F";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_hgun_ACPC2: hgun_ACPC2_F
  {
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
      item = "hlc_muzzle_Evo40";
      slot = "MuzzleSlot";
      };
      class LinkedItemsAcc
      {
      item = "hlc_acc_TLR1";
      slot = "PointerSlot";
      };
    };
  };

  class STAF_SMG_03C_black: SMG_03C_black
  {
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_570";
      slot = "MuzzleSlot";
      };
    };
  };
};
