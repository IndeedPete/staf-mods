params ["_unit","_infection"];

_cough = [
  "STAF_Horror_cough1",
  "STAF_Horror_cough2",
  "STAF_Horror_cough3",
  "STAF_Horror_cough4",
  "STAF_Horror_cough5",
  "STAF_Horror_cough6",
  "STAF_Horror_cough7",
  "STAF_Horror_cough8",
  "STAF_Horror_cough9"
] call BIS_fnc_selectRandom;

enableCamShake true;

switch (true) do { 
  case (_infection <= 0.5): {_unit setVariable ["STAF_Horror_CoughTime", (round(random(60)+10))]}; 
  case ((_infection > 0.5) && (_infection < 0.75)): {_unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+15))]}; 
  case ((_infection >= 0.75) && (_infection <= 0.9)): {_unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+10))]}; 
  case (_infection > 0.9): {_unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+10))]}; 
};

_coughTime = _unit getVariable "STAF_Horror_CoughTime";

[_unit, _coughTime, _cough] spawn {
  params ["_unit", "_coughtime", "_cough"];
  
  sleep _coughTime;
  addCamShake [0.5, 3, 25];
  resetCamShake;
  if (Alive _unit) then {
    _unit say3D [_cough, 10];
  };
};