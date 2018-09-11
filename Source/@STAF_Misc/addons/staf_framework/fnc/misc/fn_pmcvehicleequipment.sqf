//Init
params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

_condition = _logic getVariable ["STAF_Module_PMC_Vehicle_Equipment_Type",-1];

// Car
if (_condition == 0) then {
  {
  	[_x] call STAF_fnc_carequipment;
  } foreach _objs;
};

// MRAP and Truck
if (_condition == 1) then {
  {
  	[_x] call STAF_fnc_mrapequipment;
  } foreach _objs;
};

// Heli Small
if (_condition == 2) then {
  {
  	[_x] call STAF_fnc_helismallequipment;
  } foreach _objs;
};

// Heli Big
if (_condition == 3) then {
  {
  	[_x] call STAF_fnc_helibigequipment;
  } foreach _objs;
};

// Boat
if (_condition == 4) then {
  {
  	[_x] call STAF_fnc_boatequipment;
  } foreach _objs;
};

// Drone Ammo
if (_condition == 5) then {
  {
  	[_x] call STAF_fnc_droneammoequipment;
  } foreach _objs;
};

// Drone Medical
if (_condition == 6) then {
  {
  	[_x] call STAF_fnc_dronemedicequipment;
  } foreach _objs;
};

// Drone Explosions
if (_condition == 7) then {
  {
  	[_x] call STAF_fnc_droneexplosionequipment;
  } foreach _objs;
};
