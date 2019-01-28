// Most of this is take straight from the Achilles Modules Code. I just adjusted it to our needs

["STAF", "Create IED",
{
	// Get all the passed parameters
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	// We check if there is a object under the cursor or not,
	// If the object under cursor is null (nothing was selected), then prompt the user to select object(s) by calling Achilles_fnc_SelectUnits.
	// But if the module had been placed upon an object, then return that object surounded by brackets (add it to an array).
	private _selectedObjects = [_objectUnderCursor];

	// If the selection was canceled, exit the script to prevent any issues and errors.
	if (isNil "_selectedObjects") exitWith {};

	// If the selection is empty, also exit, but with a message.
	// Side note: using isEqualTo [] is faster than count _selectedObjects == 0. So always try to improve performance when ever possible.
	if (_selectedObjects isEqualTo []) exitWith
	{
		// This is only from 0.1.0 update and higher! Use old Ares_fnc_ShowZeusMessage and playSound "FD_Start_F" if below that version! Syntax is the same.
		// Show the message to the Curator.
		["No object was selected!"] call Achilles_fnc_showZeusErrorMessage;
	};
	private _dialogResult =
	[
		"IED Setup",
		[
				["Explosion Size", ["Small","Medium","Large"], 0],
				["Disarming Time [s]", "", "30"],
				["Activation Distance [m]", "", "10"],
				["Activation Side", "SIDE", 2]
		]
	] call Ares_fnc_showChooseDialog;

	// If the dialog was closed.
	if (_dialogResult isEqualTo []) exitWith{};

	// Get the selected data
	_dialogResult params ["_explosionSize","_disarmTime","_activationDistance","_activationSide"];

	//______________Code______________________________________________________________
	_activationDistance = parseNumber _activationDistance;
	_disarmTime = parseNumber _disarmTime;
	_object = _selectedObjects select 0;

	_activationSide = switch (_activationSide) do
	{
	  case 1: {[east]};
	  case 2: {[west]};
	  case 3: {[resistance]};
	  case 4: {[civilian]};
	  default {[west]};
	};

	if (_activationSide isEqualType sideLogic) then {_activationSide = [_activationSide];};

	private _dummyObject = "Land_HelipadEmpty_F" createVehicle (getPosATL _object);
	_dummyObject attachTo [_object,[0,0,0]];

  [_object, ["HandleDamage", {_this call Achilles_fnc_IED_DamageHandler}]] remoteExec ["addEventHandler", _object];

  _dummyObject setVariable ["object", _object, true];
  _dummyObject setVariable ["armed", true, true];

  _object setVariable ["dummyObject", _dummyObject, true];

  private _targets = ["Car", "Tank", "Man"];
  private _loop = true;
  private _armed = _dummyObject getVariable ["armed", true];
  private _triggered = _dummyObject getVariable ["iedTriggered", false];
  _object = _dummyObject getVariable ["object", objNull];
  private _defused = _dummyObject getVariable ["defused", false];
  private _targetSpeed = false;
  private _onCompletion = {};

	_onCompletion =
	  {
	    private _returnArray = _this select 3;
	    private _dummyObject = _returnArray select 1;
      systemChat "Disarmed";
      _dummyObject setVariable["armed", false, true];
      _dummyObject setVariable["iedTriggered", false, true];
      _dummyObject setVariable["defused", true, true];
      _defused = true;
	  };

		_progressbar = [_disarmTime, _object, _dummyObject, _onCompletion] spawn {
		  _disarmTime = _this select 0;
		  _object = _this select 1;
		  _dummyObject = _this select 2;
		  _onCompletion = _this select 3;

		  if ("ACE_EntrenchingTool" in (vestItems player + uniformItems player + backpackItems player + assignedItems player)) then {
		    [_disarmTime, [_object,_dummyObject], _onCompletion, {}, "Defusing..."] call ace_common_fnc_progressBar
		  };
		};
		_defuseAction = ["STAF_DefuseIED","Defuse IED","",_progressbar,{true}] call ace_interact_menu_fnc_createAction;
		[_object, 0, ["ACE_MainActions"], _defuseAction] call ace_interact_menu_fnc_addActionToObject;

    while {alive _object && !isNull _object && _loop && _armed && !_triggered} do
  	{
  		sleep 3;
  		_triggered = _dummyObject getVariable ["iedTriggered", false];
  		_armed = _dummyObject getVariable ["armed", true];

  		private _nearestObjects = (getPos _dummyObject) nearObjects 150;

  		if ({side _x in _activationSide} count _nearestObjects > 0) then
  		{
  			while {alive _object && _loop && _armed && !_triggered} do
  			{
  				sleep 1;
  				private _nearestTarget  = (getPos _dummyObject) nearObjects (_activationDistance);
  				private _nearestSide = _nearestTarget select {side _x in _activationSide};
  				for "_x" from 0 to (count _nearestSide)-1 do
  				{
  					private _target = _nearestSide select _x;

  					if (_loop) then
  					{
  						{
  							if ((_target isKindOf _x) && ((_target distance _dummyObject) <= _activationDistance) && (speed _target) > 7) exitWith {_loop = false; _dummyObject setVariable ["iedTriggered", true, true]};
  						} forEach _targets;
  					};
  				};
  			};
  		};
  	};

    _armed = _dummyObject getVariable ["armed", false];
    _triggered = _dummyObject getVariable ["iedTriggered", false];

    _object setVariable ["armed", _armed, true];
    _object setVariable ["iedTriggered", _triggered, true];

    private _spawnPos = [((getPosATL _object) select 0),((getPosATL _object) select 1),(((getPosATL _object) select 2) + 3)];

    private _explosion = {};
	  _explosion = Achilles_fnc_deadlyExplosion;

    if ((_armed && _triggered) || (!alive _object && _armed)) then
    {
    	[_spawnPos, _explosionSize] spawn _explosion;
  		deleteVehicle _object;
    };

    _object setVariable ["isIED", false, true];
    _object setVariable ["armed", false, true];
    _object setVariable ["iedTriggered", false, true];

    sleep 2;
    deleteVehicle _dummyObject;
  }] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
