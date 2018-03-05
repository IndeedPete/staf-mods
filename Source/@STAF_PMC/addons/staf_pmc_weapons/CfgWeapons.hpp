class CfgWeapons {
  class hlc_rifle_G36MLIC; //HLC G36
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
  class srifle_DMR_06_camo_F; //Vanilla M14 Camo
  class srifle_GM6_F; //Vanilla GM6
  class srifle_LRR_F; //Vanilla M200
  class srifle_DMR_02_F; //Vanilla Bad News
  class KA_glock_17_Single; //KA Glock 17
  class KA_Mk23_black; //HK MK23
  class rhs_weap_smaw; //RHS SMAW
  class rhs_weap_M136; //RHS M136 HEAT
  class rhs_weap_M136_hedp; //RHS M136 HEDP
  class rhs_weap_M136_hp; //RHS M136 HP
  class Xnooz_AppareilPhoto; //Press Assets Handheld Camera

  // Rifles
  class STAF_rifle_g36: hlc_rifle_G36MLIC
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "KA_557_Magnifier_UP";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhsusf_acc_anpeq15_bk_light";
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
      item = "KA_557_Magnifier_UP";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rhsusf_acc_anpeq15_bk_light";
      slot = "PointerSlot";
      };
    };
  };

  class STAF_rifle_g36a1: hlc_rifle_G36A1
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Dualoptic15x2d";
      slot = "CowsSlot";
      };
    };
  };

  class STAF_rifle_g36a1_gl: hlc_rifle_G36A1AG36
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Dualoptic15x2d";
      slot = "CowsSlot";
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
        item = "KA_SCAR_H_Flashlight_Black";
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
        item = "KA_SCAR_H_Flashlight_Black";
        slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
        item = "SCAR_10_Inches_Barrel";
        slot = "MuzzleSlot";
      };
    };
  };

  class STAF_rifle_scar_tan_xps: KA_SCAR_L_Tan_Hand
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
        item = "KA_SCAR_H_Flashlight_Sand";
        slot = "PointerSlot";
      };
      class LinkedItemsMuzzle
      {
        item = "SCAR_10_Inches_Barrel";
        slot = "MuzzleSlot";
      };
    };
  };

  class STAF_rifle_scar_gl_tan_xps: KA_SCAR_L_Tan_EGLM
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
        item = "KA_SCAR_H_Flashlight_Sand";
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

  //Machine Guns
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

  //SMGs
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

  //Snipers and Marksman Rifles
  class STAF_rifle_m14: srifle_DMR_06_olive_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "optic_DMS";
        slot = "CowsSlot";
      };
    };
  };

  class STAF_rifle_m14_camo: srifle_DMR_06_camo_F
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "optic_DMS";
        slot = "CowsSlot";
      };
    };
  };

  //Sidearms
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

  //Launchers
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

  // Other Stuff
  class STAF_Xnooz_AppareilPhoto: Xnooz_AppareilPhoto
	{
		author = "Xnooz";
		displayname = "Photo Camera";
		scope = 2;
		model = "Xnooz_Press\AppareilPhoto.p3d";
		descriptionShort = "Appareil Photo Minolta";
		handAnim[] = {"OFP2_ManSkeleton","Xnooz_Press\rtm\AppareilPhoto.rtm"};
		picture = "\Xnooz_Press\data\ui\AppareilPhoto";

    class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0;
				opticsZoomMax = 0.3;
				opticsZoomInit = 2;
				distanceZoomMin = 1;
				distanceZoomMax = 500;
				memoryPointCamera = "eye";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] = {"Normal","NVG"};
				opticsPPEffects[] = {""};
			};
		};
  };
};
