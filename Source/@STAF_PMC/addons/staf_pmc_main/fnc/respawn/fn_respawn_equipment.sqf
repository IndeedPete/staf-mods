params [
    "_newUnit",
    "_oldUnit"
];

_UnitRespawnVar = _oldUnit getVariable "STAF_var_Unit_Loadout";

if (isNil "_UnitRespawnVar") exitWith {_newUnit call STAF_PMC_fnc_random_gear};

_newUnit setUnitLoadout [_UnitRespawnVar, true];
_newUnit setVariable ["STAF_var_Unit_Loadout_Set", true, true];




