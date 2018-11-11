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
              "rhsusf_hgu56p_black",
              "rhsusf_hgu56p_mask_black",
              "rhsusf_hgu56p_mask_black_skull",
              "rhsusf_hgu56p_visor_black",
              "rhsusf_hgu56p_visor_mask_black",
              "rhsusf_hgu56p_visor_mask_black_skull",
              "rhsusf_hgu56p_green",
              "rhsusf_hgu56p_mask_green",
              "rhsusf_hgu56p_mask_green_mo",
              "rhsusf_hgu56p_visor_green",
              "rhsusf_hgu56p_visor_mask_green",
              "rhsusf_hgu56p_visor_mask_Empire_green",
              "rhsusf_hgu56p_visor_mask_green_mo",
              "rhsusf_hgu56p",
              "rhsusf_hgu56p_mask",
              "rhsusf_hgu56p_mask_mo",
              "rhsusf_hgu56p_mask_skull",
              "rhsusf_hgu56p_visor",
              "rhsusf_hgu56p_visor_mask",
              "rhsusf_hgu56p_visor_mask_mo",
              "rhsusf_hgu56p_visor_mask_skull"
] call BIS_fnc_selectRandom;
_vest = [
              "V_TacVest_blk",
              "V_TacVest_brn",
              "V_TacVest_camo",
              "V_TacVest_khk",
              "V_TacVest_oli"
] call BIS_fnc_selectRandom;
_weapon = [
              "STAF_rifle_mp5"
] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;

//Ammo
if (_weapon == "STAF_rifle_mp5") then {
  for "_i" from 1 to 4 do {_unit addItem "hlc_30Rnd_9x19_B_MP5";};
};
for "_i" from 1 to 2 do {_unit addItem "KA_17Rnd_9x19_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_pistol_glock18";

//Items
for "_i" from 1 to 3 do {_unit addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 3 do {_unit addItem "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItem "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addItem "HandGrenade";};
for "_i" from 1 to 2 do {_unit addItem "SmokeShell";};
_unit addItem "ACE_epinephrine";
_unit addItem "ACE_morphine";
_unit addItem "ACE_EarPlugs";
_unit addItem "ACE_Flashlight_XL50";
_unit addItem "SmokeShellGreen";
_unit addItem "SmokeShellRed";

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "TFAR_anprc152";

if (isNull objectParent player) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
