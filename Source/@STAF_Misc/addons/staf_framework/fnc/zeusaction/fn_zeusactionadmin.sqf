_Zeus_Admin = ["76561197971387924","76561198063419944","76561198042354590","76561198071715471","76561197980877311"];

If ((getplayerUID player in _Zeus_Admin) && (isnil "STAF_ZeusActionModule")) then {
  #include "fn_zeusactionsubaction.sqf"
  #include "fn_zeusactionpromotion.sqf"

  [player, 1, ["ACE_SelfActions"], _ZeusSubAction, true] call ace_interact_menu_fnc_addActionToObject;
  [player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusPromotion, true] call ace_interact_menu_fnc_addActionToObject;
};