// Get all the passed parameters
params [
	"_objectUnderCursor"
];

{
    _x forceSpeed 0;
		_x setVariable ["STAF_AI_Stationary", true];
} forEach units group _objectUnderCursor;
[objNull, "AI GROUP IS STATIONARY"] call BIS_fnc_showCuratorFeedbackMessage;
