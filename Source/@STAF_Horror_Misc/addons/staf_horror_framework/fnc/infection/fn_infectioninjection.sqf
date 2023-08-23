params ["_caller","_unit", "_selectionName"];

[
  _unit,
  "activity_view", 
  "%1 used an anti-virus injector on %2", 
  [
    [_caller, false, true] call ace_common_fnc_getName,
    [_unit, false, true] call ace_common_fnc_getName
  ]
] call ace_medical_treatment_fnc_addToLog;

[
  _unit, 
  "quick_view", 
  "%1 is cured", 
  [
    [_unit, false, true] call ace_common_fnc_getName
  ]
] call ace_medical_treatment_fnc_addToLog;

["The patient is cured", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;

// Debug Message
if (STAF_cbaDebug) then {
  _name = [_unit, false, true] call ace_common_fnc_getName;
  systemChat format ["%1 is cured", _name];
  diag_log format ["%1 is cured", _name];
};

_unit setVariable ["STAF_Horror_Immunity",false, true];
_unit setVariable ["STAF_Horror_Infected",false, true];
_unit setVariable ["STAF_Horror_Infection_Level",0, true];
_unit setVariable ["STAF_Horror_CoughTime",nil, true];
