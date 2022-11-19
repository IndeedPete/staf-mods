params [
  ["_logic", ObjNull,[ObjNull]],
	["_unit", [], [[]]],
  ["_activated",true ,[true]]
];

hint format ["%1", _unit];

_logic getVariable ["Side", 1];

if (_activated) then {
  {
    {
      _x setVariable ["lambs_danger_disableAI", false, true];
    } forEach group _x
  } forEach _unit;
};
