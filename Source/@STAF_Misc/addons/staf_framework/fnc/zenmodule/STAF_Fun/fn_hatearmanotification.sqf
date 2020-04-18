if (!isServer) exitWith {};

["STAF Fun", "Zeus hates Arma",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// Check if placed on Unit or Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	if !(isNull _objectUnderCursor) exitWith {
		[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Code
	//Show Notification
	["STAF_notification_hatesarma",[]] remoteExecCall ["bis_fnc_showNotification", allPlayers];

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
