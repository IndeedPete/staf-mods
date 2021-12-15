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
_backpack = selectRandom _backpacksArray;
_launcher = selectRandom _launcherArray;
_unit addGoggles _goggles;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addBackpack _backpack;

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon _pistol;
_unit addweapon _launcher;

//Items
for "_i" from 1 to 3 do {_unit addItem "ACE_fieldDressing";};
for "_i" from 1 to 3 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 3 do {_unit addItem "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItem "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItem "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addItem "HandGrenade";};
for "_i" from 1 to 2 do {_unit addItem "SmokeShell";};
_unit addItem "ACE_epinephrine";
_unit addItem "ACE_morphine";
_unit addItem "ACE_EarPlugs";
_unit addItem "ACE_Flashlight_XL50";
_unit addItem "SmokeShellGreen";
_unit addItem "SmokeShellRed";

_nvg = selectRandom _nvgsArray;
_unit linkItem _nvg;
_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "TFAR_anprc152";

//Ammo
#include "\staf_pmc_main\fnc\loadout\defaults\magazines.hpp"

// Launcher Ammo
if (_launcher == "STAF_launcher_smaw") then {
  _unit addWeaponItem [_launcher, "CUP_SMAW_HEAA_M", true];
  _unit addWeaponItem [_launcher, "CUP_SMAW_Spotting", true];
  for "_i" from 1 to 3 do {_unit addItem "CUP_SMAW_HEAA_M";};
  for "_i" from 1 to 1 do {_unit addItem "CUP_SMAW_Spotting";};
};

if (isNull objectParent _unit) then {_unit switchmove ""};
_unit setVariable ["STAF_var_Unit_Loadout", getUnitLoadout _unit];
_unit setVariable ["STAF_var_Unit_Loadout_Set", true, true];

//Save loadout in Eden
save3DENInventory [_unit];

if (missionNamespace getvariable ["STAF_cbaDebug", false]) then {
	hint format ["Uniform: %1 <br/> Vest: %2 <br/> Helmet: %3",_uniform,_vest,_headGear];

	if (uniform _unit == "") then {
		diag_log format ["This Uniform does not excist: %1", _uniform];
	};
	if (vest _unit == "") then {
		diag_log format ["This Vest does not excist: %1", _uniform];
	};
	if (headgear _unit == "") then {
		diag_log format ["This Headgear does not excist: %1", _uniform];
	};
};