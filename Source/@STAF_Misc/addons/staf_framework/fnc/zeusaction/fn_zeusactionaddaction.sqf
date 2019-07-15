switch (player getVariable "STAF_ZeusAccess") do {
    case true: {
      //Add Demotion
      #include "fn_zeusactiondemotion.sqf"

      [player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusDemotion, true] call ace_interact_menu_fnc_addActionToObject;
      [player, 1, ["ACE_SelfActions", "STAF_Zeus", "STAF_ZeusPromotion"]] call ace_interact_menu_fnc_removeActionFromObject;
    };
    case false: {
      //Add promotion
      #include "fn_zeusactionpromotion.sqf"

      [player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusPromotion, true] call ace_interact_menu_fnc_addActionToObject;
      [player, 1, ["ACE_SelfActions", "STAF_Zeus", "STAF_ZeusDemotion"]] call ace_interact_menu_fnc_removeActionFromObject;
    };
};
