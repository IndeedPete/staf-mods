if (!isServer) exitWith {};

["STAF", "Toggle Zeus Action",
{
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

	// Check if Unit under Module is Alive
	if (_objectUnderCursor == ace_player) exitWith {
		[objNull, "YOU CAN NOT REMOVE YOUR OWN ACTION"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	_ZeusAction = _objectUnderCursor getVariable ["STAF_var_ZeusAction", false];
	_ZeusActionEligible = _objectUnderCursor getVariable ["STAF_var_ZeusActionEligible", false];

	if (_ZeusActionEligible) then {
		_objectUnderCursor setVariable ["STAF_var_ZeusActionEligible", false, true];
		_objectUnderCursor setVariable ["STAF_var_ZeusAction", nil, true];
		[_objectUnderCursor] remoteexec ["STAF_fnc_zeusactiondemotion_exec", 2];    
		[objNull, "UNIT NOW LOST THE ZEUS ACTION"] call BIS_fnc_showCuratorFeedbackMessage;
	} else {
		_objectUnderCursor setVariable ["STAF_var_ZeusActionEligible", true, true];
		_objectUnderCursor setVariable ["STAF_var_ZeusAction", false, true];
		[objNull, "UNIT NOW HAS THE ZEUS ACTION"] call BIS_fnc_showCuratorFeedbackMessage;
	};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
