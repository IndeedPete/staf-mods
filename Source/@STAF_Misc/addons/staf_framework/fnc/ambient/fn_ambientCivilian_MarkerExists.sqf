private ["_exists", "_marker"];

_marker = _this select 0;

_exists = false;
if (((getMarkerPos _marker) select 0) != 0 || ((getMarkerPos _marker) select 1 != 0)) then {
	_exists = true;
};
_exists
