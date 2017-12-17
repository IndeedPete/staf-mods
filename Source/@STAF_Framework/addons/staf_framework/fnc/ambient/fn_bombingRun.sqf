params [
	["_anchor", [0, 0, 0], [[], ""]],
	["_radius", 500, [0]],
	["_angle", 0, [0]],
	["_fireAt", "", [""]],
	["_height", 100, [0]],
	["_speed", "FULL", [""]],
	["_class", "B_Plane_CAS_01_F", [""]],
	["_side", west, [west]],
	["_ammo", "Bo_GBU12_LGB_MI10", [""]],
	"_startPos",
	"_endPos",
	"_expDist"
];

_anchorPos = if (typeName _anchor == typeName "") then {getMarkerPos _anchor} else {_anchor};
_startPos = [_anchorPos, _radius, _angle] call BIS_fnc_relPos;
_endPos = [_anchorPos, _radius, ((_angle + 180) mod 360)] call BIS_fnc_relPos;
_veh = [_startPos, _endPos, _height, _speed, _class, _side] call STAF_fnc_ambientFlyBy;
_timeout = time + 60;

if (typeName _veh == typeName ObjNull) then {
	_expDist = (_endPos distance _anchorPos) - 500;
	if (_expDist < 500) then {_expDist = 500};
	waitUntil {(isNull _veh) OR {(_veh distance _endPos) <= _expDist} OR {!(alive _veh)} OR {time > _timeout}};
};

if (_fireAt != "") then {
	_ammo createVehicle (getMarkerPos _fireAt);
};