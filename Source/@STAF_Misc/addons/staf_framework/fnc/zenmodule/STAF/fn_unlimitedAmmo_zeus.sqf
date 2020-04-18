if (!isServer) exitWith {};

["STAF", "Unlimited Ammo",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// Code
	[_objectUnderCursor] call STAF_fnc_unlimitedAmmo;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
