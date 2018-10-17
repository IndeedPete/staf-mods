_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = [""] call BIS_fnc_selectRandom;
_headGear = [""] call BIS_fnc_selectRandom;
_vest = [""] call BIS_fnc_selectRandom;
_facewear = [""] call BIS_fnc_selectRandom;
_unit addBackpack "";
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;

_weapon = [""] call BIS_fnc_selectRandom;

//Items
for "_i" from 1 to 2 do {_unit addItem "";};
_unit addItem "";

//Ammo
if (_weapon == "") then {
  for "_i" from 1 to 5 do {_unit addItem "";};
  _unit addPrimaryWeaponItem "";
};
//nopistol
//for "_i" from 1 to 5 do {_unit addItem "";};
_unit addHandgunItem "";

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "";

_unit linkItem "";
[_unit, ""] call BIS_fnc_setUnitInsignia;

//Save loadout in Eden
save3DENInventory [_unit];
