/*
Name: snowFall
Author: IndeedPete
Purpose: Creates light snow fall around unit. Also checks if unit is inside a vehicle or building / under a roof.
----------
Parameters:
_unit - OBJECT (OPTIONAL): Unit to simulate snow around. - MyUnit - DEFAULT: Player
_condition - CODE (OPTIONAL): While condition that is being checked in addition to (alive _unit). - {SomeVariable > 0} - DEFAULT: {true}

Returns:
Script handle.
*/

private ["_unit", "_condition", "_handle"];
_unit = [_this, 0, player, [ObjNull]] call BIS_fnc_param;
_condition = [_this, 1, {true}, [{}]] call BIS_fnc_param;

_handle = [_unit, _condition] spawn {
	_unit = _this select 0;
	_condition = _this select 1;

	if (!(isNil "IP_snowFallRunning") && {IP_snowFallRunning}) exitWith {["Already running!"] call BIS_fnc_error};
	IP_snowFallRunning = true;

	while {(alive _unit) && (call _condition)} do {
		_obj = vehicle _unit;
		_pos = if (_obj == _unit) then {
			(getposASL _obj)
		} else {
			_res = getposASL _obj;
			_res set [2, ((_res select 2) + 2)];
			_res
		};

		if (count(lineIntersectsObjs [_pos, [(_pos select 0),(_pos select 1),((_pos select 2) + 20)]]) == 0) then {
			if (isNull(_unit getVariable ["IP_Snow", ObjNull])) then {
				_snow = "#particleSource" createVehicleLocal (getPos _obj);
				_snow setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1,0,1,0],"","Billboard",1,10,[0,0,0],[0,0,-10],10,1,0,1,[0.12,0.12],[[1,1,1,0.5],[1,1,1,0.5]],[0,1],0.25,1,"","", _obj];
				_snow setParticleRandom [0, [25, 25, 18], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
				_snow setParticleCircle [0.0, [0, 0, 0]];
				_snow setDropInterval 0.003;
				_unit setVariable ["IP_Snow", _snow];
			};
		} else {
			if (!isNull(_unit getVariable ["IP_Snow", ObjNull])) then {
				deleteVehicle (_unit getVariable "IP_Snow");
				_unit setVariable ["IP_Snow", ObjNull];
			};
		};
		sleep 0.03;
	};

	IP_snowFallRunning = false;
	if (!isNull(_unit getVariable ["IP_Snow", ObjNull])) then {
		deleteVehicle (_unit getVariable "IP_Snow");
		_unit setVariable ["IP_Snow", ObjNull];
	};
};

_handle
