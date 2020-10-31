params ["_unit"];

_immunity = _unit getVariable ["STAF_Horror_Immunity",false];
_infected = _unit getVariable ["STAF_Horror_Infected", false];
_infection = _unit getVariable ["STAF_Horror_Infection", 0];
_infectionrate = missionnamespace getVariable ["STAF_Horror_InfectionRate", 0.05];

if (_infected) exitWith {};
if (_immunity) exitWith {};

_unit setVariable ["STAF_Horror_Infected", true, true];
_unit spawn STAF_Horror_fnc_infectionfx;

//Unit needs to be Alive, infected and it ends when infection >= 1

while {alive _unit && (_unit getVariable "STAF_Horror_Infected")} do {
  _condition = _unit getVariable ["STAF_Horror_Immunity", false];

  if (!(_condition)) then {
    _infection = _unit getVariable ["STAF_Horror_Infection", 0];
    _infectionrate = missionnamespace getVariable ["STAF_Horror_InfectionRate", 0.05];

    _unit setVariable ["STAF_Horror_Infection", _infection + _infectionrate, true];

    sleep 0.5;

    if ((_unit getVariable "STAF_Horror_Infection") >= 1) then {
      _dying = [] call STAF_Horror_fnc_infectionrandomdying;

      playsound3D [_dying, _unit, _unit call STAF_fnc_inhouse];
      _unit setdammage 1;
    };

    waituntil {!(_unit getVariable ["STAF_Horror_Immunity",false]);};
  };

  sleep 14.5;
};

_infection = _unit setVariable ["STAF_Horror_Infection", 0, true];
_infected = _unit setVariable ["STAF_Horror_Infected", false];