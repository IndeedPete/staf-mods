_player = ace_player;

#include "fn_curatorearsearsunitaction.sqf"
#include "fn_curatorearsearszeusaction.sqf"
#include "fn_curatorearssubaction.sqf"

_ZeusSubActionAdded = _player getVariable ["STAF_var_SubZeusAction", false];

if (!(_ZeusSubActionAdded)) then {
	[_player, 1, ["ACE_SelfActions"], _ZeusSubAction, true] call ace_interact_menu_fnc_addActionToObject;
	_player setvariable ["STAF_var_SubZeusAction", true];
};

[_player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsUnit, true] call ace_interact_menu_fnc_addActionToObject;
[_player, 1, ["ACE_SelfActions", "STAF_Zeus"], _EarsZeus, true] call ace_interact_menu_fnc_addActionToObject;
