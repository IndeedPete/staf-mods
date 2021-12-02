// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullVehicle.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnVehicle.hpp"

// Code
_canSabotage = _objectUnderCursor getVariable ["STAF_var_sabotage", false];

if (_canSabotage) then {
	_action = ["Sabotage","Sabotage Vehicle","",{_objectUnderCursor ;},{true},{},[parameters], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
	[_objectUnderCursor, 0, ["ACE_TapShoulderRight"], _sabotage] call ace_interact_menu_fnc_addActionToObject;





	_objectUnderCursor setVariable ["STAF_var_sabotage", false, true];
	[objNull, "OBJECT CAN NOT BE SABOTAGED ANYMORE"] call BIS_fnc_showCuratorFeedbackMessage;
	
} else {
	
	_objectUnderCursor setVariable ["STAF_var_canCarry", true, true];
	[objNull, "OBJECT CAN NOW BE SABOTAGED"] call BIS_fnc_showCuratorFeedbackMessage;
};