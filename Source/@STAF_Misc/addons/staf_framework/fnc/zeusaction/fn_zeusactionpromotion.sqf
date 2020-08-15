_ZeusPromotion = [
  "STAF_ZeusPromotion",
  "Become Zeus",
  "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
  {
    _player setVariable ["STAF_var_ZeusAction", true];
    
    //Add Zeus
    _player remoteExec ["STAF_fnc_zeusactionpromotion_exec", 2];
    [] remoteExec ["STAF_fnc_zeusactionpromotion_handleDC", 0, true];

    ["You are Zeus now!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
  },
  {
    (!(_player getVariable ["STAF_var_ZeusAction", false])) and ((_player getVariable ["STAF_var_ZeusActionEligible", false]) or (serverCommandAvailable "#logout"))
  }] call ace_interact_menu_fnc_createAction;

