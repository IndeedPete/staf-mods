params [
  ["_logic", ObjNull,[ObjNull]],
	["_unit", [], [[]]],
  ["_activated",true ,[true]]
];


if (_activated) then {
  {
    _x setVariable ["Vcm_Disable",true];
  } forEach group _unit;
};
