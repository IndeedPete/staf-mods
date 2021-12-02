// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullVehicleUnit.hpp"

// Code
[_objectUnderCursor] call STAF_fnc_unlimitedAmmo;
