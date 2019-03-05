private ["_markerName", "_position", "_size", "_direction", "_type", "_shape", "_markerColor", "_markerText"];
private ["_marker"];

if (!isNull player) then {
		if (!STAF_ambientCivilian_SilentDebugMode) then {
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
				if ([_markerName] call STAF_fnc_ambientCivilian_MarkerExists) then {
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
