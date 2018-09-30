["STAF Weather", "Snow Fall (No Weather Change)",
{
	private _dialogResult =
	[
		"Choose Snow Fall Strenght",
		[
			// The last number is optional! If you want the first selection you can remove the number.
				["How strong should the Snow fall be?", ["Off","Light","Medium","Heavy","Blizzard"], 0]
		]
	] call Ares_fnc_showChooseDialog;

	// If the dialog was closed.
	if (_dialogResult isEqualTo []) exitWith{};

	// Get the selected data
	_dialogResult params ["_comboBoxResult"];

  //==============================================================================================

	_snowinit = missionNamespace getVariable "STAF_snow_init";
	if (isnil "_snowinit") then {
		missionNamespace setVariable ["STAF_snow_init", false, true];
		_snowinit = false;
	};
	if (!(missionNamespace getVariable "STAF_snow_init")) then {
		missionNamespace getVariable "STAF_snow_condition";
		missionNamespace setVariable ["STAF_snow_condition", true, true];
		missionNamespace setVariable ["STAF_snow_init", true, true];
		[[{STAF_snow_condition}], "STAF_fnc_snowFall", true, true, true] call BIS_fnc_MP;
		[[player, ["Respawn", {[{STAF_snow_condition}] call STAF_fnc_snowFall}]], "addEventHandler", true, true, true] call BIS_fnc_MP;

	};

  //==============================================================================================

	// Off
	if ((_dialogResult select 0) == 0) then {
		[0,0] remoteExec ["setRain", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","off", true];
	};

  //==============================================================================================

	// Light
	if ((_dialogResult select 0) == 1) then {
    [0,0] remoteExec ["setRain", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","light", true];
	};

  //==============================================================================================

	// Medium
	if ((_dialogResult select 0) == 2) then {
    [0,0] remoteExec ["setRain", 2];
    remoteExec ["forceWeatherChange", 2];
    [999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","medium", true];
	};

  //==============================================================================================

	// Heavy
	if ((_dialogResult select 0) == 3) then {
    [0,0] remoteExec ["setRain", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","heavy", true];
	};

  //==============================================================================================

	// Blizzard
	if ((_dialogResult select 0) == 4) then {
    [0,0] remoteExec ["setRain", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","blizzard", true];
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
