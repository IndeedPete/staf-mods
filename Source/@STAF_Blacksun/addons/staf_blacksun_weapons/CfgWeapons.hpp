class CfgWeapons {
  class hlc_rifle_416D165;
  class hlc_rifle_416D165_gl;
  class hlc_rifle_416C;
  class srifle_DMR_02_F;
  class hlc_lmg_mk48;
  class hgun_ACPC2_F;
  class SMG_03C_black;


  // Rifles
  class STAF_rifle_416D165: hlc_rifle_416D165
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "rhsusf_acc_su230_mrds";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhsusf_acc_anpeq15_bk";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_M";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_rifle_416D165_gl: hlc_rifle_416D165_gl
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "rhsusf_acc_su230_mrds";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhsusf_acc_anpeq15_bk";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_M";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_rifle_416C: hlc_rifle_416C
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "rhsusf_acc_su230_mrds";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhsusf_acc_anpeq15_bk";
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
      item = "optic_nvs";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhsusf_acc_anpeq15_bk";
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
      item = "rhsusf_acc_su230_mrds";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhsusf_acc_anpeq15_bk";
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
