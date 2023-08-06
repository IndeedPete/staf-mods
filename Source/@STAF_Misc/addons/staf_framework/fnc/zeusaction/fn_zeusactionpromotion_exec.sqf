params ["_player"];

private _owner = ["#adminLogged", getPlayerUID _player] select isMultiplayer;
private _group = createGroup [sideLogic, true];
private _zeus = _group createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "NONE"];
missionNamespace setVariable [format ["STAF_var_MissionNamespaceCuratorModule_%1", _owner], _zeus];

_zeus setVariable ["owner", _owner, true];
_zeus setVariable ["Addons", 3, true];
_zeus setVariable ["BIS_fnc_initModules_disableAutoActivation", false];

_zeus setCuratorCoef ["Place", 0];
_zeus setCuratorCoef ["Delete", 0];

_player setVariable ["STAF_var_promoZeusModule", _zeus, true];