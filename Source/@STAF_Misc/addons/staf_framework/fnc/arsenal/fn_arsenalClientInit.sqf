if (isDedicated) exitWith {};
params [
    ["_config", "defaultConfig.sqf", [""]],
	 ["_boxes", [], [[]]],
    "_params"
];

_params = [] call(compile(preprocessFileLineNumbers(_config)));
{
	_x allowDamage false;
	clearItemCargoGlobal _x;
	clearWeaponCargoGlobal _x; 
	clearMagazineCargoGlobal _x; 
	_x enableSimulationGlobal false;
	
	_data = _params select 1;
	_data set [0, _x];
	_params set [1, _data];
	_params call CHSA_fnc_executeLocalArsenal;
} forEach _boxes;