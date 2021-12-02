params ["_player"];

_headgearOld = headgear _player;
_headgearNew = [_headgearOld, "03", "02"] call STAF_fnc_replaceInString;

removeHeadgear _player;
_player addHeadgear _headgearNew;