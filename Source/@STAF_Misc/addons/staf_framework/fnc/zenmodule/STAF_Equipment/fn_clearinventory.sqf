if (!isServer) exitWith {};

["STAF Equipment", "Clear Inventory",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	//If Object is supposed to be an Object
	// Check if Module is placed on Object/Unit
	if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON AN OBJECT OR VEHICLE"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is an Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
	  [objNull, "PLACE ON AN OBJECT OR VEHICLE"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	//Clear Inventory
	clearWeaponCargoGlobal _objectUnderCursor;
	clearMagazineCargoGlobal _objectUnderCursor;
	clearItemCargoGlobal _objectUnderCursor;
	clearBackpackCargoGlobal _objectUnderCursor;
	[objNull, "INVENTORY CLEARED"] call BIS_fnc_showCuratorFeedbackMessage;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
