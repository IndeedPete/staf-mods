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
_combat = _logic getVariable "STAF_Module_AmbientAnimationMP_Combat";

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
      if (isServer) then { [[_x,_condition,"ASIS"],BIS_fnc_ambientAnim ] remoteExec ["call"] };
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
      if (isServer) then { [[_x,_condition,"ASIS",_object],BIS_fnc_ambientAnim ] remoteExec ["call"] };
    } forEach _vehicle;
  };
};

if (_combat == 1) then {
  {
    [_x] spawn {
      waitUntil {
        behaviour (_this select 0) == "combat"
      };
      (_this select 0) call BIS_fnc_ambientAnim__terminate;
    };
  } forEach _vehicle;
};
