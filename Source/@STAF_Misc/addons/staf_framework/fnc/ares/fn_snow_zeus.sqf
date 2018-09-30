["STAF Weather", "Snow Fall",
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
		[0,0] remoteExec ["setFog", 2];
		[0,0] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[0,0, true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","off", true];
	};

  //==============================================================================================

	// Light
	if ((_dialogResult select 0) == 1) then {
    [0,0] remoteExec ["setRain", 2];
		[0,0.1] remoteExec ["setFog", 2];
		[0,0.5] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[(random [-1,0,1]),(random [-1,0,1]), true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","light", true];
	};

  //==============================================================================================

	// Medium
	if ((_dialogResult select 0) == 2) then {
    [0,0] remoteExec ["setRain", 2];
    [0,0.25] remoteExec ["setFog", 2];
    [0,0.65] remoteExec ["setOvercast", 2];
    [0,0] remoteExec ["setLightnings", 2];
    [0,0] remoteExec ["setWaves", 2];
    [[(random [-3,0,3]),(random [-3,0,3]), true]] remoteExec ["setWind", 2];
    remoteExec ["forceWeatherChange", 2];
    [999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","medium", true];
	};

  //==============================================================================================

	// Heavy
	if ((_dialogResult select 0) == 3) then {
    [0,0] remoteExec ["setRain", 2];
		[0,0.75] remoteExec ["setFog", 2];
		[0,1] remoteExec ["setOvercast", 2];
		[0,0.2] remoteExec ["setLightnings", 2];
		[0,0.6] remoteExec ["setWaves", 2];
		[[(random [-1,0,1]),(random [-1,0,1]), true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","heavy", true];
	};

  //==============================================================================================

	// Blizzard
	if ((_dialogResult select 0) == 4) then {
    [0,0] remoteExec ["setRain", 2];
		[0,0.75] remoteExec ["setFog", 2];
		[0,1] remoteExec ["setOvercast", 2];
		[0,0.2] remoteExec ["setLightnings", 2];
		[0,0.6] remoteExec ["setWaves", 2];
		//ensuring that the wind is at least +5 or -5 with max being +/- 8 in x and y direction
		_ranx = random[-3,0,3];
		_rany = random[-3,0,3];
		[[if (_ranx >= 0) then {_ranx+5} else {_ranx -5}, if (_rany >= 0) then {_rany+5} else {_rany -5},true]] remoteExec ["setWind", 2]; //I'm suprised this worked on my first try!
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		missionNamespace getVariable "STAF_case_Snow";
		missionNamespace setVariable ["STAF_case_Snow","blizzard", true];
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
