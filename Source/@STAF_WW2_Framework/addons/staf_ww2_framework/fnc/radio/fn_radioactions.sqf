// German
_turnoffger = [
	"STAF_TurnOff_ger",
	"Turn Radio Off",
	"\staf_ww2_framework\img\radiooff.paa",
	{
		params ["_target", "_player", "_params"];

		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_radioStop;
		_target setVariable ["STAF_WW2_RadioisOn", false];
	},
	{_target getVariable ["STAF_WW2_RadioisOn", false]},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

_turnonger = [
	"STAF_TurnOn_ger",
	"Turn Radio On",
	"\staf_ww2_framework\img\radioon.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_gerradio;
		_target setVariable ["STAF_WW2_RadioisOn", true];
	},
	{!(_target getVariable ["STAF_WW2_RadioisOn", false])},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

// Japanese
_turnoffjap = [
	"STAF_TurnOff_jap",
	"Turn Radio Off",
	"\staf_ww2_framework\img\radiooff.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_radioStop;
		_target setVariable ["STAF_WW2_RadioisOn", false];
	},
	{_target getVariable ["STAF_WW2_RadioisOn", false]},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

_turnonjap = [
	"STAF_TurnOn_jap",
	"Turn Radio On",
	"\staf_ww2_framework\img\radioon.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_japradio;
		_target setVariable ["STAF_WW2_RadioisOn", true];
	},
	{!(_target getVariable ["STAF_WW2_RadioisOn", false])},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

// Soviet
_turnoffsov = [
	"STAF_TurnOff_sov",
	"Turn Radio Off",
	"\staf_ww2_framework\img\radiooff.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_radioStop;
		_target setVariable ["STAF_WW2_RadioisOn", false];
	},
	{_target getVariable ["STAF_WW2_RadioisOn", false]},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

_turnonsov = [
	"STAF_TurnOn_sov",
	"Turn Radio On",
	"\staf_ww2_framework\img\radioon.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_sovradio;
		_target setVariable ["STAF_WW2_RadioisOn", true];
	},
	{!(_target getVariable ["STAF_WW2_RadioisOn", false])},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

// UK
_turnoffuk = [
	"STAF_TurnOff_uk",
	"Turn Radio Off",
	"\staf_ww2_framework\img\radiooff.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_radioStop;
		_target setVariable ["STAF_WW2_RadioisOn", false];
	},
	{_target getVariable ["STAF_WW2_RadioisOn", false]},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

_turnonuk = [
	"STAF_TurnOn_uk",
	"Turn Radio On",
	"\staf_ww2_framework\img\radioon.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_ukradio;
		_target setVariable ["STAF_WW2_RadioisOn", true];
	},
	{!(_target getVariable ["STAF_WW2_RadioisOn", false])},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

// US
_turnoffus = [
	"STAF_TurnOff_us",
	"Turn Radio Off",
	"\staf_ww2_framework\img\radiooff.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_radioStop;
		_target setVariable ["STAF_WW2_RadioisOn", false];
	},
	{_target getVariable ["STAF_WW2_RadioisOn", false]},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

_turnonus = [
	"STAF_TurnOn_us",
	"Turn Radio On",
	"\staf_ww2_framework\img\radioon.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_usradio;
		_target setVariable ["STAF_WW2_RadioisOn", true];
	},
	{!(_target getVariable ["STAF_WW2_RadioisOn", false])},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

// FR
_turnofffr = [
	"STAF_TurnOff_fr",
	"Turn Radio Off",
	"\staf_ww2_framework\img\radiooff.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_radioStop;
		_target setVariable ["STAF_WW2_RadioisOn", false];
	},
	{_target getVariable ["STAF_WW2_RadioisOn", false]},
	{},
	[]
] call ace_interact_menu_fnc_createAction;

_turnonfr = [
	"STAF_TurnOn_fr",
	"Turn Radio On",
	"\staf_ww2_framework\img\radioon.paa",
	{
		params ["_target", "_player", "_params"];
		
		[_player, "gesturePoint"] call ace_common_fnc_doGesture;
		[_target] call STAF_WW2_fnc_frradio;
		_target setVariable ["STAF_WW2_RadioisOn", true];
	},
	{!(_target getVariable ["STAF_WW2_RadioisOn", false])},
	{},
	[]
] call ace_interact_menu_fnc_createAction;