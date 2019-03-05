private ["_pos", "_blackListMarkers"];
private ["_isInsideMarker"];

_pos = _this select 0;
_blackListMarkers = _this select 1;

_isInsideMarker = false;

{
	if ([_pos, _x] call STAF_fnc_ambientCivilian_PositionIsInsideMarker) then {
		_isInsideMarker = true;
	};
} foreach _blackListMarkers;

_isInsideMarker
