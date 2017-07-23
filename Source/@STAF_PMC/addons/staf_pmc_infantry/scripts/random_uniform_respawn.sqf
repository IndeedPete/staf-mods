_unit = _this select 0;
_corpse = _this select 1;

_loadout = getUnitLoadout _corpse;
_unit setUnitLoadout _loadout;
