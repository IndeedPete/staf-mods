params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

_condition = _logic getVariable ["STAF_Module_WW2_Music_Radio_Type",0];
_start = _logic getVariable ["STAF_Module_WW2_Music_Radio_StartOn",0];

#include "fn_radioactions.sqf"

switch (_condition) do {
    case 0:
    {
      {
        if (_x getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _x setVariable ["STAF_WW2_isRadio", true];
      	[_x, 0, ["ACE_MainActions"], _turnoffger, true] call ace_interact_menu_fnc_addActionToObject;
        [_x, 0, ["ACE_MainActions"], _turnonger, true] call ace_interact_menu_fnc_addActionToObject;

        _x setVariable ["STAF_WW2_isRadioType", "ger"];

        if (_start == 1) then {
          [_x] call STAF_WW2_fnc_gerradio;
          _x setVariable ["STAF_WW2_RadioisOn", true];
        };
      } forEach _objs;
    };
    case 1:
    {
      {
        if (_x getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _x setVariable ["STAF_WW2_isRadio", true];
      	[_x, 0, ["ACE_MainActions"], _turnoffsov, true] call ace_interact_menu_fnc_addActionToObject;
        [_x, 0, ["ACE_MainActions"], _turnonsov, true] call ace_interact_menu_fnc_addActionToObject;
        

        _x setVariable ["STAF_WW2_isRadioType", "sov"];

        if (_start == 1) then {
          [_x] call STAF_WW2_fnc_sovradio;
          _x setVariable ["STAF_WW2_RadioisOn", true];
        };
      } forEach _objs;
    };
    case 2:
    {
      {
        if (_x getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _x setVariable ["STAF_WW2_isRadio", true];
      	[_x, 0, ["ACE_MainActions"], _turnoffuk, true] call ace_interact_menu_fnc_addActionToObject;
        [_x, 0, ["ACE_MainActions"], _turnonuk, true] call ace_interact_menu_fnc_addActionToObject;

        _x setVariable ["STAF_WW2_isRadioType", "uk"];

        if (_start == 1) then {
          [_x] call STAF_WW2_fnc_ukradio;
          _x setVariable ["STAF_WW2_RadioisOn", true];
        };
      } forEach _objs;
    };
    case 3:
    {
      {
        if (_x getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _x setVariable ["STAF_WW2_isRadio", true];
      	[_x, 0, ["ACE_MainActions"], _turnoffus, true] call ace_interact_menu_fnc_addActionToObject;
        [_x, 0, ["ACE_MainActions"], _turnonus, true] call ace_interact_menu_fnc_addActionToObject;

        _x setVariable ["STAF_WW2_isRadioType", "us"];

        if (_start == 1) then {
          [_x] call STAF_WW2_fnc_usradio;
          _x setVariable ["STAF_WW2_RadioisOn", true];
        };
      } forEach _objs;
    };
    case 4:
    {
      {
        if (_x getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _x setVariable ["STAF_WW2_isRadio", true];
      	[_x, 0, ["ACE_MainActions"], _turnoffjap, true] call ace_interact_menu_fnc_addActionToObject;
        [_x, 0, ["ACE_MainActions"], _turnonjap, true] call ace_interact_menu_fnc_addActionToObject;

        _x setVariable ["STAF_WW2_isRadioType", "jap"];

        if (_start == 1) then {
          [_x] call STAF_WW2_fnc_japradio;
          _x setVariable ["STAF_WW2_RadioisOn", true];
        };
      } forEach _objs;
    };
    case 5:
    {
      {
        if (_x getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _x setVariable ["STAF_WW2_isRadio", true];
      	[_x, 0, ["ACE_MainActions"], _turnofffr, true] call ace_interact_menu_fnc_addActionToObject;
        [_x, 0, ["ACE_MainActions"], _turnonfr, true] call ace_interact_menu_fnc_addActionToObject;

        _x setVariable ["STAF_WW2_isRadioType", "jap"];

        if (_start == 1) then {
          [_x] call STAF_WW2_fnc_frradio;
          _x setVariable ["STAF_WW2_RadioisOn", true];
        };
      } forEach _objs;
    };
    default
    {
      {
        if (_x getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _x setVariable ["STAF_WW2_isRadio", true];
      	[_x, 0, ["ACE_MainActions"], _turnoffger, true] call ace_interact_menu_fnc_addActionToObject;
        [_x, 0, ["ACE_MainActions"], _turnonger, true] call ace_interact_menu_fnc_addActionToObject;

        _x setVariable ["STAF_WW2_isRadioType", "ger"];

        if (_start == 1) then {
          [_x] call STAF_WW2_fnc_gerradio;
          _x setVariable ["STAF_WW2_RadioisOn", true];
        };
      } forEach _objs;
    };
};
