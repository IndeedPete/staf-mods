params ["_player"];

_player setVariable ["STAF_var_ZeusAction", false];

//Remove Zeus
_player remoteExec ["STAF_fnc_zeusactiondemotion_exec", 2];

["You are no longer Zeus!", 2, _player, 12] call ace_common_fnc_displayTextStructured;