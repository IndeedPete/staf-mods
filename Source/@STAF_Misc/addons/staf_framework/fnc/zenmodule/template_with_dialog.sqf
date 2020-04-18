["STAF", "NAME",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// If Object is supposed to be an Object
	// Check if Module is placed on Object/Unit
	/*if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is an Unit
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
	  [objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};*/


	// If Object is supposed to be a Unit
	// Check if Module is placed on Object/Unit
	/*if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is a Unit
	if !(_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Unit under Module is Alive
	if !(alive _objectUnderCursor) exitWith {
		[objNull, "UNIT MUST BE ALIVE"] call BIS_fnc_showCuratorFeedbackMessage;
	};*/

	// Dialog
	/*[
		"TITLE",
		[
			[
				"CHECKBOX", // Type
				[
					"", // Title
					"" // Tooltip
				],
				true, // Default State
				false // Force Default
			],
			[
				"COLOR", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[0,0,0,1], // Default Color
				false // Force Default
			],
			[
				"COMBO", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[
					[], // Values that can be returned
					[], // Corresponding pretty names (0: Display name <STRING>, 1: Tooltip <STRING>, 2: Picture <STRING>, 3: Text color RGBA <ARRAY>)
					0 // Default Index
				], // Control Specific Argument(s)
				false // Force Default
			],
			[
				"LIST", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[
					[], // Values that can be returned
					[], // Corresponding pretty names (0: Display name <STRING>, 1: Tooltip <STRING>, 2: Picture <STRING>, 3: Text color RGBA <ARRAY>)
					0, // Default Index
					10 // Height
				], // Control Specific Argument(s)
				false // Force Default
			],
			[
				"LIST", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[
					[], // Values that can be returned
					[], // Corresponding pretty names (0: Display name <STRING>, 1: Tooltip <STRING>, 2: Picture <STRING>, 3: Text color RGBA <ARRAY>)
					0, // Default Index
					10 // Height
				], // Control Specific Argument(s)
				false // Force Default
			],
			[
				"OWNERS", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[
					[], // Selected Sides
					[], // Selected Groups
					[], // Selected Players
					0 // Default Tab (0 - Sides, 1 - Groups, 2 - Players)
				], // Control Specific Argument(s)
				false // Force Default
			],
			[
				"SIDES", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[
					BLUFOR // Default side (BLUFOR, OPFOR, INDFOR, CIVILIAN)
				], // Control Specific Argument(s)
				false // Force Default
			],
			[
				"SLIDER", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[
					0, // Min. Value
					100, // Max. Value
					10, // Default Value
					2 // Number of Decimals
				], // Control Specific Argument(s)
				false // Force Default
			],
			[
				"SLIDER:PERCENT", // Type
				[
					"", // Title
					"" // Tooltip
				],
				[
					0, // Min. Value
					1, // Max. Value
					0.1, // Default Value
					1, // Number of Decimals
				], // Control Specific Argument(s)
				false // Force Default
			]
		], // Content
		{}, // On Confirm
		{}, // On Cancel
		[] // Arguments
	] call zen_dialog_fnc_create;*/


}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
