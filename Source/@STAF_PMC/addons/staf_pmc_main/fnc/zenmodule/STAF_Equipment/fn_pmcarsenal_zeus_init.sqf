if (!isServer) exitWith {};

["STAF Equipment", "Toggle PMC Arsenal",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];
	
	[_objectUnderCursor] call STAF_PMC_fnc_pmcarsenal_zeus;
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
