if (!isServer) exitWith {};

["STAF Equipment", "Toggle PMC Arsenal",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	_arsenalvar = _objectUnderCursor getVariable ["STAF_var_pmcarsenal", false];
	_actionID = _objectUnderCursor getVariable "STAF_var_pmcarsenal_actionID";

	if (_arsenalvar) then {
		[_objectUnderCursor, _actionID] remoteExec ["removeAction", 0, true];
		[_objectUnderCursor, true] call ace_arsenal_fnc_removeBox;
		_objectUnderCursor setVariable ["STAF_var_pmcarsenal_actionID", nil, true];
		_objectUnderCursor setVariable ["STAF_var_pmcarsenal", false, true];
	} else {
		[_objectUnderCursor] call STAF_PMC_fnc_pmcarsenal;
		_objectUnderCursor setVariable ["STAF_var_pmcarsenal", true, true];
	};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
