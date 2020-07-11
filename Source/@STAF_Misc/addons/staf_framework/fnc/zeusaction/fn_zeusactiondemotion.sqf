_ZeusDemotion = [
  "STAF_ZeusDemotion",
  "Step down as Zeus",
  "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
  {
    _player setVariable ["STAF_var_ZeusAction", false];

    //Remove Zeus
    _zeusassigned = _player getVariable ["STAF_var_promoZeusModule", objNull];
    if (!isNull _zeusassigned) then {(group _zeusassigned) deleteGroupWhenEmpty true; deleteVehicle _zeusassigned};      

    ["You are no longer Zeus!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
    _player call STAF_fnc_zeusactionaddaction;
  },
  {(_player getVariable ["STAF_var_ZeusAction", false]) && (_player getVariable ["STAF_var_ZeusActionEligible", false])}
] call ace_interact_menu_fnc_createAction;
