params ["_target", "_radioType"];

#include "fn_radioactions.sqf"

switch (_radioType) do {
    case "_ger":
    {
      if (_target getVariable ["STAF_WW2_isRadio", false]) exitWith {[objNull, "ALREADY A WW2 RADIO"] call BIS_fnc_showCuratorFeedbackMessage;};

      _target setVariable ["STAF_WW2_isRadio", true];
      [_target, 0, ["ACE_MainActions"], _turnoffger, true] call ace_interact_menu_fnc_addActionToObject;
      [_target, 0, ["ACE_MainActions"], _turnonger, true] call ace_interact_menu_fnc_addActionToObject;

      _target setVariable ["STAF_WW2_isRadioType", "ger"];
    };
    case "_sov":
    {
      if (_target getVariable ["STAF_WW2_isRadio", false]) exitWith {[objNull, "ALREADY A WW2 RADIO"] call BIS_fnc_showCuratorFeedbackMessage;};

      _target setVariable ["STAF_WW2_isRadio", true];
      [_target, 0, ["ACE_MainActions"], _turnoffsov, true] call ace_interact_menu_fnc_addActionToObject;
      [_target, 0, ["ACE_MainActions"], _turnonsov, true] call ace_interact_menu_fnc_addActionToObject;

      _target setVariable ["STAF_WW2_isRadioType", "sov"];
    };
    case "_uk":
    {
      if (_target getVariable ["STAF_WW2_isRadio", false]) exitWith {[objNull, "ALREADY A WW2 RADIO"] call BIS_fnc_showCuratorFeedbackMessage;};

      _target setVariable ["STAF_WW2_isRadio", true];
      [_target, 0, ["ACE_MainActions"], _turnoffuk, true] call ace_interact_menu_fnc_addActionToObject;
      [_target, 0, ["ACE_MainActions"], _turnonuk, true] call ace_interact_menu_fnc_addActionToObject;

      _target setVariable ["STAF_WW2_isRadioType", "uk"];
    };
    case "_us":
    {
      if (_target getVariable ["STAF_WW2_isRadio", false]) exitWith {[objNull, "ALREADY A WW2 RADIO"] call BIS_fnc_showCuratorFeedbackMessage;};

      _target setVariable ["STAF_WW2_isRadio", true];
      [_target, 0, ["ACE_MainActions"], _turnoffus, true] call ace_interact_menu_fnc_addActionToObject;
      [_target, 0, ["ACE_MainActions"], _turnonus, true] call ace_interact_menu_fnc_addActionToObject;

      _target setVariable ["STAF_WW2_isRadioType", "us"];
    };
    case "_jap":
    {
      if (_target getVariable ["STAF_WW2_isRadio", false]) exitWith {[objNull, "ALREADY A WW2 RADIO"] call BIS_fnc_showCuratorFeedbackMessage;};

      _target setVariable ["STAF_WW2_isRadio", true];
      [_target, 0, ["ACE_MainActions"], _turnoffjap, true] call ace_interact_menu_fnc_addActionToObject;
      [_target, 0, ["ACE_MainActions"], _turnonjap, true] call ace_interact_menu_fnc_addActionToObject;

      _target setVariable ["STAF_WW2_isRadioType", "jap"];
    };
    case "_fr":
    {
      if (_target getVariable ["STAF_WW2_isRadio", false]) exitWith {[objNull, "ALREADY A WW2 RADIO"] call BIS_fnc_showCuratorFeedbackMessage;};

      _target setVariable ["STAF_WW2_isRadio", true];
      [_target, 0, ["ACE_MainActions"], _turnofffr, true] call ace_interact_menu_fnc_addActionToObject;
      [_target, 0, ["ACE_MainActions"], _turnonfr, true] call ace_interact_menu_fnc_addActionToObject;

      _target setVariable ["STAF_WW2_isRadioType", "fr"];
    };
    default
    {
      if (_target getVariable ["STAF_WW2_isRadio", false]) exitWith {[objNull, "ALREADY A WW2 RADIO"] call BIS_fnc_showCuratorFeedbackMessage;};

      _target setVariable ["STAF_WW2_isRadio", true];
      [_target, 0, ["ACE_MainActions"], _turnoffger, true] call ace_interact_menu_fnc_addActionToObject;
      [_target, 0, ["ACE_MainActions"], _turnonger, true] call ace_interact_menu_fnc_addActionToObject;

      _target setVariable ["STAF_WW2_isRadioType", "ger"];
    };
};
