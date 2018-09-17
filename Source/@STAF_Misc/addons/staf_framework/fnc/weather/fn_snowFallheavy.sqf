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

	//Change Wheater. Diable Rain and adjust the overcast + fog.
	[0,0] remoteExec ["setRain", 2];
	[0,0.75] remoteExec ["setFog", 2];
	[0,1] remoteExec ["setOvercast", 2];
	[0,0.2] remoteExec ["setLightnings", 2];
	[0,0.6] remoteExec ["setWaves", 2];

	//ensuring that the wind is at least +5 or -5 with max being +/- 12 in x and y direction
	_ranx = random[-7,0,7];
	_rany = random[-7,0,7];
	[[if (_ranx >= 0) then {_ranx+5} else {_ranx -5}, if (_rany >= 0) then {_rany+5} else {_rany -5},true]] remoteExec ["setWind", 2];

	remoteExec ["forceWeatherChange", 2];
	[999999,0] remoteExec ["setRain", 2];

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
				_snow setDropInterval 0.00001;
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

		//Change Wheater. Diable Rain and adjust the overcast + fog.
		[0,0] remoteExec ["setRain", 2];
		[0,0] remoteExec ["setFog", 2];
		[0,0] remoteExec ["setOvercast", 2];
		[0,0] remoteExec ["setLightnings", 2];
		[0,0] remoteExec ["setWaves", 2];
		[[0,0, true]] remoteExec ["setWind", 2];
		remoteExec ["forceWeatherChange", 2];
		[999999,0] remoteExec ["setRain", 2];
	};
};

_handle
