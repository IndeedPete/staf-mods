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

	if (!(isNil "STAF_snowFallRunning") && {STAF_snowFallRunning}) exitWith {["Already running!"] call BIS_fnc_error};
	STAF_snowFallRunning = true;

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
			if (isNull(_unit getVariable ["STAF_Snow_front", ObjNull]) && isNull(_unit getVariable ["STAF_Snow_rear", ObjNull]) && isNull(_unit getVariable ["STAF_Snow_parent", ObjNull]) && isNull(_unit getVariable ["STAF_Snow_left", ObjNull]) && isNull(_unit getVariable ["STAF_Snow_right", ObjNull]) && isNull(_unit getVariable ["STAF_Snow", ObjNull])) then {
				_heavy_front = "#particleSource" createVehicleLocal (getPos _obj);
				_heavy_front setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,8,[0,30,8],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,.15],[1,1,1,0.25]],[1000],0, 0,"","",_obj];
				_heavy_front setParticleCircle [0,[0,0,0]];
				_heavy_front setParticleRandom [0, [30,0, 8], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
				_heavy_front setDropInterval 0.001;

				_heavy_parent = "#particleSource" createVehicleLocal (getPos _obj);
				_heavy_parent setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,5,[0,15,8],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,.15],[1,1,1,0.15]],[1000],0, 0,"","",_obj];
				_heavy_parent setParticleCircle [0,[0,0,0]];
				_heavy_parent setParticleRandom [0, [25,0,8], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
				_heavy_parent setDropInterval 0.001;

				_heavy_rear = "#particleSource" createVehicleLocal (getPos _obj);
				_heavy_rear setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,5,[0,-10,8],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,0],[1,1,1,0.15]],[1000],0, 0,"","",_obj]; // pos was -5, try -10
				_heavy_rear setParticleCircle [0,[0,0,0]];
				_heavy_rear setParticleRandom [0, [15,12, 6], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
				_heavy_rear setDropInterval 0.001;

				_heavy_right = "#particleSource" createVehicleLocal (getPos _obj);
				_heavy_right setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,5,[20,0,8],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,0],[1,1,1,0.25]],[1000],0, 0,"","",_obj];
				_heavy_right setParticleCircle [0,[0,0,0]];
				_heavy_right setParticleRandom [0, [20,15, 4], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
				_heavy_right setDropInterval 0.001;

				_heavy_left = "#particleSource" createVehicleLocal (getPos _obj);
				_heavy_left setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,5,[-20,0,8],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,0],[1,1,1,0.25]],[1000],0, 0,"","",_obj];
				_heavy_left setParticleCircle [0,[0,0,0]];
				_heavy_left setParticleRandom [0, [20,15, 4], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
				_heavy_left setDropInterval 0.001;

				_unit setVariable ["STAF_Snow_front", _heavy_front];
				_unit setVariable ["STAF_Snow_parent", _heavy_parent];
				_unit setVariable ["STAF_Snow_rear", _heavy_rear];
				_unit setVariable ["STAF_Snow_right", _heavy_right];
				_unit setVariable ["STAF_Snow_left", _heavy_left];
			};
		} else {
			if (!isNull(_unit getVariable ["STAF_Snow_front", ObjNull])) then {
				deleteVehicle (_unit getVariable "STAF_Snow_front");
				_unit setVariable ["STAF_Snow_front", ObjNull];
			};
			if (!isNull(_unit getVariable ["STAF_Snow_parent", ObjNull])) then {
				deleteVehicle (_unit getVariable "STAF_Snow_parent");
				_unit setVariable ["STAF_Snow_parent", ObjNull];
			};
			if (!isNull(_unit getVariable ["STAF_Snow_rear", ObjNull])) then {
				deleteVehicle (_unit getVariable "STAF_Snow_rear");
				_unit setVariable ["STAF_Snow_rear", ObjNull];
			};
			if (!isNull(_unit getVariable ["STAF_Snow_right", ObjNull])) then {
				deleteVehicle (_unit getVariable "STAF_Snow_right");
				_unit setVariable ["STAF_Snow_right", ObjNull];
			};
			if (!isNull(_unit getVariable ["STAF_Snow_left", ObjNull])) then {
				deleteVehicle (_unit getVariable "STAF_Snow_left");
				_unit setVariable ["STAF_Snow_left", ObjNull];
			};
			if (!isNull(_unit getVariable ["STAF_Snow", ObjNull])) then {
				deleteVehicle (_unit getVariable "STAF_Snow");
				_unit setVariable ["STAF_Snow", ObjNull];
			};
		};
		sleep 1;
	};

	STAF_snowFallRunning = false;
	if (!isNull(_unit getVariable ["STAF_Snow_front", ObjNull])) then {
		deleteVehicle (_unit getVariable "STAF_Snow_front");
		_unit setVariable ["STAF_Snow_front", ObjNull];
	};
	if (!isNull(_unit getVariable ["STAF_Snow_parent", ObjNull])) then {
		deleteVehicle (_unit getVariable "STAF_Snow_parent");
		_unit setVariable ["STAF_Snow_parent", ObjNull];
	};
	if (!isNull(_unit getVariable ["STAF_Snow_rear", ObjNull])) then {
		deleteVehicle (_unit getVariable "STAF_Snow_rear");
		_unit setVariable ["STAF_Snow_rear", ObjNull];
	};
	if (!isNull(_unit getVariable ["STAF_Snow_right", ObjNull])) then {
		deleteVehicle (_unit getVariable "STAF_Snow_right");
		_unit setVariable ["STAF_Snow_right", ObjNull];
	};
	if (!isNull(_unit getVariable ["STAF_Snow_left", ObjNull])) then {
		deleteVehicle (_unit getVariable "STAF_Snow_left");
		_unit setVariable ["STAF_Snow_left", ObjNull];
	};
	if (!isNull(_unit getVariable ["STAF_Snow", ObjNull])) then {
		deleteVehicle (_unit getVariable "STAF_Snow");
		_unit setVariable ["STAF_Snow", ObjNull];
	};
};

_handle
