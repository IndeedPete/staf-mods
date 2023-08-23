params ["_unit"];

//Checks
_immunity = _unit getVariable ["STAF_Horror_Immunity",false]; //Check if Unit is Immune to being infected
if (_immunity) exitWith {};

_infected = _unit getVariable ["STAF_Horror_Infected", false]; // Check if Unit is already infected
if (_infected) exitWith {};

// Infection Script Start
// Debug Message
if (STAF_cbaDebug) then {
  _name = [_unit, false, true] call ace_common_fnc_getName;
  systemChat format ["%1 is infected", _name];
  diag_log format ["%1 is infected", _name];
};

_unit setVariable ["STAF_Horror_Infected", true, true]; // Unit is now Infected
[_unit] spawn STAF_Horror_fnc_infectioncough; //Starts the coughing script

//Unit needs to be Alive, infected and it ends when infection >= 1
while {alive _unit && (_unit getVariable "STAF_Horror_Infected")} do {
  _condition = _unit getVariable ["STAF_Horror_Immunity", false];

  if (!(_condition)) then {
    _infection = _unit getVariable ["STAF_Horror_Infection_Level", 0];
    _infectionrate = parseNumber STAF_Horror_Infection_Rate;

    _infectionNew = _unit setVariable ["STAF_Horror_Infection_Level", _infection + _infectionrate, true];

    sleep 0.5;

    if ((_unit getVariable "STAF_Horror_Infection_Level") >= 1) then {
      _dying = [
        "staf_horror_framework\snd\dying_1.ogg",
        "staf_horror_framework\snd\dying_2.ogg",
        "staf_horror_framework\snd\dying_3.ogg"
      ] call BIS_fnc_selectRandom;
      playsound3D [_dying, _unit, _unit call STAF_fnc_inhouse];

      _unit setVariable ["STAF_Horror_Infection_Level", 0, true];
      _unit setVariable ["STAF_Horror_Infected", false, true];
      _unit setVariable ["STAF_Horror_CoughTime",nil, true];

      _unit setdammage 1;
    };
  };
  
  _randomTimer = random [13.5, 16.5, 18];
  sleep _randomTimer;
};