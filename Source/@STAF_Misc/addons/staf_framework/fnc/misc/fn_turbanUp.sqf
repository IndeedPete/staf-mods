params ["_player"];

_headgearOld = headgear _player;
_headgearNew = [_headgearOld, "02", "03"] call STAF_fnc_replaceInString;

removeHeadgear _player;
_player addHeadgear _headgearNew;