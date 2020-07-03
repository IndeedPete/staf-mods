#include "fn_curatorearsearsunitaction.sqf"
#include "fn_curatorearsearszeusaction.sqf"

[player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsUnit, true] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsZeus, true] call ace_interact_menu_fnc_addActionToObject;
