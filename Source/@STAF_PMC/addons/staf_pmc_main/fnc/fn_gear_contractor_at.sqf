#include "\staf_pmc_main\fnc\defaults\assaultrifles.hpp"
#include "\staf_pmc_main\fnc\defaults\pistols.hpp"
#include "\staf_pmc_main\fnc\defaults\mg.hpp"
#include "\staf_pmc_main\fnc\defaults\marksmanrifles.hpp"
#include "\staf_pmc_main\fnc\defaults\smgs.hpp"

#include "\staf_pmc_main\fnc\defaults\goggles.hpp"
#include "\staf_pmc_main\fnc\defaults\headgear.hpp"
#include "\staf_pmc_main\fnc\defaults\uniforms.hpp"
#include "\staf_pmc_main\fnc\defaults\vests.hpp"
#include "\staf_pmc_main\fnc\defaults\backpacks.hpp"

#include "\staf_pmc_main\fnc\defaults\wetsuits.hpp"
#include "\staf_pmc_main\fnc\defaults\rebreathers.hpp"
#include "\staf_pmc_main\fnc\defaults\helihelmets.hpp"

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
_unit addGoggles _goggles;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addBackpack _backpack;

//Ammo
if (_weapon == "STAF_rifle_scar_blk") then {
  for "_i" from 1 to 10 do {_unit addItem "CUP_30Rnd_556x45_Stanag_Mk16_black";};
};
if (_weapon == "STAF_rifle_scar_tan") then {
  for "_i" from 1 to 10 do {_unit addItem "CUP_30Rnd_556x45_Stanag_Mk16";};
};
if (_weapon == "STAF_rifle_scar_wld") then {
  for "_i" from 1 to 10 do {_unit addItem "CUP_30Rnd_556x45_Stanag_Mk16_woodland";};
};
if (_weapon == "STAF_rifle_G36C") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36CV") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36CTac") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KA1KSK") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KV") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_g36KTac") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36V") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36TAC") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36A1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36E1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KA1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36KE1") then {
  for "_i" from 1 to 8 do {_unit addItem "hlc_30rnd_556x45_EPR_G36";};
};
if (_weapon == "STAF_rifle_G36MLIC") then {
  for "_i" from 1 to 8 do {_unit addItem "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_G36CMLIC") then {
  for "_i" from 1 to 8 do {_unit addItem "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_G36KMLIC") then {
  for "_i" from 1 to 8 do {_unit addItem "30Rnd_65x39_caseless_mag";};
};
if (_weapon == "STAF_rifle_ak12") then {
  for "_i" from 1 to 7 do {_unit addItem "30Rnd_762x39_AK12_Mag_F";};
};
if (_weapon == "STAF_rifle_ak12_arid") then {
  for "_i" from 1 to 7 do {_unit addItem "30rnd_762x39_AK12_Arid_Mag_F";};
};
if (_weapon == "STAF_rifle_ak12_lush") then {
  for "_i" from 1 to 7 do {_unit addItem "30rnd_762x39_AK12_Lush_Mag_F";};
};

if (_weapon == "STAF_pistol_glock17") then {
  for "_i" from 1 to 2 do {_unit addItem "CUP_17Rnd_9x19_glock17";};
};
if (_weapon == "STAF_pistol_glock17_tan") then {
  for "_i" from 1 to 2 do {_unit addItem "CUP_17Rnd_9x19_glock17";};
};
if (_weapon == "STAF_pistol_glock17_blk") then {
  for "_i" from 1 to 2 do {_unit addItem "CUP_17Rnd_9x19_glock17";};
};
for "_i" from 1 to 2 do {_unit addItem "CUP_SMAW_HEAA_M";};
_unit addItem "CUP_SMAW_Spotting";

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon _pistol;
_unit addweapon "STAF_launcher_smaw";

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
