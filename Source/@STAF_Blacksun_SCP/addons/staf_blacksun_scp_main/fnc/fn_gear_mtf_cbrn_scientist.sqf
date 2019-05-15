_unit = _this select 0;

removeUniform _unit;
removeHeadgear _unit;
removeGoggles _unit;
removevest _unit;
removeBackpack _unit;
removeAllWeapons _unit;
removeAllItems _unit;

_uniform = ["JSHK_contam_suit_blue"] call BIS_fnc_selectRandom;
_headGear = ["Altyn_F_ZV_ch_C","Altyn_F_ZV_ch_m_C"] call BIS_fnc_selectRandom;
_vest = ["Specter_RAV_BLK"] call BIS_fnc_selectRandom;
_facewear = ["JSHK_contam_mask_m04_blue_hood"] call BIS_fnc_selectRandom;
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

if (isNull objectParent _unit) then {_unit switchmove ""};

//Save loadout in Eden
save3DENInventory [_unit];
