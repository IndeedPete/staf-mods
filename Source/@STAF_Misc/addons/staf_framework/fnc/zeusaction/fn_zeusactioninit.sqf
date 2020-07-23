_player = ace_player;

#include "fn_zeusactionpromotion.sqf"
#include "fn_zeusactiondemotion.sqf"
#include "fn_zeusactionsubaction.sqf"

[_player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusDemotion, true] call ace_interact_menu_fnc_addActionToObject;
[_player, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusPromotion, true] call ace_interact_menu_fnc_addActionToObject;

_ZeusSubActionAdded = _player getVariable ["STAF_var_SubZeusAction", false];
_ZeusAction = _player getVariable ["STAF_var_ZeusAction", false];
_ZeusActionEligible = _player getVariable ["STAF_var_ZeusActionEligible", false];
_ZeusAdmin = ["76561198071715471","76561197980877311","76561197999146691","76561197971387924","76561198063419944","_SP_PLAYER_", "#adminlogged"]; //Jeromer, Killerfish, Liffy, Moony

if (!(_ZeusSubActionAdded)) then {
	[_player, 1, ["ACE_SelfActions"], _ZeusSubAction, true] call ace_interact_menu_fnc_addActionToObject;
	_player setvariable ["STAF_var_SubZeusAction", true];
};

If (getplayerUID _player in _ZeusAdmin) then {
  _player setVariable ["STAF_var_ZeusActionEligible", true];
};

if (!isNull (getAssignedCuratorLogic _player)) then {
	_player setVariable ["STAF_var_ZeusAction", true];
	_player setVariable ["STAF_var_ZeusActionEligible", true];
} else {
	_player setVariable ["STAF_var_ZeusAction", false];
};

