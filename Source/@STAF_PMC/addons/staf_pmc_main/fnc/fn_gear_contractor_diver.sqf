_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = [
              "U_B_survival_uniform",
              "U_B_Wetsuit",
              "U_O_Wetsuit",
              "U_I_Wetsuit"
] call BIS_fnc_selectRandom;
_headGear = [
              "H_HelmetB",
              "H_HelmetB_black",
              "H_HelmetB_camo",
              "H_HelmetB_desert",
              "H_HelmetB_grass",
              "H_HelmetB_sand",
              "H_HelmetB_snakeskin",
              "H_HelmetB_tna_F",
              "H_HelmetSpecB",
              "H_HelmetSpecB_blk",
              "H_HelmetSpecB_paint2",
              "H_HelmetSpecB_paint1",
              "H_HelmetSpecB_sand",
              "H_HelmetSpecB_snakeskin",
              "H_HelmetB_Enh_tna_F",
              "H_HelmetB_light",
              "H_HelmetB_light_black",
              "H_HelmetB_light_desert",
              "H_HelmetB_light_grass",
              "H_HelmetB_light_sand",
              "H_HelmetB_light_snakeskin",
              "H_HelmetB_Light_tna_F",
              "ABU_Helmet1",
              "ABU_Helmet2",
              "AOR1_Helmet1",
              "AOR1_Helmet2",
              "AOR2_Helmet1",
              "AOR2_Helmet2",
              "AORU_Helmet1",
              "AORU_Helmet2",
              "CADPAT_Helmet1",
              "CADPAT_Helmet2",
              "DualTex_Helmet1",
              "DualTex_Helmet2",
              "M81_Helmet1",
              "M81_Helmet2",
              "M90_Helmet1",
              "M90_Helmet2",
              "M90d_Helmet1",
              "M90d_Helmet2",
              "MarPat_Helmet1",
              "MarPat_Helmet2",
              "MC_Helmet1",
              "MC_Helmet2",
              "MCB_Helmet1",
              "MCB_Helmet2",
              "OGA_Helmet1",
              "OGA_Helmet2",
              "OGA_G_Helmet1",
              "OGA_G_Helmet2",
              "Project_Honor_Helmet1",
              "Project_Honor_Helmet2",
              "Project_Honor_Boonie",
              "Scorpion_Helmet1",
              "Scorpion_Helmet2",
              "SURPAT_Helmet1",
              "SURPAT_Helmet2",
              "SURPAT_Helmet3",
              "Tiger_Helmet1",
              "Tiger_Helmet2",
              "CFP_ACHHelmet_ATacsAU",
              "SP_ACHHelmet_ATacsFG1",
              "SP_ACHHelmet_Black1",
              "SP_ACHHelmet_Green1",
              "SP_ACHHelmet_NodUrban1",
              "SP_ACHHelmet_Tan1",
              "SP_ACHHelmet_White1",
              "SP_SPH4Helmet_Black",
              "SP_SPH4Helmet_Brown",
              "SP_SPH4Helmet_Green",
              "SP_SPH4Helmet_Grey",
              "SP_SPH4Helmet_Tan",
              "SP_SPH4Helmet_White",
              "CUP_H_CZ_Helmet01",
              "CUP_H_CZ_Helmet02",
              "CUP_H_CZ_Helmet03",
              "CUP_H_CZ_Helmet04",
              "CUP_H_USArmy_Helmet_ECH2_Black",
              "CUP_H_USArmy_Helmet_ECH1_Black",
              "CUP_H_USArmy_Helmet_ECH2_GREEN",
              "CUP_H_USArmy_Helmet_ECH1_Green",
              "CUP_H_USArmy_Helmet_ECH2_Sand",
              "CUP_H_USArmy_Helmet_ECH1_Sand",
              "CUP_H_FR_ECH",
              "CUP_H_CZ_Helmet07",
              "CUP_H_CZ_Helmet08",
              "CUP_H_CZ_Helmet10",
              "CUP_H_CZ_Helmet09",
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
            "STAF_rifle_scar_blk",
            "STAF_rifle_scar_tan",
            "STAF_rifle_scar_wld",
            "STAF_rifle_scar_blk",
            "STAF_rifle_scar_tan",
            "STAF_rifle_scar_wld",
            "STAF_rifle_scar_blk",
            "STAF_rifle_scar_tan",
            "STAF_rifle_scar_wld",
            "STAF_rifle_scar_blk",
            "STAF_rifle_scar_tan",
            "STAF_rifle_scar_wld",
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
if (_weapon == "STAF_rifle_scar_blk") then {
  for "_i" from 1 to 10 do {_unit addItem "ACE_30Rnd_556x45_Stanag_Mk318_mag";};
};
if (_weapon == "STAF_rifle_scar_tan") then {
  for "_i" from 1 to 10 do {_unit addItem "ACE_30Rnd_556x45_Stanag_Mk318_mag";};
};
if (_weapon == "STAF_rifle_scar_wld") then {
  for "_i" from 1 to 10 do {_unit addItem "ACE_30Rnd_556x45_Stanag_Mk318_mag";};
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

if (isNull objectParent _unit) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
