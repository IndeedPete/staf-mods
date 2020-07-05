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
	if (_objectUnderCursor getVariable ["STAF_var_AI_Stationary",false]) then {
		{
			_x forceSpeed -1;
			_x setVariable ["STAF_var_AI_Stationary", false, true];
			_StationaryEventhandler = _x getVariable "STAF_var_AI_Stationary_EH";
			_x removeEventHandler ["Local", _StationaryEventhandler];
			[objNull, "GROUP CAN MOVE AGAIN"] call BIS_fnc_showCuratorFeedbackMessage;
		} forEach units group _objectUnderCursor;
	} else {
		{
			_x forceSpeed 0;
			_x setVariable ["STAF_var_AI_Stationary", true, true];
			_StationaryEventhandler = _x addEventHandler ["Local", {
				params ["_unit", "_isLocal"];

				_VarCheck = _unit getVariable "STAF_var_AI_Stationary";
				if (_VarCheck) then {
					_unit forceSpeed 0;
				} else {
					_unit forceSpeed -1;
				}
			}];
			_x setVariable ["STAF_var_AI_Stationary_EH", _StationaryEventhandler, true];
			[objNull, "AI IS STATIONARY"] call BIS_fnc_showCuratorFeedbackMessage;
		} forEach units group _objectUnderCursor;
	};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];