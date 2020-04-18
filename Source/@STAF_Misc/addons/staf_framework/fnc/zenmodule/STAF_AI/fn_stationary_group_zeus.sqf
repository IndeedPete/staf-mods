if (!isServer) exitWith {};

["STAF AI", "Toggle Group Stationary",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// If Object is supposed to be a Unit
	// Check if Module is placed on Object/Unit
	if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is a Unit
	if !(_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Unit under Module is Alive
	if !(alive _objectUnderCursor) exitWith {
		[objNull, "UNIT MUST BE ALIVE"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Toggle Group Stationary
	if (_objectUnderCursor getVariable ["STAF_AI_Stationary",false]) then {
			{
			    _x forceSpeed -1;
					_x setVariable ["STAF_AI_Stationary", false];
			} forEach units group _objectUnderCursor;
			[objNull, "AI GROUP CAN MOVE AGAIN"] call BIS_fnc_showCuratorFeedbackMessage;
		} else {
			{
			    _x forceSpeed 0;
					_x setVariable ["STAF_AI_Stationary", true];
			} forEach units group _objectUnderCursor;
			[objNull, "AI GROUP IS STATIONARY"] call BIS_fnc_showCuratorFeedbackMessage;
		};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
