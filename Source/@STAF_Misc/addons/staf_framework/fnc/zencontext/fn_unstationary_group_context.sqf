// Get all the passed parameters
params [
	"_objectUnderCursor"
];

{
    _x forceSpeed -1;
		_x setVariable ["STAF_AI_Stationary", false];
} forEach units group _objectUnderCursor;
[objNull, "AI GROUP CAN MOVE AGAIN"] call BIS_fnc_showCuratorFeedbackMessage;
