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

	//----------------------------------------------------------------------------

  _logic = "Land_TacticalBacon_F" createVehicle _position;
  [[_logic, true], "hideObjectGlobal", false, false, true] call BIS_fnc_MP;

  _logicarray = [_logic];
  {[_x, [_logicarray,true]] remoteExec ["addCuratorEditableObjects", 0, true];} forEach allCurators;

  if (isNil "STAF_Var_MarkerLogicCount") then { STAF_Var_MarkerLogicCount = 0 };
  _LogicPhoneticName = [STAF_Var_MarkerLogicCount] call Ares_fnc_GetPhoneticName;
  _LogicName = format ["Logic %1", _LogicPhoneticName];
  _logic setName _LogicName;

  if (isNil "STAF_Var_MarkerCount") then { STAF_Var_MarkerCount = 0 };
  _MarkerPhoneticName = [STAF_Var_MarkerCount] call Ares_fnc_GetPhoneticName;
  _MarkerName = format ["Marker_%1", _MarkerPhoneticName];
  _marker = createMarker [_MarkerName, _position];

  // Creates a Notification
  [format ["Created Marker: %1", _MarkerName]] call Ares_fnc_showZeusMessage;

  //__________________________________________________________________________

	// Shape
	_shape = switch (_dialogResult select 0) do {
		case 0: {"RECTANGLE"};
		case 1: {"ELLIPSE"};
	};

	// Brush
	_brush = switch (_dialogResult select 1) do {
    case 0: {"Solid"};
		case 1: {"SolidFull"};
		case 2: {"Horizontal"};
		case 3: {"Vertical"};
		case 4: {"Grid"};
		case 5: {"FDiagonal"};
		case 6: {"BDiagonal"};
		case 7: {"DiagGrid"};
		case 8: {"Cross"};
		case 9: {"Border"};
		case 10: {"SolidBorder"};
	};

	// Color
	_color =  switch (_dialogResult select 2) do {
    case 0: {"ColorBlack"};
		case 1: {"ColorGrey"};
		case 2: {"ColorRed"};
		case 3: {"ColorBrown"};
		case 4: {"ColorOrange"};
		case 5: {"ColorYellow"};
		case 6: {"ColorKhaki"};
		case 7: {"ColorBlue"};
		case 8: {"ColorBlue"};
		case 9: {"ColorPink"};
		case 10: {"ColorWhite"};
		case 11: {"ColorUNKNOWN"};
		case 12: {"ColorBLUFOR"};
		case 13: {"ColorOPFOR"};
		case 14: {"ColorIndependent"};
		case 15: {"ColorCivilian"};
	};

	_sizeX = parseNumber (_dialogResult select 3);
	_sizeY = parseNumber (_dialogResult select 4);
	_marker	setMarkerSize [_sizeX, _sizeY];
	_marker setMarkerAlpha (_dialogResult select 5);
	_marker setMarkerColor _color;
	_marker setMarkerBrush _brush;
	_marker setMarkerShape _shape;

	[_logic, _marker] remoteExec ["STAF_fnc_trackmarker", 0, true];

  //__________________________________________________________________________

  STAF_Var_MarkerLogicCount = STAF_Var_MarkerLogicCount + 1;
  STAF_Var_MarkerCount = STAF_Var_MarkerCount + 1;
  publicVariable "STAF_Var_MarkerLogicCount";
  publicVariable "STAF_Var_MarkerCount";

  _deleteModuleOnExit = false;

}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
