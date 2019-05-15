params ["_caller","_target", "_selectionName"];

_infection = _target getvariable "STAF_Horror_Infection";

if (_infection > 0) then {
  if (_infection < 0.15) then {
    [_target, "quick_view", "%1 shows first symptoms", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

    ["The patient shows first symptoms!", 2, _caller, 10] call ace_common_fnc_displayTextStructured;
  };
  if ((_infection >= 0.15) &&	(_infection < 0.5)) then {
    [_target, "quick_view", "%1 is infected", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

    ["The patient is infected!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
  };
  if ((_infection >= 0.5) &&	(_infection < 0.85)) then {
    [_target, "quick_view", "%1 is heavily infected", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

    ["The patient is heavily infected!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
  };
  if (_infection >= 0.85) then {
    [_target, "quick_view", "%1 is dying", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

    ["The patient is dying!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
  };
};

if (_infection == 0) then {
  [_target, "quick_view", "%1 is healthy", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The patient is healthy!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
};

if (isNil "_infection") then {
  [_target, "quick_view", "%1 is healthy", [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The patient is healthy!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
};
