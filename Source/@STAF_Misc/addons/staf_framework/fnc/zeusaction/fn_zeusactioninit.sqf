params [
    ["_logic", ObjNull, [ObjNull]],
	["_Zeus_Module", [], [[]]]
];
#include "fn_zeusactionpromotion.sqf"

{
  [_x, 1, ["ACE_SelfActions", "STAF_Zeus"], _ZeusPromotion, true] call ace_interact_menu_fnc_addActionToObject;
  [_x] call STAF_fnc_zeusactionsubaction;
  _x setvariable ["STAF_ZeusActionModule", true];
} foreach _Zeus_Module;
