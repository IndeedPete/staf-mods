_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["mgsr_robe"] call BIS_fnc_selectRandom;
_unit addUniform _uniform;

//Save loadout in Eden
save3DENInventory [_unit];
