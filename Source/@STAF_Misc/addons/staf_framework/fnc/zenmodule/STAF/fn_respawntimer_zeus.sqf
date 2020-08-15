if (!isServer) exitWith {};

["STAF", "Set Respawn Timer",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	//If Object is supposed to be a Unit
	// Check if Module is placed on Object/Unit
	if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is a Unit
	if !(_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Dialog
	[
		"Set Respawn Time",
		[
			[
				"SLIDER",
				[
					"Respawn Time",
					"Sets the Respawn time to the chosen value in seconds"
				],
				[
					1, // Min. Value
					120, // Max. Value
					2, // Default Value
					0 // Number of Decimals
				]
			]
		],
		{
			params ["_dialogValues", "_objectUnderCursor"];
			_dialogValues params ["_time"];

			[_objectUnderCursor, _time] call STAF_fnc_setrespawntimer;
			_text = format ["PLAYERS RESPAWN TIME HAS BEEN SET TO %1 SECONDS", _time];
			[objNull, _text] call BIS_fnc_showCuratorFeedbackMessage;
		},
		{},
		_objectUnderCursor
	] call zen_dialog_fnc_create;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
