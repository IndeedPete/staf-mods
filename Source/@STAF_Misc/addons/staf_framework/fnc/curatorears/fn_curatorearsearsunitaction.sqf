_EarsUnit = [
  "STAF_CuratorHearingUnit",
  "Hear Voices from Unit Position",
  "",
  {
    player setvariable ["TFAR_CuratorCamEars", false];
    ["You now hear from your Units Position!", 2, player, 12] call ace_common_fnc_displayTextStructured;
  },
  {(player getVariable ["STAF_var_ZeusActionEligible", false]) && (player getvariable ["TFAR_CuratorCamEars", true]) && (player getVariable ["STAF_var_ZeusAction", false])}
] call ace_interact_menu_fnc_createAction;
