params [
  ["_logic", ObjNull,[ObjNull]],
	["_vehicle", [], [[]]],
  ["_activated",true ,[true]]
];

_condition = _logic getVariable ["STAF_Module_AmbientAnimationMP","None"];

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
