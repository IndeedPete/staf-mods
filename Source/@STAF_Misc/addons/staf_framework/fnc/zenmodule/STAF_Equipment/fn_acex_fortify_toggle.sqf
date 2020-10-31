if (!isServer) exitWith {};

["STAF Equipment", "Toggle Fortify System",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	_allowed = missionNamespace getVariable ["ACEX_fortify_fortifyAllowed", false];

	if (_allowed) then {
		missionNamespace setVariable ["ACEX_fortify_fortifyAllowed", false, true];
	} else {
		missionNamespace setVariable ["ACEX_fortify_fortifyAllowed", true, true];
	};

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
