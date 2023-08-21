params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_horror_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_horror_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"

_objectUnderCursor spawn STAF_Horror_fnc_infection;

