if (!isServer) exitWith {};

["STAF Environment", "Start Sandstorm",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	//Check if placed on Unit or Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	if !(isNull _objectUnderCursor) exitWith {
		[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Dialog
	[
		"Set Sandsotrm Parameter",
		[
			[
				"SLIDER",
				[
					"Respawn Time",
					"Sets the Respawn time to the chosen value in seconds"
				],
				[
					360, // Min. Value
					18000, // Max. Value
					7200, // Default Value
					0 // Number of Decimals
				]
			],
			[
				"SLIDER",
				[
					"Select Wind direction",
					"Select the Wind direction of the Sandstorm"
				],
				[
					0, // Min. Value
					360, // Max. Value
					0, // Default Value
					0 // Number of Decimals
				]
			],
			[
				"CHECKBOX",
				[
					"Use current wind direction",
					"Overwrites the selected wind direction"
				],
				[
					false
				]
			],
			[
				"CHECKBOX",
				[
					"Random Wind Direction",
					"Overwrites the selected wind direction and current wind direction"
				],
				[
					false
				]
			],
			[
				"CHECKBOX",
				[
					"Require Eyewear?",
					"Should player without Eyewear get damaged?"
				],
				[
					false
				]
			],
			[
				"CHECKBOX",
				[
					"Hats blown off?",
					"Should player hats be blown off by the wind?"
				],
				[
					false
				]
			],
			[
				"CHECKBOX",
				[
					"Debug",
					"Enables Debug messages (everyone sees them)"
				],
				[
					false
				]
			]
		],
		{
			params ["_dialogValues", "_objectUnderCursor"];
			_dialogValues params ["_dur","_SelectedWindDir","_CurrentWindDir","_RandomWindDir","_eyewearCheck","_hatCheck","_debug"];
			
			_SelectedWindDirRound = str round _SelectedWindDir;

			if (_CurrentWindDir)then {
				_SelectedWindDirRound = "Current";
			};

			if (_RandomWindDir) then {
				_SelectedWindDirRound = "Rand";
			};
			
			[[_dur,_eyewearCheck,_hatCheck,_SelectedWindDirRound,_debug], STAF_Scripts_fnc_ROSsandstorm] remoteexec ["BIS_fnc_call"];
			[objNull, "SANDSTORM INITIALIZED"] call BIS_fnc_showCuratorFeedbackMessage;
		},
		{},
		_objectUnderCursor
	] call zen_dialog_fnc_create;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
