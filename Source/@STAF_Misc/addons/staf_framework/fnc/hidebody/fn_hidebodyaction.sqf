_HideBody = [
  "STAF_HideBody",
  "Hide Body",
  "\a3\ui_f\data\IGUI\Cfg\Revive\overlayIcons\d100_ca.paa",
  {
    // Checking target variable
    if (_target getVariable "STAF_HideBody_active") exitWith {
    ["Someone already takes care of this Body!", 2, player, 12] call ace_common_fnc_displayTextStructured;
    };

    // Setting the variable
    _target setVariable ["STAF_HideBody_active",true,true];

    if ((player call STAF_fnc_inHouse) OR (((getPosATL player) select 2) > 0.1)) then {
      switch ("ACE_EntrenchingTool" in (vestItems player + uniformItems player + backpackItems player + assignedItems player)) do {
        case true: {[player, _target] call STAF_fnc_hidebody_tool_inside;};
        case false: {[player, _target] call STAF_fnc_hidebody_notool_inside;};
      };
    } else {
      switch ("ACE_EntrenchingTool" in (vestItems player + uniformItems player + backpackItems player + assignedItems player)) do {
        case true: {[player, _target] call STAF_fnc_hidebody_tool_outside;};
        case false: {[player, _target] call STAF_fnc_hidebody_notool_outside;};
      };
    };
  },
  {!Alive _target}
] call ace_interact_menu_fnc_createAction;
