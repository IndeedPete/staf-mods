private ["_allPlayerPositions", "_maxSpawnDistance", "_blackListMarkers"];
private ["_playerBuildings", "_buildings", "_playerBuildingsTemp", "_buildingPosCount"];

_allPlayerPositions = _this select 0;
_maxSpawnDistance = _this select 1;
_blackListMarkers = _this select 2;

_playerBuildings = [];
_allPlayerPositions = call STAF_fnc_ambientCivilian_GetAllPlayersPositions;

{
	_buildings = nearestObjects [_x, ["house"], _maxSpawnDistance];
	sleep 0.01;
	_buildings = _buildings - _playerBuildings;
	sleep 0.01;
	_playerBuildings = _playerBuildings + _buildings;
	sleep 0.01;
} foreach _allPlayerPositions;

// Remove all buildings that have no positions or are inside blacklist markers
_playerBuildingsTemp = [];
{
	_buildingPosCount = [_x] call STAF_fnc_ambientCivilian_CountPositionsInBuilding;

	if (_buildingPosCount > 0) then {
		if (!([getPos _x, _blackListMarkers] call STAF_fnc_ambientCivilian_PositionInsideBlackMarker)) then {
			_playerBuildingsTemp pushBack [_x, _buildingPosCount];
		};
	}
} foreach _playerBuildings;

//	hint str count _playerBuildingsTemp;

//	{
//		[str getPos (_x select 0), getPos (_x select 0), "mil_dot", "ColorYellow", ""] call STAF_fnc_ambientCivilian_SetDebugMarkerAllClients;
//	} foreach _playerBuildingsTemp;

_playerBuildingsTemp
