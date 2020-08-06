_ZeusDemotion = [
  "STAF_ZeusDemotion",
  "Step down as Zeus",
  "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
  {
    _player setVariable ["STAF_var_ZeusAction", false];

    //Remove Zeus
    ["STAF_fnc_zeusactiondemotion_exec", _player] call CBA_fnc_serverEvent;    

    ["You are no longer Zeus!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
    _player call STAF_fnc_zeusactionaddaction;
  },
  {
    _player getVariable ["STAF_var_ZeusAction", false]
  }] call ace_interact_menu_fnc_createAction;