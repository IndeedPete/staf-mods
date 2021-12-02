// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_isAlive.hpp"

// Code
[_objectUnderCursor] call STAF_fnc_baseMedic;
[objNull, "BASE MEDIC ADDED"] call BIS_fnc_showCuratorFeedbackMessage;
