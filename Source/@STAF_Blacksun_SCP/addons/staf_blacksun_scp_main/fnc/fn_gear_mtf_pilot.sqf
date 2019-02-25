_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["SURPAT_Camo"] call BIS_fnc_selectRandom;
_headGear = ["H_PilotHelmetHeli_B"] call BIS_fnc_selectRandom;
_vest = ["Specter_RAV_BLK"] call BIS_fnc_selectRandom;
_facewear = ["skn_m04_gas_mask_blk"] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;

_weapon = ["SMG_03C_TR_black"] call BIS_fnc_selectRandom;

//Items
for "_i" from 1 to 3 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
for "_i" from 1 to 3 do {_unit addItem "ACE_packingBandage";};
for "_i" from 1 to 3 do {_unit addItem "SmokeShell";};
_unit addItem "ACE_epinephrine";
_unit addItem "ACE_morphine";
_unit addItem "ACE_tourniquet";
_unit addItem "MiniGrenade";

for "_i" from 1 to 3 do {_unit addItem "RyanZombiesAntiVirusTemporary_Item";};
for "_i" from 1 to 3 do {_unit addItem "ACE_M84";};
_unit addItem "STAF_TestingKit";
_unit addItem "STAF_geiger_counter";

//Ammo
if (_weapon == "SMG_03C_TR_black") then {
  for "_i" from 1 to 7 do {_unit addItem "50Rnd_570x28_SMG_03";};
  _unit addPrimaryWeaponItem "acc_flashlight";
  _unit addPrimaryWeaponItem "optic_Holosight_smg_blk_F";
};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
[_unit, "scp_foundation"] call BIS_fnc_setUnitInsignia;

if (isNull objectParent _unit) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
