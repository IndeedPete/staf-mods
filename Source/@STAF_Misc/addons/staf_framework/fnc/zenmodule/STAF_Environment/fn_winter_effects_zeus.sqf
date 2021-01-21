if (!isServer) exitWith {};

["STAF Environment", "Toggle Winter Effects",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// Check if placed on Unit or Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	if !(isNull _objectUnderCursor) exitWith {
		[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Code
	if (missionNamespace getVariable ["STAF_var_gf_breath_enable", false]) then {
		missionNamespace setVariable ["STAF_var_gf_breath_enable", false];
		[objNull, "WINTER EFFECTS DISABLED"] call BIS_fnc_showCuratorFeedbackMessage;
	} else {
		missionNamespace setVariable ["STAF_var_gf_breath_enable", true];
		[STAF_fnc_winter_effects_breath] remoteexec ["BIS_fnc_call"];
		[objNull, "WINTER EFFECTS ENABLED"] call BIS_fnc_showCuratorFeedbackMessage;
	};
	

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
