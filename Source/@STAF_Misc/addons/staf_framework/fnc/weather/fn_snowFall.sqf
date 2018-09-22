/*
Name: snowFall
Author: IndeedPete and Moony
Purpose: Creates light snow fall around unit. Also checks if unit is inside a vehicle or building.
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

	while {(alive _unit) && (call _condition)} do {
		_obj = vehicle _unit;
		_pos = if (_obj == _unit) then {
			(getposASL _obj)
		} else {
			_res = getposASL _obj;
			_res set [2, ((_res select 2) + 2)];
			_res
		};

		_switchcase = missionNamespace getVariable "STAF_case_Snow";
		switch (_switchcase) do {

			case "init":
			{
				_unit setVariable ["STAF_Snow_light", ObjNull];
				_unit setVariable ["STAF_Snow_medium", ObjNull];
				_unit setVariable ["STAF_Snow_heavy", ObjNull];
				_unit setVariable ["STAF_Snow_blizzard", ObjNull];
			};

			case "off":
			{
				deleteVehicle (_unit getVariable "STAF_Snow_light");
				deleteVehicle (_unit getVariable "STAF_Snow_medium");
				deleteVehicle (_unit getVariable "STAF_Snow_heavy");
				deleteVehicle (_unit getVariable "STAF_Snow_blizzard");
			};

			case "light":
			{
				deleteVehicle (_unit getVariable "STAF_Snow_medium");
				deleteVehicle (_unit getVariable "STAF_Snow_heavy");
				deleteVehicle (_unit getVariable "STAF_Snow_blizzard");

				if (!(_unit call STAF_fnc_inHouse)) then {
					if (isNull(_unit getVariable ["STAF_Snow_light", ObjNull])) then {
						_snow_light = "#particleSource" createVehicleLocal (getPos _obj);
						_snow_light setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1,0,1,0],"","Billboard",1,10,[0,0,0],[0,0,-10],10,1,0,1,[0.12,0.12],[[1,1,1,0.5],[1,1,1,0.5]],[0,1],0.25,1,"","", _obj];
						_snow_light setParticleRandom [0, [25, 25, 18], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
						_snow_light setParticleCircle [0.0, [0, 0, 0]];
						_snow_light setDropInterval 0.003;
						_unit setVariable ["STAF_Snow_light", _snow_light];
					};
				} else {
					if (!isNull(_unit getVariable ["STAF_Snow_light", ObjNull])) then {
						deleteVehicle (_unit getVariable "STAF_Snow_light");
						_unit setVariable ["STAF_Snow_light", ObjNull];
					};
				};
			};

			case "medium":
			{
				deleteVehicle (_unit getVariable "STAF_Snow_light");
				deleteVehicle (_unit getVariable "STAF_Snow_heavy");
				deleteVehicle (_unit getVariable "STAF_Snow_blizzard");

				if (!(_unit call STAF_fnc_inHouse)) then {
					if (isNull(_unit getVariable ["STAF_Snow_medium", ObjNull])) then {
						_snow_medium = "#particleSource" createVehicleLocal (getPos _obj);
						_snow_medium setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1,0,1,0],"","Billboard",1,10,[0,0,0],[0,0,-10],10,1,0,1,[0.12,0.12],[[1,1,1,0.5],[1,1,1,0.5]],[0,1],0.25,1,"","", _obj];
						_snow_medium setParticleRandom [0, [25, 25, 18], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
						_snow_medium setParticleCircle [0.0, [0, 0, 0]];
						_snow_medium setDropInterval 0.0003;
						_unit setVariable ["STAF_Snow_medium", _snow_medium];
					};
				} else {
					if (!isNull(_unit getVariable ["STAF_Snow_medium", ObjNull])) then {
						deleteVehicle (_unit getVariable "STAF_Snow_medium");
						_unit setVariable ["STAF_Snow_medium", ObjNull];
					};
				};
			};

			case "heavy":
			{
				deleteVehicle (_unit getVariable "STAF_Snow_light");
				deleteVehicle (_unit getVariable "STAF_Snow_medium");
				deleteVehicle (_unit getVariable "STAF_Snow_blizzard");

				if (!(_unit call STAF_fnc_inHouse)) then {
					if (isNull(_unit getVariable ["STAF_Snow_heavy", ObjNull])) then {
						_snow = "#particleSource" createVehicleLocal (getPos _obj);
						_snow setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,10,[0,0,0],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,.35],[1,1,1,0.45]],[1000],0, 0,"","",_obj];
						_snow setParticleCircle [0,[0,0,0]];
						_snow setParticleRandom [0, [30,30, 18], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
						_snow setDropInterval 0.0001;
						_unit setVariable ["STAF_Snow_heavy", _snow];
					};
				} else {
					if (!isNull(_unit getVariable ["STAF_Snow_heavy", ObjNull])) then {
						deleteVehicle (_unit getVariable "STAF_Snow_heavy");
						_unit setVariable ["STAF_Snow_heavy", ObjNull];
					};
				};
			};

			case "blizzard":
			{
				deleteVehicle (_unit getVariable "STAF_Snow_light");
				deleteVehicle (_unit getVariable "STAF_Snow_medium");
				deleteVehicle (_unit getVariable "STAF_Snow_heavy");

				if (!(_unit call STAF_fnc_inHouse)) then {
					if (isNull(_unit getVariable ["STAF_Snow_blizzard", ObjNull])) then {
						_snow = "#particleSource" createVehicleLocal (getPos _obj);
						_snow setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,10,[0,0,0],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,.75],[1,1,1,0.85]],[1000],0, 0,"","",_obj];
						_snow setParticleCircle [0,[0,0,0]];
						_snow setParticleRandom [0, [30,30, 18], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
						_snow setDropInterval 0.00001;
						_unit setVariable ["STAF_Snow_blizzard", _snow];
					};
				} else {
					if (!isNull(_unit getVariable ["STAF_Snow_blizzard", ObjNull])) then {
						deleteVehicle (_unit getVariable "STAF_Snow_blizzard");
						_unit setVariable ["STAF_Snow_blizzard", ObjNull];
					};
				};
			};
		};
	sleep 0.003;
	};
};

_handle
