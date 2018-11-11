_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = [
            "tacs_Uniform_Garment_LS_ES_BP_BB",
            "tacs_Uniform_Garment_RS_ES_BP_BB"
] call BIS_fnc_selectRandom;
_headGear = [
            "rhssaf_helmet_m97_black_nocamo",
            "rhssaf_helmet_m97_black_nocamo_black_ess",
            "rhssaf_helmet_m97_black_nocamo_black_ess_bare"
] call BIS_fnc_selectRandom;
_vest = [
            "LOP_V_CarrierRig_BLK"
] call BIS_fnc_selectRandom;
_facewear = [
            "VSM_balaclava_Black_Skull",
            "VSM_balaclava_Black"
] call BIS_fnc_selectRandom;
_backpack = [
            "B_ViperLightHarness_blk_F"
] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;
_unit addBackpack _backpack;

_weapon = ["STAF_srifle_DMR_07_blk_F"] call BIS_fnc_selectRandom;

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
for "_i" from 1 to 4 do {_unit addItem "rhsusf_mag_40Rnd_46x30_FMJ";};
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
if (_weapon == "STAF_srifle_DMR_07_blk_F") then {
  for "_i" from 1 to 9 do {_unit addItem "ACE_20Rnd_65x47_Scenar_mag";};
};

for "_i" from 1 to 3 do {_unit addItem "16Rnd_9x21_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_hgun_Rook40_F";
_unit addweapon "Binocular";

_unit linkItem "ItemMap";
_unit linkItem "ItemAndroid";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "TFAR_fadak";
_unit linkItem "NVGoggles_OPFOR";
[_unit, "chaos_insurgency"] call BIS_fnc_setUnitInsignia;

if (isNull objectParent player) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
