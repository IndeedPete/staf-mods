_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeVest _unit;
removeBackpack _unit;
removeAllWeapons _unit;

_uniform = [
              "U_B_survival_uniform",
              "U_B_Wetsuit",
              "U_O_Wetsuit",
              "U_I_Wetsuit"
] call BIS_fnc_selectRandom;
_headGear = [
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
              "VSM_tan_spray_ops_2"
] call BIS_fnc_selectRandom;
_vest = [
            "V_RebreatherIA",
            "V_RebreatherIR",
            "V_RebreatherIB"
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
_backpack = [
            "B_Kitbag_cbr",
            "B_Kitbag_rgr",
            "B_Kitbag_mcamo",
            "B_Kitbag_sgg",
            "ABU_Backpack_Kitbag",
            "AOR1_Backpack_Kitbag",
            "M81_Backpack_Kitbag",
            "M90_Backpack_Kitbag",
            "M90d_Backpack_Kitbag",
            "MCB_Backpack_Kitbag",
            "MC_Backpack_Kitbag",
            "OGA_G_Backpack_Kitbag",
            "OGA_Backpack_Kitbag",
            "tacs_Backpack_Kitbag_DarkBlack",
            "STAF_B_Kitbag_blk"
] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addbackpack _backpack;

//Ammo
if (_weapon == "STAF_rifle_scar_blk_xps") then {
  for "_i" from 1 to 10 do {_unit addMagazine "30Rnd_556x45_Stanag";};
};
if (_weapon == "STAF_rifle_scar_tan_xps") then {
  for "_i" from 1 to 10 do {_unit addMagazine "30Rnd_556x45_Stanag";};
};
if (_weapon == "STAF_rifle_G36C") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36CV") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36CTac") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KA1KSK") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KV") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_g36KTac") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36V") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36TAC") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36A1") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36E1") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KA1") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KE1") then {
  for "_i" from 1 to 8 do {_unit addMagazine "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36MLIC") then {
  for "_i" from 1 to 8 do {_unit addMagazine "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_G36CMLIC") then {
  for "_i" from 1 to 8 do {_unit addMagazine "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_G36KMLIC") then {
  for "_i" from 1 to 8 do {_unit addMagazine "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_ak12") then {
  for "_i" from 1 to 7 do {_unit addMagazine "30Rnd_762x39_Mag_F";};
};
for "_i" from 1 to 2 do {_unit addMagazine "KA_17Rnd_9x19_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_pistol_glock18";

//Items
for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 3 do {_unit addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItemToBackpack "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addMagazine "HandGrenade";};
for "_i" from 1 to 2 do {_unit addMagazine "SmokeShell";};
_unit addItemToBackpack "ACE_epinephrine";
_unit addItemToBackpack "ACE_morphine";
_unit addItemToBackpack "ACE_EarPlugs";
_unit addItemToBackpack "ACE_Flashlight_XL50";
_unit addMagazine "SmokeShellGreen";
_unit addMagazine "SmokeShellRed";


//Save loadout in Eden
save3DENInventory [_unit];
