// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullVehicleObject.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnVehicleObject.hpp"

//Clear Inventory
clearWeaponCargoGlobal _objectUnderCursor;
clearMagazineCargoGlobal _objectUnderCursor;
clearItemCargoGlobal _objectUnderCursor;
clearBackpackCargoGlobal _objectUnderCursor;
[objNull, "INVENTORY CLEARED"] call BIS_fnc_showCuratorFeedbackMessage;
