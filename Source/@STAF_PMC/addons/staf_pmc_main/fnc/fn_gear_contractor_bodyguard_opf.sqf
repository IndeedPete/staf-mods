_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;

_uniform = [
              "STAF_Marshal"
] call BIS_fnc_selectRandom;
_headGear = [
              "VSM_Bowman_cap_Black"
] call BIS_fnc_selectRandom;
_vest = [
              "tacs_Vest_Tactical_DarkBlack"
] call BIS_fnc_selectRandom;
_weapon = [
              "STAF_rifle_mp5"
] call BIS_fnc_selectRandom;
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;

//Ammo
if (_weapon == "STAF_rifle_mp5") then {
  for "_i" from 1 to 4 do {_unit addMagazine "hlc_30Rnd_9x19_B_MP5";};
};
for "_i" from 1 to 2 do {_unit addMagazine "KA_17Rnd_9x19_Mag";};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "STAF_pistol_glock18";

//Items
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_elasticBandage";};
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_quikclot";};
for "_i" from 1 to 3 do {_unit addItemToVest "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItemToVest "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItemToVest "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addMagazine "HandGrenade";};
for "_i" from 1 to 2 do {_unit addMagazine "SmokeShell";};
_unit addItemToVest "ACE_epinephrine";
_unit addItemToVest "ACE_morphine";
_unit addItemToVest "ACE_EarPlugs";
_unit addItemToVest "ACE_Flashlight_XL50";
_unit addMagazine "SmokeShellGreen";
_unit addMagazine "SmokeShellRed";


//Save loadout in Eden
save3DENInventory [_unit];
