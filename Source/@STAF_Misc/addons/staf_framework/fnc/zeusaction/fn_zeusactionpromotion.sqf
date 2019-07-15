_ZeusPromotion = [
  "STAF_ZeusPromotion",
  "Become Zeus",
  "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
  {
      player setVariable ["STAF_ZeusAccess", true];

      //Add Zeus
      [
        [player, getPos player],
        {
          params ["_player", "_playerPos"];

          private _moderatorModule = (createGroup sideLogic) createUnit ["ModuleCurator_F", _playerPos, [], 0, ""];
          sleep 0.001;
          _player assignCurator _moderatorModule;
          _player setVariable ["STAF_promoZeusModule", _moderatorModule, true];
        }
      ] remoteExec ["spawn", 2];

      ["You are Zeus now!", 2, player, 12] call ace_common_fnc_displayTextStructured;
      player call STAF_fnc_zeusactionaddaction;
  },
  {true}
] call ace_interact_menu_fnc_createAction;
