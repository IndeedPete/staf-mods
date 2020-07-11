params [
    "_newUnit",
    "_oldUnit"
];

if (isNil {missionNamespace getVariable "STAF_var_Respawn_Loadout_MissionNamespace"}) exitwith {};
if (!(missionNamespace getVariable "STAF_var_Respawn_Loadout_MissionNamespace")) exitwith {};

if (missionNamespace getVariable "STAF_var_Respawn_Loadout_MissionNamespace") then {
    _UnitRespawnVar = _oldUnit getVariable ["STAF_var_Unit_Loadout", (getUnitLoadout _oldUnit)];
    _newUnit setUnitLoadout [_UnitRespawnVar, true];
};