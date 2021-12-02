params ["_player", "_target"];

_weapon_player = currentWeapon _player;

if(_weapon_player != "") then {
  if(_weapon_player == (primaryWeapon _player)) then {
    _animationlist_primary = ["MOCAP_Man_Act_Rfl_Stroke_RightCurve","MOCAP_Man_Act_Rfl_Stroke_DirectCurve"];

    _animation_primary = selectRandom _animationlist_primary;
    [_player, _animation_primary] call ace_common_fnc_doGesture;

    [_target, true, (round(random(10)+25)), true] call ace_medical_fnc_setUnconscious;
    [_target, 0.15, "head", "punch"] call ace_medical_fnc_addDamageToUnit;
    [_target, 0.15] call ace_medical_status_fnc_adjustPainLevel;
    [_target, "quick_view", "%1 knocked %2 out", [[_player, false, true] call ace_common_fnc_getName], [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  };

  if(_weapon_player == (secondaryWeapon _player)) then {
    _animationlist_secondary = ["MOCAP_Man_Act_Lnr_Stroke_DirectCurve"];

    _animation_secondary = selectRandom _animationlist_secondary;
    [_player, _animation_secondary] call ace_common_fnc_doGesture;

    [_target, true, (round(random(10)+25)), true] call ace_medical_fnc_setUnconscious;
    [_target, 0.15, "head", "punch"] call ace_medical_fnc_addDamageToUnit;
    [_target, 0.15] call ace_medical_status_fnc_adjustPainLevel;
    [_target, "quick_view", "%1 knocked %2 out", [[_player, false, true] call ace_common_fnc_getName], [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  };

  if(_weapon_player == (handgunWeapon _player)) then {
    _animationlist_handgun = ["MOCAP_Man_Act_Pstl_Stroke_RightCurve","MOCAP_Man_Act_Pstl_Stroke_LeftCurve"];

    _animation_handgun = selectRandom _animationlist_handgun;
    [_player, _animation_handgun] call ace_common_fnc_doGesture;

    [_target, true, (round(random(10)+25)), true] call ace_medical_fnc_setUnconscious;
    [_target, 0.15, "head", "punch"] call ace_medical_fnc_addDamageToUnit;
    [_target, 0.15] call ace_medical_status_fnc_adjustPainLevel;
    [_target, "quick_view", "%1 knocked %2 out", [[_player, false, true] call ace_common_fnc_getName], [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
  };
} else {
  _animationlist_noweapon = ["MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Right_Direct","MOCAP_Man_Act_Non_CivPace_Non_Punch_Hand_Left_Direct"];

  _animation_noweapon = selectRandom _animationlist_noweapon;
  [_player, _animation_noweapon] call ace_common_fnc_doGesture;

  [_target, true, (round(random(10)+25)), true] call ace_medical_fnc_setUnconscious;
  [_target, 0.15, "head", "punch"] call ace_medical_fnc_addDamageToUnit;
  [_target, 0.15] call ace_medical_status_fnc_adjustPainLevel;
  [_target, "quick_view", "%1 knocked %2 out", [[_player, false, true] call ace_common_fnc_getName], [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
};