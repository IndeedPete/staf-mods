params [
  ["_logic", ObjNull,[ObjNull]],
	["_vehicle", [], [[]]],
  ["_activated",true ,[true]]
];

_condition = _logic getVariable ["STAF_Module_AmbientAnimationMP","None"];
_string = _logic getVariable "STAF_Module_AmbientAnimationMP_Snap_Object";
_object = call compile _string;
_ambient = {};
_regular = {};

//Run Code only on the server
if (local (_vehicle select 0)) then {
  
  //Checks if a snapping object name is provided
  if (isNil _string) then {
    //Checks if "None" is chosen
    if (_condition isEqualTo "None") then {
      {
        _x call BIS_fnc_ambientAnim__terminate;
      } forEach _vehicle;
    }
    else {
      {
        [_x,_condition,"ASIS"] call BIS_fnc_ambientAnim;
      } forEach _vehicle;
    };
  } else {
    if (_condition isEqualTo "None") then {
      {
        _x call BIS_fnc_ambientAnim__terminate;
      } forEach _vehicle;
    }
    else {
      {
        [_x,_condition,"ASIS",_object] call BIS_fnc_ambientAnim;
      } forEach _vehicle;
    };
  };
};