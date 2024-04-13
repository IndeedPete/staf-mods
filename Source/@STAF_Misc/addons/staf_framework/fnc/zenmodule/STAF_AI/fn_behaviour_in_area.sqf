// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

// Dialog
[
	"Set Behavious/Stance in Radius",
	[
		[
			"SLIDER",
			[
				"Radius",
				"Radius around Module Center"
			],
			[
				1, // Min. Value
				1000, // Max. Value
				100, // Default Value
				0 // Number of Decimals
			]
		],
		[
			"CHECKBOX",
			[
				"Change Behaviour?",
				"Should the behaviour be changed?"
			],
			true
		],
		[
			"CHECKBOX",
			[
				"Change Stance?",
				"Should the stance be changed?"
			],
			true
		],
		[
			"COMBO",
			[
				"Behaviour",
				"Forces a behaviour on all Units in the Radius"
			],
			[
				["CARELESS","SAFE","AWARE","COMBAT","STEALTH"],
				["Careless","Safe","Aware","Combat","Stealth"],
				1
			]
		],
		[
			"COMBO",
			[
				"Stance",
				"Forces a stance on all Units in the Radius"
			],
			[
				["UP","MIDDLE","DOWN","AUTO"],
				["Stand","Crouch","Prone","Non Specific"],
				0
			]
		]
	],
	{
		params ["_dialogValues", "_args"];

		_dialogValues params ["_radius", "_behaviourCheck", "_stanceCheck", "_behaviour", "_stance"];
		_args params ["_modulepositionASL", "_objectUnderCursor"];

		__moduleposition = ASLToAGL _modulepositionASL;

		_unitsInRadius = _position nearEntities ["Man", _radius];

		hint format ["%1, %2, %3, %4, %5, %6, %7", _moduleposition, _unitsInRadius, _radius, _behaviourCheck, _stanceCheck, _behaviour, _stance];

		if (_behaviourCheck) then {
			_behaviourString = tostring {_behaviour};

			{
				// Current result is saved in variable _x
				_x setBehaviour _behaviourString;
			} forEach _unitsInRadius;
		};

		if (_stanceCheck) then {
			_stanceString = tostring {_stance};

			{
				// Current result is saved in variable _x
				_x setUnitPos _stanceString;
			} forEach _unitsInRadius;
		};
	},
	{},
	[_position, _objectUnderCursor]
] call zen_dialog_fnc_create;
	