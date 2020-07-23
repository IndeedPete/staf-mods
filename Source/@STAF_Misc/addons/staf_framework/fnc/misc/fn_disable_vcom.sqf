params [
  ["_logic", ObjNull,[ObjNull]],
	["_unit", [], [[]]],
  ["_activated",true ,[true]]
];


if (_activated) then {
  {
    _x setVariable ["Vcm_Disable", false, true];
  } forEach group _unit;
  {
    _x setVariable ["lambs_danger_disableAI", false, true];
  } forEach _unit;
};
