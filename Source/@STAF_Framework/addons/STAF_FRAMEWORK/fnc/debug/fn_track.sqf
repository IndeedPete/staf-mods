/*
Name: track
Author: IndeedPete
Purpose: Creates map marker that follows group leader. If leader dies, marker follows new group leader.
----------
Parameters:
_unit - OBJECT: Unit to apply function on. - player
_delay - NUMBER (OPTIONAL): Interval in which marker position should be updated - 0 - DEFAULT: 5
_shape - STRING (OPTIONAL): Marker shape. - "ICON" - DEFAULT: "ICON"
_type - STRING (OPTIONAL): Marker type. - "mil_dot" - DEFAULT: "mil_dot"
_color - STRING (OPTIONAL): Marker colour. - "ColorBlack" - DEFAULT: [(side _unit), true] call BIS_fnc_sideColor
_text - STRING/BOOLEAN (OPTIONAL): Marker text. If boolean, function will show and update count of units in group instead. - "Delta-45" - DEFAULT: false
_del - BOOLEAN (OPTIONAL): Delete marker if group is killed. "False" just sets marker colour black when group is killed. - true - DEFAULT: false
_cond - CODE (OPTIONAL): If condition is satisfied, track script will be executed. - {alive player} - DEFAULT: {IP_TESTMODE}
----------
Global Variables: IP_TESTMODE - Needs to be set to true or false.
*/

_this spawn {
	_unit = [_this, 0, player, [objNull]] call BIS_fnc_param;
	_delay = [_this, 1, 5, [0]] call BIS_fnc_param;
	_shape = [_this, 2, "ICON", [""]] call BIS_fnc_param;
	_type = [_this, 3, "mil_dot", [""]] call BIS_fnc_param;
	_color = [_this, 4, ([(side _unit), true] call BIS_fnc_sideColor), [""]] call BIS_fnc_param;
	_text = [_this, 5, false, ["", true]] call BIS_fnc_param;
	_del = [_this, 6, false, [true]] call BIS_fnc_param;
	_cond = [_this, 7, {IP_TESTMODE}, [{}]] call BIS_fnc_param;
	_isBol = (typeName _text == "BOOL");

	if (call _cond) then {
		_marker = createMarker[str _unit, getPos _unit];
		_marker setMarkerShape _shape;
		_marker setMarkerType _type;
		_marker setMarkerColor _color;
		if (!_isBol) then {_marker setMarkerText _text};

		_grp = group _unit;
		while {{alive _x} count (units _grp) > 0} do {
			_leader = leader _grp;
			while {alive _leader} do {
				_marker setMarkerPos getPos _leader;
				sleep _delay;
				if (_isBol) then {_marker setMarkerText format ["%1", (count units _grp)]};
			};
		};

		if (_del) then {
			deleteMarker _marker;
		} else {
			_marker setMarkerColor "ColorBlack";
			if (_isBol) then {_marker setMarkerText ""};
		};
	};
};