class CfgWeapons {
  class hlc_rifle_G36KMLIC; //HLC G36
  class hlc_rifle_G36MLIAG36; //HLC G36 GL
  class hlc_rifle_G36A1; //HLC G36A1
  class hlc_rifle_G36A1AG36; //HLC G36A1 GL
  class KA_SCAR_L_Black_Hand; //KA SCAR
  class KA_SCAR_L_Black_EGLM; //KA SCAR GL
  class KA_SCAR_L_Tan_Hand; //KA SCAR
  class KA_SCAR_L_Tan_EGLM; //KA SCAR GL
  class rhs_weap_m4a1_blockII_bk; // RHS M4
  class rhs_weap_m4a1_blockII_M203_bk; // RHS M4 GL
  class arifle_MX_Black_F; //Vanilla MX Black
  class arifle_MX_GL_Black_F; //Vanilla MX Black GL
  class hlc_m249_pip2; //HLC M249
  class LMG_Zafir_F;  //Vanilla Negev
  class hlc_smg_mp5a4; // HLC MP5
  class rhsusf_weap_MP7A2; //RHS MP7
  class SMG_03C_black; //BI P90
  class arifle_SPAR_03_blk_F; //Vanilla HK417
  class arifle_AK12_F; //Vanilla AK12
  class srifle_EBR_F; //Vanilla Mk14 EBR
  class srifle_DMR_06_olive_F; //Vanilla M14
  class srifle_GM6_F; //Vanilla GM6
  class srifle_LRR_F; //Vanilla M200
  class srifle_DMR_02_F; //Vanilla Bad News
  class KA_glock_17_Single; //KA Glock 17
  class KA_Mk23_black; //HK MK23
  class rhs_weap_smaw; //RHS SMAW
  class rhs_weap_M136; //RHS M136 HEAT
  class rhs_weap_M136_hedp; //RHS M136 HEDP
  class rhs_weap_M136_hp; //RHS M136 HP

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

  class STAF_rifle_g36a1: hlc_rifle_G36A1
  {
    class LinkedItems
    {
      class LinkedItemsAcc
      {
      item = "acc_pointer_IR";
      slot = "PointerSlot";
      };
    };
  };

  class STAF_rifle_g36a1_gl: hlc_rifle_G36A1AG36
  {
    class LinkedItems
    {
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

  class STAF_rifle_m4: rhs_weap_m4a1_blockII_bk
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

  class STAF_rifle_m4_gl: rhs_weap_m4a1_blockII_M203_bk
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
        item = "rhsusf_acc_ACOG_MDO";
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

  class STAF_rifle_mp7: rhsusf_weap_MP7A2
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

  class STAF_rifle_m14: srifle_DMR_06_olive_F
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

  class STAF_pistol_glock17: KA_glock_17_Single
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

  class STAF_pistol_mk23: KA_Mk23_black
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
};
