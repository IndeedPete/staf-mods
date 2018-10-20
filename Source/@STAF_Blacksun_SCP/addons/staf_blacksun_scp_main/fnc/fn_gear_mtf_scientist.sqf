_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["U_C_Scientist"] call BIS_fnc_selectRandom;
_headGear = ["H_PASGT_basic_black_F"] call BIS_fnc_selectRandom;
_vest = ["Specter_RAV_BLK"] call BIS_fnc_selectRandom;
_facewear = ["skn_m04_gas_mask_blk"] call BIS_fnc_selectRandom;
_unit addBackpack "B_Messenger_Black_F";
_unit addHeadgear _headGear;
_unit addUniform _uniform;
_unit addvest _vest;
_unit addGoggles _facewear;

_weapon = ["SMG_03_TR_black"] call BIS_fnc_selectRandom;

//Items
for "_i" from 1 to 2 do {_unit addItem "ACE_M84";};
_unit addItem "SmokeShell";

for "_i" from 1 to 20 do {_unit addItem "ACE_elasticBandage";};
for "_i" from 1 to 15 do {_unit addItem "ACE_quikclot";};
for "_i" from 1 to 15 do {_unit addItem "ACE_packingBandage";};
for "_i" from 1 to 2 do {_unit addItem "ACE_bodyBag";};
for "_i" from 1 to 3 do {_unit addItem "ACE_epinephrine";};
for "_i" from 1 to 3 do {_unit addItem "RyanZombiesAntiVirusTemporary_Item";};
for "_i" from 1 to 3 do {_unit addItem "ACE_morphine";};
for "_i" from 1 to 3 do {_unit addItem "ACE_tourniquet";};
for "_i" from 1 to 3 do {_unit addItem "ACE_salineIV_250";};
for "_i" from 1 to 2 do {_unit addItem "ACE_salineIV_500";};
_unit addItem "ACE_EntrenchingTool";
_unit addItem "adv_aceCPR_AED";
_unit addItem "STAF_TestingKit";
_unit addItem "adv_aceSplint_splint";

//Ammo
if (_weapon == "SMG_03_TR_black") then {
  for "_i" from 1 to 8 do {_unit addItem "50Rnd_570x28_SMG_03";};
  _unit addPrimaryWeaponItem "acc_flashlight";
  _unit addPrimaryWeaponItem "optic_Holosight_smg_blk_F";
};

//Addweapons
_unit addweapon _weapon;
_unit selectWeapon _weapon;
_unit addweapon "Xnooz_AppareilPhoto";

_unit linkItem "ItemMap";
_unit linkItem "ItemGPS";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
[_unit, "scp_foundation"] call BIS_fnc_setUnitInsignia;

_unit switchmove "";

//Save loadout in Eden
save3DENInventory [_unit];
