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
			"SIDES",
			[
				"Select Side",
				"Select the Side ACE Fortify shoudl be enabled for"
			],
			west
		],
		[
			"EDIT",
			[
				"Update Fortify Budget",
				"Sets the change ammount (onyl use Numbers)"
			],
			1000
		],
		[
			"CHECKBOX",
			[
				"Subtract",
				"Do you want to subtract the chosen budget?"
			],
			[
				false
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

		_dialogValues params ["_side", "_budgetString", "_subtract", "_infBudget", "_hint"];
		
		_budget = parseNumber _budgetString;
		_getBudget = [_side] call ace_fortify_fnc_getBudget;

		_sideForText = switch (_side) do {
			case (west): {"WEST"};
			case (east): {"EAST"};
			case (resistance): {"RESISTANCE"};
			case (civilian): {"CIVILIANS"};
		};

		if (_infBudget) then {
			_infBudgetChange = (_getBudget + 1) * (-1); 

			_format = format ["ACE_fortify_Budget_%1", _side];
			missionNamespace setVariable [_format, -1];

			[objNull, "THE FORTIFY BUDGET HAS BEEN SET TO INFINITE FOR %1", _sideForText] call BIS_fnc_showCuratorFeedbackMessage;
		} else {
			if (_getBudget == -1) then {
				_format = format ["ACE_fortify_Budget_%1", _side];
				missionNamespace setVariable [_format, 0];
			};

			if (_subtract) then {
				_subtractBudget = _budget * (-1);

				[_side, _subtractBudget, _hint] call ace_fortify_fnc_updateBudget;
				_text = format ["$%1 HAS BEEN SUBTRACTED FROM %2", _budget, _sideForText];
			} else {
				[_side, _budget, _hint] call ace_fortify_fnc_updateBudget;

				_text = format ["$%1 HAS BEEN ADDED TO %2", _budget, _sideForText];
			};
		};
	},
	{},
	_objectUnderCursor
] call zen_dialog_fnc_create;