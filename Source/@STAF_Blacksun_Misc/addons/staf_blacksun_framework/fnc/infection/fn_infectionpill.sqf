params ["_caller","_target", "_selectionName"];

[_caller, _target] spawn
{
  params ["_caller","_target"];
  _DurationMin = missionnamespace getVariable ["STAF_Horror_AntiVirusPills_Duration", 600];
  _DurationSec = _DurationMin / 60;
  _Duration = (ceil random [(_DurationSec - 2),(_DurationSec),(_DurationSec + 2)]) * 60;

  [_target, "activity_view", "%1 used some pills on %2", [[_caller, false, true] call ace_common_fnc_getName,[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  [_target, "quick_view", "%1 infection has been suppressed", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The effects of the infection have been suppressed", 2, _caller, 10] call ace_common_fnc_displayTextStructured;

  waituntil {!(_target getvariable ["STAF_Horror_Immunity", false])};
  _target setVariable ["STAF_Horror_Immunity",true, true];
  sleep _Duration;
  _target setVariable ["STAF_Horror_Immunity",false, true];
};
