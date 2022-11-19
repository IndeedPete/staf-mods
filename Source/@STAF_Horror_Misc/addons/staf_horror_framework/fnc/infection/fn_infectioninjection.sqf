params ["_caller","_target", "_selectionName"];

[_caller, _target] spawn
{
  params ["_caller","_target"];

  [_target, "activity_view", "%1 used an anti-virus injector on %2", [[_caller, false, true] call ace_common_fnc_getName,[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  [_target, "quick_view", "%1 is cured", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The patient is cured", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;

  _target setVariable ["STAF_Horror_Immunity",false, true];
  _target setVariable ["STAF_Horror_Infected",false, true];
  _target setVariable ["STAF_Horror_Infection",0, true];
};
