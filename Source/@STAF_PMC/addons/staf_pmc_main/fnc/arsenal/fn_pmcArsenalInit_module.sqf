//Init
params [
  	["_logic", ObjNull,[ObjNull]],
	  ["_vehicle", [], [[]]],
  	["_activated",true ,[true]]
];

_condition = _logic getVariable ["STAF_Module_PMC_Arsenal_Type_Combo",0];

if (_activated) then {
  {
    if (_condition == 0) then {
      [_x] call STAF_PMC_fnc_pmcarsenal;
    };
	  if (_condition == 1) then {
      [_x] call STAF_PMC_fnc_pmcarsenal;
      [_x] call STAF_PMC_fnc_pmcarsenal_takistan;
    };
  } forEach _vehicle;
};