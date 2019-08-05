#include "\staf_pmc_main\fnc\defaults\assaultrifles.hpp"
#include "\staf_pmc_main\fnc\defaults\mg.hpp"
#include "\staf_pmc_main\fnc\defaults\marksmanrifles.hpp"

#include "\staf_pmc_main\fnc\defaults\goggles.hpp"
#include "\staf_pmc_main\fnc\defaults\headgear.hpp"
#include "\staf_pmc_main\fnc\defaults\uniforms.hpp"
#include "\staf_pmc_main\fnc\defaults\vests.hpp"
#include "\staf_pmc_main\fnc\defaults\backpacks.hpp"

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
_weapon = selectRandom _marksmanrifleArray;
_goggles = selectRandom _gogglesArray;
_backpack = selectRandom _backpacksArray;
_unit addGoggles _goggles;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addBackpack _backpack;

//Ammo
if (_weapon == "STAF_rifle_m14") then {
  for "_i" from 1 to 6 do {_unit addItem "20Rnd_762x51_Mag";};
};
if (_weapon == "STAF_rifle_m14_camo") then {
  for "_i" from 1 to 6 do {_unit addItem "20Rnd_762x51_Mag";};
};
if (_weapon == "STAF_rifle_sig_blk") then {
  for "_i" from 1 to 6 do {_unit addItem "20Rnd_762x51_Mag";};
};
if (_weapon == "STAF_rifle_sig_khaki") then {
  for "_i" from 1 to 6 do {_unit addItem "20Rnd_762x51_Mag";};
};
if (_weapon == "STAF_rifle_sig_tan") then {
  for "_i" from 1 to 6 do {_unit addItem "20Rnd_762x51_Mag";};
};
if (_weapon == "STAF_rifle_sig_multicam") then {
  for "_i" from 1 to 6 do {_unit addItem "20Rnd_762x51_Mag";};
};
if (_weapon == "STAF_rifle_sig_woodland") then {
  for "_i" from 1 to 6 do {_unit addItem "20Rnd_762x51_Mag";};
};
for "_i" from 1 to 2 do {_unit addItem "KA_17Rnd_9x19_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_pistol_glock18";

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

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "TFAR_anprc152";

if (isNull objectParent _unit) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
