// Requires ROSsandstorm.sqf v 3.6 by RickOShay

params ["_endtime","_originalVolume","_debug"];

0 fadeSound _originalVolume;

if (_debug) then {hint "Start main Wind loop";};

[_endtime] spawn {
	_endtime = _this select 0;

	While {(time <= _endtime) && (STAF_var_SandstormOn)} do {
	    playsound "sswindloop";
	    sleep 59;
	};

	// 45 secs and overlay with default wind sounds
	playsound "sswindoutro";

};

