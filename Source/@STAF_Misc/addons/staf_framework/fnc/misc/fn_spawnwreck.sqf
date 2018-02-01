params [
  ["_logic", ObjNull,[ObjNull]],
	["_vehicle", [], [[]]],
  ["_activated",true ,[true]]
];

_condition = _logic getVariable ["STAF_Module_SpawnWreck_ACE_Cooking_Off",-1];

if (_activated) then {
  {
    _x setdamage 1;
    _x setdamage 0;
    _x setdamage 1;

    if (_condition == 0) then {
      _x setVariable ["ace_cookoff_enable", false, true];
      _x setVariable ["ace_cookoff_enableAmmoCookoff", false, true];
    } else {
      _x setVariable ["ace_cookoff_enable", true, true];
      _x setVariable ["ace_cookoff_enableAmmoCookoff", true, true];
    };
  } forEach _vehicle;
};
