["acex_fortify_objectPlaced", {

	params ["_unit", "_side", "_object"];

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
	} forEach nearestObjects [_unit, [], 10];

	if (count _fortifybox == 0) exitWith {
		["No fortify Box close-by", 2, _unit, 12] call ace_common_fnc_displayTextStructured;
		deleteVehicle _object;
		_newBudget= (missionNamespace getVariable [format ["ACEX_fortify_Budget_%1", _side], -1]) + _cost;
		missionNamespace setVariable [format ["ACEX_fortify_Budget_%1", _side], _newBudget];
		false;
	};

	if (count _fortifybox > 0) then {
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


				_newBudget= (missionNamespace getVariable [format ["ACEX_fortify_Budget_%1", _side], -1]) + _cost;
				missionNamespace setVariable [format ["ACEX_fortify_Budget_%1", _side], _newBudget];
				false;
			},
			"Building Fortification"
		] call ace_common_fnc_progressBar;
	};
}] call CBA_fnc_addEventHandler;

["acex_fortify_onDeployStart", {

	params ["_unit", "_object", "_cost"];

	_object enableSimulationGlobal false;
	_unit setVariable ["STAF_var_fortificationCost", _cost];
}] call CBA_fnc_addEventHandler;