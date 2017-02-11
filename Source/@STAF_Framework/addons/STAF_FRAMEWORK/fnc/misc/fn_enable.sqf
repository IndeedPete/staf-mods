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
	_x enableSimulationGlobal true;
	_x hideObjectGlobal false;
	
	if (_setAllowDamage) then {
		_x allowDamage true;
	};
	
	true
} count _objs;