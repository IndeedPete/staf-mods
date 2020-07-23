_EarsZeus = [
  "STAF_CuratorHearingCam",
  "Hear Voices from Curator Cam Position",
  "",
  {
    _player setvariable ["TFAR_CuratorCamEars", true];
    ["You now hear from your Curator Cam Position!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
  },
  {(_player getVariable ["STAF_var_ZeusActionEligible", false]) && (!(_player getvariable ["TFAR_CuratorCamEars", true])) && (_player getVariable ["STAF_var_ZeusAction", false])}
] call ace_interact_menu_fnc_createAction;
