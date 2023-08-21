// Respawn Equipment

if (STAF_cbaRespawnEquipment) then {
	player setVariable ["STAF_var_Unit_Loadout", (getUnitLoadout player), true];
	player setVariable ["STAF_var_Unit_Loadout_Set", true, true];

	_respawnLoadoutCBAEHid = ["ace_arsenal_displayClosed", {
		_loadout = getUnitLoadout player;
		player setVariable ["STAF_var_Unit_Loadout", _loadout, true];
		player setVariable ["STAF_var_Unit_Loadout_Set", true, true];
	}] call CBA_fnc_addEventHandler;

	missionNamespace setVariable ["STAF_var_RespawnLoadoutCBAEHid", _respawnLoadoutCBAEHid];
};