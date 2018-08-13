_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;

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
  for "_i" from 1 to 4 do {_unit addMagazine "hlc_30Rnd_9x19_B_MP5";};
};
for "_i" from 1 to 2 do {_unit addMagazine "KA_17Rnd_9x19_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_pistol_glock18";

//Items
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_quikclot";};
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItemToVest "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItemToVest "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addMagazine "HandGrenade";};
for "_i" from 1 to 2 do {_unit addMagazine "SmokeShell";};
_unit addItemToVest "ACE_epinephrine";
_unit addItemToVest "ACE_morphine";
_unit addItemToVest "ACE_EarPlugs";
_unit addItemToVest "ACE_Flashlight_XL50";
_unit addMagazine "SmokeShellGreen";
_unit addMagazine "SmokeShellRed";


//Save loadout in Eden
save3DENInventory [_unit];
