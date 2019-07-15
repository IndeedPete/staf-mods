_EarsUnit = [
  "STAF_CuratorHearingUnit",
  "Hear Voices from Unit Position",
  "",
  {
    player setvariable ["TFAR_CuratorCamEars", false];
    ["You now hear from your Units Position!", 2, player, 12] call ace_common_fnc_displayTextStructured;
    player call STAF_fnc_curatorearsaddaction;
  },
  {true}
] call ace_interact_menu_fnc_createAction;
