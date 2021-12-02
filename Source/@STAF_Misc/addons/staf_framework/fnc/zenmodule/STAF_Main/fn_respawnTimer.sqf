// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"

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
	