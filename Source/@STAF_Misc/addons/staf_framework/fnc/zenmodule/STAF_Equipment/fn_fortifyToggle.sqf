// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

// Dialog
[
	"Enable ACE Fortify",
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
				"Fortify Budget",
				"How much Fortify Budget should be available initially?"
			],
			[
				1, // Min. Value
				5000, // Max. Value
				1000, // Default Value
				0 // Number of Decimals
			]
		],
		[
			"CHECKBOX",
			[
				"Infinite Budget",
				"Overwrites Fortify Budget"
			],
			[
				false
			]
		]
	],
	{
		params ["_dialogValues", "_objectUnderCursor"];
		_dialogValues params ["_side", "_budget", "_infBudget"];

		if (_infBudget) then {
			_objects = ["STAF_Fortification_Set1"] call ace_fortify_fnc_getPlaceableSet;

			[[_side, _budget, _objects], "ace_fortify_fnc_registerObjects", false, false] call BIS_fnc_MP;

			_format = format ["ACE_fortify_Budget_%1", _side];
			missionNamespace setVariable [_format, -1];
			[objNull, "ACE FORTIFY ENABLED"] call BIS_fnc_showCuratorFeedbackMessage;
		} else {	
			_objects = ["STAF_Fortification_Set1"] call ace_fortify_fnc_getPlaceableSet;

			[[_side, _budget, _objects], "ace_fortify_fnc_registerObjects", false, false] call BIS_fnc_MP;

			[objNull, "ACE FORTIFY ENABLED"] call BIS_fnc_showCuratorFeedbackMessage;
		};
	},
	{},
	_objectUnderCursor
] call zen_dialog_fnc_create;