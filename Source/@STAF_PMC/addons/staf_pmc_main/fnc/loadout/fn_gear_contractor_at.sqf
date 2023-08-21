#include "\staf_pmc_main\fnc\loadout\defaults\includes.hpp"

params ["_unit"];

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
_backpack = selectRandom ["milgp_b_patrol_01_khk","milgp_b_patrol_01_cb","milgp_b_patrol_01_rgr"];
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
_unit addItem "ACRE_PRC152";

_nvg = selectRandom _nvgsArray;
_unit linkItem _nvg;
_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";

//Ammo
#include "\staf_pmc_main\fnc\loadout\defaults\magazines.hpp"

// Launcher Ammo
if (_launcher == "CUP_launch_Mk153Mod0") then {
  _unit addWeaponItem [_launcher, "CUP_SMAW_HEAA_M", true];
  _unit addWeaponItem [_launcher, "CUP_SMAW_Spotting", true];
  for "_i" from 1 to 3 do {_unit addItem "CUP_SMAW_HEAA_M";};
  for "_i" from 1 to 1 do {_unit addItem "CUP_SMAW_Spotting";};
};
if (_launcher == "launch_O_Titan_short_F") then {
  _unit addWeaponItem [_launcher, "Titan_AT", true];
  for "_i" from 1 to 2 do {_unit addItem "Titan_AT";};
  for "_i" from 1 to 1 do {_unit addItem "Titan_AP";};
};
if (_launcher == "launch_I_Titan_short_F") then {
  _unit addWeaponItem [_launcher, "Titan_AT", true];
  for "_i" from 1 to 2 do {_unit addItem "Titan_AT";};
  for "_i" from 1 to 1 do {_unit addItem "Titan_AP";};
};
if (_launcher == "launch_B_Titan_short_F") then {
  _unit addWeaponItem [_launcher, "Titan_AT", true];
  for "_i" from 1 to 2 do {_unit addItem "Titan_AT";};
  for "_i" from 1 to 1 do {_unit addItem "Titan_AP";};
};
if (_launcher == "launch_O_Titan_short_ghex_F") then {
  _unit addWeaponItem [_launcher, "Titan_AT", true];
  for "_i" from 1 to 2 do {_unit addItem "Titan_AT";};
  for "_i" from 1 to 1 do {_unit addItem "Titan_AP";};
};
if (_launcher == "launch_B_Titan_short_tna_F") then {
  _unit addWeaponItem [_launcher, "Titan_AT", true];
  for "_i" from 1 to 2 do {_unit addItem "Titan_AT";};
  for "_i" from 1 to 1 do {_unit addItem "Titan_AP";};
};
if (_launcher == "STAF_Launch_Titan_Short_blk") then {
  _unit addWeaponItem [_launcher, "Titan_AT", true];
  for "_i" from 1 to 2 do {_unit addItem "Titan_AT";};
  for "_i" from 1 to 1 do {_unit addItem "Titan_AP";};
};
if (isNull objectParent _unit) then {_unit switchmove ""};
if (STAF_cbaRespawnEquipment) then {
	_unit setVariable ["STAF_var_Unit_Loadout", getUnitLoadout _unit];
	_unit setVariable ["STAF_var_Unit_Loadout_Set", true, true];
};

//Save loadout in Eden
save3DENInventory [_unit];

if (missionNamespace getvariable ["STAF_cbaDebug", false]) then {
	hint format ["Uniform: %1 <br/> Vest: %2 <br/> Helmet: %3 <br/> Goggles: %4 <br/> Weapon: %5 <br/> Handgun: %6 <br/> Launcher: %7",_uniform,_vest,_headGear,_goggles,_weapon,_pistol,_launcher];

	if (uniform _unit == "") then {
		diag_log format ["This Uniform does not excist: %1", _uniform];
		systemChat "Missing Uniform";
	};
	if (vest _unit == "") then {
		diag_log format ["This Vest does not excist: %1", _vest];
		systemChat "Missing Vest";
	};
	if (headgear _unit == "") then {
		diag_log format ["This Headgear does not excist: %1", _headGear];
		systemChat "Missing Headgear";
	};
	if (goggles _unit == "") then {
		diag_log format ["This Accessory does not excist: %1", _goggles];
		systemChat "Missing Goggles";
	};
	if (primaryWeapon _unit == "") then {
		diag_log format ["This Weapon does not excist: %1", _weapon];
		systemChat "Missing Primary Weapon";
	};
	if (handgunWeapon _unit == "") then {
		diag_log format ["This Handgun does not excist: %1", _weapon];
		systemChat "Missing Handgun Weapon";
	};
	if (secondaryWeapon _unit == "") then {
		diag_log format ["This Launcher does not excist: %1", _weapon];
		systemChat "Missing Secondary Weapon";
	};
};