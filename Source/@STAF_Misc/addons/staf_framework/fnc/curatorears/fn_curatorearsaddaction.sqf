switch (player getVariable "TFAR_CuratorCamEars") do {
    case true: {
      //Add "Hear Voices from Unit Position"
      #include "fn_curatorearsearsunitaction.sqf"

      [player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsUnit, true] call ace_interact_menu_fnc_addActionToObject;
      [player, 1, ["ACE_SelfActions", "STAF_Zeus", "STAF_CuratorHearingCam"]] call ace_interact_menu_fnc_removeActionFromObject;
    };
    case false: {
      //Add "Hear Voices from Curator Cam Position"
      #include "fn_curatorearsearszeusaction.sqf"

      [player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsZeus, true] call ace_interact_menu_fnc_addActionToObject;
      [player, 1, ["ACE_SelfActions", "STAF_Zeus", "STAF_CuratorHearingUnit"]] call ace_interact_menu_fnc_removeActionFromObject;
    };
};
