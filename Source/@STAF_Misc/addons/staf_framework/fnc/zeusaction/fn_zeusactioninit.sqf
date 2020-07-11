#include "fn_zeusactionpromotion.sqf"
#include "fn_zeusactiondemotion.sqf"
#include "fn_zeusactionsubaction.sqf"

_ZeusSubActionAdded = player getVariable ["STAF_var_SubZeusAction", false];
_ZeusActionEligible = player getVariable ["STAF_var_ZeusActionEligible", false];
_ZeusAdmin = ["76561198071715471","76561197980877311","76561197999146691","76561197971387924","76561198063419944","_SP_PLAYER_"]; //Jeromer, Killerfish, Liffy, Moony

if (!(_ZeusSubActionAdded)) then {
	[player, 1, ["ACE_SelfActions"], _ZeusSubAction, true] call ace_interact_menu_fnc_addActionToObject;
	player setvariable ["STAF_var_SubZeusAction", true];
};

If (getplayerUID player in _ZeusAdmin) then {
  player setVariable ["STAF_var_ZeusActionEligible", true];
};

if (!isNull (getAssignedCuratorLogic player)) then {
	player setVariable ["STAF_var_ZeusAction", true];
	player setVariable ["STAF_var_ZeusActionEligible", true];
} else {
	player setVariable ["STAF_var_ZeusAction", false];
};

[player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusDemotion, true] call ace_interact_menu_fnc_addActionToObject;
[player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusPromotion, true] call ace_interact_menu_fnc_addActionToObject;