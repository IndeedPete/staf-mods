// Get all the passed parameters
params [
	"_objectUnderCursor"
];

_objectUnderCursor forceSpeed -1;

_objectUnderCursor setVariable ["STAF_AI_Stationary", false];
[objNull, "AI CAN MOVE AGAIN"] call BIS_fnc_showCuratorFeedbackMessage;
