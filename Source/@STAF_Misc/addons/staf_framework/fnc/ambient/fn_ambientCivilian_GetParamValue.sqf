private ["_params", "_key"];
private ["_value"];

_params = _this select 0;
_key = _this select 1;
_value = if (count _this > 2) then { _this select 2 } else { objNull };

{
	if (_x select 0 == _key) then {
		_value = _x select 1;
	};
} foreach (_params);

_value
