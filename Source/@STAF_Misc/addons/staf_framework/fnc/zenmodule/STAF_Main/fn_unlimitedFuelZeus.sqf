// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullVehicle.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnVehicle.hpp"

// Code
[_objectUnderCursor] call STAF_fnc_unlimitedFuel;
