// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"

// Getting the Combat behaviour
_combatBehaviour = combatBehaviour (group _objectUnderCursor);

// Toggle Group Stationary
if ((_combatBehaviour == "CARELESS") or (_combatBehaviour == "SAFE")) then {
	(group _objectUnderCursor) setCombatBehaviour "AWARE";

	[objNull, "GROUP IS NOW AWARE"] call BIS_fnc_showCuratorFeedbackMessage;
} else {
	(group _objectUnderCursor) setCombatBehaviour "SAFE";

	[objNull, "GROUP IS NOW SAFE"] call BIS_fnc_showCuratorFeedbackMessage;
};















	