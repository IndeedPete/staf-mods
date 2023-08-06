params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_ww2_framework\fnc\zenmodule\Checks\fn_notNullObject.hpp"
#include "\staf_ww2_framework\fnc\zenmodule\Checks\fn_placeOnObject.hpp"

_arsenalvar = _objectUnderCursor getVariable ["STAF_var_ww2ukarsenal", false];
_actionID = _objectUnderCursor getVariable "STAF_var_ww2ukarsenal_actionID";

if (_arsenalvar) then {
	[_objectUnderCursor, _actionID] remoteExec ["removeAction", 0, true];
	[_objectUnderCursor, true] call ace_arsenal_fnc_removeBox;
	_objectUnderCursor setVariable ["STAF_var_ww2ukarsenal_actionID", nil, true];
	_objectUnderCursor setVariable ["STAF_var_ww2ukarsenal", false, true];
	
	[objNull, "GERMAN ARSENAL REMOVED"] call BIS_fnc_showCuratorFeedbackMessage;
} else {
	[_objectUnderCursor] call STAF_WW2_fnc_ww2ukarsenal;
	[objNull, "GERMAN ARSENAL ADDED"] call BIS_fnc_showCuratorFeedbackMessage;
};

