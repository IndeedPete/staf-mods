params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_horror_framework\fnc\zenmodule\Checks\fn_notNullObject.hpp"
#include "\staf_horror_framework\fnc\zenmodule\Checks\fn_placeOnObject.hpp"

_arsenalvar = _objectUnderCursor getVariable ["STAF_var_bsarsenal", false];
_actionID = _objectUnderCursor getVariable "STAF_var_bsarsenal_actionID";

if (_arsenalvar) then {
	[_objectUnderCursor, _actionID] remoteExec ["removeAction", 0, true];
	[_objectUnderCursor, true] call ace_arsenal_fnc_removeBox;
	_objectUnderCursor setVariable ["STAF_var_bsarsenal_actionID", nil, true];
	_objectUnderCursor setVariable ["STAF_var_bsarsenal", false, true];
	
	[objNull, "BLACKSUN ARSENAL REMOVED"] call BIS_fnc_showCuratorFeedbackMessage;

	if ((typeOf _objectUnderCursor) isEqualTo "Portable_GCS_Base_CTRG_F") then {
		[_objectUnderCursor,[2,"\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"]] remoteExec ["setObjectTexture",0,true];
		[_objectUnderCursor,[3,"\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"]] remoteExec ["setObjectTexture",0,true];
	};
	if ((typeOf _objectUnderCursor) isEqualTo "Portable_GCS_Base_F") then {
		[_objectUnderCursor,[2,"\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"]] remoteExec ["setObjectTexture",0,true];
		[_objectUnderCursor,[3,"\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"]] remoteExec ["setObjectTexture",0,true];
	};
	if ((typeOf _objectUnderCursor) isEqualTo "Land_Laptop_unfolded_F") then {
		[_objectUnderCursor,[0,"\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"]] remoteExec ["setObjectTexture",0,true];
	};
	if ((typeOf _objectUnderCursor) isEqualTo "Land_Laptop_device_F") then {
		[_objectUnderCursor,[0,"\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"]] remoteExec ["setObjectTexture",0,true];
	};
} else {
	[_objectUnderCursor] call STAF_Horror_fnc_bsarsenal;
	[objNull, "BLACKSUN ARSENAL ADDED"] call BIS_fnc_showCuratorFeedbackMessage;
};

