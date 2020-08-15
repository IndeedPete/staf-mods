if (!isServer) exitWith {};

["STAF AI", "Make Unit Kill Itself",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// If Object is supposed to be a Unit
	/// Check if Module is placed on Object/Unit
	if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	//Check if Object under Module is a Unit
	if !(_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Unit under Module is Alive
	if !(alive _objectUnderCursor) exitWith {
		[objNull, "UNIT MUST BE ALIVE"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	if (isPlayer _objectUnderCursor) then {
		[_objectUnderCursor, 5] call STAF_fnc_setrespawntimer;
		[_objectUnderCursor, true] spawn murshun_easywayout_fnc_suicide;
	} else {
		[_objectUnderCursor] spawn murshun_easywayout_fnc_suicide_AI;
	};

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
