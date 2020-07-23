params [
    ["_logic", ObjNull, [ObjNull]],
	["_unit", [], [[]]]
];

{
	_x setVariable ["STAF_var_ZeusActionEligible", true, true];
	_x setVariable ["STAF_var_ZeusAction", false, true];
} forEach _unit;