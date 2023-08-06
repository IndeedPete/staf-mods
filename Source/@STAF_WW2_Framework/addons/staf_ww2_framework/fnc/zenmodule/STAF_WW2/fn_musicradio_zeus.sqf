// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_ww2_framework\fnc\zenmodule\Checks\fn_notNullObject.hpp"
#include "\staf_ww2_framework\fnc\zenmodule\Checks\fn_placeOnObject.hpp"

// Dialog
[
	"Apply WW2 Radio",
	[
		[
			"COMBO",
			[
				"Radio Type",
				"Adds the chosen Radio to the object"
			],
			[
				["_ger","_sov","_uk","_us","_jap","_fr"],
				["German","Soviet","UK","US","Japanese","French"],
				0
			]
		],
		[
			"CHECKBOX",
			[
				"Turn on Radio",
				"Turn Radio on when placing the module"
			],
			[
				false
			]
		]
	],
	{
		params ["_dialogValues", "_objectUnderCursor"];
		_dialogValues params ["_radioType", "_check"];

		if (_check) then {
			switch (_radioType) do {
				case "_ger": {
					[_objectUnderCursor] call STAF_WW2_fnc_gerradio;
					_objectUnderCursor setVariable ["STAF_WW2_RadioisOn", true];
				};
				case "_sov": {
					[_objectUnderCursor] call STAF_WW2_fnc_sovradio;
					_objectUnderCursor setVariable ["STAF_WW2_RadioisOn", true];
				};
				case "_uk": {
					[_objectUnderCursor] call STAF_WW2_fnc_ukradio;
					_objectUnderCursor setVariable ["STAF_WW2_RadioisOn", true];
				};
				case "_us": {
					[_objectUnderCursor] call STAF_WW2_fnc_usradio;
					_objectUnderCursor setVariable ["STAF_WW2_RadioisOn", true];
				};
				case "_jap": {
					[_objectUnderCursor] call STAF_WW2_fnc_japradio;
					_objectUnderCursor setVariable ["STAF_WW2_RadioisOn", true];
				};
				case "_fr": {
					[_objectUnderCursor] call STAF_WW2_fnc_frradio;
					_objectUnderCursor setVariable ["STAF_WW2_RadioisOn", true];
				};
			};
		};

		[_objectUnderCursor, _radioType] call STAF_WW2_fnc_radioInitZeus;
	},
	{},
	_objectUnderCursor
] call zen_dialog_fnc_create;