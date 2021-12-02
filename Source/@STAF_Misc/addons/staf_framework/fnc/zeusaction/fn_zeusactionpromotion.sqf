params ["_player"];

_player setVariable ["STAF_var_ZeusAction", true];

//Add Zeus
_player remoteExec ["STAF_fnc_zeusactionpromotion_exec", 2];
[] remoteExec ["STAF_fnc_zeusactionpromotion_handleDC", 0, true];

["You are Zeus now!", 2, _player, 12] call ace_common_fnc_displayTextStructured;

