//Init
params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

{
	[_x] call STAF_Horror_fnc_bsarsenal;
} forEach _objs;
