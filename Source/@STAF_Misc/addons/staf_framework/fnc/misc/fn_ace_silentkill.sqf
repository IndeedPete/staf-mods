params ["_player", "_target"];

[_player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;

[
  5,
  _target,
  {
    params ["_target"];

    [_player, "", 2] call ace_common_fnc_doAnimation;
    playSound3D ["z\ace\addons\medical_feedback\sounds\fracture_1.wav", _target];
    _target setDamage 1;
    [_target, "quick_view", "%1 broke the neck of %2", [[_player, false, true] call ace_common_fnc_getName], [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  },
  {
    params ["_target"];

    [_player, "", 2] call ace_common_fnc_doAnimation;
  },
  "Breaking Neck"
]
call ace_common_fnc_progressBar;