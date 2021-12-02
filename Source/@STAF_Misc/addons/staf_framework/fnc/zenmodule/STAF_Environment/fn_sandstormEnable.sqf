// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

// Dialog
[
	"Set Sandsotrm Parameter",
	[
		[
			"SLIDER",
			[
				"Select Storm Duration",
				"Sets the Duration of the Storm"
			],
			[
				180, // Min. Value
				18000, // Max. Value
				1200, // Default Value
				0 // Number of Decimals
			]
		],
		[
			"CHECKBOX",
			[
				"Set Random Duration",
				"Overwrites the selected Storm duration"
			],
			[
				false
			]
		],
		[
			"SLIDER",
			[
				"Select Wind Direction",
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
		/*[
			"CHECKBOX",
			[
				"Hats blown off?",
				"Should player hats be blown off by the wind?"
			],
			[
				false
			]
		],*/
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
		_dialogValues params ["_dur","_durRan","_SelectedWindDir","_CurrentWindDir","_RandomWindDir","_eyewearCheck","_debug"];

		if (_durRan) then {
			_dur = 0;
		};
		
		_SelectedWindDirRound = str round _SelectedWindDir;

		if (_CurrentWindDir)then {
			_SelectedWindDirRound = windDir;
		};

		if (_RandomWindDir) then {
			_SelectedWindDirRound = 1 + (random 358);
		};

		_hatcheck = false;
		
		[[_dur,_eyewearCheck,_hatCheck,_SelectedWindDirRound,_debug], STAF_Scripts_fnc_ROS_sandstorm] remoteexec ["BIS_fnc_call"];
		[objNull, "SANDSTORM INITIALIZED"] call BIS_fnc_showCuratorFeedbackMessage;
	},
	{},
	_objectUnderCursor
] call zen_dialog_fnc_create;