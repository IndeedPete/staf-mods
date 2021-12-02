// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

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

		_newBudget= (missionNamespace getVariable [format ["ACE_fortify_Budget_%1", _side], -1]) + _budget;
		missionNamespace setVariable [format ["ACE_fortify_Budget_%1", _side], _newBudget];
		_text = format ["%2$ HAS BEEN ADDED TO THE FORTIFY BUDGET", _budget];
		[objNull, _text] call BIS_fnc_showCuratorFeedbackMessage;
	},
	{},
	_objectUnderCursor
] call zen_dialog_fnc_create;
