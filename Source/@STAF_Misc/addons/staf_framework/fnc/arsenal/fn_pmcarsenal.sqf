//Init of the box and arsenal
_box = _this select 0;

//Picture on arsenal
if (typeOf _box == "Portable_GCS_Base_CTRG_F") then {
  _box setObjectTexture [2, "\staf_framework\img\terminalup.paa"];
  _box setObjectTexture [3, "\staf_framework\img\terminaldown.paa"];
};
if (typeOf _box == "Portable_GCS_Base_F") then {
  _box setObjectTexture [2, "\staf_framework\img\terminalup.paa"];
  _box setObjectTexture [3, "\staf_framework\img\terminaldown.paa"];
};

//Itemlists

_weapons = [
            "Binocular",
            "hlc_m249_pip2",
            "KA_glock_17_Single",
            "KA_SCAR_L_Black_Hand",
            "KA_SCAR_L_Tan_Hand",
            "KA_SCAR_L_Black_EGLM",
            "KA_SCAR_L_Tan_EGLM",
            "srifle_DMR_06_camo_F",
            "srifle_DMR_06_olive_F",
            "hlc_smg_mp5a4",
            "rhs_weap_smaw",
            "rhs_weap_M136",
            "rhs_weap_M136_hedp",
            "rhs_weap_M136_hp",
            "ACE_VMM3",
            "STAF_Xnooz_AppareilPhoto"
];

_backpacks = [
            "B_AssaultPack_blk",
            "B_AssaultPack_cbr",
            "B_AssaultPack_dgtl",
            "B_AssaultPack_rgr",
            "B_AssaultPack_ocamo",
            "B_AssaultPack_khk",
            "B_AssaultPack_mcamo",
            "B_AssaultPack_sgg",
            "B_AssaultPack_tna_F",
            "B_Bergen_dgtl_F",
            "B_Bergen_hex_F",
            "B_Bergen_mcamo_F",
            "B_Bergen_tna_F",
            "B_Carryall_cbr",
            "B_Carryall_ghex_F",
            "B_Carryall_ocamo",
            "B_Carryall_khk",
            "B_Carryall_mcamo",
            "B_Carryall_oli",
            "B_Carryall_oucamo",
            "B_FieldPack_blk",
            "B_FieldPack_cbr",
            "B_FieldPack_ghex_F",
            "B_FieldPack_ocamo",
            "B_FieldPack_khk",
            "B_FieldPack_oli",
            "B_FieldPack_oucamo",
            "B_Kitbag_cbr",
            "B_Kitbag_rgr",
            "B_Kitbag_mcamo",
            "B_Kitbag_sgg",
            "B_LegStrapBag_black_F",
            "B_LegStrapBag_coyote_F",
            "B_LegStrapBag_olive_F",
            "B_Messenger_Black_F",
            "B_Messenger_Coyote_F",
            "B_Messenger_Gray_F",
            "B_Messenger_Olive_F",
            "B_TacticalPack_blk",
            "B_TacticalPack_rgr",
            "B_TacticalPack_ocamo",
            "B_TacticalPack_mcamo",
            "B_TacticalPack_oli",
            "ABU_Backpack_Compact",
            "ABU_Backpack_Kitbag",
            "AOR1_Backpack_Compact",
            "AOR1_Backpack_Kitbag",
            "M81_Backpack_Compact",
            "M81_Backpack_Kitbag",
            "M90_Backpack_Compact",
            "M90_Backpack_Kitbag",
            "M90d_Backpack_Compact",
            "M90d_Backpack_Kitbag",
            "MCB_Backpack_Compact",
            "MCB_Backpack_Kitbag",
            "MC_Backpack_Compact",
            "MC_Backpack_Kitbag",
            "OGA_G_Backpack_Compact",
            "OGA_Backpack_Compact",
            "OGA_G_Backpack_Kitbag",
            "OGA_Backpack_Kitbag",
            "rhs_medic_bag",
            "TFAR_rt1523g",
            "tacs_Backpack_Kitbag_DarkBlack",
            "tacs_Backpack_Carryall_DarkBlack",
            "STAF_B_Carryall_MCAM_Black",
            "STAF_B_Kitbag_engineer_blk",
            "STAF_B_Kitbag_engineer_cbr",
            "STAF_B_Kitbag_engineer_rgr",
            "STAF_B_Kitbag_exp_blk",
            "STAF_B_Kitbag_exp_cbr",
            "STAF_B_Kitbag_exp_rgr",
            "STAF_B_Kitbag_exp_inv",
            "STAF_B_Kitbag_medic_blk",
            "STAF_B_Kitbag_medic_cbr",
            "STAF_B_Kitbag_medic_rgr",
            "STAF_B_Kitbag_medic_inv",
            "STAF_B_Carryall_inv",
            "STAF_B_AssaultPack_inv",
            "STAF_B_Bergen_inv",
            "STAF_B_Kitbag_blk"
];

_items = [
            "ACE_EarPlugs",
            "ACE_elasticBandage",
            "ACE_packingBandage",
            "ACE_tourniquet",
            "ACE_morphine",
            "ACE_personalAidKit",
            "ACE_wirecutter",
            "ACE_Clacker",
            "ACE_Flashlight_XL50",
            "ACE_EntrenchingTool",
            "ACE_DefusalKit",
            "ACE_salineIV",
            "ACE_salineIV_500",
            "ACE_salineIV_250",
            "ACE_surgicalKit",
            "ACE_bodyBag",
            "ACE_adenosine",
            "ACE_epinephrine",
            "ACE_quikclot",
            "ACE_fieldDressing",
            "ACE_SpraypaintBlack",
            "ACE_bloodIV",
            "ACE_bloodIV_250",
            "ACE_bloodIV_500",
            "ACE_SpraypaintBlue",
            "ACE_CableTie",
            "ACE_DefusalKit",
            "ACE_EntrenchingTool",
            "ACE_Flashlight_MX991",
            "ACE_SpraypaintGreen",
            "ACE_HuntIR_monitor",
            "ACE_Clacker",
            "ACE_Flashlight_XL50",
            "ACE_MapTools",
            "ACE_plasmaIV",
            "ACE_plasmaIV_250",
            "ACE_plasmaIV_500",
            "ACE_SpraypaintRed",
            "ACE_SpottingScope",
            "ACE_UAVBattery",
            "ACE_acc_pointer_green",
            "ACE_optic_MRCO_2D",
            "ACE_SpareBarrel",
            "adv_aceSplint_splint",
            "adv_aceCPR_AED",
            "rhs_scarf",
            "rhs_balaclava1_olive",
            "rhs_googles_black",
            "rhs_googles_clear",
            "rhs_googles_orange",
            "rhs_googles_yellow",
            "rhs_ess_black",
            "rhsusf_acc_ELCAN",
            "rhsusf_acc_ELCAN_ard",
            "rhsusf_acc_ACOG",
            "rhsusf_acc_ACOG2",
            "rhsusf_acc_ACOG3",
            "rhsusf_acc_eotech_552",
            "rhsusf_acc_eotech_552_d",
            "rhsusf_acc_anpeq15side",
            "rhsusf_acc_anpeq15_top",
            "rhsusf_acc_anpeq15side_bk",
            "rhsusf_acc_anpeq15_bk_top",
            "rhsusf_acc_anpeq15",
            "rhsusf_acc_anpeq15_light",
            "rhsusf_acc_anpeq15_bk",
            "rhsusf_acc_anpeq15_bk_light",
            "rhs_weap_optic_smaw",
            "rhsusf_acc_eotech_xps3",
            "rhsusf_acc_ACOG_MDO",
            "rhsusf_protech_helmet",
            "rhsusf_protech_helmet_ess",
            "rhsusf_protech_helmet_rhino",
            "rhsusf_protech_helmet_rhino_ess",
            "H_Shemag_olive",
            "H_Shemag_olive_hs",
            "H_ShemagOpen_tan",
            "H_ShemagOpen_khk",
            "rhsusf_shemagh_grn",
            "rhsusf_shemagh2_grn",
            "rhsusf_shemagh_od",
            "rhsusf_shemagh2_od",
            "rhsusf_shemagh_tan",
            "rhsusf_shemagh2_tan",
            "rhsusf_shemagh_white",
            "rhsusf_shemagh2_white",
            "rhsusf_shemagh_gogg_grn",
            "rhsusf_shemagh2_gogg_grn",
            "rhsusf_shemagh_gogg_od",
            "rhsusf_shemagh2_gogg_od",
            "rhsusf_shemagh_gogg_tan",
            "rhsusf_shemagh2_gogg_tan",
            "rhsusf_shemagh_gogg_white",
            "rhsusf_shemagh2_gogg_white",
            "rhsusf_oakley_goggles_blk",
            "rhsusf_oakley_goggles_clr",
            "rhsusf_oakley_goggles_ylw",
            "KA_Flashlight",
            "ItemAndroid",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "SCAR_10_Inches_Barrel",
            "KA_SCAR_H_Laser_Flashlight_Black_IR",
            "B_UavTerminal",
            "optic_DMS",
            "optic_Aco_smg",
            "acc_flashlight",
            "ItemGPS",
            "ToolKit",
            "TFAR_anprc152",
            "ItemCompass",
            "ItemAndroid",
            "ItemMap",
            "ItemcTab",
            "optic_ACO_grn",
            "optic_Aco",
            "optic_ACO_grn_smg",
            "optic_Aco_smg",
            "optic_AMS",
            "optic_AMS_khk",
            "optic_AMS_snd",
            "KA_Eotech553",
            "KA_557_Magnifier_DOWN",
            "acc_pointer_IR",
            "optic_Holosight",
            "optic_Holosight_blk_F",
            "optic_Holosight_khk_F",
            "optic_Holosight_smg",
            "optic_Holosight_smg_blk_F",
            "optic_Holosight_smg_khk_F",
            "optic_MRCO",
            "SCAR_10_Inches_Barrel",
            "SCAR_10_Inches_Barrel_Flash_Hider",
            "SCAR_10_Inches_Barrel_Silencer",
            "SCAR_13_Inches_Barrel",
            "SCAR_13_Inches_Barrel_Flash_Hider",
            "SCAR_13_Inches_Barrel_Silencer",
            "SCAR_14_Inches_Barrel",
            "SCAR_14_Inches_Barrel_Flash_Hider",
            "SCAR_14_Inches_Barrel_Silencer",
            "SCAR_16_Inches_Barrel",
            "SCAR_16_Inches_Barrel_Flash_Hider",
            "SCAR_16_Inches_Barrel_Silencer",
            "SCAR_18_Inches_Barrel",
            "SCAR_18_Inches_Barrel_Flash_Hider",
            "SCAR_18_Inches_Barrel_Silencer",
            "SCAR_20_Inches_Barrel",
            "SCAR_20_Inches_Barrel_Flash_Hider",
            "SCAR_20_Inches_Barrel_Silencer",
            "KA_SCAR_H_Flashlight_Black",
            "KA_SCAR_H_Flashlight_Laser_Black",
            "KA_SCAR_H_Flashlight_Laser_Black_UP",
            "KA_SCAR_H_Flashlight_Laser_Sand",
            "KA_SCAR_H_Flashlight_Laser_Sand_UP",
            "KA_SCAR_H_Flashlight_Sand",
            "KA_SCAR_H_Laser_Black_IR",
            "KA_SCAR_H_Laser_Flashlight_Black_IR",
            "KA_SCAR_H_Laser_Flashlight_Black_UP_IR",
            "KA_SCAR_H_Laser_Flashlight_Sand_IR",
            "KA_SCAR_H_Laser_Flashlight_Sand_UP_IR",
            "KA_SCAR_H_Laser_Sand_IR",
            "VSM_balaclava_Black_Skull",
            "VSM_balaclava_Black",
            "VSM_balaclava_olive_Skull",
            "VSM_balaclava_olive",
            "VSM_balaclava_TAN_Skull",
            "VSM_balaclava_tan",
            "VSM_Balaclava_black_glasses",
            "VSM_Balaclava_OD_glasses",
            "VSM_Balaclava_tan_glasses",
            "VSM_Balaclava_black_Goggles",
            "VSM_Balaclava_OD_Goggles",
            "VSM_Balaclava_tan_Goggles",
            "VSM_Balaclava_black_Peltor",
            "VSM_Balaclava_OD_Peltor",
            "VSM_Balaclava_tan_Peltor",
            "VSM_Balaclava_black_Peltor_glasses",
            "VSM_Balaclava_OD_Peltor_glasses",
            "VSM_Balaclava_tan_Peltor_glasses",
            "VSM_Balaclava_black_Peltor_Goggles",
            "VSM_Balaclava_OD_Peltor_Goggles",
            "VSM_Balaclava_tan_Peltor_Goggles",
            "VSM_balaclava2_Black",
            "VSM_Balaclava2_black_glasses",
            "VSM_Balaclava2_OD_glasses",
            "VSM_Balaclava2_tan_glasses",
            "VSM_Balaclava2_black_Goggles",
            "VSM_Balaclava2_OD_Goggles",
            "VSM_Balaclava2_tan_Goggles",
            "VSM_Balaclava2_black_Peltor",
            "VSM_Balaclava2_OD_Peltor",
            "VSM_Balaclava2_tan_Peltor",
            "VSM_Balaclava2_black_Peltor_glasses",
            "VSM_Balaclava2_OD_Peltor_glasses",
            "VSM_Balaclava2_tan_Peltor_glasses",
            "VSM_Balaclava2_black_Peltor_Goggles",
            "VSM_Balaclava2_OD_Peltor_Goggles",
            "VSM_Balaclava2_tan_Peltor_Goggles",
            "VSM_FaceMask_black",
            "VSM_FaceMask_Ghost",
            "VSM_FaceMask_Ghost_olive",
            "VSM_FaceMask_Ghost_tan",
            "VSM_FaceMask_olive",
            "VSM_FaceMask_tan",
            "VSM_Facemask_black_glasses",
            "VSM_Facemask_OD_glasses",
            "VSM_Facemask_tan_glasses",
            "VSM_Facemask_black_Goggles",
            "VSM_Facemask_OD_Goggles",
            "VSM_Facemask_tan_Goggles",
            "VSM_Facemask_black_Peltor",
            "VSM_Facemask_OD_Peltor",
            "VSM_Facemask_tan_Peltor",
            "VSM_Facemask_black_Peltor_glasses",
            "VSM_Facemask_OD_Peltor_glasses",
            "VSM_Facemask_tan_Peltor_glasses",
            "VSM_Facemask_black_Peltor_Goggles",
            "VSM_Facemask_OD_Peltor_Goggles",
            "VSM_Facemask_tan_Peltor_Goggles",
            "VSM_Goggles",
            "rhs_balaclava",
            "G_Balaclava_blk",
            "G_Balaclava_combat",
            "G_Balaclava_lowprofile",
            "G_Balaclava_oli",
            "G_Bandanna_aviator",
            "G_Bandanna_beast",
            "G_Bandanna_blk",
            "G_Bandanna_khk",
            "G_Bandanna_oli",
            "G_Bandanna_shades",
            "G_Bandanna_sport",
            "G_Bandanna_tan",
            "G_Combat",
            "G_Combat_Goggles_tna_F",
            "G_Diving",
            "G_I_Diving",
            "G_O_Diving",
            "G_B_Diving",
            "H_EarProtectors_black_F",
            "H_EarProtectors_orange_F",
            "H_EarProtectors_red_F",
            "H_EarProtectors_white_F",
            "H_EarProtectors_yellow_F",
            "H_HeadSet_black_F",
            "H_HeadSet_orange_F",
            "H_HeadSet_red_F",
            "H_HeadSet_white_F",
            "H_HeadSet_yellow_F",
            "G_Lady_Blue",
            "G_Lowprofile",
            "G_Respirator_blue_F",
            "G_Respirator_white_F",
            "G_Respirator_yellow_F",
            "G_Shades_Black",
            "G_Shades_Blue",
            "G_Shades_Green",
            "G_Shades_Red",
            "H_Shemag_olive",
            "H_Shemag_olive_hs",
            "H_ShemagOpen_tan",
            "H_ShemagOpen_khk",
            "G_Spectacles",
            "G_Sport_Red",
            "G_Sport_Blackyellow",
            "G_Sport_BlackWhite",
            "G_Sport_Checkered",
            "G_Sport_Blackred",
            "G_Sport_Greenblack",
            "G_Squares_Tinted",
            "G_Squares",
            "STAF_G_Bandanna_Punisher",
            "G_Tactical_Clear",
            "tacs_Goggles_Black",
            "tacs_Goggles_Green",
            "tacs_Goggles_Tan",
            "G_Tactical_Black",
            "G_Spectacles_Tinted",
            "G_WirelessEarpiece_F",
            "H_WirelessEarpiece_F"
];

_uniforms = [
            "U_B_CombatUniform_mcam",
            "U_B_CombatUniform_mcam_tshirt",
            "U_B_CTRG_1",
            "U_B_CTRG_2",
            "U_B_CTRG_3",
            "U_BG_Guerrilla_6_1",
            "U_BG_Guerilla1_1",
            "U_BG_Guerilla2_2",
            "U_BG_Guerilla2_1",
            "U_BG_Guerilla2_3",
            "U_I_G_Story_Protagonist_F",
            "U_B_T_Soldier_F",
            "U_B_T_Soldier_AR_F",
            "U_B_GEN_Commander_F",
            "U_B_GEN_Soldier_F",
            "B_UAV_01_backpack_F",
            "STAF_U_BG_Guerilla2_1_Steppentarn",
            "STAF_U_BG_Guerilla2_1_Flora_Coyote",
            "STAF_U_BG_Guerilla2_1_Choc_Chip",
            "STAF_U_BG_Guerrilla_4_1_tan_vegetato",
            "STAF_U_BG_Guerrilla_4_1_tan_vegetato",
            "STAF_U_BG_Guerrilla_6_1_ERDL_Black",
            "tacs_Uniform_Combat_LS_BS_GP_BB",
            "tacs_Uniform_Combat_LS_BS_GP_TB",
            "tacs_Uniform_Combat_LS_BS_TP_BB",
            "tacs_Uniform_Combat_LS_BS_TP_TB",
            "tacs_Uniform_Combat_LS_GS_BP_BB",
            "tacs_Uniform_Combat_LS_GS_TP_BB",
            "tacs_Uniform_Combat_LS_BS_DGP_BB",
            "tacs_Uniform_Combat_LS_TS_BP_BB",
            "tacs_Uniform_Combat_LS_TS_GP_BB",
            "tacs_Uniform_Combat_LS_TS_GP_TB",
            "tacs_Uniform_Combat_LS_CDBS_GP_TB",
            "tacs_Uniform_Combat_LS_CLBS_GP_BB",
            "tacs_Uniform_Combat_LS_CLRS_TP_BB",
            "tacs_Uniform_Combat_LS_CPS_BP_BB",
            "tacs_Uniform_Combat_RS_BS_GP_BB",
            "tacs_Uniform_Combat_RS_BS_GP_TB",
            "tacs_Uniform_Combat_RS_BS_TP_BB",
            "tacs_Uniform_Combat_RS_BS_TP_TB",
            "tacs_Uniform_Combat_RS_GS_BP_BB",
            "tacs_Uniform_Combat_RS_GS_TP_BB",
            "tacs_Uniform_Combat_RS_BS_DGP_BB",
            "tacs_Uniform_Combat_RS_TS_BP_BB",
            "tacs_Uniform_Combat_RS_TS_GP_BB",
            "tacs_Uniform_Combat_RS_TS_GP_TB",
            "tacs_Uniform_Combat_RS_CDBS_GP_TB",
            "tacs_Uniform_Combat_RS_CLBS_GP_BB",
            "tacs_Uniform_Combat_RS_CLRS_TP_BB",
            "tacs_Uniform_Combat_RS_CPS_BP_BB",
            "tacs_Uniform_Garment_LS_BS_BP_BB",
            "tacs_Uniform_Garment_LS_BS_GP_BB",
            "tacs_Uniform_Garment_LS_OS_EP_TB",
            "tacs_Uniform_Garment_LS_GS_GP_BB",
            "tacs_Uniform_Garment_LS_GS_BP_BB",
            "tacs_Uniform_Garment_LS_GS_EP_TB",
            "tacs_Uniform_Garment_LS_ES_EP_TB",
            "tacs_Uniform_Garment_LS_ES_BP_BB",
            "tacs_Uniform_Garment_LS_ES_GP_BB",
            "tacs_Uniform_Garment_LS_TS_TP_TB",
            "tacs_Uniform_Garment_LS_GS_TP_TB",
            "tacs_Uniform_Garment_LS_TS_GP_BB",
            "tacs_Uniform_Garment_LS_OS_TP_TB",
            "tacs_Uniform_Garment_LS_TS_BP_BB",
            "tacs_Uniform_Garment_RS_BS_BP_BB",
            "tacs_Uniform_Garment_RS_BS_GP_BB",
            "tacs_Uniform_Garment_RS_OS_EP_TB",
            "tacs_Uniform_Garment_RS_GS_GP_BB",
            "tacs_Uniform_Garment_RS_GS_BP_BB",
            "tacs_Uniform_Garment_RS_GS_EP_TB",
            "tacs_Uniform_Garment_RS_ES_EP_TB",
            "tacs_Uniform_Garment_RS_ES_BP_BB",
            "tacs_Uniform_Garment_RS_ES_GP_BB",
            "tacs_Uniform_Garment_RS_TS_TP_TB",
            "tacs_Uniform_Garment_RS_GS_TP_TB",
            "tacs_Uniform_Garment_RS_TS_GP_BB",
            "tacs_Uniform_Garment_RS_OS_TP_TB",
            "tacs_Uniform_Garment_RS_TS_BP_BB",
            "SAN_Headlamp_v2"
];

_headgear = [
            "H_Bandanna_gry",
            "H_Bandanna_blu",
            "H_Bandanna_cbr",
            "H_Bandanna_khk_hs",
            "H_Bandanna_khk",
            "H_Bandanna_sgg",
            "H_Bandanna_sand",
            "H_Bandanna_camo",
            "H_Watchcap_blk",
            "H_Watchcap_cbr",
            "H_Watchcap_camo",
            "H_Watchcap_khk",
            "H_Cap_grn_BI",
            "H_Cap_grn",
            "H_Cap_blk",
            "H_Cap_blu",
            "H_Cap_blk_CMMG",
            "H_Cap_oli",
            "H_Cap_oli_hs",
            "H_Cap_tan",
            "H_Cap_headphones",
            "H_Bandanna_mcamo",
            "H_Cap_blk_raven",
            "H_Cap_brn_SPECOPS",
            "ABU_Helmet1",
            "ABU_Helmet2",
            "M81_Helmet1",
            "M81_Helmet2",
            "M90_Helmet1",
            "M90_Helmet2",
            "M90d_Helmet1",
            "M90d_Helmet2",
            "MCB_Helmet1",
            "MCB_Helmet2",
            "MC_Helmet1",
            "MC_Helmet2",
            "OGA_G_Helmet1",
            "OGA_G_Helmet2",
            "OGA_Helmet1",
            "OGA_Helmet2",
            "VSM_BackwardsHat_Peltor_black",
            "VSM_BackwardsHat_Peltor_CMMG",
            "VSM_BackwardsHat_Peltor_OG",
            "VSM_BackwardsHat_Peltor_Sero",
            "VSM_BackwardsHat_Peltor_tan",
            "VSM_Beanie_Black",
            "VSM_Beanie_OD",
            "VSM_Beanie_tan",
            "VSM_Bowman_cap_balaclava_Black",
            "VSM_Bowman_cap_balaclava_Olive",
            "VSM_Bowman_cap_balaclava_tan",
            "VSM_Bowman_cap_Black",
            "VSM_Bowman_cap_Olive",
            "VSM_Bowman_cap_tan",
            "VSM_Mich2000_AOR1",
            "VSM_Mich2000_M81",
            "VSM_Mich2000_Multicam",
            "VSM_Mich2000_MulticamTropic",
            "VSM_Mich2000_OCP",
            "VSM_Mich2000_OGA_OD",
            "VSM_Mich2000_OGA",
            "VSM_Mich2000_CamoSprayOD",
            "VSM_Mich2000_CamoSprayTan",
            "VSM_Mich2000_ProjectHonor",
            "VSM_Mich2000_AOR1",
            "VSM_OPS_aor1",
            "VSM_OPS",
            "VSM_Black_OPS",
            "VSM_M81_OPS",
            "VSM_OPS_multicam",
            "VSM_multicamtropic_OPS",
            "VSM_ocp_OPS",
            "VSM_od_spray_OPS",
            "VSM_OGA_od_OPS",
            "VSM_OGA_OPS",
            "VSM_ProjectHonor_OPS",
            "VSM_tan_spray_OPS",
            "VSM_ops_2_aor1",
            "VSM_ops_2",
            "VSM_Black_ops_2",
            "VSM_M81_ops_2",
            "VSM_ops_2_multicam",
            "VSM_multicamtropic_ops_2",
            "VSM_ocp_ops_2",
            "VSM_od_spray_ops_2",
            "VSM_OGA_od_ops_2",
            "VSM_OGA_ops_2",
            "VSM_ProjectHonor_ops_2",
            "VSM_tan_spray_ops_2",
            "immersion_cigs_cigar0"
];

_vests = [
            "V_PlateCarrier1_blk",
            "V_PlateCarrier1_rgr_noflag_F",
            "V_PlateCarrier2_blk",
            "V_PlateCarrier2_rgr_noflag_F",
            "V_Chestrig_blk",
            "V_Chestrig_rgr",
            "V_Chestrig_khk",
            "V_Chestrig_oli",
            "V_TacVest_blk",
            "V_TacVest_brn",
            "V_TacVest_camo",
            "V_TacVest_khk",
            "V_TacVest_oli",
            "tacs_Vest_Tactical_DarkBlack",
            "V_I_G_resistanceLeader_F",
            "ABU_Vest_1",
            "ABU_Vest_2",
            "ABU_Vest_3",
            "ABU_Vest_4",
            "AOR1_Vest_1",
            "AOR1_Vest_2",
            "AOR1_Vest_3",
            "AOR1_Vest_4",
            "VSM_RAV_operator_AOR1",
            "VSM_RAV_MG_AOR1",
            "VSM_RAV_Breacher_AOR1",
            "VSM_CarrierRig_Operator_AOR1",
            "VSM_CarrierRig_Breacher_AOR1",
            "VSM_CarrierRig_Gunner_AOR1",
            "VSM_LBT6094_operator_AOR1",
            "VSM_LBT6094_MG_AOR1",
            "VSM_LBT6094_breacher_AOR1",
            "VSM_FAPC_Operator_AOR1",
            "VSM_FAPC_Breacher_AOR1",
            "VSM_FAPC_MG_AOR1",
            "M81_Vest_1",
            "M81_Vest_2",
            "M81_Vest_3",
            "M81_Vest_4",
            "VSM_RAV_operator_M81",
            "VSM_RAV_MG_M81",
            "VSM_RAV_Breacher_M81",
            "VSM_CarrierRig_Operator_M81",
            "VSM_CarrierRig_Breacher_M81",
            "VSM_CarrierRig_Gunner_M81",
            "VSM_LBT6094_operator_M81",
            "VSM_LBT6094_MG_M81",
            "VSM_LBT6094_breacher_M81",
            "VSM_FAPC_Operator_M81",
            "VSM_FAPC_Breacher_M81",
            "VSM_FAPC_MG_M81",
            "M90_Vest_1",
            "M90_Vest_2",
            "M90_Vest_3",
            "M90_Vest_4",
            "M90d_Vest_1",
            "M90d_Vest_2",
            "M90d_Vest_3",
            "M90d_Vest_4",
            "MCB_Vest_1",
            "MCB_Vest_2",
            "MCB_Vest_3",
            "MCB_Vest_4",
            "MC_Vest_1",
            "MC_Vest_2",
            "MC_Vest_3",
            "MC_Vest_4",
            "VSM_RAV_operator_Multicam",
            "VSM_RAV_MG_Multicam",
            "VSM_RAV_Breacher_Multicam",
            "VSM_CarrierRig_Operator_Multicam",
            "VSM_CarrierRig_Breacher_Multicam",
            "VSM_CarrierRig_Gunner_Multicam",
            "VSM_LBT6094_operator_Multicam",
            "VSM_LBT6094_MG_Multicam",
            "VSM_LBT6094_breacher_Multicam",
            "VSM_FAPC_Operator_Multicam",
            "VSM_FAPC_Breacher_Multicam",
            "VSM_FAPC_MG_Multicam",
            "OGA_G_Vest_1",
            "OGA_G_Vest_2",
            "OGA_G_Vest_3",
            "OGA_G_Vest_6",
            "VSM_RAV_operator_OGA_OD",
            "VSM_RAV_MG_OGA_OD",
            "VSM_RAV_Breacher_OGA_OD",
            "VSM_CarrierRig_Operator_OGA_OD",
            "VSM_CarrierRig_Breacher_OGA_OD",
            "VSM_CarrierRig_Gunner_OGA_OD",
            "VSM_LBT6094_operator_OGA_OD",
            "VSM_LBT6094_MG_OGA_OD",
            "VSM_LBT6094_breacher_OGA_OD",
            "VSM_FAPC_Operator_OGA_OD",
            "VSM_FAPC_Breacher_OGA_OD",
            "VSM_FAPC_MG_OGA_OD",
            "OGA_Vest_1",
            "OGA_Vest_2",
            "OGA_Vest_3",
            "OGA_Vest_6",
            "VSM_RAV_operator_OGA",
            "VSM_RAV_MG_OGA",
            "VSM_RAV_Breacher_OGA",
            "VSM_CarrierRig_Operator_OGA",
            "VSM_CarrierRig_Breacher_OGA",
            "VSM_CarrierRig_Gunner_OGA",
            "VSM_LBT6094_operator_OGA",
            "VSM_LBT6094_MG_OGA",
            "VSM_LBT6094_breacher_OGA",
            "VSM_FAPC_Operator_OGA",
            "VSM_FAPC_Breacher_OGA",
            "VSM_FAPC_MG_OGA",
            "VSM_RAV_operator_OCP",
            "VSM_RAV_MG_OCP",
            "VSM_RAV_Breacher_OCP",
            "VSM_CarrierRig_Operator_OCP",
            "VSM_CarrierRig_Breacher_OCP",
            "VSM_CarrierRig_Gunner_OCP",
            "VSM_LBT6094_operator_OCP",
            "VSM_LBT6094_MG_OCP",
            "VSM_LBT6094_breacher_OCP",
            "VSM_FAPC_Operator_OCP",
            "VSM_FAPC_Breacher_OCP",
            "VSM_FAPC_MG_OCP",
            "VSM_RAV_operator_MulticamTropic",
            "VSM_RAV_MG_MulticamTropic",
            "VSM_RAV_Breacher_MulticamTropic",
            "VSM_CarrierRig_Operator_MulticamTropic",
            "VSM_CarrierRig_Breacher_MulticamTropic",
            "VSM_CarrierRig_Gunner_MulticamTropic",
            "VSM_LBT6094_operator_MulticamTropic",
            "VSM_LBT6094_MG_MulticamTropic",
            "VSM_LBT6094_breacher_MulticamTropic",
            "VSM_FAPC_Operator_MulticamTropic",
            "VSM_FAPC_Breacher_MulticamTropic",
            "VSM_FAPC_MG_MulticamTropic"
];

_magazines = [
            //Grenades
            "HandGrenade",
            "MiniGrenade",
            "rhs_mag_m67",
            "ACE_M14",
            "ACE_M84",

            //Smokes
            "SmokeShell",
            "SmokeShellBlue",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple",
            "SmokeShellRed",
            "SmokeShellYellow",

            //Ammo
            "30Rnd_556x45_Stanag",
            "20Rnd_762x51_Mag",
            "hlc_200rnd_556x45_M_SAW",
            "hlc_30Rnd_9x19_B_MP5",
            "KA_17Rnd_9x19_Mag",
            "rhs_mag_smaw_HEAA",
            "rhs_mag_smaw_SR",

            //Underbarrel Grenade
            "1Rnd_HE_Grenade_shell",
            "3Rnd_HE_Grenade_shell",

            //Underbarrel Smoke
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeBlue_Grenade_shell",
            "3Rnd_SmokeGreen_Grenade_shell",
            "3Rnd_SmokeOrange_Grenade_shell",
            "3Rnd_SmokePurple_Grenade_shell",
            "3Rnd_SmokeRed_Grenade_shell",
            "3Rnd_Smoke_Grenade_shell",
            "3Rnd_SmokeYellow_Grenade_shell",

            //Underbarrel Flare
            "3Rnd_UGL_FlareGreen_F",
            "3Rnd_UGL_FlareCIR_F",
            "3Rnd_UGL_FlareRed_F",
            "3Rnd_UGL_FlareWhite_F",
            "3Rnd_UGL_FlareYellow_F",
            "UGL_FlareGreen_F",
            "UGL_FlareWhite_F",
            "UGL_FlareCIR_F",
            "UGL_FlareRed_F",
            "UGL_FlareYellow_F",

            //Explosives
            "ClaymoreDirectionalMine_Remote_Mag",
            "DemoCharge_Remote_Mag",
            "SatchelCharge_Remote_Mag",

            //Other
            "Chemlight_green",
            "Chemlight_blue",
            "Chemlight_green",
            "Chemlight_red",
            "Chemlight_yellow",
            "ACE_Chemlight_HiOrange",
            "ACE_Chemlight_HiRed",
            "ACE_Chemlight_HiWhite",
            "ACE_Chemlight_HiYellow",
            "ACE_Chemlight_IR",
            "ACE_Chemlight_Orange",
            "ACE_Chemlight_White",
            "ACE_HuntIR_M203",

            // Cigs and Pops
            "murshun_cigs_matches",
            "murshun_cigs_lighter",
            "murshun_cigs_cigpack",
            "murshun_cigs_cig0",
            "immersion_pops_poppack",
            "immersion_pops_pop0",

            //Camera Tapes
            "Tape_F"
];

//Adding Itemlists to the Arsenal
[_box,(_items + _uniforms + _headgear + _vests + _backpacks + _magazines + _weapons),true] call ace_arsenal_fnc_initBox;
[_box, true] call ace_arsenal_fnc_initBox;
_box addaction ["<img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa' /> Open Arsenal",{[(_this select 0), player] call ace_arsenal_fnc_openBox;}];
