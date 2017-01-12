params [
	["_logic", ObjNull, []],
	["_syncUnits", [], [[]]],
	["_activated", true, [false]],
	"_baseRadio",
	"_addRadio",
	"_groups",
	"_allUnits"
];

if (_syncUnits isEqualTo []) exitWith {
	["Module STAF Radio Manager: No units synchronised, exiting..."] call BIS_fnc_error;
};

_baseRadio = _logic getVariable ["BaseRadio", "tf_rf7800str"];
_addRadio = _logic getVariable ["AdditionalRadio", ""];
_JIP = _logic getVariable ["JIP", true];
_groups = [];
_allUnits = [];

{
	_grp = group _x;
	_groups pushBackUnique _grp;
	
	{
		_allUnits pushBackUnique _x;
	} forEach (units _grp);
} forEach _syncUnits;

{
	_params = if (_x in _syncUnits) then {
		[_x, _baseRadio, _addRadio] 
	} else {
		[_x, _baseRadio]
	};
	
	if (local _x) then {
		_params call STAF_fnc_radio;
	} else {
		_params remoteExecCall ["STAF_fnc_radio", _x, false];
	};
} forEach _allUnits;

if (_JIP) then {
	[_logic, _baseRadio, _addRadio, _groups, _allUnits] spawn {
		params [
			"_logic",
			"_baseRadio",
			"_addRadio",
			"_groups",
			"_allUnits"
		];
		
		while {true} do {			
			{
				if (!(_x in _allUnits) && {(group _x) in _groups}) then {
					_params = if (_x in (synchronizedObjects _logic)) then {
						[_x, _baseRadio, _addRadio] 
					} else {
						[_x, _baseRadio]
					};
					
					_params remoteExecCall ["STAF_fnc_radio", _x, false];
					_allUnits pushBackUnique _x;
				};
			} forEach (allPlayers - (entities "HeadlessClient_F"));
			
			sleep 10;
		};
	};
};