if (!isServer) exitWith {};

["STAF", "Toggle Carryable (ACE)",
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
	_canCarry = _objectUnderCursor getVariable ["STAF_var_canCarry", false];

	if (_canCarry) then {
		[_objectUnderCursor, false] call ace_dragging_fnc_setCarryable;
		_objectUnderCursor setVariable ["STAF_var_canCarry", true, true];
		[objNull, "OBJECT CAN NOT BE CARRIED ANYMORE"] call BIS_fnc_showCuratorFeedbackMessage;
		
	} else {
		[_objectUnderCursor, true, [0, 1, 1], 0] call ace_dragging_fnc_setCarryable;
		_objectUnderCursor setVariable ["STAF_var_canCarry", true, true];
		[objNull, "OBJECT CAN NOW BE CARRIED"] call BIS_fnc_showCuratorFeedbackMessage;
	};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
