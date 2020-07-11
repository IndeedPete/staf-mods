private _MissionNameSpaceVar = missionNamespace getVariable ["STAF_var_Respawn_Loadout_MissionNamespace", false];

if (isNil {missionNamespace getVariable "STAF_var_Respawn_Loadout_MissionNamespace"}) exitwith {};

if (_MissionNameSpaceVar) then {
	_RespawnLoadoutCBAEHid = ["ace_arsenal_displayClosed", {
	_loadout = getUnitLoadout player;
	player setVariable ["STAF_var_Unit_Loadout", (getUnitLoadout player), true];
	}] call CBA_fnc_addEventHandler;

	missionNamespace setVariable ["STAF_var_RespawnLoadoutCBAEHid", _RespawnLoadoutCBAEHid];
} else {
	_RespawnLoadoutCBAEHid = missionNamespace getVariable "STAF_var_RespawnLoadoutCBAEHid";

	["ace_arsenal_displayClosed", _RespawnLoadoutCBAEHid] call CBA_fnc_removeEventHandler;
};