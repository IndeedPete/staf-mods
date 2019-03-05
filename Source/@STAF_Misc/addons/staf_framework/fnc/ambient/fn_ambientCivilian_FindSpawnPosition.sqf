private ["_minSpawnDistance", "_playerBuildings", "_blackListMarkers"];
private ["_playerPositions", "_tries", "_positionFound", "_foundPosition", "_buildingPosCount", "_building", "_tooClose", "_buildingPosNo", "_playerBuilding"];

_minSpawnDistance = _this select 0;
_playerBuildings = _this select 1;
_blackListMarkers = _this select 2;

_playerPositions = call STAF_fnc_ambientCivilian_GetAllPlayersPositions;

_tries = 0;
_positionFound = false;
_foundPosition = [];

while { count _playerBuildings > 0 && !_positionFound && _tries < 10 } do {
	_tries = _tries + 1;
	_playerBuilding = _playerBuildings select floor random count _playerBuildings;
	_building = _playerBuilding select 0;
	_buildingPosCount = _playerBuilding select 1;

	//_buildingPosCount = [_building] call STAF_fnc_ambientCivilian_CountPositionsInBuilding;

	if (_buildingPosCount > 0) then {
		_buildingPosNo = floor random _buildingPosCount;

		_tooClose = false;
		if (time > 5) then {
			{
				if (_x distance _building < _minSpawnDistance) then {
					_tooClose = true;
				};
			} foreach _playerPositions;
		};

		if (!_tooClose) then {
			if (!([getPos _building, _blackListMarkers] call STAF_fnc_ambientCivilian_PositionInsideBlackMarker)) then {
				_foundPosition = _building buildingPos _buildingPosNo;
				_positionFound = true;
			};
		};
	};
};

_foundPosition
