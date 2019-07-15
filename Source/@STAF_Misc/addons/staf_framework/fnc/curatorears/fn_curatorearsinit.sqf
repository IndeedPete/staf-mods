[] spawn {
  while {true} do {

    if (!isNull (getAssignedCuratorLogic player)) then {
      if (!(player getVariable ["STAF_CuratorCheck",false])) then {
        player setVariable ["STAF_CuratorCheck",true];
        switch (player getVariable ["TFAR_CuratorCamEars",false]) do {
          case true: {
            //Add "Hear Voices from Unit Position"
            #include "fn_curatorearsearsunitaction.sqf"

            [player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsUnit, true] call ace_interact_menu_fnc_addActionToObject;
          };
          case false: {
            //Add "Hear Voices from Curator Cam Position"
            #include "fn_curatorearsearszeusaction.sqf"

            [player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsZeus, true] call ace_interact_menu_fnc_addActionToObject;
          };
        };
      };
    } else {
      player setVariable ["STAF_CuratorCheck",false];
      [player, 1, ["ACE_SelfActions", "STAF_Zeus", "STAF_CuratorHearingUnit"]] call ace_interact_menu_fnc_removeActionFromObject;
      [player, 1, ["ACE_SelfActions", "STAF_Zeus", "STAF_CuratorHearingCam"]] call ace_interact_menu_fnc_removeActionFromObject;
    };

    sleep 10;
  };
};
