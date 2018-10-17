params ["_caller","_target", "_selectionName"];

playsound3d ["ryanzombies\sounds\antivirus_inject.ogg", _target];

[_caller, _target] spawn
{
  (_this select 1) setVariable ["ryanzombiesinfected",0,true];

  [(_this select 1), "activity_view", "%1 used an anti-virus injector on %2", [[(_this select 0), false, true] call ace_common_fnc_getName,[(_this select 1), false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  [(_this select 1), "quick_view", "%1 is cured", [[(_this select 1), false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The patient is cured", 1.5, (_this select 0), 10] call ace_common_fnc_displayTextStructured;
};
