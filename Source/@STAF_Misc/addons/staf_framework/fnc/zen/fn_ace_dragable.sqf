["STAF", "Make Dragable (ACE)",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// Check if Module is placed on Object/Unit
	if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if OBject under Module is an Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
	  [objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Dialog

	// Code
	[_objectUnderCursor, true, [0, 1, 0], 0] call ace_dragging_fnc_setDraggable;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
