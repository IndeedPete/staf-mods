// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullVehicleObject.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnVehicleObject.hpp"

_isFortifyBox = _objectUnderCursor getVariable ["STAF_var_isfortifyBox", false];

if (_isFortifyBox) then {
	_objectUnderCursor setVariable ["STAF_var_isfortifyBox", false];

	_text = format ["OBJECT IS NO LONGER A FORTIFY BOX", _budget];
	[objNull, _text] call BIS_fnc_showCuratorFeedbackMessage;
} else {
	_objectUnderCursor setVariable ["STAF_var_isfortifyBox", true];

	_text = format ["OBJECT IS NOW A FORTIFY BOX", _budget];
	[objNull, _text] call BIS_fnc_showCuratorFeedbackMessage;
};