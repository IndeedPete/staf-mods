//Init
params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

{
	[_x] call STAF_fnc_pmcarsenal;
} forEach _objs;
