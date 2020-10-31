if (!isServer) exitWith {};

["STAF Equipment", "Add Fortify Budget",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// Dialog
	[
		"Add Fortify Budget",
		[
			[
				"SIDE",
				[
					"Select Side",
					"Select the side the Budget is added to!"
				],
				[
					west //default side
				]
			],
			[
				"SLIDER",
				[
					"Add Fortify Budget",
					"How much Fortify Budget should be added?"
				],
				[
					1, // Min. Value
					2000, // Max. Value
					50, // Default Value
					0 // Number of Decimals
				]
			]
		],
		{
			params ["_dialogValues", "_objectUnderCursor"];
			_dialogValues params ["_side", "_budget"];

			_newBudget= (missionNamespace getVariable [format ["ACEX_fortify_Budget_%1", _side], -1]) + _budget;
			missionNamespace setVariable [format ["ACEX_fortify_Budget_%1", _side], _newBudget];
			_text = format ["%2$ HAS BEEN ADDED TO THE FORTIFY BUDGET", _budget];
			[objNull, _text] call BIS_fnc_showCuratorFeedbackMessage;
		},
		{},
		_objectUnderCursor
	] call zen_dialog_fnc_create;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
