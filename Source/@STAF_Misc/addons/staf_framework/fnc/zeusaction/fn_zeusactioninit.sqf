params ["_player"]; 

_ZeusSubActionAdded = _player getVariable ["STAF_var_SubZeusAction", false];
_ZeusAction = _player getVariable ["STAF_var_ZeusAction", false];
_ZeusActionEligible = _player getVariable ["STAF_var_ZeusActionEligible", false];

#include "fn_zeusactionpromotion.sqf"
#include "fn_zeusactiondemotion.sqf"
#include "fn_zeusactionsubaction.sqf"
#include "\staf_framework\fnc\curatorears\fn_curatorearsearsunitaction.sqf"
#include "\staf_framework\fnc\curatorears\fn_curatorearsearszeusaction.sqf"

_player setvariable ["STAF_var_SubZeusAction", true];

[_player, 1, ["ACE_SelfActions"], _ZeusSubAction, true] call ace_interact_menu_fnc_addActionToObject;
[_player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusDemotion, true] call ace_interact_menu_fnc_addActionToObject;
[_player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusPromotion, true] call ace_interact_menu_fnc_addActionToObject;
#include "\staf_framework\fnc\curatorears\fn_curatorearsinit.sqf"