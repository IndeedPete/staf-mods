params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_ww2_framework\fnc\zenmodule\Checks\fn_notNullObject.hpp"
#include "\staf_ww2_framework\fnc\zenmodule\Checks\fn_placeOnObject.hpp"

_arsenalvar = _objectUnderCursor getVariable ["STAF_var_ww2usarsenal", false];
_actionID = _objectUnderCursor getVariable "STAF_var_ww2usarsenal_actionID";

if (_arsenalvar) then {
	[_objectUnderCursor, _actionID] remoteExec ["removeAction", 0, true];
	[_objectUnderCursor, true] call ace_arsenal_fnc_removeBox;
	_objectUnderCursor setVariable ["STAF_var_ww2usarsenal_actionID", nil, true];
	_objectUnderCursor setVariable ["STAF_var_ww2usarsenal", false, true];
	
	[objNull, "GERMAN ARSENAL REMOVED"] call BIS_fnc_showCuratorFeedbackMessage;
} else {
	[_objectUnderCursor] call STAF_WW2_fnc_ww2usarsenal;
	[objNull, "GERMAN ARSENAL ADDED"] call BIS_fnc_showCuratorFeedbackMessage;
};

