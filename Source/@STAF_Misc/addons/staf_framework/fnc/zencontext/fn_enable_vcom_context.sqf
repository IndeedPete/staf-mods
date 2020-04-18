// Get all the passed parameters
params [
	"_objectUnderCursor"
];

{
	_x setVariable ["Vcm_Disable",true]
}	forEach units group _objectUnderCursor;
[objNull, "VCOM DISABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
