if (!isServer) exitWith {};

["STAF AI", "Toggle AI Stationary",
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

	// Toggle AI Stationary
	if (_objectUnderCursor getVariable ["STAF_var_AI_Stationary",false]) then {
		[_objectUnderCursor] remoteexec ["STAF_fnc_stationary_ai_moving", _objectUnderCursor];
		[objNull, "AI CAN MOVE AGAIN"] call BIS_fnc_showCuratorFeedbackMessage;
	} else {
		[_objectUnderCursor] remoteexec ["STAF_fnc_stationary_ai_stationary", _objectUnderCursor];
		[objNull, "AI IS STATIONARY"] call BIS_fnc_showCuratorFeedbackMessage;
	};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];


		
		