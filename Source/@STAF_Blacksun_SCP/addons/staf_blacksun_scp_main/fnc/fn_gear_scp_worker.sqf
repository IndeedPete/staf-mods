_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removeVest _unit;
removeBackpack _unit;
removeAllWeapons _unit;

_uniform = ["U_C_ConstructionCoverall_Black_F"] call BIS_fnc_selectRandom;
_headGear = ["H_Construction_headset_yellow_F"] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";

//Save loadout in Eden
save3DENInventory [_unit];
