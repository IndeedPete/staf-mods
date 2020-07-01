_HideBody = [
  "STAF_HideBody",
  "Hide Body",
  "\a3\ui_f\data\IGUI\Cfg\Revive\overlayIcons\d100_ca.paa",
  {
    // Checking target variable
    if (_target getVariable "STAF_HideBody_active") exitWith {
    ["Someone is already taking care of this Body!", 2, _player, 12] call ace_common_fnc_displayTextStructured;
    };

    // Setting the variable
    _target setVariable ["STAF_HideBody_active",true,true];

    if ((_player call STAF_fnc_inHouse) OR (((getPosATL _player) select 2) > 0.1)) then {
      switch ("ACE_EntrenchingTool" in (vestItems _player + uniformItems _player + backpackItems _player + assignedItems _player)) do {
        case true: {[_player, _target] call STAF_fnc_hidebody_tool_inside;};
        case false: {[_player, _target] call STAF_fnc_hidebody_notool_inside;};
      };
    } else {
      switch ("ACE_EntrenchingTool" in (vestItems _player + uniformItems _player + backpackItems _player + assignedItems _player)) do {
        case true: {[_player, _target] call STAF_fnc_hidebody_tool_outside;};
        case false: {[_player, _target] call STAF_fnc_hidebody_notool_outside;};
      };
    };
  },
  {
    (!Alive _target) AND (vehicle _target == _target)
  }
] call ace_interact_menu_fnc_createAction;
