if (!isServer) exitWith {};

["STAF", "Toggle Dragable (ACE)",
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

	// Code// Code
	_canDrag = _objectUnderCursor getVariable ["STAF_var_canDrag", false];

	if (_canDrag) then {
		[_objectUnderCursor, false] call ace_dragging_fnc_setDraggable;
		_objectUnderCursor setVariable ["STAF_var_canCarry", true, true];
		[objNull, "OBJECT CAN NOT BE DRAGGED ANYMORE"] call BIS_fnc_showCuratorFeedbackMessage;
		
	} else {
		[_objectUnderCursor, true, [0, 1, 0], 0] call ace_dragging_fnc_setDraggable;
		_objectUnderCursor setVariable ["STAF_var_canCarry", true, true];
		[objNull, "OBJECT CAN NOW BE DRAGGED"] call BIS_fnc_showCuratorFeedbackMessage;
	};
	

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
