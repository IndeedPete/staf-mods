params [
	["_objs", [], [[], GrpNull, ObjNull]],
	["_setAllowDamage", false, [true]]
];

if ((typeName _objs) == (typeName GrpNull)) then {
	_objs = units _objs;
};

if ((typeName _objs) == (typeName ObjNull)) then {
	_objs = [_objs];
};

{
	if (_setAllowDamage) then {
		_x allowDamage false;
	};
	
	_x enableSimulationGlobal false;
	_x hideObjectGlobal true;
	true
} count _objs;