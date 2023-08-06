//Init of the radio
_radio = _this select 0;
_radioClass = typeOf _radio;
_radioPos = getPosATL _radio;
_radioDir = getDir _radio;
_radioType = _radio getVariable "STAF_WW2_isRadioType";


//Stop Song
_radio setDamage 1;
deleteVehicle _radio;
_newRadio = createVehicle [_radioClass, _radioPos];
_newRadio enableSimulation false;
_newRadio setDir _radioDir;
_newRadio setpos _radioPos;
_newRadio enableSimulation true;

#include "fn_radioactions.sqf"

//Get actions back
switch (_radioType) do {
	case "ger": { 
        if (_newRadio getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _newRadio setVariable ["STAF_WW2_isRadio", true];
      	[_newRadio, 0, ["ACE_MainActions"], _turnoffger, true] call ace_interact_menu_fnc_addActionToObject;
        [_newRadio, 0, ["ACE_MainActions"], _turnonger, true] call ace_interact_menu_fnc_addActionToObject;

        _newRadio setVariable ["STAF_WW2_isRadioType", "ger"];
	};
	case "sov": { 
        if (_newRadio getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _newRadio setVariable ["STAF_WW2_isRadio", true];
      	[_newRadio, 0, ["ACE_MainActions"], _turnoffsov, true] call ace_interact_menu_fnc_addActionToObject;
        [_newRadio, 0, ["ACE_MainActions"], _turnonsov, true] call ace_interact_menu_fnc_addActionToObject;
        

        _newRadio setVariable ["STAF_WW2_isRadioType", "sov"];
	};
	case "uk": { 
        if (_newRadio getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _newRadio setVariable ["STAF_WW2_isRadio", true];
      	[_newRadio, 0, ["ACE_MainActions"], _turnoffuk, true] call ace_interact_menu_fnc_addActionToObject;
        [_newRadio, 0, ["ACE_MainActions"], _turnonuk, true] call ace_interact_menu_fnc_addActionToObject;

        _newRadio setVariable ["STAF_WW2_isRadioType", "uk"];
	};
	case "us": { 
        if (_newRadio getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _newRadio setVariable ["STAF_WW2_isRadio", true];
      	[_newRadio, 0, ["ACE_MainActions"], _turnoffus, true] call ace_interact_menu_fnc_addActionToObject;
        [_newRadio, 0, ["ACE_MainActions"], _turnonus, true] call ace_interact_menu_fnc_addActionToObject;

        _newRadio setVariable ["STAF_WW2_isRadioType", "us"];
	};
	case "jap": { 
        if (_newRadio getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _newRadio setVariable ["STAF_WW2_isRadio", true];
      	[_newRadio, 0, ["ACE_MainActions"], _turnoffjap, true] call ace_interact_menu_fnc_addActionToObject;
        [_newRadio, 0, ["ACE_MainActions"], _turnonjap, true] call ace_interact_menu_fnc_addActionToObject;

        _newRadio setVariable ["STAF_WW2_isRadioType", "jap"];
	};
	default { 
        if (_newRadio getVariable ["STAF_WW2_isRadio", false]) exitWith {};

        _newRadio setVariable ["STAF_WW2_isRadio", true];
      	[_newRadio, 0, ["ACE_MainActions"], _turnoffger, true] call ace_interact_menu_fnc_addActionToObject;
        [_newRadio, 0, ["ACE_MainActions"], _turnonger, true] call ace_interact_menu_fnc_addActionToObject;

        _newRadio setVariable ["STAF_WW2_isRadioType", "ger"];
	};
};