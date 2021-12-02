// Requires ROS_Sandstorm v4.5 by RickOShay
// This script may only be used with ROS_Sandstorm header text and attribution must be given if used in missions.

params ["_endtime","_debug"];

5 fadeSound 1;

[_endtime, _debug] spawn {
	params ["_endtime", "_debug"];

	if (_debug) then {hint format ["Wind Mainloop End Time:%1",_endtime]; sleep 1;};

	While {(time <= _endtime) && (STAF_var_SandstormOn)} do {
	    playsound "sswindloop";
	    sleep 59;
	};

	// 45 secs and overlay with default wind sounds
	if (_debug) then {hint "Wind Outro start"; sleep 0.5};
	playsound "sswindoutro";
	sleep 45;
	if (_debug) then {hint "Wind Outro end"; sleep 1;};
};


