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
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;

_weapon = ["rhs_weap_vhsd2_ct15x"] call BIS_fnc_selectRandom;

//Items
for "_i" from 1 to 3 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
_unit addItem "ACE_epinephrine";
_unit addItem "ACE_morphine";

for "_i" from 1 to 3 do {_unit addItem "RyanZombiesAntiVirusTemporary_Item";};
for "_i" from 1 to 3 do {_unit addItem "ACE_M84";};
_unit addItem "STAF_TestingKit";
_unit addItem "STAF_geiger_counter";

//Ammo
if (_weapon == "rhs_weap_vhsd2_ct15x") then {
  for "_i" from 1 to 10 do {_unit addItem "rhsgref_30rnd_556x45_vhs2_t";};
  _unit addPrimaryWeaponItem "acc_flashlight";
  _unit addPrimaryWeaponItem "rhsusf_acc_nt4_black";
};
for "_i" from 1 to 5 do {_unit addItem "hlc_13Rnd_9x19_B_P228";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "hlc_pistol_P229R";
_unit addHandgunItem "hlc_acc_DBALPL_FL";

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
[_unit, "scp_foundation"] call BIS_fnc_setUnitInsignia;

_unit switchmove "";

//Save loadout in Eden
save3DENInventory [_unit];
