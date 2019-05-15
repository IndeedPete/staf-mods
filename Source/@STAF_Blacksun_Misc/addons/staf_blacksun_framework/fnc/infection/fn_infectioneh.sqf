params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

_rate = _logic getVariable "STAF_Horror_Module_Infection_Rate";

[
  player,
  [
    "HitPart",
      {
        (_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
        [_target,_shooter,_ammo] call STAF_Horror_fnc_infectioninit;
      }
  ]
] remoteExec ["addEventHandler", 0, true];

missionNamespace setvariable ["STAF_Horror_InfectionRate",_rate];
