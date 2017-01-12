params [["_objs", 0, [[], GrpNull, ObjNull]]];
if (typeName _objs == "GROUP") then {_objs = units _objs};

if (typeName _objs == "OBJECT") then {
	_objs enableSimulationGlobal false;
	_objs hideObjectGlobal true;
} else {
	{
		_x enableSimulationGlobal false;
		_x hideObjectGlobal true;
	} forEach _objs;
};