/*
Name: coldBreathTalking
Author: IndeedPete and Moony
Purpose: Simulates cold breath based on given life signs. Modification of a script by Ruebe.
----------
Parameters:
_unit - OBJECT (OPTIONAL): Unit to simulate cold breath while Talking on. - MyUnit - DEFAULT: Player
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
	_strength = 0.1;

	sleep (random 3);

	while {(alive _unit) && {!(isNull _unit)} && {call _condition}} do {
		if (!(simulationEnabled _unit) OR {(vehicle _unit) != _unit} OR {underwater _unit}) then {
			waitUntil {sleep 5; (simulationEnabled _unit) && {(vehicle _unit) == _unit} && {!(underwater _unit)}};
			sleep (random 3);
		};

		if (_unit call TFAR_fnc_isSpeaking) then {
			_source = "logic" createVehicleLocal (getPos _unit);
			_fog = "#particlesource" createVehicleLocal getPos _source;
			_fog setParticleParams [
				["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],
				"",
				"Billboard",
				0.5,
				0.5,
				[0,0,0],
				[0, 0.2, -0.2],
				1, 1.275,	1, 0.2,
				[0, 0.2,0],
				[[1,1,1, _strength], [1,1,1, 0.01], [1,1,1, 0]],
				[1000],
				1,
				0.04,
				"",
				"",
				_source
			];
			_fog setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
			_fog setDropInterval 0.001;
			_source attachTo [_unit, [0,0.15,0], "neck"];

			sleep 0.5;

			deleteVehicle _source;
			deleteVehicle _fog;
		} else {};

		sleep 0.05
	};
};

_handle
