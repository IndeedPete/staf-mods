params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

_condition = _logic getVariable ["STAF_Module_CreateLight_Choose_Color",-1];

{
	[_x,_condition] call STAF_fnc_light;
} forEach _objs;
