params ["_obj"];

_driver = driver _obj;

if (isNil _driver) exitWith {[objNull, "VEHICLE NEEDS A DRIVER"] call BIS_fnc_showCuratorFeedbackMessage;};

_deadmansDeadEH = _driver addEventHandler ["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];

	_bomb = "Bo_GBU12_LGB" createVehicle (getPos _obj);
	_obj setDamage 100;
}];

_deadmansUnconciousEH = 

