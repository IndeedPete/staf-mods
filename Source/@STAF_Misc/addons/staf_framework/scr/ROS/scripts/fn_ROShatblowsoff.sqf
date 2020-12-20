// Hat blows off - by RickOShay
// This script is called by ROSsandstorm v3.6
// This script may only be used with ROSsandstorm
// null = [this, false] execvm "ROS\scripts\ROShatblowsoff.sqf";

if (!hasInterface) exitWith {};
if (vehicle player != player) exitWith {};

params ["_unit","_debug"];

// set variables for testting when ss not running
if (SStormRunning) then {_debug = _this select 1};
sleep 10 + random 5; // delay required to ensure inside check loop has started

if (_debug) then {hint "Start hats off";};

_constant = 0.001;
_distance = 40 + random 10;
_animate_dist = 10; // for future use
_direction = windDir + (random +5);
_y = getdir _unit;
_p = 0.1;
_r = 0.4;
_HatFound1 = false;
_HatFound2 = false;
_HatFound3 = false;
_HatFound4 = false;
_HatFound5 = false;
_touchdown = false;

_UnitHat = headgear _unit;

//Is he wearing a helmet if so exit
_HatFound1 = ["helmet", _UnitHat] call BIS_fnc_inString;
_HatFound2 = ["shemag", _UnitHat] call BIS_fnc_inString;
_HatFound3 = ["EarProtectors", _UnitHat] call BIS_fnc_inString;
_HatFound4 = ["construction", _UnitHat] call BIS_fnc_inString;
_HatFound5 = ["HeadSet", _UnitHat] call BIS_fnc_inString;

if ((_HatFound1 or _HatFound2 or _HatFound3 or _HatFound4 or _HatFound5 or _UnitHat == "") && _debug) then {
	hint "Wearing unsuitable headgear - exit"; sleep 1;
};
if (_HatFound1 or _HatFound2 or _HatFound3 or _HatFound4 or _HatFound5 or _UnitHat == "") exitWith {};

// Is the wind strong enough if not exit - FOR FUTURE USE
//_Windspeed = sqrt ((wind select 0) ^ 2 + ((wind select 1) ^ 2));
//if (_Windspeed < 11 && _debug) then {hint format ["Wind too slow:%1 - exit",_Windspeed]; sleep 1;};
//if (_Windspeed < 11) exitWith {};

sleep 5 + random 5;

//Chance of hat blowing off is 60 %
_prob = random 1;
if (_prob <= 0.4 && _debug) then {hint format ["Hat prob:%1",_prob]; sleep 1;};
if (_prob <= 0.4) exitWith {};

// Is he inside then exit
if (inBuilding && _debug) then {hint "Inside - exit"; sleep 1;};
if (inVehicle or inBuilding) exitWith {};

_NewHat = _UnitHat;
_initial_pos = [(getpos _unit select 0)+0.3, (getpos _unit select 1)+0.3, (getpos _unit select 2)+1.75];
//_wh = createVehicle [ "weaponHolderSimulated", _initial_pos, [], 0, "CAN_COLLIDE" ];
_wh = "weaponHolderSimulated" createVehiclelocal _initial_pos;
_wh setVectorDirAndUp [[0,0,1],[1,0,0]];
_wh addItemCargo [ _NewHat, 1 ];
_wh enableSimulation false;
_wh hideObject true;

//_wh attachTo [_unit,[0,-0.1,0],"head"];
removeHeadgear _unit;
//detach _wh;
_wh hideObject false;
_initial_pos = [getpos _unit select 0, getpos _unit select 1, (getpos _unit select 2)+1.75];

_increment=0;
while {!isnull _wh && !_touchdown} do
{
	scopeName "loop1";
	_increment= (_increment) +_constant;
	// get 2d posiiton
	_cur_pos = _initial_pos getPos [_increment, _direction];
	// convert to 3d position
	_wh setposATL [_cur_pos select 0,_cur_pos select 1, (_initial_pos select 2)-0.2];
	_y = _y+0.01; _p = _p+0.013; _r = _r+0.01;
	//Rotate hat
	_wh setVectorDirAndUp [
	[ sin _y * cos _p,cos _y * cos _p,sin _p],
	[ [ sin _r,sin _p,cos _r * cos _p],-_y] call BIS_fnc_rotateVector2D]; // vector,angle
	// Stop hat moving
	if (_wh distance _unit >= _distance) then {
		_touchdown = true;
		_wh enableSimulation true;
		breakOut "loop1";
	};
};

// Hat falls to floor
while {getPosATL _wh select 2  < -0.5 && getPosATL _wh select 2 > -0.8} do {
	_wh enableSimulation true;
	sleep 0.001;
	_wh enableSimulation false;
	sleep 0.001;
};

sleep 0.5;
// Remove original hat and create new one close to original
_whpos = [getPos _wh select 0, getPos _wh select 1, -1.35];
_wh1 = createVehicle [ "GroundWeaponHolder", _whpos, [], 0, "CAN_COLLIDE" ];
_wh1 setVectorDirAndUp [[0,0,1],[1,0,0]];
_wh1 addItemCargo [ _NewHat, 1 ];
deleteVehicle _wh;

