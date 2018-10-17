params ["_caller","_target", "_selectionName"];

playsound3d ["ryanzombies\sounds\antivirus_pills.ogg", _target];

[_caller, _target] spawn
{
  [(_this select 1), "activity_view", "%1 used some pills on %2", [[(_this select 0), false, true] call ace_common_fnc_getName,[(_this select 1), false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  [(_this select 1), "quick_view", "%1 infection has been suppressed", [[(_this select 1), false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The effects of the infection have been suppressed", 2, (_this select 0), 10] call ace_common_fnc_displayTextStructured;

  waituntil {!((_this select 1) getvariable ["ryanzombiesimmunity",false])};
  (_this select 1) setVariable ["ryanzombiesimmunity",true,true];
  sleep ryanzombiesantivirusduration;
  (_this select 1) setVariable ["ryanzombiesimmunity",false,true];
};
