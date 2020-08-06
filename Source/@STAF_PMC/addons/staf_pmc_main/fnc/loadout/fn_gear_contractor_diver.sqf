#include "\staf_pmc_main\fnc\loadout\defaults\assaultrifles.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\pistols.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\mg.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\marksmanrifles.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\smgs.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\launchers.hpp"

#include "\staf_pmc_main\fnc\loadout\defaults\goggles.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\headgear.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\uniforms.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\vests.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\backpacks.hpp"

#include "\staf_pmc_main\fnc\loadout\defaults\wetsuits.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\rebreathers.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\helihelmets.hpp"
#include "\staf_pmc_main\fnc\loadout\defaults\nvgs.hpp"

_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = selectRandom _wetsuitArray;
_headGear = selectRandom _headgearArray;
_vest = selectRandom _rebreatherArray;
_weapon = selectRandom _assaultrifleArray;
_pistol = selectRandom _pistolsArray;
_backpack = selectRandom _backpacksArray;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addbackpack _backpack;

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon _pistol;

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

if (isNull objectParent _unit) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
