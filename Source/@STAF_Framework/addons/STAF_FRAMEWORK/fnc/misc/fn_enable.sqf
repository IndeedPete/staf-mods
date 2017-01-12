params [["_objs", 0, [[], GrpNull, ObjNull]]];
if (typeName _objs == "GROUP") then {_objs = units _objs};

if (typeName _objs == "OBJECT") then {
	_objs enableSimulationGlobal true;
	_objs hideObjectGlobal false;
} else {
	{
		_x enableSimulationGlobal true;
		_x hideObjectGlobal false;
	} forEach _objs;
};