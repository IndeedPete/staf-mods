_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["SURPAT_Camo"] call BIS_fnc_selectRandom;
_headGear = ["rhs_altyn"] call BIS_fnc_selectRandom;
_vest = ["Specter_RAV_BLK"] call BIS_fnc_selectRandom;
_facewear = ["skn_m04_gas_mask_blk"] call BIS_fnc_selectRandom;
_unit addBackpack "B_ViperLightHarness_blk_F";
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;

_weapon = ["rhs_weap_vhsd2_bg_ct15x"] call BIS_fnc_selectRandom;

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
if (_weapon == "rhs_weap_vhsd2_ct15x") then {
  for "_i" from 1 to 10 do {_unit addItem "rhsgref_30rnd_556x45_vhs2_t";};
  for "_i" from 1 to 15 do {_unit addItem "1Rnd_HE_Grenade_shell";};
  for "_i" from 1 to 3 do {_unit addItem "SmokeShell";};
  for "_i" from 1 to 5 do {_unit addItem "1Rnd_Smoke_Grenade_shell";};
  for "_i" from 1 to 3 do {_unit addItem "1Rnd_SmokeRed_Grenade_shell";};
  for "_i" from 1 to 3 do {_unit addItem "1Rnd_SmokeGreen_Grenade_shell";};
  _unit addPrimaryWeaponItem "acc_flashlight";
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
