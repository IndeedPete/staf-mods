params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

_rate = _logic getVariable "STAF_Horror_Module_Infection_Rate";
_chance = _logic getVariable "STAF_Horror_Module_Infection_Chance";

private _createInfectionEvent = ["STAF_WBK_ZombieGrabed", {call STAF_Horror_fnc_infectioninit;}, _this] call CBA_fnc_addEventHandlerArgs;

missionNamespace setvariable ["STAF_Horror_InfectionRate",_rate];
missionNamespace setvariable ["STAF_Horror_InfectionChance",_chance];

/*
Add this to the Zombie Mod

//STAF Edit
["STAF_WBK_ZombieGrabed", [_personWhoIsGrabbed]] call CBA_fnc_localEvent;*/