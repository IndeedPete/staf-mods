_unit = _this select 0;
_corpse = _this select 1;

//Get loadout and Weapons
_loadout = getUnitLoadout _corpse;

//Add Inventory Items and weapons
waituntil {alive _unit};
_unit setUnitLoadout [_loadout,true];
