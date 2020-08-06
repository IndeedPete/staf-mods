class CfgWeapons {
  class hlc_rifle_G36MLIC; //with Rail
  class hlc_rifle_G36C;
  class hlc_rifle_G36CMLIC;
  class hlc_rifle_G36CV;
  class hlc_rifle_G36CTac;
  class hlc_rifle_G36KMLIC;
  class hlc_rifle_G36KA1KSK;
  class hlc_Rifle_G36KSKAG36;
  class hlc_rifle_G36KV;
  class hlc_rifle_g36KTac;
  class hlc_rifle_G36MLIAG36;
  class hlc_rifle_G36V;
  class hlc_rifle_G36VAG36;
  class hlc_rifle_G36TAC;
  class hlc_rifle_G36A1; //without Rail
  class hlc_rifle_G36A1AG36;
  class hlc_rifle_G36E1;
  class hlc_rifle_G36E1AG36;
  class hlc_rifle_G36KA1;
  class hlc_rifle_G36KE1;
  class hlc_rifle_MG36;
  class CUP_arifle_Mk16_STD_black; // CUP SCAR
  class CUP_arifle_Mk16_STD_EGLM_black; // CUP SCAR GL
  class CUP_arifle_Mk16_STD; // CUP SCAR Tan
  class CUP_arifle_Mk16_STD_EGLM; // CUP SCAR GL
  class CUP_arifle_Mk16_STD_woodland; // CUP SCAR Woodland
  class CUP_arifle_Mk16_STD_EGLM_woodland; // CUP SCAR Woodland GL
  class hlc_m249_pip2; //HLC M249
  class LMG_Zafir_F;  //Vanilla Negev
  class hlc_smg_mp5a4; // HLC MP5
  class arifle_AK12_F; //Vanilla AK12
  class arifle_AK12_GL_F; //Vanilla AK12 GL
  class arifle_AK12_arid_F; //Vanilla AK12 Arid
  class arifle_AK12_arid_GL_F; //Vanilla AK12 GL Arid
  class arifle_AK12_lush_F; //Vanilla AK12 lush
  class arifle_AK12_lush_GL_F; //Vanilla AK12 GL Lush
  class arifle_AK12U_F; //Vanilla AK12u
  class arifle_AK12U_arid_F; //Vanilla AK12u Arid
  class arifle_AK12U_lush_F; //Vanilla AK12u lush
  class arifle_RPK12_F; //Vanilla RPK12
  class arifle_RPK12_arid_F; //Vanilla RPK12 Arid
  class arifle_RPK12_lush_F; //Vanilla RPK12 lush
  class srifle_DMR_06_olive_F; //Vanilla M14
  class srifle_DMR_06_camo_F; //Vanilla M14 Camo
  class srifle_DMR_03_F; //Vanilla SIG DMR
  class srifle_DMR_03_khaki_F; //Vanilla SIG DMR Khaki
  class srifle_DMR_03_tan_F; //Vanilla SIG DMR Tan
  class srifle_DMR_03_multicam_F; //Vanilla SIG DMR Multicam
  class srifle_DMR_03_woodland_F; //Vanilla SIG DMR Woodland
  class hlc_rifle_awmagnum_BL; //HLC AWM
  class CUP_launch_Mk153Mod0; //CUP SMAW
  class CUP_launch_M136_Loaded; //CUP M136 HEAT
  class CUP_launch_Igla_Loaded; //CUP IGLA
  class CUP_hgun_Glock17; //CUP GLock Green
  class CUP_hgun_Glock17_tan; //CUP Glock Tan
  class CUP_hgun_Glock17_blk; //CUP Glock Black
  class CUP_arifle_M4A1_black; //CUP M4A1 Black
  class CUP_arifle_M4A1_desert; //CUP M4A1 Desert
  class CUP_arifle_M4A1_camo; //CUP M4A1 Woodland
  class CUP_arifle_M4A3_black; //CUP M4A1 Black Grip
  class CUP_arifle_M4A3_desert; //CUP M4A1 Desert Grip
  class CUP_arifle_M4A3_camo; //CUP M4A1 Woodland Grip
  class CUP_arifle_M4A1; //CUP M4A1 Carry Handle Black
  class CUP_arifle_M4A1_desert_carryhandle; //CUP M4A1 Carry Handle Desert
  class CUP_arifle_M4A1_camo_carryhandle; //CUP M4A1 Carry Handle Woodland
  class CUP_arifle_M4A1_BUIS_GL; //CUP M4A1 M203 Black
  class CUP_arifle_M4A1_BUIS_desert_GL; //CUP M4A1 M203 Desert
  class CUP_arifle_M4A1_BUIS_camo_GL; //CUP M4A1 M203 Woodland
  class CUP_arifle_M4A1_GL_carryhandle; // CUP M4A1 M203 Carry Handle Black
  class CUP_arifle_M4A1_GL_carryhandle_desert; // CUP M4A1 M203 Carry Handle Desert
  class CUP_arifle_M4A1_GL_carryhandle_camo; // CUP M4A1 M203 Carry Handle Woodland
  class CUP_hgun_Compact; //CUP CZ 75 Compact
  class CUP_hgun_Duty; //CUP CZ 75 Duty
  class CUP_hgun_Phantom; //CUP CZ 75 Phantom

  // Rifles
  class STAF_rifle_G36MLIC: hlc_rifle_G36MLIC
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36C: hlc_rifle_G36C
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36CMLIC: hlc_rifle_G36CMLIC
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36CV: hlc_rifle_G36CV
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36CTac: hlc_rifle_G36CTac
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36KMLIC: hlc_rifle_G36KMLIC
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36KA1KSK: hlc_rifle_G36KA1KSK
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_Rifle_G36KSKAG36: HLC_Rifle_G36KSKAG36
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36KV: hlc_rifle_G36KV
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_g36KTac: hlc_rifle_g36KTac
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36MLIAG36: hlc_rifle_G36MLIAG36
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36V: hlc_rifle_G36V
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36VAG36: hlc_rifle_G36VAG36
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36TAC: hlc_rifle_G36TAC
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "cup_optic_g33_hws_blk";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "rh_peq15b";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_G36A1: hlc_rifle_G36A1
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Export15x2d";
      slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_G36A1AG36: hlc_rifle_G36A1AG36
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Export15x2d";
      slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_G36E1: hlc_rifle_G36E1
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Export15x2d";
      slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_G36E1AG36: hlc_rifle_G36E1AG36
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Export15x2d";
      slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_G36KA1: hlc_rifle_G36KA1
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Export15x2d";
      slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_G36KE1: hlc_rifle_G36KE1
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Export15x2d";
      slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_MG36: hlc_rifle_MG36
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "HLC_Optic_G36Export15x2d";
      slot = "CowsSlot";
      };
    };
  };

  class STAF_rifle_ak12: arifle_AK12_F
  {
    magazines[] =
     {
         "30Rnd_762x39_AK12_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_blk_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_ak12_gl: arifle_AK12_GL_F
  {
    magazines[] =
     {
         "30Rnd_762x39_AK12_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_blk_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_ak12_arid: arifle_AK12_arid_F
  {
    magazines[] =
     {
         "30rnd_762x39_AK12_Arid_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_arid_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_tan_l";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_ak12_gl_arid: arifle_AK12_arid_GL_F
  {
    magazines[] =
     {
         "30rnd_762x39_AK12_Arid_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_arid_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_tan_l";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_ak12_lush: arifle_AK12_lush_F
  {
    magazines[] =
     {
         "30rnd_762x39_AK12_Lush_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_lush_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_od_l";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_ak12_gl_lush: arifle_AK12_lush_GL_F
  {
    magazines[] =
     {
         "30rnd_762x39_AK12_Lush_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_lush_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_od_l";
      slot = "PointerSlot";
      };
    };
  };

  class STAF_rifle_ak12u: arifle_AK12u_F
  {
    magazines[] =
     {
         "30Rnd_762x39_AK12_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_blk_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_black_l";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_ak12u_arid: arifle_AK12u_arid_F
  {
    magazines[] =
     {
         "30rnd_762x39_AK12_Arid_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_arid_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_tan_l";
      slot = "PointerSlot";
      };
    };
  };
  class STAF_rifle_ak12u_lush: arifle_AK12u_lush_F
  {
    magazines[] =
     {
         "30rnd_762x39_AK12_Lush_Mag_F"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
      item = "optic_arco_ak_lush_f";
      slot = "CowsSlot";
      };
      class LinkedItemsAcc
      {
      item = "cup_acc_anpeq_15_flashlight_od_l";
      slot = "PointerSlot";
      };
    };
  };

  class STAF_rifle_scar_blk: CUP_arifle_Mk16_STD_black
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_blk";
        slot = "CUP_PicatinnyTopMountSCAR";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountSCAR";
      };
    };
  };
  class STAF_rifle_scar_gl_blk: CUP_arifle_Mk16_STD_EGLM_black
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_blk";
        slot = "CUP_PicatinnyTopMountSCAR";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountSCAR";
      };
    };
  };
  class STAF_rifle_scar_tan: CUP_arifle_Mk16_STD
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Tan"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_coyote";
        slot = "CUP_PicatinnyTopMountSCAR";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountSCAR";
      };
    };
  };
  class STAF_rifle_scar_gl_tan: CUP_arifle_Mk16_STD_EGLM
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Tan"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_coyote";
        slot = "CUP_PicatinnyTopMountSCAR";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountSCAR";
      };
    };
  };
  class STAF_rifle_scar_wld: CUP_arifle_Mk16_STD_woodland
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Olive"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_od";
        slot = "CUP_PicatinnyTopMountSCAR";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountSCAR";
      };
    };
  };
  class STAF_rifle_scar_gl_wld: CUP_arifle_Mk16_STD_EGLM_woodland
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Olive"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_od";
        slot = "CUP_PicatinnyTopMountSCAR";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountSCAR";
      };
    };
  };

  class STAF_rifle_m4a1_blk: CUP_arifle_M4A1_black
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_blk";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_tan: CUP_arifle_M4A1_desert
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Tan"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_coyote";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_wld: CUP_arifle_M4A1_camo
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Olive"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_od";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_blk_grip: CUP_arifle_M4A3_black
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_blk";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_tan_grip: CUP_arifle_M4A3_desert
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Tan"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_coyote";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_wld_grip: CUP_arifle_M4A3_camo
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Olive"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_od";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_blk_m203: CUP_arifle_M4A1_BUIS_GL
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_blk";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_tan_m203: CUP_arifle_M4A1_BUIS_desert_GL
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Tan"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_coyote";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
      };
    };
  };
  class STAF_rifle_m4a1_wld_m203: CUP_arifle_M4A1_BUIS_camo_GL
  {
    magazines[] =
     {
         "CUP_30Rnd_556x45_PMAG_QP_Olive"
     };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_g33_hws_od";
        slot = "CUP_PicatinnyTopMountM4";
      };
      class LinkedItemsAcc
      {
        item = "rh_peq15b";
        slot = "CUP_PicatinnySideMountM4";
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
        item = "cup_optic_elcan_reflex";
        slot = "CowsSlot";
      };
    };
  };

  class STAF_rifle_ng7: LMG_Zafir_F
  {
    displayName = "Negev NG7 (Tan)";
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_elcan_reflex";
        slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_ng7_black_base: LMG_Zafir_F
  {
    displayName = "Negev NG7 (Black)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\staf_pmc_weapons\txt\STAF_Zafir01_Black_CO.paa","\staf_pmc_weapons\txt\STAF_Zafir02_Black_CO.paa"};
		scope = 2;
    baseWeapon = "STAF_rifle_ng7_black_base";
  };
  class STAF_rifle_ng7_woodland_base: LMG_Zafir_F
  {
    displayName = "Negev NG7 (Woodland)";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[] = {"\staf_pmc_weapons\txt\STAF_Zafir01_Woodland_CO.paa","\staf_pmc_weapons\txt\STAF_Zafir02_Woodland_CO.paa"};
		scope = 2;
    baseWeapon = "STAF_rifle_ng7_woodland_base";
  };
  class STAF_rifle_ng7_black: STAF_rifle_ng7_black_base
  {
    baseWeapon = "STAF_rifle_ng7_black_base";
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_elcan_reflex";
        slot = "CowsSlot";
      };
    };
  };
  class STAF_rifle_ng7_woodland: STAF_rifle_ng7_woodland_base
  {
    baseWeapon = "STAF_rifle_ng7_woodland_base";
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_elcan_reflex";
        slot = "CowsSlot";
      };
    };
  };

  class STAF_rifle_rpk12: arifle_rpk12_F
  {
    magazines[] =
     {
         "75rnd_762x39_AK12_Mag_F"
     };
   class LinkedItems
   {
     class LinkedItemsOptic
     {
       item = "cup_optic_elcan_reflex";
       slot = "CowsSlot";
     };
   };
  };
  class STAF_rifle_rpk12_arid: arifle_rpk12_arid_F
  {
    magazines[] =
     {
         "75rnd_762x39_AK12_Arid_Mag_F"
     };
   class LinkedItems
   {
     class LinkedItemsOptic
     {
       item = "cup_optic_elcan_reflex";
       slot = "CowsSlot";
     };
   };
  };
  class STAF_rifle_rpk12_lush: arifle_rpk12_lush_F
  {
    magazines[] =
     {
         "75rnd_762x39_AK12_Lush_Mag_F"
     };
   class LinkedItems
   {
     class LinkedItemsOptic
     {
       item = "cup_optic_elcan_reflex";
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

  class STAF_rifle_sig_blk: srifle_DMR_03_F
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

  class STAF_rifle_sig_khaki: srifle_DMR_03_khaki_F
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

  class STAF_rifle_sig_tan: srifle_DMR_03_tan_F
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

  class STAF_rifle_sig_multicam: srifle_DMR_03_multicam_F
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

  class STAF_rifle_sig_woodland: srifle_DMR_03_woodland_F
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

  class STAF_rifle_awm: hlc_rifle_awmagnum_BL
  {
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "hlc_optic_leupoldm3a";
        slot = "CowsSlot";
      };
    };
  };

  //Sidearms
  class STAF_pistol_glock17: CUP_hgun_Glock17
  {
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        item = "hlc_acc_dbalpl_fl";
        slot = "PointerSlot";
      };
    };
  };
  class STAF_pistol_glock17_tan: CUP_hgun_Glock17_tan
  {
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        item = "hlc_acc_dbalpl_fl";
        slot = "PointerSlot";
      };
    };
  };
  class STAF_pistol_glock17_blk: CUP_hgun_Glock17_blk
  {
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        item = "hlc_acc_dbalpl_fl";
        slot = "PointerSlot";
      };
    };
  };
  /*class STAF_pistol_cz75_compact: CUP_hgun_Compact
  {
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        item = "cup_acc_cz_m3x";
        slot = "PointerSlot";
      };
    };
  };*/
  class STAF_pistol_cz75_duty: CUP_hgun_Duty
  {
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        item = "cup_acc_cz_m3x";
        slot = "PointerSlot";
      };
    };
  };
  /*class STAF_pistol_cz75_phantom: CUP_hgun_Phantom
  {
    class LinkedItems
    {
      class LinkedItemsAcc
      {
        item = "cup_acc_cz_m3x";
        slot = "PointerSlot";
      };
    };
  };*/

  //Launchers
  class STAF_launcher_smaw: CUP_launch_Mk153Mod0
  {
    magazines[] =
    {
      "CUP_SMAW_HEAA_M"
    };
    class LinkedItems
    {
      class LinkedItemsOptic
      {
        item = "cup_optic_smaw_scope";
        slot = "CowsSlot";
      };
    };
  };

  class STAF_launcher_m136_heat: CUP_launch_M136_Loaded
  {
    magazines[] =
    {
      "CUP_M136_M"
    };
  };

  class STAF_launcher_Igla: CUP_launch_Igla_Loaded
  {
    magazines[] =
    {
      "CUP_Igla_M"
    };
  };
};
