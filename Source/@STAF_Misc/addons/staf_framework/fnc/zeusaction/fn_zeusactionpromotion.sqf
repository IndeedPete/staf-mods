_ZeusPromotion = [
  "STAF_ZeusPromotion",
  "Become Zeus",
  "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
  {
    _player setVariable ["STAF_var_ZeusAction", true];
    
    [_player] remoteexec ["STAF_fnc_zeusactionpromotion_exec", 2];

    ["You are Zeus now!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
    _player call STAF_fnc_zeusactionaddaction;
  },
  {!(_player getVariable ["STAF_var_ZeusAction", false]) && (_player getVariable ["STAF_var_ZeusActionEligible", false])}
] call ace_interact_menu_fnc_createAction;
