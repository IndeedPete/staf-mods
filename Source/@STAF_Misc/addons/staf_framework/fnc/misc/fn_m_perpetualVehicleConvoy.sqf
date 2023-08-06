/*
 * Author: IndeedPete
 * Creates an endless vehicle Convoy
 *
 * Arguments:
 * 0: Vehicle Classes <ARRAY>
 * 1: Start Marker <MARKER>
 * 2: End Marker <MARKER>
 * 2: Vehicle Limit <NUMBER>
 * 3: Max Speed <NUMBER>
 * 4: Minimum Distance <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [["CUP_B_M1A2C_LDF","I_E_APC_tracked_03_cannon_F","I_E_Offroad_01_comms_F"], "ConvoyStart", "ConvoyEnd", 40, 50, 50] call STAF_fnc_m_perpetualVehicleConvoy
 *
 * Example (turn off)
 * IP_RunConvoy = false;
 */

 params [
	"_classes",
	"_startMarker",
	"_endMarker",
	"_vicLimit",
	"_maxSpeed",
	"_minDistance"
];

IP_RunConvoy = true;
 
private _startPos = markerPos _startMarker;
private _startDir = markerDir _startMarker;
private _trgStart = trgStart;
private _endPos = markerPos _endMarker;

private _lastVic = objNull;
while {IP_RunConvoy} do {
	waitUntil{sleep 5; (triggerActivated _trgStart) && {{_x getVariable ["IP_Convoy", false]} count vehicles < _vicLimit}};
	private _spawn = [_startPos, _startDir, (selectRandom _classes), independent] call BIS_fnc_spawnVehicle;
	private _vic = _spawn select 0;
	private _crew = _spawn select 1;
	private _grp = _spawn select 2;

	_vic setVariable ["IP_Convoy", true];
	[_vic, _lastVic, _maxSpeed, _minDistance] spawn {
		params ["_vic", "_lastVic", "_maxSpeed", "_minDistance"];
		while {alive _lastVic} do {
			_speedLimit = if ((_vic distance2D _lastVic) < _minDistance) then {
				(((speed _lastVic) - 5) max 5)
			} else {
				_maxSpeed
			};

			_vic limitSpeed _speedLimit;
			sleep 1;
		};

		_vic limitSpeed _maxSpeed;
	};		

	{_x setCaptive true} forEach ([_vic] + _crew);

	_grp setBehaviourStrong "CARELESS";
	_grp setCombatMode "BLUE";
	_grp move _endPos;

	_lastVic = _vic;
};