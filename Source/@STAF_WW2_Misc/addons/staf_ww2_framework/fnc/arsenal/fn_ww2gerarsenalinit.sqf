//Init
params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

{
	[_x] call STAF_WW2_fnc_ww2gerarsenal;
} forEach _objs;
