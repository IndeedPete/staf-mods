_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = [
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
              "ABU_Camo",
              "ABU_Camo_SS",
              "ABU_BP_Camo",
              "ABU_BP_Camo_SS",
              "ABU_BS_Camo",
              "ABU_BS_Camo_SS",
              "ABU_GP_Camo",
              "ABU_GP_Camo_SS",
              "ABU_GS_Camo",
              "ABU_GS_Camo_SS",
              "ABU_Camo_TShirt",
              "ABU_Camo_Cyre",
              "ABU_Camo_Cyre_TS",
              "ABU_Camo_Cyre_TP",
              "ABU_Camo_Cyre_GS",
              "ABU_Camo_Cyre_Tee",
              "ABU_Camo_Cyre_GP",
              "AOR1_Camo",
              "AOR1_Camo_SS",
              "AOR1_GP_Camo",
              "AOR1_GP_Camo_SS",
              "AOR1_GS_Camo",
              "AOR1_GS_Camo_SS",
              "AOR1_TP_Camo",
              "AOR1_TP_Camo_SS",
              "AOR1_TS_Camo",
              "AOR1_TS_Camo_SS",
              "AOR1_Camo_TShirt",
              "AOR1_Camo_Cyre",
              "AOR1_Camo_Cyre_TS",
              "AOR1_Camo_Cyre_TP",
              "AOR1_Camo_Cyre_GS",
              "AOR1_Camo_Cyre_Tee",
              "AOR1_Camo_Cyre_GP",
              "AOR2_Camo",
              "AOR2_Camo_SS",
              "AOR2_GP_Camo",
              "AOR2_GP_Camo_SS",
              "AOR2_GS_Camo",
              "AOR2_GS_Camo_SS",
              "AOR2_TP_Camo",
              "AOR2_TP_Camo_SS",
              "AOR2_TS_Camo",
              "AOR2_TS_Camo_SS",
              "AOR2_Camo_TShirt",
              "AOR2_Camo_Cyre",
              "AOR2_Camo_Cyre_TS",
              "AOR2_Camo_Cyre_TP",
              "AOR2_Camo_Cyre_GS",
              "AOR2_Camo_Cyre_Tee",
              "AOR2_Camo_Cyre_GP",
              "AORU_Camo",
              "AORU_Camo_SS",
              "AORU_GP_Camo",
              "AORU_GP_Camo_SS",
              "AORU_GS_Camo",
              "AORU_GS_Camo_SS",
              "AORU_TP_Camo",
              "AORU_TP_Camo_SS",
              "AORU_TS_Camo",
              "AORU_TS_Camo_SS",
              "AORU_Camo_TShirt",
              "AORU_Camo_Cyre",
              "AORU_Camo_Cyre_TS",
              "AORU_Camo_Cyre_TP",
              "AORU_Camo_Cyre_GS",
              "AORU_Camo_Cyre_Tee",
              "AORU_Camo_Cyre_GP",
              "CADPAT_Camo",
              "CADPAT_Camo_SS",
              "CADPAT_GP_Camo",
              "CADPAT_GP_Camo_SS",
              "CADPAT_GS_Camo",
              "CADPAT_GS_Camo_SS",
              "CADPAT_TP_Camo",
              "CADPAT_TP_Camo_SS",
              "CADPAT_TS_Camo",
              "CADPAT_TS_Camo_SS",
              "CADPAT_Camo_TShirt",
              "CADPAT_Camo_Cyre",
              "CADPAT_Camo_Cyre_TS",
              "CADPAT_Camo_Cyre_TP",
              "CADPAT_Camo_Cyre_GS",
              "CADPAT_Camo_Cyre_Tee",
              "CADPAT_Camo_Cyre_GP",
              "M81_Camo",
              "M81_TP_Camo",
              "M81_TP_Camo_SS",
              "M81_Camo_crye_TP",
              "M81_Camo_crye_TS",
              "M81_Camo_crye_GP",
              "M81_Camo_crye_GS",
              "M81_Camo_crye_Tee",
              "M81_Camo_crye",
              "M81_TS_Camo",
              "M81_TS_Camo_SS",
              "M81_GP_Camo",
              "M81_GP_Camo_SS",
              "M81_GS_Camo",
              "M81_GS_Camo_SS",
              "M81_Camo_SS",
              "M81_Camo_TShirt",
              "M90_Camo",
              "M90_Camo_SS",
              "M90_GP_Camo",
              "M90_GP_Camo_SS",
              "M90_GS_Camo",
              "M90_GS_Camo_SS",
              "M90_TP_Camo",
              "M90_TP_Camo_SS",
              "M90_TS_Camo",
              "M90_TS_Camo_SS",
              "M90_Camo_TShirt",
              "M90_Camo_cyre",
              "M90_Camo_cyre_TS",
              "M90_Camo_cyre_TP",
              "M90_Camo_cyre_GS",
              "M90_Camo_cyre_Tee",
              "M90_Camo_cyre_GP",
              "M90d_Camo",
              "M90d_Camo_SS",
              "M90d_GP_Camo",
              "M90d_GP_Camo_SS",
              "M90d_GS_Camo",
              "M90d_GS_Camo_SS",
              "M90d_TP_Camo",
              "M90d_TP_Camo_SS",
              "M90d_TS_Camo",
              "M90d_TS_Camo_SS",
              "M90d_Camo_TShirt",
              "M90d_Camo_cyre",
              "M90d_Camo_cyre_TS",
              "M90d_Camo_cyre_TP",
              "M90d_Camo_cyre_GS",
              "M90d_Camo_cyre_Tee",
              "M90d_Camo_cyre_GP",
              "MC_Camo",
              "MC_Camo_SS",
              "MC_GP_Camo",
              "MC_GP_Camo_SS",
              "MC_GS_Camo",
              "MC_GS_Camo_SS",
              "MC_TP_Camo",
              "MC_TP_Camo_SS",
              "MC_TS_Camo",
              "MC_TS_Camo_SS",
              "MC_Camo_TShirt",
              "MC_Camo_cyre",
              "MC_Camo_cyre_TS",
              "MC_Camo_cyre_TP",
              "MC_Camo_cyre_GS",
              "MC_Camo_cyre_Tee",
              "MC_Camo_cyre_GP",
              "MCB_Camo",
              "MCB_Camo_SS",
              "MCB_GP_Camo",
              "MCB_GP_Camo_SS",
              "MCB_GS_Camo",
              "MCB_GS_Camo_SS",
              "MCB_TP_Camo",
              "MCB_TP_Camo_SS",
              "MCB_TS_Camo",
              "MCB_TS_Camo_SS",
              "MCB_Camo_TShirt",
              "MCB_Camo_cyre",
              "MCB_Camo_cyre_TS",
              "MCB_Camo_cyre_TP",
              "MCB_Camo_cyre_GS",
              "MCB_Camo_cyre_Tee",
              "MCB_Camo_cyre_GP",
              "Scorpion_Camo",
              "Scorpion_Camo_SS",
              "Scorpion_GP_Camo",
              "Scorpion_GP_Camo_SS",
              "Scorpion_GS_Camo",
              "Scorpion_GS_Camo_SS",
              "Scorpion_TP_Camo",
              "Scorpion_TP_Camo_SS",
              "Scorpion_TS_Camo",
              "Scorpion_TS_Camo_SS",
              "Scorpion_Camo_TShirt",
              "Scorpion_Camo_cyre",
              "Scorpion_Camo_cyre_TS",
              "Scorpion_Camo_cyre_TP",
              "Scorpion_Camo_cyre_GS",
              "Scorpion_Camo_cyre_Tee",
              "Scorpion_Camo_cyre_GP",
              "SURPAT_Camo",
              "SURPAT_Camo_SS",
              "SURPAT_GP_Camo",
              "SURPAT_GP_Camo_SS",
              "SURPAT_GS_Camo",
              "SURPAT_GS_Camo_SS",
              "SURPAT_TP_Camo",
              "SURPAT_TP_Camo_SS",
              "SURPAT_TS_Camo",
              "SURPAT_TS_Camo_SS",
              "SURPAT_Camo_TShirt",
              "SURPAT_Camo_cyre",
              "SURPAT_Camo_cyre_TS",
              "SURPAT_Camo_cyre_TP",
              "SURPAT_Camo_cyre_GS",
              "SURPAT_Camo_cyre_Tee",
              "SURPAT_Camo_cyre_GP",
              "OGA_Camo",
              "OGA_Camo_Cyre_GP",
              "OGA_Camo_Cyre_Green",
              "OGA_Camo_Cyre_GS",
              "OGA_Camo_Cyre",
              "OGA_G_Camo",
              "OGA_G_Camo_SS",
              "OGA_GP_Camo",
              "OGA_GP_Camo_SS",
              "OGA_GS_Camo",
              "OGA_GS_Camo_SS",
              "OGA_Camo_SS",
              "milgp_u_fleece_grey_g3_field_pants_3CD",
              "milgp_u_fleece_khk_g3_field_pants_3CD",
              "milgp_u_fleece_grey_g3_field_pants_M81",
              "milgp_u_fleece_rgr_g3_field_pants_M81",
              "milgp_u_fleece_grey_g3_field_pants_aor2",
              "milgp_u_fleece_rgr_g3_field_pants_aor2",
              "milgp_u_fleece_grey_g3_field_pants_aor1",
              "milgp_u_fleece_khk_g3_field_pants_aor1",
              "milgp_u_fleece_grey_g3_field_pants_khk",
              "milgp_u_fleece_grey_g3_field_pants_rgr",
              "milgp_u_fleece_khk_g3_field_pants_khk",
              "milgp_u_fleece_rgr_g3_field_pants_rgr",
              "milgp_u_fleece_grey_g3_field_pants_atacsfg",
              "milgp_u_fleece_rgr_g3_field_pants_atacsfg",
              "milgp_u_fleece_grey_g3_field_pants_atacsau",
              "milgp_u_fleece_khk_g3_field_pants_atacsau",
              "milgp_u_fleece_grey_g3_field_pants_mc",
              "milgp_u_fleece_grey_g3_field_pants_mcarid",
              "milgp_u_fleece_khk_g3_field_pants_mcarid",
              "milgp_u_fleece_grey_g3_field_pants_mctropic",
              "milgp_u_fleece_rgr_g3_field_pants_mctropic",
              "milgp_u_fleece_khk_g3_field_pants_mc",
              "milgp_u_fleece_rgr_g3_field_pants_mc",
              "milgp_u_pcu_g3_field_pants_mc",
              "milgp_u_pcu_g3_field_pants_mcarid",
              "milgp_u_pcu_g3_field_pants_mctropic",
              "milgp_u_pcu_g3_field_pants_atacsau",
              "milgp_u_pcu_g3_field_pants_atacsfg",
              "milgp_u_pcu_g3_field_pants_khk",
              "milgp_u_pcu_g3_field_pants_rgr",
              "milgp_u_pcu_g3_field_pants_m81",
              "milgp_u_pcu_g3_field_pants_3cd",
              "milgp_u_pcu_g3_field_pants_aor1",
              "milgp_u_pcu_g3_field_pants_aor2",
              "STAF_U_B_CombatUniform_Norwegian_Desert",
        	    "STAF_U_B_CombatUniform_Norwegian_Desert_vest",
        	    "STAF_U_B_CombatUniform_Norwegian_woodland",
        	    "STAF_U_B_CombatUniform_Norwegian_woodland_vest",
        	    "STAF_U_BG_Guerilla1_1_Flecktarn_Norwegian",
        	    "STAF_U_BG_Guerilla1_1_Mcam_Skull",
        	    "STAF_U_BG_Guerilla1_1_US_Desert_Choc_Chip",
        	    "STAF_U_BG_Guerilla2_1_Steppentarn",
        	    "STAF_U_BG_Guerilla2_1_Flora_Coyote",
        	    "STAF_U_BG_Guerilla2_1_Choc_Chip",
        	    "STAF_U_BG_Guerrilla_4_1_US_Woodland",
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
              "tacs_Uniform_Garment_RS_TS_BP_BB"
              ] call BIS_fnc_selectRandom;
_headGear = [
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
              "AORU_Helmet1",
              "AORU_Helmet2",
              "AORU_Boonie",
              "AORU_Cap",
              "CADPAT_Helmet1",
              "CADPAT_Helmet2",
              "CADPAT_Boonie",
              "CADPAT_Cap",
              "Scorpion_Helmet1",
              "Scorpion_Helmet2",
              "Scorpion_Boonie",
              "Scorpion_Cap",
              "SURPAT_Helmet1",
              "SURPAT_Helmet2",
              "SURPAT_Helmet3",
              "SURPAT_Boonie",
              "SURPAT_Cap",
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
              "milgp_h_airframe_01_khk",
              "milgp_h_airframe_01_goggles_khk",
              "milgp_h_airframe_02_khk",
              "milgp_h_airframe_02_goggles_khk",
              "milgp_h_airframe_03_khk",
              "milgp_h_airframe_03_goggles_khk",
              "milgp_h_airframe_04_khk",
              "milgp_h_airframe_04_goggles_khk",
              "milgp_h_airframe_05_khk",
              "milgp_h_airframe_05_goggles_khk",
              "milgp_h_airframe_06_khk",
              "milgp_h_airframe_06_goggles_khk",
              "milgp_h_airframe_01_khk_hexagon",
              "milgp_h_airframe_01_goggles_khk_hexagon",
              "milgp_h_airframe_02_khk_hexagon",
              "milgp_h_airframe_02_goggles_khk_hexagon",
              "milgp_h_airframe_03_khk_hexagon",
              "milgp_h_airframe_03_goggles_khk_hexagon",
              "milgp_h_airframe_04_khk_hexagon",
              "milgp_h_airframe_04_goggles_khk_hexagon",
              "milgp_h_airframe_05_khk_hexagon",
              "milgp_h_airframe_05_goggles_khk_hexagon",
              "milgp_h_airframe_06_khk_hexagon",
              "milgp_h_airframe_06_goggles_khk_hexagon",
              "milgp_h_airframe_01_CB",
              "milgp_h_airframe_01_goggles_CB",
              "milgp_h_airframe_02_CB",
              "milgp_h_airframe_02_goggles_CB",
              "milgp_h_airframe_03_CB",
              "milgp_h_airframe_03_goggles_CB",
              "milgp_h_airframe_04_CB",
              "milgp_h_airframe_04_goggles_CB",
              "milgp_h_airframe_05_CB",
              "milgp_h_airframe_05_goggles_CB",
              "milgp_h_airframe_06_CB",
              "milgp_h_airframe_06_goggles_CB",
              "milgp_h_airframe_01_CB_hexagon",
              "milgp_h_airframe_01_goggles_CB_hexagon",
              "milgp_h_airframe_02_CB_hexagon",
              "milgp_h_airframe_02_goggles_CB_hexagon",
              "milgp_h_airframe_03_CB_hexagon",
              "milgp_h_airframe_03_goggles_CB_hexagon",
              "milgp_h_airframe_04_CB_hexagon",
              "milgp_h_airframe_04_goggles_CB_hexagon",
              "milgp_h_airframe_05_CB_hexagon",
              "milgp_h_airframe_05_goggles_CB_hexagon",
              "milgp_h_airframe_06_CB_hexagon",
              "milgp_h_airframe_06_goggles_CB_hexagon",
              "milgp_h_airframe_01_RGR",
              "milgp_h_airframe_01_goggles_RGR",
              "milgp_h_airframe_02_RGR",
              "milgp_h_airframe_02_goggles_RGR",
              "milgp_h_airframe_03_RGR",
              "milgp_h_airframe_03_goggles_RGR",
              "milgp_h_airframe_04_RGR",
              "milgp_h_airframe_04_goggles_RGR",
              "milgp_h_airframe_05_RGR",
              "milgp_h_airframe_05_goggles_RGR",
              "milgp_h_airframe_06_RGR",
              "milgp_h_airframe_06_goggles_RGR",
              "milgp_h_airframe_01_RGR_hexagon",
              "milgp_h_airframe_01_goggles_RGR_hexagon",
              "milgp_h_airframe_02_RGR_hexagon",
              "milgp_h_airframe_02_goggles_RGR_hexagon",
              "milgp_h_airframe_03_RGR_hexagon",
              "milgp_h_airframe_03_goggles_RGR_hexagon",
              "milgp_h_airframe_04_RGR_hexagon",
              "milgp_h_airframe_04_goggles_RGR_hexagon",
              "milgp_h_airframe_05_RGR_hexagon",
              "milgp_h_airframe_05_goggles_RGR_hexagon",
              "milgp_h_airframe_06_RGR_hexagon",
              "milgp_h_airframe_06_goggles_RGR_hexagon",
              "milgp_h_airframe_01_MC",
              "milgp_h_airframe_01_goggles_MC",
              "milgp_h_airframe_02_MC",
              "milgp_h_airframe_02_goggles_MC",
              "milgp_h_airframe_03_MC",
              "milgp_h_airframe_03_goggles_MC",
              "milgp_h_airframe_04_MC",
              "milgp_h_airframe_04_goggles_MC",
              "milgp_h_airframe_05_MC",
              "milgp_h_airframe_05_goggles_MC",
              "milgp_h_airframe_06_MC",
              "milgp_h_airframe_06_goggles_MC",
              "milgp_h_cap_01_goggles_khk",
              "milgp_h_cap_02_khk",
              "milgp_h_cap_02_goggles_khk",
              "milgp_h_cap_01_goggles_RGR",
              "milgp_h_cap_02_RGR",
              "milgp_h_cap_02_goggles_RGR",
              "milgp_h_cap_01_goggles_CB",
              "milgp_h_cap_02_CB",
              "milgp_h_cap_02_goggles_CB",
              "milgp_h_cap_01_goggles_MC",
              "milgp_h_cap_02_MC",
              "milgp_h_cap_02_goggles_MC",
              "milgp_h_cap_backwards_01_goggles_khk",
              "milgp_h_cap_backwards_02_khk",
              "milgp_h_cap_backwards_02_goggles_khk",
              "milgp_h_cap_backwards_01_goggles_RGR",
              "milgp_h_cap_backwards_02_RGR",
              "milgp_h_cap_backwards_02_goggles_RGR",
              "milgp_h_cap_backwards_01_goggles_CB",
              "milgp_h_cap_backwards_02_CB",
              "milgp_h_cap_backwards_02_goggles_CB",
              "milgp_h_cap_backwards_01_goggles_MC",
              "milgp_h_cap_backwards_02_MC",
              "milgp_h_cap_backwards_02_goggles_MC"
              ] call BIS_fnc_selectRandom;
_vest = [
              "V_PlateCarrier1_blk",
              "V_PlateCarrier1_rgr_noflag_F",
              "V_PlateCarrier2_blk",
              "V_PlateCarrier2_rgr_noflag_F",
              "V_Chestrig_blk",
              "V_Chestrig_rgr",
              "V_Chestrig_khk",
              "V_Chestrig_oli",
              "V_I_G_resistanceLeader_F",
              "AORU_Vest_1",
              "AORU_Vest_2",
              "AORU_Vest_3",
              "AORU_Vest_4",
              "AORU_Vest_5",
              "CADPAT_Vest_1",
              "CADPAT_Vest_2",
              "CADPAT_Vest_3",
              "CADPAT_Vest_4",
              "CADPAT_Vest_5",
              "CADPAT_Vest_6",
              "CADPAT_Vest_7",
              "Scorpion_Vest_1",
              "Scorpion_Vest_2",
              "Scorpion_Vest_3",
              "Scorpion_Vest_4",
              "Scorpion_Vest_5",
              "Scorpion_Vest_6",
              "Scorpion_Vest_7",
              "Scorpion_LBT_vest",
              "MC_MBSS",
              "MC_MBSS_PACA",
              "Scorpion_MBSS",
              "Scorpion_MBSS_PACA",
              "M81_MBSS",
              "M81_MBSS_PACA",
              "SURPAT_Vest_1",
              "SURPAT_Vest_2",
              "SURPAT_Vest_3",
              "SURPAT_Vest_4",
              "SURPAT_Vest_5",
              "SURPAT_Vest_6",
              "SURPAT_Vest_7",
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
        ] call BIS_fnc_selectRandom;
_backpack = [
              "STAF_B_Kitbag_medic_blk",
              "STAF_B_Kitbag_medic_cbr",
              "STAF_B_Kitbag_medic_rgr"
            ] call BIS_fnc_selectRandom;
_weapon = [
            "STAF_rifle_G36MLIC",
            "STAF_rifle_G36C",
            "STAF_rifle_G36CMLIC",
            "STAF_rifle_G36CV",
            "STAF_rifle_G36CTac",
            "STAF_rifle_G36KMLIC",
            "STAF_rifle_G36KA1KSK",
            "STAF_rifle_G36KV",
            "STAF_rifle_g36KTac",
            "STAF_rifle_G36V",
            "STAF_rifle_G36TAC",
            "STAF_rifle_G36A1",
            "STAF_rifle_G36E1",
            "STAF_rifle_G36KA1",
            "STAF_rifle_G36KE1",
            "STAF_rifle_scar_blk_xps",
            "STAF_rifle_scar_tan_xps",
            "STAF_rifle_scar_blk_xps",
            "STAF_rifle_scar_tan_xps",
            "STAF_rifle_scar_blk_xps",
            "STAF_rifle_scar_tan_xps",
            "STAF_rifle_scar_blk_xps",
            "STAF_rifle_scar_tan_xps",
            "STAF_rifle_scar_blk_xps",
            "STAF_rifle_scar_tan_xps",
            "STAF_rifle_scar_blk_xps",
            "STAF_rifle_scar_tan_xps",
            "STAF_rifle_ak12",
            "STAF_rifle_ak12",
            "STAF_rifle_ak12",
            "STAF_rifle_ak12",
            "STAF_rifle_ak12",
            "STAF_rifle_ak12"
        ] call BIS_fnc_selectRandom;
_goggles = [
              "rhs_scarf",
              "rhs_balaclava1_olive",
              "rhs_googles_black",
              "rhs_googles_clear",
              "rhs_googles_orange",
              "rhs_googles_yellow",
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
              "G_Lady_Blue",
              "G_Lowprofile",
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
] call BIS_fnc_selectRandom;
_unit addGoggles _goggles;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addBackpack _backpack;

//Ammo
if (_weapon == "STAF_rifle_scar_blk_xps") then {
  for "_i" from 1 to 10 do {_unit addItem "30Rnd_556x45_Stanag";};
};
if (_weapon == "STAF_rifle_scar_tan_xps") then {
  for "_i" from 1 to 10 do {_unit addItem "30Rnd_556x45_Stanag";};
};
if (_weapon == "STAF_rifle_G36C") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36CV") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36CTac") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KA1KSK") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KV") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_g36KTac") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36V") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36TAC") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36A1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36E1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KA1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KE1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36MLIC") then {
  for "_i" from 1 to 8 do {_unit addItem "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_G36CMLIC") then {
  for "_i" from 1 to 8 do {_unit addItem "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_G36KMLIC") then {
  for "_i" from 1 to 8 do {_unit addItem "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_ak12") then {
  for "_i" from 1 to 7 do {_unit addItem "30Rnd_762x39_Mag_F";};
};
for "_i" from 1 to 2 do {_unit addItem "KA_17Rnd_9x19_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_pistol_glock18";

//Items
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addItem "HandGrenade";};
for "_i" from 1 to 5 do {_unit addItem "SmokeShell";};
for "_i" from 1 to 3 do {_unit addItem "SmokeShellGreen";};
for "_i" from 1 to 2 do {_unit addItem "SmokeShellRed";};
_unit addItem "ACE_EarPlugs";
_unit addItem "ACE_Flashlight_XL50";

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "TFAR_anprc152";

_unit switchmove "";

//Save loadout in Eden
save3DENInventory [_unit];
