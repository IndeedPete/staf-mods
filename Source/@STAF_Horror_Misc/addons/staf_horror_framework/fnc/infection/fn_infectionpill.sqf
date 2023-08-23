params ["_caller","_unit", "_selectionName"];

[_caller, _unit] spawn
{
  params ["_caller","_unit"];

  _Duration = parseNumber STAF_Horror_AntiVirusPills_Duration;
  _DurationNew = (ceil random [(_Duration - _Duration/6),(_Duration),(_Duration + _Duration/6)]);

  [
    _unit, 
    "activity_view", 
    "%1 used some pills on %2", 
    [
      [_caller, false, true] call ace_common_fnc_getName,
      [_unit, false, true] call ace_common_fnc_getName
    ]
  ] call ace_medical_treatment_fnc_addToLog;

  [
    _unit, 
    "quick_view", 
    "%1 infection has been suppressed", 
    [
      [_unit, false, true] call ace_common_fnc_getName
    ]
  ] call ace_medical_treatment_fnc_addToLog;

  ["The effects of the infection have been suppressed", 2, _caller, 10] call ace_common_fnc_displayTextStructured;

  waituntil {!(_unit getvariable ["STAF_Horror_Immunity", false])};
  _unit setVariable ["STAF_Horror_Immunity",true, true];

  // Debug Message
  if (STAF_cbaDebug) then {
    _name = [_unit, false, true] call ace_common_fnc_getName;
    systemChat format ["%1s infection halted", _name];
    diag_log format ["%1s infection halted", _name];
  };

  sleep _DurationNew;

  // Debug Message
  if (STAF_cbaDebug) then {
    _name = [_unit, false, true] call ace_common_fnc_getName;
    systemChat format ["%1s infection continuing", _name];
    diag_log format ["%1s infection continuing", _name];
  };

  _unit setVariable ["STAF_Horror_Immunity",false, true];
};
