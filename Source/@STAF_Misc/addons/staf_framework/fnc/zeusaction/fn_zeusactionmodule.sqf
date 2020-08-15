params [
    ["_logic", ObjNull, [ObjNull]],
	["_unit", [], [[]]]
];

{
	[_x, ["STAF_var_ZeusActionEligible", true, true]] remoteExec ["setVariable", 0, true];
	[_x, ["STAF_var_ZeusAction", false, true]] remoteExec ["setVariable", 0, true];
} forEach _unit;

