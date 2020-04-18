// Get all the passed parameters
params [
	"_objectUnderCursor"
];

_objectUnderCursor forceSpeed 0;

_objectUnderCursor setVariable ["STAF_AI_Stationary", true];
[objNull, "AI IS STATIONARY"] call BIS_fnc_showCuratorFeedbackMessage;
