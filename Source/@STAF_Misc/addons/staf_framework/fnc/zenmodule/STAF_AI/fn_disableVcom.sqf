// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_isAlive.hpp"

switch (_objectUnderCursor isKindOf "Man") do {
	case true:
		{
			switch (_objectUnderCursor getVariable ["Vcm_Disable",false]) do {
		    case true:
					{
						{
							_x setVariable ["lambs_danger_disableAI", false, true];
							_x setVariable ["Vcm_Disable", false, true]
						} forEach units group _objectUnderCursor;
						[objNull, "VCOM ENABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
		    case false:
					{
						{
							_x setVariable ["lambs_danger_disableAI", true, true];
							_x setVariable ["Vcm_Disable", true, true];
						} forEach units group _objectUnderCursor;
						[objNull, "VCOM DISABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
			};
		};
	case false:
		{
			_fullcrew = ((fullcrew _objectUnderCursor select 0) select 0);
			switch (_fullcrew getVariable ["Vcm_Disable",false]) do {
				case true:
					{
						{
							_x setVariable ["lambs_danger_disableAI", false, true];
							_x setVariable ["Vcm_Disable", false, true];
						}	forEach units group _fullcrew;
						[objNull, "VCOM ENABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
				case false:
					{
						{
							_x setVariable ["lambs_danger_disableAI", true, true];
							_x setVariable ["Vcm_Disable", true, true];
						}	forEach units group _fullcrew;
						[objNull, "VCOM DISABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
			};
		};
};
