/*
Name: monitorLifeSigns
Author: IndeedPete
Purpose: Roughly approximates a unit's life signs based on fatigue, damage, enemies near by and incoming shots. Saves pulse ("STAF_Pulse") and breathing values ("STAF_Breathing") per minute in object's namespace.
----------
Parameters:
player - OBJECT (OPTIONAL): Unit whose life signs should be monitored. - MyUnit - DEFAULT: Player

Returns:
Script handle.
*/
if (!hasInterface) exitWith {};
	
_handle = [] spawn {
	while {alive player} do {
		_fatigue = getFatigue player;
		_damage = damage player;
		_oldPulse = player getVariable ["STAF_Pulse", 80];
		_oldBreathng = player getVariable ["STAF_Breathing", 15];
		_rate = -0.25;

		if (_fatigue > 0) then {_rate = _rate + (_fatigue * 10)};
		if (!isNull(player findNearestEnemy player)) then {_rate = _rate + 0.5};
		if (!isNull(nearestObject [player, "BulletBase"])) then {_rate = _rate + 1};
		if (_damage > 0.7) then {_rate = _rate + 2};

		_pulse = if (_rate > 0) then {
			if ((_oldPulse + _rate) > 160) then {160} else {(_oldPulse + _rate)}
		} else {
			if ((_oldPulse + _rate) < 80) then {80} else {(_oldPulse + _rate)}
		};

		_rate = _rate / 2;
		_breathing = if (_rate > 0) then {
			if ((_oldBreathng + _rate) > 60) then {60} else {(_oldBreathng + _rate)}
		} else {
			if ((_oldBreathng + _rate) < 15) then {15} else {(_oldBreathng + _rate)}
		};

		player setVariable ["STAF_Pulse", _pulse];
		player setVariable ["STAF_Breathing", _breathing];

		sleep 0.5;
	};
};

_handle
