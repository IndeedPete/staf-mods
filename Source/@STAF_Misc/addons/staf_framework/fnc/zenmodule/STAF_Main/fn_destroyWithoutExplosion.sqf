// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullObject.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnObject.hpp"

// Code
_objectUnderCursor setVariable ["ace_cookoff_enable", false, true];
_objectUnderCursor setVariable ["ace_cookoff_enableAmmoCookoff", false, true];
_objectUnderCursor setDamage [1, false];
[objNull, "OBJECT IS DESTROYED WITHOUT AN EXPLOSION"] call BIS_fnc_showCuratorFeedbackMessage;
