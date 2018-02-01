params [
	["_where", [], [[], ""]],
	["_colours", ["F_40mm_Red", "F_40mm_Green", "F_40mm_White", "F_40mm_Yellow"], [[], ""]],
	["_height", 300, [0]], 
	"_pos", 
	"_class", 
	"_flare"
];

_pos = if (typeName _where == "STRING") then {(getMarkerPos _where)} else {_where};
_class = if (typeName _colours == "STRING") then {_colours} else {(_colours call BIS_fnc_selectRandom)};
_flare = _class createVehicle [(_pos select 0), (_pos select 1), _height];
_flare setVelocity [0, 0, -10];

_flare