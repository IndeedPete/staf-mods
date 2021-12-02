// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

_allowed = missionNamespace getVariable ["ACE_fortify_fortifyAllowed", false];

if (_allowed) then {
	missionNamespace setVariable ["ACE_fortify_fortifyAllowed", false, true];
} else {
	missionNamespace setVariable ["ACE_fortify_fortifyAllowed", true, true];
};
