if (!isServer) exitWith {};

["STAF Equipment", "Toggle Respawn Loadout (All Player)",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	_enableCheckRespawnLoadout = missionNamespace getVariable ["STAF_var_Respawn_Loadout_MissionNamespace", false];
	
	switch (_enableCheckRespawnLoadout) do {
		case true: {
			missionNamespace setVariable ["STAF_var_Respawn_Loadout_MissionNamespace", false, true];
			{
				_x setVariable ["STAF_var_Respawn_Loadout", false, true];
				_x setVariable ["STAF_var_Unit_Loadout", nil, true];
			} forEach allPlayers;
			[] remoteExec ["STAF_fnc_respawn_equipment", 0, true];
			[objNull, "RESPAWN LOADOUT DISABLED"] call BIS_fnc_showCuratorFeedbackMessage;
		};
		case false: {
			missionNamespace setVariable ["STAF_var_Respawn_Loadout_MissionNamespace", true, true];
			{
				_x setVariable ["STAF_var_Respawn_Loadout", true, true];
			} forEach allPlayers;
			[] remoteExec ["STAF_fnc_respawn_equipment", 0, true];
			[objNull, "RESPAWN LOADOUT ENABLED"] call BIS_fnc_showCuratorFeedbackMessage;
		};
	};






	

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
