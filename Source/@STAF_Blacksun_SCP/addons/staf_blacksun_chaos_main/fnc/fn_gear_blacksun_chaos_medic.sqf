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
            "tacs_Backpack_Kitbag_DarkBlack"
] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;
_unit addBackpack _backpack;

_weapon = ["STAF_arifle_CTAR_blk"] call BIS_fnc_selectRandom;

//Items
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
for "_i" from 1 to 5 do {_unit addItem "ACE_EarPlugs";};
for "_i" from 1 to 5 do {_unit addItem "RyanZombiesAntiVirusTemporary_Item";};
for "_i" from 1 to 15 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 20 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 20 do {_unit addItem "ACE_packingBandage";};
for "_i" from 1 to 4 do {_unit addItem "ACE_tourniquet";};
for "_i" from 1 to 3 do {_unit addItem "ACE_atropine";};
for "_i" from 1 to 5 do {_unit addItem "ACE_epinephrine";};
for "_i" from 1 to 5 do {_unit addItem "ACE_morphine";};
for "_i" from 1 to 5 do {_unit addItem "adv_aceSplint_splint";};
for "_i" from 1 to 3 do {_unit addItem "ACE_salineIV";};
for "_i" from 1 to 6 do {_unit addItem "ACE_salineIV_500";};
for "_i" from 1 to 12 do {_unit addItem "ACE_salineIV_250";};
for "_i" from 1 to 2 do {_unit addItem "HandGrenade";};
for "_i" from 1 to 2 do {_unit addItem "ACE_M84";};
for "_i" from 1 to 4 do {_unit addItem "SmokeShell";};
_unit addItem "ACE_Flashlight_XL50";
_unit addItem "ACE_EarPlugs";
_unit addItem "STAF_geiger_counter";
_unit addItem "STAF_TestingKit";
_unit addItem "ACE_surgicalKit";
_unit addItem "SmokeShellGreen";
_unit addItem "SmokeShellRed";

//Ammo
if (_weapon == "STAF_arifle_CTAR_blk") then {
  for "_i" from 1 to 11 do {_unit addItem "30Rnd_580x42_Mag_Tracer_F";};
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
