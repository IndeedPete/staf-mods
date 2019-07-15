_ZeusDemotion = [
  "STAF_ZeusDemotion",
  "Step down as Zeus",
  "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
  {
      player setVariable ["STAF_ZeusAccess", false];

      //Remove Zeus
      _zeusassigned = player getVariable ["STAF_promoZeusModule", objNull];
    	if (!isNull _zeusassigned) then {(group _zeusassigned) deleteGroupWhenEmpty true; deleteVehicle _zeusassigned};

      ["You are no longer Zeus!", 2, player, 12] call ace_common_fnc_displayTextStructured;
      player call STAF_fnc_zeusactionaddaction;
  },
  {true}
] call ace_interact_menu_fnc_createAction;
