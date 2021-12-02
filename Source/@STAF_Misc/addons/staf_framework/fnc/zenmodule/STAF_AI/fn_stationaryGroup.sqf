// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"

// Toggle Group Stationary
if (_objectUnderCursor getVariable ["STAF_var_AI_Stationary",false]) then {
	{
		[_x] remoteexec ["STAF_fnc_stationary_ai_moving", _x];
	} forEach units group _objectUnderCursor;
	[objNull, "GROUP CAN MOVE AGAIN"] call BIS_fnc_showCuratorFeedbackMessage;
} else {
	{
		[_x] remoteexec ["STAF_fnc_stationary_ai_stationary", _x];
	} forEach units group _objectUnderCursor;
	[objNull, "GROUP IS STATIONARY"] call BIS_fnc_showCuratorFeedbackMessage;
};















	