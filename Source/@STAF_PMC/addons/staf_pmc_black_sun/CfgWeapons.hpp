class CfgWeapons {
  class hlc_rifle_G36A1;
  class rhs_weap_M590_8RD;
  class hlc_smg_mp5sd6;
  class srifle_LRR_F;
  class hlc_smg_mp5k;
  class KA_Glock_18_Single;
  class SAN_Headlamp_v2;

  class STAF_hlc_rifle_G36A1_black_sun: hlc_rifle_G36A1
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "HLC_Optic_G36Export35x";
        slot = "CowsSlot";
      };
      class LinkedItemsMuzzle
      {
        item = "hlc_muzzle_556NATO_KAC";
        slot = "MuzzleSlot";
      };
      class LinkedItemsUnder
      {
        item = "HLC_Bipod_G36";
        slot = "UnderBarrelSlot";
      };
    };
  };

  class STAF_rhs_weap_M590_8RD_black_sun: rhs_weap_M590_8RD
  {
    class LinkedItems
    {};
  };

  class STAF_hlc_smg_mp5sd6_black_sun: hlc_smg_mp5sd6
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "rhsusf_acc_RM05";
        slot = "CowsSlot";
      };
    };
  };

  class STAF_srifle_LRR_F_black_sun: srifle_LRR_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "rhsusf_acc_premier";
        slot = "CowsSlot";
      };
    };
  };

  class STAF_hlc_smg_mp5k_black_sun: hlc_smg_mp5k
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "rhsusf_acc_RM05";
        slot = "CowsSlot";
      };
      class LinkedItemsMuzzle
      {
        item = "hlc_muzzle_Agendasix";
        slot = "MuzzleSlot";
      };
    };
  };

  class STAF_KA_Glock_18_Single_black_sun: KA_Glock_18_Single
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
        item = "KA_Laser";
        slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
        item = "KA_Silencer_2";
        slot = "MuzzleSlot";
      };
    };
  };

  class STAF_SAN_Headlamp_black_sun: SAN_Headlamp_v2
  {
		displayname = "Headlamp Black Sun";
		visionMode[] = {"Normal","NVG"};
  };
};
