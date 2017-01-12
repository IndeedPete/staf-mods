params [
    ["_logic", ObjNull, [ObjNull]],
	["_boxes", [], [[]]],
	"_config"
];

_config = _logic getVariable ["Config", "\userconfig\STAF\Arsenal\defaultConfig.sqf"];
[_config, _boxes] remoteExec ["STAF_fnc_arsenalClientInit", 0, true];