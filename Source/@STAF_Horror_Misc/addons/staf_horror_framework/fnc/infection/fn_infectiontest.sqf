params ["_caller","_unit", "_selectionName"];

_infection = _unit getvariable "STAF_Horror_Infection";

if (_infection > 0) exitwith {
  switch (true) do {
    case (_infection < 0.15): {
      [_unit, "quick_view", "%1 shows first symptoms", [[_unit, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

      ["The patient shows first symptoms!", 2, _caller, 10] call ace_common_fnc_displayTextStructured;    
    };
    case ((_infection >= 0.15) &&	(_infection < 0.5)): {
      [_unit, "quick_view", "%1 is infected", [[_unit, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

      ["The patient is infected!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
    };
    case ((_infection >= 0.5) &&	(_infection < 0.85)): {
      [_unit, "quick_view", "%1 is heavily infected", [[_unit, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

      ["The patient is heavily infected!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
    };
    case (_infection >= 0.85): {
      [_unit, "quick_view", "%1 is dying", [[_unit, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

      ["The patient is dying!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
    };
  };
};

if (_infection == 0) exitwith {
  [_unit, "quick_view", "%1 is healthy", [[_unit, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The patient is healthy!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
};

if (isNil "_infection") exitwith {
  [_unit, "quick_view", "%1 is healthy", [[_unit, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

  ["The patient is healthy!", 1.5, _caller, 10] call ace_common_fnc_displayTextStructured;
};
