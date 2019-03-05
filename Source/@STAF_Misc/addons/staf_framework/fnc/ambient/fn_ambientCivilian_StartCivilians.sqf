private ["_unitClasses", "_unitsPerBuilding", "_maxGroupsCount", "_minSpawnDistance", "_maxSpawnDistance", "_blackListMarkers", "_hideBlacklistMarkers", "_fnc_OnSpawnCallback", "_fnc_OnRemoveCallback", "_debug", "_spawn_rate"];
private ["_side", "_minSkill", "_maxSkill", "_unit", "_unitsCount"];
private ["_civilianItems", "_civilianItemsTemp"];
private ["_spawnUnit", "_allPlayerPositions", "_playerBuildings"];

_unitClasses = [_this, "UNIT_CLASSES", ["C_man_1", "C_man_1_1_F", "C_man_1_2_F", "C_man_1_3_F", "C_man_polo_1_F", "C_man_polo_1_F_afro", "C_man_polo_1_F_euro", "C_man_polo_1_F_asia", "C_man_polo_2_F", "C_man_polo_2_F_afro", "C_man_polo_2_F_euro", "C_man_polo_2_F_asia", "C_man_polo_3_F", "C_man_polo_3_F_afro", "C_man_polo_3_F_euro", "C_man_polo_3_F_asia", "C_man_polo_4_F", "C_man_polo_4_F_afro", "C_man_polo_4_F_euro", "C_man_polo_4_F_asia", "C_man_polo_5_F", "C_man_polo_5_F_afro", "C_man_polo_5_F_euro", "C_man_polo_5_F_asia", "C_man_polo_6_F", "C_man_polo_6_F_afro", "C_man_polo_6_F_euro", "C_man_polo_6_F_asia", "C_man_p_fugitive_F", "C_man_p_fugitive_F_afro", "C_man_p_fugitive_F_euro", "C_man_p_fugitive_F_asia", "C_man_p_beggar_F", "C_man_p_beggar_F_afro", "C_man_p_beggar_F_euro", "C_man_p_beggar_F_asia", "C_man_w_worker_F", "C_scientist_F", "C_man_hunter_1_F", "C_man_p_shorts_1_F", "C_man_p_shorts_1_F_afro", "C_man_p_shorts_1_F_euro", "C_man_p_shorts_1_F_asia", "C_man_shorts_1_F", "C_man_shorts_1_F_afro", "C_man_shorts_1_F_euro", "C_man_shorts_1_F_asia", "C_man_shorts_2_F", "C_man_shorts_2_F_afro", "C_man_shorts_2_F_euro", "C_man_shorts_2_F_asia", "C_man_shorts_3_F", "C_man_shorts_3_F_afro", "C_man_shorts_3_F_euro", "C_man_shorts_3_F_asia", "C_man_shorts_4_F", "C_man_shorts_4_F_afro", "C_man_shorts_4_F_euro", "C_man_shorts_4_F_asia", "C_Orestes", "C_Nikos", "C_Nikos_aged"]] call STAF_fnc_ambientCivilian_GetParamValue;
_unitsPerBuilding = [_this, "UNITS_PER_BUILDING", 0.1] call STAF_fnc_ambientCivilian_GetParamValue;
_maxGroupsCount = [_this, "MAX_GROUPS_COUNT", 100] call STAF_fnc_ambientCivilian_GetParamValue;
_minSpawnDistance = [_this, "MIN_SPAWN_DISTANCE", 100] call STAF_fnc_ambientCivilian_GetParamValue;
_maxSpawnDistance = [_this, "MAX_SPAWN_DISTANCE", 500] call STAF_fnc_ambientCivilian_GetParamValue;
_blackListMarkers = [_this, "BLACKLIST_MARKERS", []] call STAF_fnc_ambientCivilian_GetParamValue;
_hideBlacklistMarkers = [_this, "HIDE_BLACKLIST_MARKERS", true] call STAF_fnc_ambientCivilian_GetParamValue;
_fnc_OnSpawnCallback = [_this, "ON_UNIT_SPAWNED_CALLBACK", {}] call STAF_fnc_ambientCivilian_GetParamValue;
_fnc_OnRemoveCallback = [_this, "ON_UNIT_REMOVE_CALLBACK", { true }] call STAF_fnc_ambientCivilian_GetParamValue;
_debug = [_this, "DEBUG", false] call STAF_fnc_ambientCivilian_GetParamValue;
_spawn_rate = [_this, "SPAWN_RATE", 3] call STAF_fnc_ambientCivilian_GetParamValue;

if (_hideBlacklistMarkers) then {
	{
		_x setMarkerAlpha 0;
	} foreach _blackListMarkers;
};

_side = STAF_ambientCivilian_SIDE;
_minSkill = STAF_ambientCivilian_MINSKILL;
_maxSkill = STAF_ambientCivilian_MAXSKILL;

_spawnUnit = {
	private ["_side", "_minSpawnDistance", "_unitClasses", "_playerBuildings", "_blackListMarkers", "_fnc_OnSpawnCallback"];
	private ["_pos", "_unit", "_group"];

	_side = _this select 0;
	_minSpawnDistance = _this select 1;
	_unitClasses = _this select 2;
	_playerBuildings = _this select 3;
	_blackListMarkers = _this select 4;
	_fnc_OnSpawnCallback = _this select 5;

	_pos = [_minSpawnDistance, _playerBuildings, _blackListMarkers] call STAF_fnc_ambientCivilian_FindSpawnPosition;
	_unit = objNull;

	if (count _pos > 0) then {
		_group = createGroup _side;
		_unit = _group createUnit [_unitClasses select floor random count _unitClasses, [0, 0, 100], [], random 360, "FORM"];

		STAF_ambientCivilian_INSTANCE_NO = STAF_ambientCivilian_INSTANCE_NO + 1;
		_unit setVehicleVarName "ENGIMA_CIVILIAN_UNIT_" + str STAF_ambientCivilian_INSTANCE_NO;

					doStop _unit;
					_unit setPos _pos;

		[_unit] spawn _fnc_OnSpawnCallback;
	};

	_unit
};

sleep 0.5;

_civilianItems = []; // Items of type [unit, behaviour, destination pos, last pos, isMoving, nextActionTime, isRunning].

while {missionNamespace getVariable ["STAF_AmbientCivilian_active",true]} do {

	_allPlayerPositions = call STAF_fnc_ambientCivilian_GetAllPlayersPositions;
	_playerBuildings = [_allPlayerPositions, _maxSpawnDistance, _blackListMarkers] call STAF_fnc_ambientCivilian_GetPlayerBuildings;
	_unitsCount = ceil (_unitsPerBuilding * count _playerBuildings);
	if (_unitsCount > _maxGroupsCount) then {
		_unitsCount = _maxGroupsCount;
	};

	if (count _civilianItems < _unitsCount) then {

		_unit = [_side, _minSpawnDistance, _unitClasses, _playerBuildings, _blackListMarkers, _fnc_OnSpawnCallback] call _spawnUnit;
		if (!isNull _unit) then {
			_unit setSkill _minSkill + random (_maxSkill - _minSkill);
			_civilianItems pushBack [_unit, "CITIZEN", [], getPos _unit, false, time, random 1 < STAF_ambientCivilian_RUNNINGCHANCE];
		};

		sleep 0.1;
	};

	_civilianItemsTemp = [];
	{
		private ["_civilian"];
		private ["_tooClose", "_removeUnit", "_group"];

		_civilian = _x select 0;
		_tooClose = false;

		{
			if (_x distance _civilian < _maxSpawnDistance) then {
				_tooClose = true;
			};
		} foreach _allPlayerPositions;

		if (_tooClose) then {
			_civilianItemsTemp pushBack _x;
		}
		else {
			_removeUnit = [_civilian] call _fnc_OnRemoveCallback;

			if (isNil "_removeUnit") then {
				_removeUnit = true;
			};

			if (typeName _removeUnit != "BOOL") then {
				_removeUnit = true;
			};

			if (!_removeUnit) then {
				_civilianItemsTemp pushBack _x;
			}
			else {
				_group = group _civilian;
				[vehicleVarName _civilian] call STAF_fnc_ambientCivilian_DeleteDebugMarkerAllClients;
				deleteVehicle _civilian;
				deleteGroup _group;
			};
		};

		sleep 0.01;
	} foreach _civilianItems;

	_civilianItems = _civilianItemsTemp;

	{
		private ["_unit", "_behaviour", "_destinationPos", "_lastPos", "_isMoving", "_nextActionTime", "_isRunning"];
		private ["_destPos"];

		_unit = _x select 0;
		_behaviour = _x select 1;
		_destinationPos = _x select 2;
		_lastPos = _x select 3;
		_isMoving = _x select 4;
		_nextActionTime = _x select 5;
		_isRunning = _x select 6;

		// If civilian has reached its destination
		if (_isMoving && _lastPos distance getPos _unit < 1) then {
			_isMoving = false;
			_nextActionTime = time + random STAF_ambientCivilian_MAXWAITINGTIME;

			_x set [4, _isMoving]; // Set isMoving = false
			_x set [5, _nextActionTime]; // Next action time

			(group _unit) setFormDir random 360;
		};

		// If it is time for civilian to move
		if (!_isMoving && time > _nextActionTime) then {

			_destPos = [_unit, _blackListMarkers, _maxSpawnDistance] call STAF_fnc_ambientCivilian_FindDestinationPosition;
			if (count _destPos > 0) then {
				_unit doMove _destPos;
				_unit setBehaviour "SAFE";

				_destinationPos = _destPos;
				_isMoving = true;
				_isRunning = random 1 < STAF_ambientCivilian_RUNNINGCHANCE;

				_x set [3, _destinationPos]; // Set destinationPos
				_x set [4, _isMoving]; // Set isMoving
				_x set [6, _isRunning]; // Set isRunning
			};
		};

		if (_isRunning) then {
			_unit setSpeedMode "NORMAL";
		}
		else {
			_unit setSpeedMode "LIMITED";
		};

		_x set [3, getPos _unit];

		if (_debug) then {
			[vehicleVarName _unit, getPos _unit, "mil_dot", "ColorWhite", "Civ"] call STAF_fnc_ambientCivilian_SetDebugMarkerAllClients;
		};

	} foreach _civilianItems;

	sleep _spawn_rate;
};
