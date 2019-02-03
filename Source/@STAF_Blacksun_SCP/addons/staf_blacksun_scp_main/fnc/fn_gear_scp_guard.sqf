_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["U_B_GEN_Soldier_F"] call BIS_fnc_selectRandom;
_headGear = ["H_PASGT_basic_black_F"] call BIS_fnc_selectRandom;
_vest = ["tacs_Vest_Tactical_DarkBlack"] call BIS_fnc_selectRandom;
_facewear = ["milgp_f_tactical_khk"] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;

_weapon = ["SMG_03C_black"] call BIS_fnc_selectRandom;

//Ammo
if (_weapon == "SMG_03C_black") then {
  for "_i" from 1 to 5 do {_unit addItem "50Rnd_570x28_SMG_03";};
};
//nopistol
//for "_i" from 1 to 5 do {_unit addItem "";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
//_unit addweapon "";

//Items
for "_i" from 1 to 3 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 3 do {_unit addItem "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
_unit addItem "ACE_epinephrine";
_unit addItem "ACE_morphine";

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
[_unit, "scp_foundation"] call BIS_fnc_setUnitInsignia;

if (isNull objectParent player) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
