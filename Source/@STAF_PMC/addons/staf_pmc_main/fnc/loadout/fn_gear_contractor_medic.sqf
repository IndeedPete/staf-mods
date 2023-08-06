#include "\staf_pmc_main\fnc\loadout\defaults\includes.hpp"

_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = selectRandom _uniformsArray;
_headGear = selectRandom _headgearArray;
_vest = selectRandom _vestsArray;
_weapon = selectRandom _assaultrifleArray;
_pistol = selectRandom _pistolsArray;
_goggles = selectRandom _gogglesArray;
_backpack = [
              "STAF_B_Kitbag_medic_blk",
              "STAF_B_Kitbag_medic_cbr",
              "STAF_B_Kitbag_medic_rgr"
            ] call BIS_fnc_selectRandom;
_unit addGoggles _goggles;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addBackpack _backpack;

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon _pistol;

//Items
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addItem "HandGrenade";};
for "_i" from 1 to 5 do {_unit addItem "SmokeShell";};
for "_i" from 1 to 3 do {_unit addItem "SmokeShellGreen";};
for "_i" from 1 to 2 do {_unit addItem "SmokeShellRed";};
_unit addItem "ACE_EarPlugs";
_unit addItem "ACE_Flashlight_XL50";
_unit addItem "ACRE_PRC152";

_nvg = selectRandom _nvgsArray;
_unit linkItem _nvg;
_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";

//Ammo
#include "\staf_pmc_main\fnc\loadout\defaults\magazines.hpp"

if (isNull objectParent _unit) then {_unit switchmove ""};
_unit setVariable ["STAF_var_Unit_Loadout", getUnitLoadout _unit];
_unit setVariable ["STAF_var_Unit_Loadout_Set", true, true];

//Save loadout in Eden
save3DENInventory [_unit];

if (missionNamespace getvariable ["STAF_cbaDebug", false]) then {
	hint format ["Uniform: %1 <br/> Vest: %2 <br/> Helmet: %3 <br/> Goggles: %4",_uniform,_vest,_headGear,_goggles];

	if (uniform _unit == "") then {
		diag_log format ["This Uniform does not excist: %1", _uniform];
	};
	if (vest _unit == "") then {
		diag_log format ["This Vest does not excist: %1", _vest];
	};
	if (headgear _unit == "") then {
		diag_log format ["This Headgear does not excist: %1", _headGear];
	};
	if (goggles _unit == "") then {
		diag_log format ["This Accessory does not excist: %1", _goggles];
	};
};
