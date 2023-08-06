// Respawn Equipment

if (STAF_cbaRespawnEquipment) then {
	player setVariable ["STAF_var_Unit_Loadout", (getUnitLoadout player), true];
	player setVariable ["STAF_var_Unit_Loadout_Set", true, true];

	_respawnLoadoutCBAEHid = ["ace_arsenal_displayClosed", {
		_loadout = getUnitLoadout player;
		player setVariable ["STAF_var_Unit_Loadout", _loadout, true];
		player setVariable ["STAF_var_Unit_Loadout_Set", true, true];
	}] call CBA_fnc_addEventHandler;

	missionNamespace setVariable ["STAF_var_RespawnLoadoutCBAEHid", _respawnLoadoutCBAEHid];
};

// Add Zeus Action

_zeusActionEligible = player getVariable ["STAF_var_ZeusActionEligible", false];
_zeusAdmin = ["76561198071715471","76561197980877311","76561197999146691","76561197971387924","76561198063419944","_SP_PLAYER_"]; //Jeromer, Killerfish, Liffy, Moony
_playerUID = getplayerUID player;
_isZeusAdmin = _playerUID in _ZeusAdmin;

if (_zeusActionEligible) exitwith {};

if (_isZeusAdmin) then {
  [player, ["STAF_var_ZeusActionEligible", true, true]] remoteExec ["setVariable", 0, true];
};

_zeusVarNames = ["overlord","demilord"];

if ((vehicleVarName player) in _zeusVarNames) then {
  [player, ["STAF_var_ZeusActionEligible", true, true]] remoteExec ["setVariable", 0, true];
};

// ACE Fortify

/*["acex_fortify_objectPlaced", {

	params ["_unit", "_side", "_object"];

	_side = side _unit;
	_cost = _unit getVariable "STAF_var_fortificationCost";
	_time = _cost * 2;
	_array = [_object, _side, _cost];
	_fortifybox = [];
	
	[_unit, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;

	[
		_time,
		_array,
		{
			params ["_array"];

			_object = _array select 0;
			_side = _array select 1;
			_cost = _array select 2;

			[_player, "", 1] call ace_common_fnc_doAnimation;
			_player setVariable ["STAF_var_fortificationCost", nil];
			
			_object enableSimulationGlobal true;
			true;
		},
		{	
			params ["_array"];

			_object = _array select 0;
			_side = _array select 1;
			_cost = _array select 2;

			[_player, "", 2] call ace_common_fnc_doAnimation;
			_player setVariable ["STAF_var_fortificationCost", nil];
			deleteVehicle _object;

			[_side, _cost, false] call ace_fortify_fnc_updateBudget;
			false;
		},
		"Building Fortification"
	] call ace_common_fnc_progressBar;
}] call CBA_fnc_addEventHandler;*/

[{
    params ["_unit", "_object", "_cost"];

	_side = side _unit;

	_object enableSimulationGlobal false;
	_cost = _unit getVariable "STAF_var_fortificationCost";
	_time = _cost * 2;
	_array = [_object, _side, _cost];
	_fortifybox = [];

	{
		_fortifyBoxCheck = _x getVariable ["STAF_var_isfortifyBox", false];
		if (_fortifyBoxCheck) then {
			_fortifybox pushBack _x;
		};
	} forEach nearestObjects [_unit, [], 20];

	if (count _fortifybox == 0) exitWith {
		["No fortify Box close-by", 2, _unit, 12] call ace_common_fnc_displayTextStructured;
		deleteVehicle _object;
		false;
	};
}] call ace_fortify_fnc_addDeployHandler;

// ACE Carry & Drag
ACE_maxWeightDrag = 1600;
ACE_maxWeightCarry = 1200;