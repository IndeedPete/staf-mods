_unit = _this select 0;
_corpse = _this select 1;

//Get loadout and Weapons
_loadout = getUnitLoadout _corpse;
_weapons = weapons _corpse;
_weapon0 = _weapons select 0
_weapon1 = _weapons select 1
_weapon2 = _weapons select 2
_weapon3 = _weapons select 3
_weapon4 = _weapons select 4

//Add Inventory Items and weapons
_unit setUnitLoadout _loadout;
_unit addweapon _weapon0;
_unit addweapon _weapon1;
_unit addweapon _weapon2;
_unit addweapon _weapon3;
_unit addweapon _weapon4;
