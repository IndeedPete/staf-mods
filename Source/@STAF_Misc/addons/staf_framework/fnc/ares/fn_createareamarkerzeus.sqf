["STAF", "Create Area Marker",
{
	// Get all the passed parameters
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

		// Create Dialog
		private _dialogResult =
		[
			"Marker Settings",
			[
				// The last number is optional! If you want the first selection you can remove the number.
					["Shape", ["Rectangle","Ellipse"], 1],
					["Brush", ["Solid","SolidFull","Horizontal","Vertical","Grid","FDiagonal","BDiagonal","DiagGrid","Cross","Border","SolidBorder"], 0],
					["Color", ["Black","Grey","Red","Brown","Orange","Yellow","Khaki","Green","Blue","Pink","White","Empty Object Color","BLUFOR Color","OPFOR Color","Independent Color","Civilian Color"], 12],
					["Size X", "","50"],
					["Size Y", "","50"],
					["Marker Alpha", "SLIDER", 1]
			]
		] call Ares_fnc_showChooseDialog;

		// If the dialog was closed.
		if (_dialogResult isEqualTo []) exitWith{};

		// Get the selected data
		_dialogResult params ["_ChosenShape","_ChosenBrush","_ChosenColor","_ChosenSizeX","_ChosenSizeY","_ChosenAlpha"];

	// Create a random marker name
	_unique_name = false;
	_randomnumber = floor random 100000;
	_name = "ZeusMarker_" + (str _randomnumber);
	_nameobject = "ZeusMarkerObject" + (str _randomnumber);

	// Create an Object the Marker is linked to
	//_object = ["Land_TacticalBacon_F", _position] call BIS_fnc_createSimpleObject;
	_object = "VR_3DSelector_01_default_F" createVehicle _position;

	[_object] remoteExec ["hideObject", 0, true];
	[_object, true] remoteExec ["allowDamage", 0, true];
	[_object, false] remoteExec ["enableSimulation", 0, true];
	[_object, _nameobject] remoteExec ["setVehicleVarName", 0, true];

	_objectarray = [_object];
	{[_x, [_objectarray,true]] remoteExec ["addCuratorEditableObjects", 0, true];} forEach allCurators;

	// Creates a the Marker
	_marker = createMarker [_name, _position];

		// Shape
		if ((_dialogResult select 0) == 0) then {
			_shape = "RECTANGLE";
			_marker setMarkerShape _shape;
		};
		if ((_dialogResult select 0) == 1) then {
			_shape = "ELLIPSE";
			_marker setMarkerShape _shape;
		};


		// Brush
		if ((_dialogResult select 1) == 0) then {
			_brush = "Solid";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 1) then {
			_brush = "SolidFull";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 2) then {
			_brush = "Horizontal";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 3) then {
			_brush = "Vertical";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 4) then {
			_brush = "Grid";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 5) then {
			_brush = "FDiagonal";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 6) then {
			_brush = "BDiagonal";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 7) then {
			_brush = "DiagGrid";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 8) then {
			_brush = "Cross";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 9) then {
			_brush = "Border";
			_marker setMarkerBrush _brush;
		};
		if ((_dialogResult select 1) == 10) then {
			_brush = "SolidBorder";
			_marker setMarkerBrush _brush;
		};

		// Brush
		if ((_dialogResult select 2) == 0) then {
			_color = "ColorBlack";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 1) then {
			_color = "ColorGrey";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 2) then {
			_color = "ColorRed";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 3) then {
			_color = "ColorBrown";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 4) then {
			_color = "ColorOrange";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 5) then {
			_color = "ColorYellow";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 6) then {
			_color = "ColorKhaki";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 7) then {
			_color = "ColorGreen";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 8) then {
			_color = "ColorBlue";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 9) then {
			_color = "ColorPink";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 10) then {
			_color = "ColorWhite";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 11) then {
			_color = "ColorUNKNOWN";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 12) then {
			_color = "ColorBLUFOR";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 13) then {
			_color = "ColorOPFOR";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 14) then {
			_color = "ColorIndependent";
			_marker setMarkerColor _color;
		};
		if ((_dialogResult select 2) == 15) then {
			_color = "ColorCivilian";
			_marker setMarkerColor _color;
		};
		_sizeX = parseNumber (_dialogResult select 3);
		_sizeY = parseNumber (_dialogResult select 4);
		_marker	setMarkerSize [_sizeX, _sizeY];
		_marker setMarkerAlpha (_dialogResult select 5);

		[_object, _marker] remoteExec ["STAF_fnc_trackmarker", 0, true];

}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
