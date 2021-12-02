// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_isAlive.hpp"

if (isPlayer _objectUnderCursor) then {
	[_objectUnderCursor, 5] call STAF_fnc_setrespawntimer;
	[_objectUnderCursor, true] spawn murshun_easywayout_fnc_suicide;
} else {
	[_objectUnderCursor] spawn murshun_easywayout_fnc_suicide_AI;
};