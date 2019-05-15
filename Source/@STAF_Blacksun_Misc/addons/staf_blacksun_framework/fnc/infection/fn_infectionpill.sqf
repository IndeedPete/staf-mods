params ["_caller","_target", "_selectionName"];

[_caller, _target] spawn
{
  _DurationMin = missionnamespace getVariable ["STAF_Horror_AntiVirusPills_Duration", 900];
  _DurationSec = _DurationMin / 60;
  _Duration = (ceil random [(_DurationSec - 2),(_DurationSec),(_DurationSec + 2)]) * 60;

  [(_this select 1), "activity_view", "%1 used some pills on %2", [[(_this select 0), false, true] call ace_common_fnc_getName,[(_this select 1), false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  [(_this select 1), "quick_view", "%1 infection has been suppressed", [[(_this select 1), false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The effects of the infection have been suppressed", 2, (_this select 0), 10] call ace_common_fnc_displayTextStructured;

  waituntil {!((_this select 1) getvariable ["STAF_Horror_Immunity",false])};
  (_this select 1) setVariable ["STAF_Horror_Immunity",true, true];
  sleep _Duration;
  (_this select 1) setVariable ["STAF_Horror_Immunity",false, true];
};
