class CfgWeapons {
  class arifle_CTAR_blk_F;
  class arifle_CTAR_GL_blk_F;
  class arifle_CTARS_blk_F;
  class srifle_DMR_07_blk_F;
  class hgun_Rook40_F;
  class SMG_02_F;


  // Rifles
  class STAF_arifle_CTAR_blk: arifle_CTAR_blk_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_Arco_blk_F";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhs_acc_perst3";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_58_blk_F";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_arifle_CTAR_GL_blk: arifle_CTAR_GL_blk_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_Arco_blk_F";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhs_acc_perst3";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_58_blk_F";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_arifle_CTARS_blk: arifle_CTARS_blk_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_Arco_blk_F";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhs_acc_perst3";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_58_blk_F";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_srifle_DMR_07_blk_F: srifle_DMR_07_blk_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_ams";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "acc_pointer_ir";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_h";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_hgun_Rook40_F: hgun_Rook40_F
  {
    class LinkedItems
    {
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_L";
      slot = "MuzzleSlot";
      };
    };
  };

  class STAF_SMG_02: SMG_02_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "rhsusf_acc_RM05";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhs_acc_perst3";
      slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
      item = "muzzle_snds_L";
      slot = "MuzzleSlot";
      };
    };
  };
};
