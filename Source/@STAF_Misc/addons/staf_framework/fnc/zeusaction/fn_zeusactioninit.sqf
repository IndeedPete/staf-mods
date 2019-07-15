params [
    ["_logic", ObjNull, [ObjNull]],
	["_Zeus_Module", [], [[]]]
];
#include "fn_zeusactionsubaction.sqf"
#include "fn_zeusactionpromotion.sqf"

{
  [_x, 1, ["ACE_SelfActions"], _ZeusSubAction, true] call ace_interact_menu_fnc_addActionToObject;
  [_x, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusPromotion, true] call ace_interact_menu_fnc_addActionToObject;
  _x setvariable ["STAF_ZeusActionModule", true];
} foreach _Zeus_Module;
