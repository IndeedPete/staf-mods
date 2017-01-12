params [
    ["_logic", ObjNull, [ObjNull]],
	"_key",
    "_playerCountryMap"
];

_key = _logic getVariable ["Key", ""];
_playerCountryMap = [_key] call(compile(preprocessFileLineNumbers "\userconfig\STAF\Insignias\insignias.sqf"));
[_playerCountryMap] remoteExec ["STAF_fnc_insignia", 0, true];