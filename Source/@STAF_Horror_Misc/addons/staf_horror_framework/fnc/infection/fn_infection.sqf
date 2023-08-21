params ["_unit"];

//Checks
_immunity = _unit getVariable ["STAF_Horror_Immunity",false]; //Check if Unit is Immune to being infected
if (_immunity) exitWith {};

_infected = _unit getVariable ["STAF_Horror_Infected", false]; // Check if Unit is already infected
if (_infected) exitWith {};

//Infection Script Start
_unit setVariable ["STAF_Horror_Infected", true, true]; // Unit is now Infected
//_unit spawn STAF_Horror_fnc_infectioncough; //Starts the coughing script

//Unit needs to be Alive, infected and it ends when infection >= 1
while {alive _unit && (_unit getVariable "STAF_Horror_Infected")} do {
  _condition = _unit getVariable ["STAF_Horror_Immunity", false];
  waituntil {!(_condition);};

  if (!(_condition)) then {
    _infection = _unit getVariable ["STAF_Horror_Infection", 0];
    _infectionrate = STAF_Horror_Infection_Rate;

    _infectionNew = _unit setVariable ["STAF_Horror_Infection", _infection + _infectionrate, true];

    [_unit, _infection] call STAF_Horror_fnc_infectioncough;

    sleep 0.5;

    if (_infectionNew >= 1) then {
      _dying = [
        "staf_horror_framework\snd\dying_1.ogg",
        "staf_horror_framework\snd\dying_2.ogg",
        "staf_horror_framework\snd\dying_3.ogg"
      ] call BIS_fnc_selectRandom;
      playsound3D [_dying, _unit, _unit call STAF_fnc_inhouse];

      _unit setVariable ["STAF_Horror_Infection", 0, true];
      _unit setVariable ["STAF_Horror_Infected", false, true];
      _unit setVariable ["STAF_Horror_CoughTime",nil, true];

      _unit setdammage 1;
    };
  };
  _randomTimer = random [13.5, 16.5, 18];
  sleep _randomTimer;
};