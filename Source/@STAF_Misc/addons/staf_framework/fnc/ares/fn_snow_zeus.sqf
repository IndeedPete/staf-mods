["STAF", "Create Snow Fall",
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

	// Enable Cold Breath
	STAF_checkvar_breath = true;
	waitUntil {!(player getVariable ["STAF_MonitorLifeSignsRunning", false])};
	[[player,{STAF_checkvar_breath}], "STAF_fnc_monitorLifeSigns", true, true, true] call BIS_fnc_MP;

	waitUntil {!(player getVariable ["STAF_ColdBreath", false])};
	[[player,{STAF_checkvar_breath}], "STAF_fnc_coldBreathACE", true, true, true] call BIS_fnc_MP;

	waitUntil {!(player getVariable ["STAF_ColdBreathTalking", false])};
	[[player,{STAF_checkvar_breath}], "STAF_fnc_coldBreathTalking", true, true, true] call BIS_fnc_MP;

	// Off
	if ((_dialogResult select 0) == 0) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0] remoteExec ["setFog", 2];
		[0,0] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[0,0, true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		STAF_checkvar_snow = false;
		STAF_checkvar_breath = false;
	};

	// Light
	if ((_dialogResult select 0) == 1) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0.1] remoteExec ["setFog", 2];
		[0,0.5] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[(random [-1,0,1]),(random [-1,0,1]), true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		// First disable the previous functions and then enable these
		STAF_checkvar_snow = true;

		waitUntil {((isNil "STAF_snowFallRunning") OR {!(isNil "STAF_snowFallRunning") && {!STAF_snowFallRunning}})};
		[[player,{STAF_checkvar_snow}], "STAF_fnc_snowFalllight", true, true, true] call BIS_fnc_MP;
	};

	// Medium
	if ((_dialogResult select 0) == 2) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0.25] remoteExec ["setFog", 2];
		[0,0.65] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[(random [-3,0,3]),(random [-3,0,3]), true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		// First disable the previous functions and then enable these
		STAF_checkvar_snow = true;

		waitUntil {((isNil "STAF_snowFallRunning") OR {!(isNil "STAF_snowFallRunning") && {!STAF_snowFallRunning}})};
		[[player,{STAF_checkvar_snow}], "STAF_fnc_snowFallmedium", true, true, true] call BIS_fnc_MP;
	};

	// Heavy (No Storm)
	if ((_dialogResult select 0) == 3) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0.75] remoteExec ["setFog", 2];
		[0,1] remoteExec ["setOvercast", 2];
		[0,0.2] remoteExec ["setLightnings", 2];
		[0,0.6] remoteExec ["setWaves", 2];
		[[(random [-1,0,1]),(random [-1,0,1]), true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		// First disable the previous functions and then enable these
		STAF_checkvar_snow = true;

		waitUntil {((isNil "STAF_snowFallRunning") OR {!(isNil "STAF_snowFallRunning") && {!STAF_snowFallRunning}})};
		[[player,{STAF_checkvar_snow}], "STAF_fnc_snowFallheavy", true, true, true] call BIS_fnc_MP;
	};

	// Blizzard
	if ((_dialogResult select 0) == 4) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
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

		// First disable the previous functions and then enable these
		STAF_checkvar_snow = true;

		waitUntil {((isNil "STAF_snowFallRunning") OR {!(isNil "STAF_snowFallRunning") && {!STAF_snowFallRunning}})};
		[[player,{STAF_checkvar_snow}], "STAF_fnc_snowFallblizzard", true, true, true] call BIS_fnc_MP;
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
