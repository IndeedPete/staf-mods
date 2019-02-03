_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["CUP_U_C_Labcoat_01"] call BIS_fnc_selectRandom;
_unit addUniform _uniform;

_unit addItem "STAF_geiger_counter";
_unit addItem "STAF_TestingKit";

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";

//Save loadout in Eden
save3DENInventory [_unit];
