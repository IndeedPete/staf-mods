_RespawnLoadout = missionNamespace getVariable ["STAF_var_RespawnLoadout_on", true];

if (_RespawnLoadout) then {
	player setVariable ["STAF_var_Unit_Loadout", (getUnitLoadout player), true];
	player setVariable ["STAF_var_Unit_Loadout_Set", true, true];

	_RespawnLoadoutCBAEHid = ["ace_arsenal_displayClosed", {
	_loadout = getUnitLoadout player;
	player setVariable ["STAF_var_Unit_Loadout", (getUnitLoadout player), true];
	}] call CBA_fnc_addEventHandler;

	missionNamespace setVariable ["STAF_var_RespawnLoadoutCBAEHid", _RespawnLoadoutCBAEHid];
};