_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = [
            "tacs_Uniform_Garment_LS_BS_BP_BB",
            "tacs_Uniform_Garment_RS_BS_BP_BB"
] call BIS_fnc_selectRandom;
_headGear = [
            "STAF_h_airframe_01_black",
            "STAF_h_airframe_02_black",
            "STAF_h_airframe_03_black",
            "STAF_h_airframe_04_black",
            "STAF_h_airframe_05_black",
            "STAF_h_airframe_06_black"
] call BIS_fnc_selectRandom;
_vest = [
            "Specter_RAV_BLK"
] call BIS_fnc_selectRandom;
_facewear = [
            "G_Bandanna_blk",
            "G_Balaclava_TI_blk_F",
            "G_Balaclava_TI_G_blk_F",
            "VSM_balaclava_Black_Skull",
            "VSM_balaclava_Black",
            "VSM_balaclava2_Black",
            "VSM_FaceMask_black",
            "VSM_FaceMask_Ghost",
            "STAF_G_Bandanna_Punisher"
] call BIS_fnc_selectRandom;
_backpack = [
            "B_ViperLightHarness_blk_F"
] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;
_unit addBackpack _backpack;

_weapon = ["STAF_srifle_DMR_02"] call BIS_fnc_selectRandom;

//Items
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addItem "RyanZombiesAntiVirusTemporary_Item";};
for "_i" from 1 to 3 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 3 do {_unit addItem "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItem "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItem "HandGrenade";};
for "_i" from 1 to 2 do {_unit addItem "ACE_M84";};
for "_i" from 1 to 4 do {_unit addItem "SmokeShell";};
for "_i" from 1 to 4 do {_unit addItem "ClaymoreDirectionalMine_Remote_Mag";};
for "_i" from 1 to 3 do {_unit addItem "APERSBoundingMine_Range_Mag";};
_unit addItem "ACE_Flashlight_XL50";
_unit addItem "ACE_EarPlugs";
_unit addItem "ACE_epinephrine";
_unit addItem "ACE_morphine";
_unit addItem "adv_aceSplint_splint";
_unit addItem "SmokeShellGreen";
_unit addItem "SmokeShellRed";
_unit addItem "ACE_Kestrel4500";
_unit addItem "ACE_ATragMX";
_unit addItem "ACE_RangeCard";
_unit addItem "ACE_DefusalKit";
_unit addItem "ACE_Clacker";

//Ammo
if (_weapon == "STAF_srifle_DMR_02") then {
  for "_i" from 1 to 9 do {_unit addItem "ACE_10Rnd_338_300gr_HPBT_Mag";};
};

for "_i" from 1 to 3 do {_unit addItem "9Rnd_45ACP_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_hgun_ACPC2";
_unit addweapon "Binocular";

_unit linkItem "ItemMap";
_unit linkItem "ItemAndroid";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "TFAR_anprc152";
_unit linkItem "NVGoggles_OPFOR";
[_unit, ""] call BIS_fnc_setUnitInsignia;

if (isNull objectParent _unit) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
