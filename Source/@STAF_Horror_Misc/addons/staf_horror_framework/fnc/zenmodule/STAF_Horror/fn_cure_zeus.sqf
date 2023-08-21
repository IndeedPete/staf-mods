params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_horror_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_horror_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"

_objectUnderCursor setVariable ["STAF_Horror_Infected",false];
_objectUnderCursor setVariable ["STAF_Horror_Infection", 0, true];
_objectUnderCursor setVariable ["STAF_Horror_Immunity",false];
_objectUnderCursor setVariable ["STAF_Horror_CoughTime",nil, true];

