params ["_player", "_target"];

playSound3D ["staf_framework\snd\digging.ogg", player];
[player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;

[
  30,
  _target,
  {
    params ["_target"];
    [_target] remoteExec ["hidebody", 0, true];
    [player, "", 1] call ace_common_fnc_doAnimation;
    _target setVariable ["STAF_HideBody_active",false,true];
  },
  {
    params ["_target"];
    _target setVariable ["STAF_HideBody_active",false,true];
    [player, "", 2] call ace_common_fnc_doAnimation;
  },
  "Bury body with your Hands"
] call ace_common_fnc_progressBar;
