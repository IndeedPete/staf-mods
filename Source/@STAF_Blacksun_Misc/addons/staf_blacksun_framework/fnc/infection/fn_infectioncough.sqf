params ["_unit"];

while {Alive _unit && _unit getVariable "STAF_Horror_Infected"} do {
  _cough = [] call STAF_Horror_fnc_infectionrandomcough;
  enableCamShake true;
  _coughtime = -1;

  if (isNil {_unit getVariable ["STAF_Horror_CoughTime",nil]}) then {
    if ((_unit getVariable "STAF_Horror_Infection") < 0.5) then {
      _unit setVariable ["STAF_Horror_CoughTime", (round(random(60)+10))]
    };
    if ((_unit getVariable "STAF_Horror_Infection") >= 0.5 && (_unit getVariable "STAF_Horror_Infection") < 0.75) then {
      _infection = _unit getVariable ["STAF_Horror_Infection", 0];
      _unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+15))]
    };
    if ((_unit getVariable "STAF_Horror_Infection") >= 0.75 && (_unit getVariable "STAF_Horror_Infection") < 0.9) then {
      _infection = _unit getVariable ["STAF_Horror_Infection", 0];
      _unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+10))]
    };
    if ((_unit getVariable "STAF_Horror_Infection") >= 0.9) then {
      _infection = _unit getVariable ["STAF_Horror_Infection", 0];
      _unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)*5))]
    };
  };

  _coughtime = _unit getVariable "STAF_Horror_CoughTime";
  sleep _coughtime;
  addCamShake [0.5, 3, 25];
  resetCamShake;
  if (Alive _unit) then {
      _unit say3D [_cough,10];
  };
  _unit setVariable ["STAF_Horror_CoughTime",nil];
};

_unit setVariable ["STAF_Horror_CoughTime",nil];
