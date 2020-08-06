_ZeusPromotion = [
  "STAF_ZeusPromotion",
  "Become Zeus",
  "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
  {
    _player setVariable ["STAF_var_ZeusAction", true];
    
    //Add Zeus
    ["STAF_fnc_zeusactionpromotion_exec", _player] call CBA_fnc_serverEvent;

    ["You are Zeus now!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
    _player call STAF_fnc_zeusactionaddaction;
  },
  {
    (!(_player getVariable ["STAF_var_ZeusAction", false])) and ((_player getVariable ["STAF_var_ZeusActionEligible", false]) or (serverCommandAvailable "#logout"))
  }] call ace_interact_menu_fnc_createAction;

