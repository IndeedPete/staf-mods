//Init
params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

{
	[_x] call STAF_fnc_ww2usaarsenal;
} forEach _objs;