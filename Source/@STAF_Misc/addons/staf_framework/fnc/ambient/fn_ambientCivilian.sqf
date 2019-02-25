params [
  ["_logic", ObjNull,[ObjNull]],
	["_vehicle", [], [[]]],
  ["_activated",true ,[true]]
];

// Choose which Civilians

_ac_debug = _logic getVariable ["STAF_Module_AmbientCivilian_debug",false];
_ac_type = _logic getVariable "STAF_Module_AmbientCivilian_type";
_ac_typestr = str _ac_type;
_ac_perbuilding = _logic getVariable ["STAF_Module_AmbientCivilian_perBuilding", 0.1];
_ac_maxcount = _logic getVariable ["STAF_Module_AmbientCivilian_maxCount", 100];
_ac_rate = _logic getVariable ["STAF_Module_AmbientCivilian_rate", 3];
_ac_minspawn = _logic getVariable ["STAF_Module_AmbientCivilian_minSpawn", 50];
_ac_maxspawn = _logic getVariable ["STAF_Module_AmbientCivilian_maxSpawn", 500];
_ac_blacklist = _logic getVariable "STAF_Module_AmbientCivilian_blacklist";
_ac_hide = _logic getVariable ["STAF_Module_AmbientCivilian_hide", true];

_ac_Afghan = ["CFP_C_AFG_Civilian_02","CFP_C_AFG_Civilian_01"];
_ac_African_christ = ["CFP_C_AFRCHRISTIAN_Civ_1_01","CFP_C_AFRCHRISTIAN_Civ_2_01","CFP_C_AFRCHRISTIAN_Civ_3_01","CFP_C_AFRCHRISTIAN_Civ_4_01","CFP_C_AFRCHRISTIAN_Civ_5_01","CFP_C_AFRCHRISTIAN_Civ_6_01","CFP_C_AFRCHRISTIAN_Civ_7_01","CFP_C_AFRCHRISTIAN_Civ_8_01","CFP_C_AFRCHRISTIAN_Civ_9_01","CFP_C_AFRCHRISTIAN_Civ_10_01","CFP_C_AFRCHRISTIAN_Civ_11_01","CFP_C_AFRCHRISTIAN_Civ_12_01","CFP_C_AFRCHRISTIAN_Civ_13_01","CFP_C_AFRCHRISTIAN_Civ_14_01"];
_ac_African_islam = ["CFP_C_AFRISLAMIC_Civ_1_01","CFP_C_AFRISLAMIC_Civ_2_01","CFP_C_AFRISLAMIC_Civ_3_01","CFP_C_AFRISLAMIC_Civ_4_01","CFP_C_AFRISLAMIC_Civ_5_01","CFP_C_AFRISLAMIC_Civ_6_01","CFP_C_AFRISLAMIC_Civ_7_01","CFP_C_AFRISLAMIC_Civ_8_01","CFP_C_AFRISLAMIC_Civ_9_01","CFP_C_AFRISLAMIC_Civ_10_01","CFP_C_AFRISLAMIC_Civ_11_01","CFP_C_AFRISLAMIC_Civ_12_01"];
_ac_Asian = ["CFP_C_ASIA_Civ_1_01","CFP_C_ASIA_Civ_2_01","CFP_C_ASIA_Civ_3_01","CFP_C_ASIA_Civ_4_01","CFP_C_ASIA_Civ_5_01","CFP_C_ASIA_Civ_6_01","CFP_C_ASIA_Civ_7_01","CFP_C_ASIA_Civ_8_01","CFP_C_ASIA_Civ_9_01","CFP_C_ASIA_Civ_10_01","CFP_C_ASIA_Civ_11_01","CFP_C_ASIA_Civ_12_01"];
_ac_European = ["C_man_p_beggar_F_euro","C_Man_casual_1_F_euro","C_Man_casual_2_F_euro","C_Man_casual_3_F_euro","C_Man_sport_1_F_euro","C_Man_sport_2_F_euro","C_Man_sport_3_F_euro","C_Man_casual_4_F_euro","C_Man_casual_5_F_euro","C_Man_casual_6_F_euro","C_Man_polo_1_F_euro","C_Man_polo_2_F_euro","C_Man_polo_3_F_euro","C_Man_polo_4_F_euro","C_Man_polo_5_F_euro","C_Man_polo_6_F_euro","C_Man_shorts_1_F_euro","C_Man_p_fugitive_F_euro"];
_ac_Middle_Eastern = ["CFP_C_ME_Civ_2_01","CFP_C_ME_Civ_1_01"];
_ac_Russian = ["CUP_C_R_Assistant_01","CUP_C_R_Citizen_02","CUP_C_R_Citizen_01","CUP_C_R_Citizen_04","CUP_C_R_Citizen_03","CUP_C_R_Functionary_01","CUP_C_R_Functionary_02","CUP_C_R_Worker_05","CUP_C_R_Mechanic_02","CUP_C_R_Mechanic_03","CUP_C_R_Mechanic_01","CUP_C_R_Profiteer_02","CUP_C_R_Profiteer_03","CUP_C_R_Profiteer_04","CUP_C_R_Rocker_01","CUP_C_R_Rocker_03","CUP_C_R_Rocker_02","CUP_C_R_Rocker_04","CUP_C_R_Schoolteacher_01","CUP_C_R_Villager_01","CUP_C_R_Villager_04","CUP_C_R_Villager_02","CUP_C_R_Villager_03","CUP_C_R_Woodlander_01","CUP_C_R_Woodlander_02","CUP_C_R_Woodlander_03","CUP_C_R_Woodlander_04","CUP_C_R_Worker_03","CUP_C_R_Worker_04","CUP_C_R_Worker_02","CUP_C_R_Worker_01"];
_ac_Takistan = ["CUP_C_TK_Man_04","CUP_C_TK_Man_04_Jack","CUP_C_TK_Man_04_Waist","CUP_C_TK_Man_07","CUP_C_TK_Man_07_Coat","CUP_C_TK_Man_07_Waist","CUP_C_TK_Man_08","CUP_C_TK_Man_08_Jack","CUP_C_TK_Man_08_Waist","CUP_C_TK_Man_05_Coat","CUP_C_TK_Man_05_Jack","CUP_C_TK_Man_05_Waist","CUP_C_TK_Man_06_Coat","CUP_C_TK_Man_06_Jack","CUP_C_TK_Man_06_Waist","CUP_C_TK_Man_02","CUP_C_TK_Man_02_Jack","CUP_C_TK_Man_02_Waist","CUP_C_TK_Man_01_Waist","CUP_C_TK_Man_01_Coat","CUP_C_TK_Man_01_Jack","CUP_C_TK_Man_03_Coat","CUP_C_TK_Man_03_Jack","CUP_C_TK_Man_03_Waist"];
_ac_Tanoan = ["C_Man_casual_1_F_tanoan","C_Man_casual_2_F_tanoan","C_Man_casual_3_F_tanoan","C_Man_sport_1_F_tanoan","C_Man_sport_2_F_tanoan","C_Man_sport_3_F_tanoan","C_Man_casual_4_F_tanoan","C_Man_casual_5_F_tanoan","C_Man_casual_6_F_tanoan"];

_ac_typechoice = switch (_ac_type) do {
  case ("Afghan") : {_ac_Afghan};
  case ("African_christ") : {_ac_African_christ};
  case ("African_islam") : {_ac_African_islam};
  case ("Asian") : {_ac_Asian};
  case ("European") : {_ac_European};
  case ("Middle_Eastern") : {_ac_Middle_Eastern};
  case ("Russian") : {_ac_Russian};
  case ("Takistan") : {_ac_Takistan};
  case ("Tanoan") : {_ac_Tanoan};
  default {_ac_European};
};

hint format ["%1\n%2\n%3",_ac_type,_ac_typestr,_ac_typechoice];

//===================================DEBUG=====================================//

    ENGIMA_CIVILIANS_SilentDebugMode = false;

    ENGIMA_CIVILIANS_DebugTextEventArgs = []; // Empty
    ENGIMA_CIVILIANS_DebugMarkerEventArgs = []; // [name, position, size, direction, shape ("RECTANGLE" or "ELLIPSE"), markerColor, markerText (optional)] or alternatively [name, position, type, markerColor (optional), markerText (optional)]
    ENGIMA_CIVILIANS_DeleteDebugMarkerEventArgs = [];  // [name]

    "ENGIMA_CIVILIANS_DebugTextEventArgs" addPublicVariableEventHandler {
        ENGIMA_CIVILIANS_DebugTextEventArgs call ENGIMA_CIVILIANS_ShowDebugTextLocal;
    };

    "ENGIMA_CIVILIANS_DebugMarkerEventArgs" addPublicVariableEventHandler {
        ENGIMA_CIVILIANS_DebugMarkerEventArgs call ENGIMA_CIVILIANS_SetDebugMarkerLocal;
    };

    "ENGIMA_CIVILIANS_DeleteDebugMarkerEventArgs" addPublicVariableEventHandler {
        ENGIMA_CIVILIANS_DeleteDebugMarkerEventArgs call ENGIMA_CIVILIANS_DeleteDebugMarkerLocal;
    };

    /*
     * Summary: Checks if a marker exists.
     * Arguments:
     *   _marker: Marker name of marker to test.
     * Returns: true if marker exists, else false.
     */
    ENGIMA_CIVILIANS_MarkerExists = {
    	private ["_exists", "_marker"];

    	_marker = _this select 0;

    	_exists = false;
    	if (((getMarkerPos _marker) select 0) != 0 || ((getMarkerPos _marker) select 1 != 0)) then {
    		_exists = true;
    	};
    	_exists
    };

    /*
     * Summary: Shows debug text on all clients.
     * Remarks:
     *   if global variable "dre_var_CL_SilentDebugMode" is set to true, debug text will only be written to RTF-file and not shown on screen.
     * Arguments:
     *   _text: Debug text.
     */
    ENGIMA_CIVILIANS_ShowDebugTextAllClients = {
        ENGIMA_CIVILIANS_DebugTextEventArgs = _this;
        publicVariable "ENGIMA_CIVILIANS_DebugTextEventArgs";
        ENGIMA_CIVILIANS_DebugTextEventArgs call ENGIMA_CIVILIANS_ShowDebugTextLocal;
    };

    /*
     * Summary: Shows debug text on local client.
     * Remarks:
     *   if global variable "dre_var_CL_SilentDebugMode" is set to true, debug text will only be written to RTF-file and not shown on screen.
     * Arguments:
     *   _text: Debug text.
     */
    ENGIMA_CIVILIANS_ShowDebugTextLocal = {
        private ["_minutes", "_seconds"];

        if (!isNull player) then {
            if (!ENGIMA_CIVILIANS_SilentDebugMode) then {
                player sideChat (_this select 0);
            };
        };

        _minutes = floor (time / 60);
        _seconds = floor (time - (_minutes * 60));
        diag_log ((str _minutes + ":" + str _seconds) + " Debug: " + (_this select 0));
    };

    /*
     * Summary: Shows debug marker on local client.
     * Remarks:
     *   if global variable "dre_var_CL_SilentDebugMode" is set to true, debug marker will not shown.
     * Arguments alternative #1 (Marker representing an area):
     *   _markerName: Marker's name. (must be global unique).
     *   _position: Marker's position.
     *   _size: Marker's size on array format [x, y].
     *   _direction: Marker's direction.
     *   _shape: "RECTANGLE" or "ELLIPSE".
     *   _markerColor: Marker's color ("Default", "ColorRed", "ColorYellow" etc.).
     *   [_markerText]: Optional. Marker's text.
     * Arguments alternative #2 (Marker representing an icon).
     *   _markerName: Marker's name. (must be global unique).
     *   _position: Marker's position.
     *   _type: Markers icon type (applies to icons in cfgIcons, like "Warning", "Dot" etc.).
     *   [_markerColor]: Optional. Marker's color ("Default", "ColorRed", "ColorYellow" etc.).
     *   [_markerText]. Optional. Marker's text.
     */
    ENGIMA_CIVILIANS_SetDebugMarkerLocal = {
        private ["_markerName", "_position", "_size", "_direction", "_type", "_shape", "_markerColor", "_markerText"];
        private ["_marker"];

        if (!isNull player) then {
            if (!ENGIMA_CIVILIANS_SilentDebugMode) then {
                _markerName = _this select 0;
                _position = _this select 1;
                _markerColor = "Default";
                _markerText = "";

                if (count _this == 6) then {
                    _size = _this select 2;
                    _direction = _this select 3;
                    _shape = _this select 4;
                    _markerColor = _this select 5;
                };
                if (count _this == 7) then {
                    _size = _this select 2;
                    _direction = _this select 3;
                    _shape = _this select 4;
                    _markerColor = _this select 5;
                    _markerText = _this select 6;
                };
                if (count _this == 3) then {
                    _type = _this select 2;
                    _shape = "ICON";
                };
                if (count _this == 4) then {
                    _type = _this select 2;
                    _shape = "ICON";
                    _markerColor = _this select 3;
                };
                if (count _this == 5) then {
                    _type = _this select 2;
                    _shape = "ICON";
                    _markerColor = _this select 3;
                    _markerText = _this select 4;
                };

                // Delete old marker
                if ([_markerName] call ENGIMA_CIVILIANS_MarkerExists) then {
                    deleteMarkerLocal _markerName;
                };

                // Set new marker
                _marker = createMarkerLocal [_markerName, _position];
                _marker setMarkerShapeLocal _shape;
                _marker setMarkerColorLocal _markerColor;
                _marker setMarkerTextLocal _markerText;

                if (count _this == 6 || count _this == 7) then {
                    _marker setMarkerSizeLocal _size;
                    _marker setMarkerDirLocal _direction;
                };
                if (count _this == 3 || count _this == 4 || count _this == 5) then {
                    _marker setMarkerTypeLocal _type;
                };
            };
        };
    };

    /*
     * Summary: Shows debug marker on all clients.
     * Remarks:
     *   if global variable "dre_var_CL_SilentDebugMode" is set to true, debug marker will not shown.
     * Arguments alternative #1 (Marker representing an area):
     *   _markerName: Marker's name. (must be global unique).
     *   _position: Marker's position.
     *   _size: Marker's size on array format [x, y].
     *   _direction: Marker's direction.
     *   _shape: "RECTANGLE" or "ELLIPSE".
     *   _markerColor: Marker's color ("Default", "ColorRed", "ColorYellow" etc.).
     *   [_markerText]: Optional. Marker's text.
     * Arguments alternative #2 (Marker representing an icon).
     *   _markerName: Marker's name. (must be global unique).
     *   _position: Marker's position.
     *   _type: Markers icon type (applies to icons in cfgIcons, like "Warning", "Dot" etc.).
     *   [_markerColor]: Optional. Marker's color ("Default", "ColorRed", "ColorYellow" etc.).
     *   [_markerText]. Optional. Marker's text.
     */
    ENGIMA_CIVILIANS_SetDebugMarkerAllClients = {
        ENGIMA_CIVILIANS_DebugMarkerEventArgs = _this;
        publicVariable "ENGIMA_CIVILIANS_DebugMarkerEventArgs";
        ENGIMA_CIVILIANS_DebugMarkerEventArgs call ENGIMA_CIVILIANS_SetDebugMarkerLocal;
    };

    /*
     * Summary: Deletes a debug marker on local client.
     * Arguments:
     *   _markerName: Name of marker to delete.
     */
    ENGIMA_CIVILIANS_DeleteDebugMarkerLocal = {
        private ["_markerName"];
        _markerName = _this select 0;
        deleteMarkerLocal _markerName;
    };

    /*
     * Summary: Deletes a debug marker on all clients.
     * Arguments:
     *   _markerName: Name of marker to delete.
     */
    ENGIMA_CIVILIANS_DeleteDebugMarkerAllClients = {
        ENGIMA_CIVILIANS_DeleteDebugMarkerEventArgs = _this;
        publicVariable "ENGIMA_CIVILIANS_DeleteDebugMarkerEventArgs";
        ENGIMA_CIVILIANS_DeleteDebugMarkerEventArgs call ENGIMA_CIVILIANS_DeleteDebugMarkerLocal;
    };
//===================================DEBUG=====================================//

// The following constants may be used to tweak behaviour

ENGIMA_CIVILIANS_SIDE = civilian;      // If you for some reason want the units to spawn into another side.
ENGIMA_CIVILIANS_MINSKILL = 0.4;       // If you spawn something other than civilians, you may want to set another skill level of the spawned units.
ENGIMA_CIVILIANS_MAXSKILL = 0.6;       // If you spawn something other than civilians, you may want to set another skill level of the spawned units.

ENGIMA_CIVILIANS_MAXWAITINGTIME = 300; // Maximum standing still time in seconds
ENGIMA_CIVILIANS_RUNNINGCHANCE = 0.05; // Chance of running instead of walking

// Civilian personalities
ENGIMA_CIVILIANS_BEHAVIOURS = [
	["CITIZEN", 100] // Default citizen with ordinary behaviour. Spawns in a house and walks to another house, and so on...
];

// Do not edit anything beneath this line!

ENGIMA_CIVILIANS_INSTANCE_NO = 0;

if (isServer) then {

          //===================================Server Functions=====================================//

          ENGIMA_CIVILIANS_GetParamValue = {
            	private ["_params", "_key"];
            	private ["_value"];

             	_params = _this select 0;
             	_key = _this select 1;
          	_value = if (count _this > 2) then { _this select 2 } else { objNull };

             	{
             		if (_x select 0 == _key) then {
             			_value = _x select 1;
             		};
             	} foreach (_params);

             	_value
          };

          /*
           * Summary: Checks if a position is inside a marker.
           * Remarks: Marker can be of shape "RECTANGLE" or "ELLIPSE" and at any angle.
           * Arguments:
           *   _markerName: Name of current marker.
           *   _pos: Position to test.
           * Returns: true if position is inside marker. Else false.
           */
          ENGIMA_CIVILIANS_PositionIsInsideMarker = {
              private ["_markerName", "_pos"];
          	private ["_isInside", "_px", "_py", "_mpx", "_mpy", "_msx", "_msy", "_ma", "_xmin", "_xmax", "_ymin", "_ymax", "_rpx", "_rpy", "_res"];

          	_pos = _this select 0;
          	_markerName = _this select 1;

          	_px = _pos select 0;
          	_py = _pos select 1;
          	_mpx = (getMarkerPos _markerName) select 0;
          	_mpy = (getMarkerPos _markerName) select 1;
          	_msx = (getMarkerSize _markerName) select 0;
          	_msy = (getMarkerSize _markerName) select 1;
          	_ma = -(markerDir _markerName);

          	_xmin = _mpx - _msx;
          	_xmax = _mpx + _msx;
          	_ymin = _mpy - _msy;
          	_ymax = _mpy + _msy;

          	//Now, rotate point to investigate around markers center in order to check against a nonrotated marker
          	_rpx = ( (_px - _mpx) * cos(_ma) ) + ( (_py - _mpy) * sin(_ma) ) + _mpx;
          	_rpy = (-(_px - _mpx) * sin(_ma) ) + ( (_py - _mpy) * cos(_ma) ) + _mpy;

          	_isInside = false;

              if (markerShape _markerName == "RECTANGLE") then {
                  if (((_rpx > _xmin) && (_rpx < _xmax)) && ((_rpy > _ymin) && (_rpy < _ymax))) then
                  {
                      _isInside = true;
                  };
              };

              if (markerShape _markerName == "ELLIPSE") then {
                  _res = (((_rpx-_mpx)^2)/(_msx^2)) + (((_rpy-_mpy)^2)/(_msy^2));
                  if ( _res < 1 ) then
                  {
                      _isInside = true;
                  };
              };

          	_isInside
          };

          ENGIMA_CIVILIANS_GetAllPlayersPositions = {
          	private ["_playerPositions"];

          	_playerPositions = [];

          	if (isMultiplayer) then {
          		{
          			if (isPlayer _x) then {
          				_playerPositions pushBack (position vehicle _x);
          			};
          		} foreach (playableUnits);
          	}
          	else {
          		if (player == player) then {
          			_playerPositions = [position vehicle player];
          		};
          	};

          	// testing
          	//_playerPositions = [p1, p2];

          	_playerPositions
          };

          ENGIMA_CIVILIANS_CountPositionsInBuilding = {
          	private ["_building"];
          	private ["_count"];

          	_building = _this select 0;

          	_count = 0;
          	while { format ["%1", _building buildingPos _count] != "[0,0,0]" } do {
          		_count = _count + 1;
          	};

          	_count
          };

          ENGIMA_CIVILIANS_FindSpawnPosition = {
          	private ["_minSpawnDistance", "_playerBuildings", "_blackListMarkers"];
          	private ["_playerPositions", "_tries", "_positionFound", "_foundPosition", "_buildingPosCount", "_building", "_tooClose", "_buildingPosNo", "_playerBuilding"];

          	_minSpawnDistance = _this select 0;
          	_playerBuildings = _this select 1;
          	_blackListMarkers = _this select 2;

          	_playerPositions = call ENGIMA_CIVILIANS_GetAllPlayersPositions;

          	_tries = 0;
          	_positionFound = false;
          	_foundPosition = [];

          	while { count _playerBuildings > 0 && !_positionFound && _tries < 10 } do {
          		_tries = _tries + 1;
          		_playerBuilding = _playerBuildings select floor random count _playerBuildings;
          		_building = _playerBuilding select 0;
          		_buildingPosCount = _playerBuilding select 1;

          		//_buildingPosCount = [_building] call ENGIMA_CIVILIANS_CountPositionsInBuilding;

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
          				if (!([getPos _building, _blackListMarkers] call ENGIMA_CIVILIANS_PositionInsideBlackMarker)) then {
          					_foundPosition = _building buildingPos _buildingPosNo;
          					_positionFound = true;
          				};
          			};
          		};
          	};

          	_foundPosition
          };

          ENGIMA_CIVILIANS_PositionInsideBlackMarker = {
          	private ["_pos", "_blackListMarkers"];
          	private ["_isInsideMarker"];

          	_pos = _this select 0;
          	_blackListMarkers = _this select 1;

          	_isInsideMarker = false;

          	{
          		if ([_pos, _x] call ENGIMA_CIVILIANS_PositionIsInsideMarker) then {
          			_isInsideMarker = true;
          		};
          	} foreach _blackListMarkers;

          	_isInsideMarker
          };

          ENGIMA_CIVILIANS_FindDestinationPosition = {
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
          			_buildingPosCount = [_building] call ENGIMA_CIVILIANS_CountPositionsInBuilding;

          			if (_buildingPosCount > 0) then {
          				if (!([getPos _building, _blackListMarkers] call ENGIMA_CIVILIANS_PositionInsideBlackMarker)) then {
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
          			if (!isOnRoad _pos && !surfaceIsWater _pos && !([_pos, _blackListMarkers] call ENGIMA_CIVILIANS_PositionInsideBlackMarker)) then {
          				_foundPosition = _pos;
          				_positionFound = true;
          			};
          		};
          	};

          	_foundPosition
          };

          ENGIMA_CIVILIANS_GetPlayerBuildings = {
          	private ["_allPlayerPositions", "_maxSpawnDistance", "_blackListMarkers"];
          	private ["_playerBuildings", "_buildings", "_playerBuildingsTemp", "_buildingPosCount"];

          	_allPlayerPositions = _this select 0;
          	_maxSpawnDistance = _this select 1;
          	_blackListMarkers = _this select 2;

          	_playerBuildings = [];
          	_allPlayerPositions = call ENGIMA_CIVILIANS_GetAllPlayersPositions;

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
          		_buildingPosCount = [_x] call ENGIMA_CIVILIANS_CountPositionsInBuilding;

          		if (_buildingPosCount > 0) then {
          			if (!([getPos _x, _blackListMarkers] call ENGIMA_CIVILIANS_PositionInsideBlackMarker)) then {
          				_playerBuildingsTemp pushBack [_x, _buildingPosCount];
          			};
          		}
          	} foreach _playerBuildings;

          //	hint str count _playerBuildingsTemp;

          //	{
          //		[str getPos (_x select 0), getPos (_x select 0), "mil_dot", "ColorYellow", ""] call ENGIMA_CIVILIANS_SetDebugMarkerAllClients;
          //	} foreach _playerBuildingsTemp;

          	_playerBuildingsTemp
          };

          ENGIMA_CIVILIANS_StartCivilians = {
          	private ["_unitClasses", "_unitsPerBuilding", "_maxGroupsCount", "_minSpawnDistance", "_maxSpawnDistance", "_blackListMarkers", "_hideBlacklistMarkers", "_fnc_OnSpawnCallback", "_fnc_OnRemoveCallback", "_debug", "_spawn_rate"];
          	private ["_side", "_minSkill", "_maxSkill", "_unit", "_unitsCount"];
          	private ["_civilianItems", "_civilianItemsTemp"];
          	private ["_spawnUnit", "_allPlayerPositions", "_playerBuildings"];

          	_unitClasses = [_this, "UNIT_CLASSES", ["C_man_1", "C_man_1_1_F", "C_man_1_2_F", "C_man_1_3_F", "C_man_polo_1_F", "C_man_polo_1_F_afro", "C_man_polo_1_F_euro", "C_man_polo_1_F_asia", "C_man_polo_2_F", "C_man_polo_2_F_afro", "C_man_polo_2_F_euro", "C_man_polo_2_F_asia", "C_man_polo_3_F", "C_man_polo_3_F_afro", "C_man_polo_3_F_euro", "C_man_polo_3_F_asia", "C_man_polo_4_F", "C_man_polo_4_F_afro", "C_man_polo_4_F_euro", "C_man_polo_4_F_asia", "C_man_polo_5_F", "C_man_polo_5_F_afro", "C_man_polo_5_F_euro", "C_man_polo_5_F_asia", "C_man_polo_6_F", "C_man_polo_6_F_afro", "C_man_polo_6_F_euro", "C_man_polo_6_F_asia", "C_man_p_fugitive_F", "C_man_p_fugitive_F_afro", "C_man_p_fugitive_F_euro", "C_man_p_fugitive_F_asia", "C_man_p_beggar_F", "C_man_p_beggar_F_afro", "C_man_p_beggar_F_euro", "C_man_p_beggar_F_asia", "C_man_w_worker_F", "C_scientist_F", "C_man_hunter_1_F", "C_man_p_shorts_1_F", "C_man_p_shorts_1_F_afro", "C_man_p_shorts_1_F_euro", "C_man_p_shorts_1_F_asia", "C_man_shorts_1_F", "C_man_shorts_1_F_afro", "C_man_shorts_1_F_euro", "C_man_shorts_1_F_asia", "C_man_shorts_2_F", "C_man_shorts_2_F_afro", "C_man_shorts_2_F_euro", "C_man_shorts_2_F_asia", "C_man_shorts_3_F", "C_man_shorts_3_F_afro", "C_man_shorts_3_F_euro", "C_man_shorts_3_F_asia", "C_man_shorts_4_F", "C_man_shorts_4_F_afro", "C_man_shorts_4_F_euro", "C_man_shorts_4_F_asia", "C_Orestes", "C_Nikos", "C_Nikos_aged"]] call ENGIMA_CIVILIANS_GetParamValue;
          	_unitsPerBuilding = [_this, "UNITS_PER_BUILDING", 0.1] call ENGIMA_CIVILIANS_GetParamValue;
          	_maxGroupsCount = [_this, "MAX_GROUPS_COUNT", 100] call ENGIMA_CIVILIANS_GetParamValue;
          	_minSpawnDistance = [_this, "MIN_SPAWN_DISTANCE", 100] call ENGIMA_CIVILIANS_GetParamValue;
          	_maxSpawnDistance = [_this, "MAX_SPAWN_DISTANCE", 500] call ENGIMA_CIVILIANS_GetParamValue;
          	_blackListMarkers = [_this, "BLACKLIST_MARKERS", []] call ENGIMA_CIVILIANS_GetParamValue;
          	_hideBlacklistMarkers = [_this, "HIDE_BLACKLIST_MARKERS", true] call ENGIMA_CIVILIANS_GetParamValue;
          	_fnc_OnSpawnCallback = [_this, "ON_UNIT_SPAWNED_CALLBACK", {}] call ENGIMA_CIVILIANS_GetParamValue;
          	_fnc_OnRemoveCallback = [_this, "ON_UNIT_REMOVE_CALLBACK", { true }] call ENGIMA_CIVILIANS_GetParamValue;
          	_debug = [_this, "DEBUG", false] call ENGIMA_CIVILIANS_GetParamValue;
            _spawn_rate = [_this, "SPAWN_RATE", 3] call ENGIMA_CIVILIANS_GetParamValue;

          	if (_hideBlacklistMarkers) then {
          		{
          			_x setMarkerAlpha 0;
          		} foreach _blackListMarkers;
          	};

          	_side = ENGIMA_CIVILIANS_SIDE;
          	_minSkill = ENGIMA_CIVILIANS_MINSKILL;
          	_maxSkill = ENGIMA_CIVILIANS_MAXSKILL;

          	_spawnUnit = {
          		private ["_side", "_minSpawnDistance", "_unitClasses", "_playerBuildings", "_blackListMarkers", "_fnc_OnSpawnCallback"];
          		private ["_pos", "_unit", "_group"];

          		_side = _this select 0;
          		_minSpawnDistance = _this select 1;
          		_unitClasses = _this select 2;
          		_playerBuildings = _this select 3;
          		_blackListMarkers = _this select 4;
          		_fnc_OnSpawnCallback = _this select 5;

          		_pos = [_minSpawnDistance, _playerBuildings, _blackListMarkers] call ENGIMA_CIVILIANS_FindSpawnPosition;
          		_unit = objNull;

          		if (count _pos > 0) then {
          			_group = createGroup _side;
          			_unit = _group createUnit [_unitClasses select floor random count _unitClasses, [0, 0, 100], [], random 360, "FORM"];

          			ENGIMA_CIVILIANS_INSTANCE_NO = ENGIMA_CIVILIANS_INSTANCE_NO + 1;
          			_unit setVehicleVarName "ENGIMA_CIVILIAN_UNIT_" + str ENGIMA_CIVILIANS_INSTANCE_NO;

                      doStop _unit;
                      _unit setPos _pos;

          			[_unit] spawn _fnc_OnSpawnCallback;
          		};

          		_unit
          	};

          	sleep 0.5;

          	_civilianItems = []; // Items of type [unit, behaviour, destination pos, last pos, isMoving, nextActionTime, isRunning].

          	while { true } do {

          		_allPlayerPositions = call ENGIMA_CIVILIANS_GetAllPlayersPositions;
          		_playerBuildings = [_allPlayerPositions, _maxSpawnDistance, _blackListMarkers] call ENGIMA_CIVILIANS_GetPlayerBuildings;
          		_unitsCount = ceil (_unitsPerBuilding * count _playerBuildings);
          		if (_unitsCount > _maxGroupsCount) then {
          			_unitsCount = _maxGroupsCount;
          		};

          		if (count _civilianItems < _unitsCount) then {

          			_unit = [_side, _minSpawnDistance, _unitClasses, _playerBuildings, _blackListMarkers, _fnc_OnSpawnCallback] call _spawnUnit;
          			if (!isNull _unit) then {
          				_unit setSkill _minSkill + random (_maxSkill - _minSkill);
          				_civilianItems pushBack [_unit, "CITIZEN", [], getPos _unit, false, time, random 1 < ENGIMA_CIVILIANS_RUNNINGCHANCE];
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
          					[vehicleVarName _civilian] call ENGIMA_CIVILIANS_DeleteDebugMarkerAllClients;
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
          				_nextActionTime = time + random ENGIMA_CIVILIANS_MAXWAITINGTIME;

          				_x set [4, _isMoving]; // Set isMoving = false
          				_x set [5, _nextActionTime]; // Next action time

          				(group _unit) setFormDir random 360;
          			};

          			// If it is time for civilian to move
          			if (!_isMoving && time > _nextActionTime) then {

          				_destPos = [_unit, _blackListMarkers, _maxSpawnDistance] call ENGIMA_CIVILIANS_FindDestinationPosition;
          				if (count _destPos > 0) then {
          					_unit doMove _destPos;
          					_unit setBehaviour "SAFE";

          					_destinationPos = _destPos;
          					_isMoving = true;
          					_isRunning = random 1 < ENGIMA_CIVILIANS_RUNNINGCHANCE;

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
          				[vehicleVarName _unit, getPos _unit, "mil_dot", "ColorWhite", "Civ"] call ENGIMA_CIVILIANS_SetDebugMarkerAllClients;
          			};

          		} foreach _civilianItems;

          		sleep _spawn_rate;
          	};
          };


          //===================================Server Functions=====================================//

	// Set civilian parameters.

  	_parameters = [
      ["UNIT_CLASSES", _ac_typechoice],
      ["UNITS_PER_BUILDING", _ac_perbuilding],
      ["MAX_GROUPS_COUNT", _ac_maxcount],
      ["MIN_SPAWN_DISTANCE", _ac_minspawn],
      ["MAX_SPAWN_DISTANCE", _ac_maxspawn],
      ["BLACKLIST_MARKERS", [_ac_blacklist]],
      ["HIDE_BLACKLIST_MARKERS", _ac_hide],
      ["ON_UNIT_SPAWNED_CALLBACK", {}],
      ["ON_UNIT_REMOVE_CALLBACK", { true }],
      ["DEBUG", _ac_debug],
      ["SPAWN_RATE",_ac_rate]
  	];

  	// Start the script
  	_parameters spawn ENGIMA_CIVILIANS_StartCivilians;
};
