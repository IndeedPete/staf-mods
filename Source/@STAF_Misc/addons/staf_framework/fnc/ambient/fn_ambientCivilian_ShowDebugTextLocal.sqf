private ["_minutes", "_seconds"];

if (!isNull player) then {
		if (!STAF_ambientCivilian_SilentDebugMode) then {
				player sideChat (_this select 0);
		};
};

_minutes = floor (time / 60);
_seconds = floor (time - (_minutes * 60));
diag_log ((str _minutes + ":" + str _seconds) + " Debug: " + (_this select 0));
