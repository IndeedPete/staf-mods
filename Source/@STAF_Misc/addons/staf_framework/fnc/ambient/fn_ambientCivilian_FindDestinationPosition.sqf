private ["_civilian", "_blackListMarkers", "_maxSpawnDistance"];
private ["_tries", "_positionFound", "_foundPosition", "_buildingPosCount", "_buildings", "_building", "_buildingPosNo", "_unitPos"];

_civilian = _this select 0;
_blackListMarkers = _this select 1;
_maxSpawnDistance = _this select 2;

_foundPosition = [];
_tries = 0;
_positionFound = false;
_unitPos = getPosAtl _civilian;

if (random 100 > 50) then {
	// Pick a building
	_buildings = nearestObjects [_unitPos, ["house"], _maxSpawnDistance];

	while { count _buildings > 0 && !_positionFound && _tries < 10 } do {
		_tries = _tries + 1;

		_building = _buildings select floor random count _buildings;
		_buildingPosCount = [_building] call STAF_fnc_ambientCivilian_CountPositionsInBuilding;

		if (_buildingPosCount > 0) then {
			if (!([getPos _building, _blackListMarkers] call STAF_fnc_ambientCivilian_PositionInsideBlackMarker)) then {
				_buildingPosNo = floor random _buildingPosCount;
				_foundPosition = _building buildingPos _buildingPosNo;
				_positionFound = true;
			};
		};
	};
}
else {
	private ["_distance", "_angle", "_x", "_y", "_pos"];

	while { !_positionFound && _tries < 10 } do {
		_tries = _tries + 1;

		_distance = random 200;
		_angle = random 360;
		_x = _distance * cos _angle;
		_y = _distance * sin _angle;

		_pos = [(_unitPos select 0) + _x, (_unitPos select 1) + _y];
		if (!isOnRoad _pos && !surfaceIsWater _pos && !([_pos, _blackListMarkers] call STAF_fnc_ambientCivilian_PositionInsideBlackMarker)) then {
			_foundPosition = _pos;
			_positionFound = true;
		};
	};
};

_foundPosition
