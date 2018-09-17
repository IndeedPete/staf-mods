["STAF", "Creat Snow Fall",
{
	private _dialogResult =
	[
		"Apply Inventory",
		[
			// The last number is optional! If you want the first selection you can remove the number.
				["How heavy should the Snow fall be?", ["Off","Light","Medium","Heavy"], 0]
		]
	] call Ares_fnc_showChooseDialog;

	// If the dialog was closed.
	if (_dialogResult isEqualTo []) exitWith{};

	// Get the selected data
	_dialogResult params ["_comboBoxResult"];

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

		//Code to stop Snowfall
	};

	// Light
	if ((_dialogResult select 0) == 1) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0.1] remoteExec ["setFog", 2];
		[0,0.5] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[(random [-2,0,2]),(random [-2,0,2]), true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		//Code to create light snowfall
	};

	// Medium
	if ((_dialogResult select 0) == 2) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0.25] remoteExec ["setFog", 2];
		[0,0.65] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[0,0, true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		//Code to create medium snowfall
	};

	// Heavy
	if ((_dialogResult select 0) == 3) then {
		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0.75] remoteExec ["setFog", 2];
		[0,1] remoteExec ["setOvercast", 2];
		[0,0.2] remoteExec ["setLightnings", 2];
		[0,0.6] remoteExec ["setWaves", 2];

		//ensuring that the wind is at least +5 or -5 with max being +/- 12 in x and y direction
		_ranx = random[-7,0,7];
		_rany = random[-7,0,7];
		[[if (_ranx >= 0) then {_ranx+5} else {_ranx -5}, if (_rany >= 0) then {_rany+5} else {_rany -5},true]] remoteExec ["setWind", 2]; //I'm suprised this worked on my first try!

		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];

		//Code to create heavy snowfall
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
