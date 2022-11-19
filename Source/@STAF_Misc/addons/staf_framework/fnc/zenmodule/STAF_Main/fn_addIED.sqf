// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullVehicle.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnVehicleObject.hpp"

if (_objectUnderCursor isKindOf "LandVehicle") then {
	[_objectUnderCursor, true] call STAF_fnc_addVBIED;
} else {
	[_objectUnderCursor] call STAF_fnc_addObjIED;
};





