// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

if (isNil {missionNamespace getVariable "ACE_fortify_fortifyAllowed"}) exitWith 
{
	[objNull, "ACE FORTIFY IS NOT ENABLED"] call BIS_fnc_showCuratorFeedbackMessage;
};

// Dialog
[
	"Add Fortify Budget",
	[
		[
			"SIDES",
			[
				"Select Side",
				"Select the Side ACE Fortify shoudl be enabled for"
			],
			west
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
		],
		[
			"CHECKBOX",
			[
				"Infinite Budget",
				"Set the Budget to infinite"
			],
			[
				false
			]
		],
		[
			"CHECKBOX",
			[
				"Display Hint",
				"Should a hint be displayed when the budget changes?"
			],
			[
				false
			]
		]
	],
	{
		params ["_dialogValues", "_objectUnderCursor"];

		_dialogValues params ["_side", "_budget", "_infBudget", "_hint"];
		
		// Check if Budget is unlimited
		_format = format ["ACE_fortify_Budget_%1", _side];
		_getBudget = missionNamespace getVariable [_format, 0];
		if (_getBudget == -1) then {
			missionNamespace setVariable [_format, 0];
		};
		
		if (_infBudget) then {
			missionNamespace setVariable [_format, -1];

			[objNull, "THE FORTIFY BUDGET HAS BEEN SET TO INFINITE"] call BIS_fnc_showCuratorFeedbackMessage;
		} else {
			[_side, _budget, _hint] call ace_fortify_fnc_updateBudget;

			_text = format ["THE FORTIFY BUDGET HAS BEEN CHANGED BY %1", _budget];
			[objNull, _text] call BIS_fnc_showCuratorFeedbackMessage;
		};
	},
	{},
	_objectUnderCursor
] call zen_dialog_fnc_create;
