params ["_player", "_target"];

[player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;

[
  10,
  _target,
  {
    params ["_target"];
    [_target] remoteExec ["deleteVehicle", 0, true];
    [player, "", 1] call ace_common_fnc_doAnimation;
    _target setVariable ["STAF_HideBody_active",false,true];
  },
  {
    params ["_target"];
    _target setVariable ["STAF_HideBody_active",false,true];
    [player, "", 2] call ace_common_fnc_doAnimation;
  },
  "Hiding Body...somewhere"
] call ace_common_fnc_progressBar;
