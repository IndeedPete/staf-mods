/*
Name: monitorLifeSigns
Author: IndeedPete
Purpose: Roughly approximates a unit's life signs based on fatigue, damage, enemies near by and incoming shots. Saves pulse ("IP_Pulse") and breathing values ("IP_Breathing") per minute in object's namespace.
----------
Parameters:
_unit - OBJECT (OPTIONAL): Unit whose life signs should be monitored. - MyUnit - DEFAULT: Player

Returns:
Script handle.
*/

private ["_unit", "_handle"];
_unit = [_this, 0, player, [ObjNull]] call BIS_fnc_param;

if (_unit getVariable ["IP_MonitorLifeSignsRunning", false]) exitWith {["Already running!"] call BIS_fnc_error};
_unit setVariable ["IP_MonitorLifeSignsRunning", true];

_handle = _unit spawn {
	while {alive _this} do {
		_fatigue = getFatigue _this;
		_damage = damage _this;
		_oldPulse = _this getVariable ["IP_Pulse", 80];
		_oldBreathng = _this getVariable ["IP_Breathing", 15];
		_rate = -0.25;
			
		if (_fatigue > 0) then {_rate = _rate + (_fatigue * 10)};
		if (!isNull(_this findNearestEnemy _this)) then {_rate = _rate + 0.5};
		if (!isNull(nearestObject [_this, "BulletBase"])) then {_rate = _rate + 1};
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

		_this setVariable ["IP_Pulse", _pulse];
		_this setVariable ["IP_Breathing", _breathing];
		
		sleep 0.5;
	};
	
	_this setVariable ["IP_MonitorLifeSignsRunning", false];
};