_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["skn_u_nbc_indep_blu"] call BIS_fnc_selectRandom;
_headGear = ["rhs_altyn_novisor"] call BIS_fnc_selectRandom;
_vest = ["Specter_RAV_BLK"] call BIS_fnc_selectRandom;
_facewear = ["skn_m04_gas_mask_blu"] call BIS_fnc_selectRandom;
_unit addBackpack "B_ViperHarness_blk_F";
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;

_weapon = ["hlc_lmg_mk46"] call BIS_fnc_selectRandom;

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
if (_weapon == "hlc_lmg_mk46") then {
  for "_i" from 1 to 5 do {_unit addItem "hlc_200rnd_556x45_M_SAW";};
  _unit addPrimaryWeaponItem "acc_flashlight";
  _unit addPrimaryWeaponItem "hlc_optic_HensoldtZO_Hi";
};

for "_i" from 1 to 3 do {_unit addItem "hlc_13Rnd_9x19_B_P228";};
_unit addHandgunItem "hlc_acc_DBALPL_FL";

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "hlc_pistol_P229R";

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
[_unit, "scp_foundation"] call BIS_fnc_setUnitInsignia;

//Save loadout in Eden
save3DENInventory [_unit];
