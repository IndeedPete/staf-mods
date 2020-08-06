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
		_objectUnderCursor enableAI "PATH";
		_objectUnderCursor setVariable ["STAF_var_AI_Stationary", false, true];

		_localEHGet = _objectUnderCursor getVariable "STAF_var_AI_Stationary_localEH";		
		_objectUnderCursor removeEventHandler ["local", _localEHGet];
		_objectUnderCursor setVariable ["STAF_var_AI_Stationary_localEH", nil, true];
		[objNull, "AI CAN MOVE AGAIN"] call BIS_fnc_showCuratorFeedbackMessage;
	} else {
		_objectUnderCursor disableAI "PATH";
		_objectUnderCursor setVariable ["STAF_var_AI_Stationary", true, true];

		_localEH = _objectUnderCursor addEventHandler ["Local", {
			params ["_entity", "_isLocal"];

			_entity disableAI "PATH";
		}];
		objectUnderCursor setVariable ["STAF_var_AI_Stationary_localEH", _localEH, true];
		[objNull, "AI IS STATIONARY"] call BIS_fnc_showCuratorFeedbackMessage;
	};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];


		
		