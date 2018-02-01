if !(isServer) exitWith {};
params [
	["_logic", ObjNull, []],
	["_syncUnits", [], [[]]],
	["_activated", true, [false]],
	"_side",
	"_baseRadio",
	"_addRadio",
	"_addObjects",
	"_addClasses",
	"_JIP",
	"_allUnits",
	"_addUnits",
	"_processedUnits"
];

_side = switch (_logic getVariable ["Side", "BLUFOR"]) do {
	case "BLUFOR": {west};
	case "OPFOR": {east};
	case "INDEPENDENT": {independent};
	case "CIVILIAN": {civilian};
	default {west};
};

_baseRadio = _logic getVariable ["BaseRadio", "tf_rf7800str"];
_addRadio = _logic getVariable ["AdditionalRadio", ""];
_addObjects = call(compile(_logic getVariable ["AdditionalObjects", "[]"]));
_addClasses = call(compile(_logic getVariable ["AdditionalClasses", "[]"]));
_JIP = _logic getVariable ["JIP", true];
_allUnits = allPlayers - (entities "HeadlessClient_F");
_addUnits = [];
_processedUnits = [];

if ({(typeName _x) != (typeName "")} count (_addObjects + _addClasses) > 0) exitWith {
	["Module STAF Radio Manager: Not all additional units and classes are Strings, exiting..."] call BIS_fnc_error;
};

{
	_unit = missionNamespace getVariable [_x, ObjNull];
	if !(isNull _unit) then {
		_addUnits pushBackUnique _x;
	};
} forEach _addObjects;

{
	_class = typeOf _x;
	if ({_x == _class} count _addClasses > 0) then {
		_addUnits pushBackUnique _x;
	};
} forEach _allUnits;

{
	if ((side _x) == _side) then {
		_params = if (_x in _addUnits) then {
			[_x, _baseRadio, _addRadio] 
		} else {
			[_x, _baseRadio]
		};
		
		_params remoteExecCall ["STAF_fnc_radio", _x, false];
		_processedUnits pushBack _x;
	};
} forEach _allUnits;

if (_JIP) then {
	[_side, _baseRadio, _addRadio, _addUnits, _addObjects, _addClasses, _processedUnits] spawn {
		params [
			"_side",
			"_baseRadio",
			"_addRadio",
			"_addUnits",
			"_addObjects",
			"_addClasses",
			"_processedUnits"
		];
		
		while {true} do {			
			{
				_unit = _x;
				
				if ((side _unit) == _side) then {
					_class = typeOf _unit;				
					_params = if ((_unit in _addUnits) OR ({_x == _class} count _addClasses > 0) OR ({_unit isEqualTo (missionNamespace getVariable [_x, ObjNull])} count _addObjects > 0)) then {
						_unit setVariable ["STAF_BaseRadio", _baseRadio, true];
						_unit setVariable ["STAF_AdditionalRadio", _addRadio, true];
						[_unit, _baseRadio, _addRadio] 
					} else {
						_unit setVariable ["STAF_BaseRadio", _baseRadio, true];
						_unit setVariable ["STAF_AdditionalRadio", "", true];
						[_unit, _baseRadio]
					};
					
					if !(_unit in _processedUnits) then {
						_params remoteExecCall ["STAF_fnc_radio", _unit, false];
						_processedUnits pushBack _unit;
					};
				};
			} forEach (allPlayers - (entities "HeadlessClient_F"));
			
			sleep 10;
		};
	};
};