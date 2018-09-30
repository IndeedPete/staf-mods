/*
Name: coldBreathTalking
Author: IndeedPete and Moony
Purpose: Simulates cold breath based on given life signs. Modification of a script by Ruebe.
----------
Parameters:
player - OBJECT (OPTIONAL): Unit to simulate cold breath while Talking on. - MyUnit - DEFAULT: Player
_condition - CODE (OPTIONAL): While condition that is being checked in addition to (alive player). - {SomeVariable > 0} - DEFAULT: {true}

Returns:
Script handle.
*/
if (!hasInterface) exitWith {};

private ["_condition", "_handle"];
_condition = [_this, 0, {true}, [{}]] call BIS_fnc_param;

_handle = [_condition] spawn {
	_condition = _this select 0;
	_strength = 0.1;
	while {(alive player) && {!(isNull player)} && {call _condition}} do {
		if (!(simulationEnabled player) OR {(vehicle player) != player} OR {underwater player}) then {
			waitUntil {sleep 5; (simulationEnabled player) && {(vehicle player) == player} && {!(underwater player)}};
			sleep (random 3);
		};

		if (player call TFAR_fnc_isSpeaking) then {
			_speaksource = "logic" createVehicleLocal (getPos player);
			_speakfog = "#particlesource" createVehicleLocal getPos _speaksource;
			_speakfog setParticleParams [
				["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],
				"",
				"Billboard",
				0.5,
				0.5,
				[0,0,0],
				[0, 0.2, -0.2],
				1, 1.275,	1, 0.2,
				[0.5,0.7,0.5],
				[[1,1,1, _strength], [1,1,1, 0.3], [1,1,1, 0.3]],
				[1000],
				1,
				0.04,
				"",
				"",
				_speaksource
			];
			_speakfog setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
			_speakfog setDropInterval 0.001;
			_speaksource attachTo [player, [0,0.15,0], "neck"];

			sleep 0.5;

			deleteVehicle _speaksource;
			deleteVehicle _speakfog;
		};

		sleep 0.05
	};
};

_handle
