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
      _x enableAI "ALL";
      _x disableAI "TARGET";
      _x disableAI "AUTOTARGET";
      _x disableAI "MOVE";
      _x disableAI "TEAMSWITCH";
      _x disableAI "AIMINGERROR";
      _x disableAI "SUPPRESSION";
      _x disableAI "CHECKVISIBLE";
      _x disableAI "COVER";
      _x disableAI "AUTOCOMBAT";
      _x disableAI "PATH";
      _x enableSimulation true;
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
      _x enableAI "ALL";
      _x disableAI "TARGET";
      _x disableAI "AUTOTARGET";
      _x disableAI "MOVE";
      _x disableAI "TEAMSWITCH";
      _x disableAI "AIMINGERROR";
      _x disableAI "SUPPRESSION";
      _x disableAI "CHECKVISIBLE";
      _x disableAI "COVER";
      _x disableAI "AUTOCOMBAT";
      _x disableAI "PATH";
      _x enableSimulation true;
      if (isServer) then { [[_x,_condition,"ASIS",_object],BIS_fnc_ambientAnim ] remoteExec ["call"] };
    } forEach _vehicle;
  };
};
