_unit = _this select 0;
_corpse = _this select 1;

//Get loadout and Weapons
_loadout = getUnitLoadout _corpse;
_weapons = weapons _corpse;

//Add Inventory Items and weapons
{
  _unit setUnitLoadout _x
} forEach _weapons;
