if (!isServer) exitWith {};

["STAF Equipment", "PMC Arsenal",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// Code
	[_objectUnderCursor] call STAF_fnc_pmcarsenal;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
