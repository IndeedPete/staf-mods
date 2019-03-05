_HideBody = [
  "STAF_HideBody",
  "Hide Body",
  "\a3\ui_f\data\IGUI\Cfg\Revive\overlayIcons\d100_ca.paa",
  {
    // Checking target variable
    if (_target getVariable "STAF_HideBody_active") exitWith {
    ["Someone already takes care of this Body!", 2, _caller, 12] call ace_common_fnc_displayTextStructured;
    };

    // Setting the variable
    _target setVariable ["STAF_HideBody_active",true,true];

    // Check for equipment and then playing animation and doing the action
    if ("ACE_EntrenchingTool" in (vestItems player + uniformItems player + backpackItems player + assignedItems player)) then
    {
      if (player call STAF_fnc_inHouse OR ((getPosATL player) select 2) > 0.1) then
      {
        [player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;
        [
          10,
          _target,
          {
            [(_this select 0)] remoteExec ["deleteVehicle", 0, true];
            [player, "", 1] call ace_common_fnc_doAnimation;
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
          },
          {
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
            [player, "", 2] call ace_common_fnc_doAnimation;
          },
          "Hiding Body...somewhere"
        ] call ace_common_fnc_progressBar;
      } else
      {
        playSound3D ["staf_framework\snd\digging.ogg", player];
        [player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;
        [
          5,
          _target,
          {
            [(_this select 0)] remoteExec ["hideBody", 0, true];
            [player, "", 1] call ace_common_fnc_doAnimation;
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
          },
          {
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
            [player, "", 2] call ace_common_fnc_doAnimation;
          },
          "Bury body"
        ] call ace_common_fnc_progressBar;
      };
    } else
    {
      if (player call STAF_fnc_inHouse OR ((getPosATL player) select 2) > 0.1) then
      {
        [player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;
        [
          10,
          _target,
          {
            [(_this select 0)] remoteExec ["deleteVehicle", 0, true];
            [player, "", 1] call ace_common_fnc_doAnimation;
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
          },
          {
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
            [player, "", 2] call ace_common_fnc_doAnimation;
          },
          "Hiding Body...somewhere"
        ] call ace_common_fnc_progressBar;
      } else
      {
        playSound3D ["staf_framework\snd\digging.ogg", player];
        [player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;
        [
          30,
          _target,
          {
            [(_this select 0)] remoteExec ["hideBody", 0, true];
            [player, "", 1] call ace_common_fnc_doAnimation;
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
          },
          {
            (_this select 0) setVariable ["STAF_HideBody_active",false,true];
            [player, "", 2] call ace_common_fnc_doAnimation;
          },
          "Bury body with your Hands"
        ] call ace_common_fnc_progressBar;
      };
    }
  },
  {!Alive _target}
] call ace_interact_menu_fnc_createAction;

["Man", 0, ["ACE_MainActions"], _HideBody, true] call ace_interact_menu_fnc_addActionToClass;
