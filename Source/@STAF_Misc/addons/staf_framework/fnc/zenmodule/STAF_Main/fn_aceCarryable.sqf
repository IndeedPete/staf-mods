// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullObject.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnObject.hpp"

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
