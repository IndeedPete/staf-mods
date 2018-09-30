["STAF Weather", "Breath Vapor",
{
	_breathinit = player getVariable "STAF_breath_init";
	if (isnil "_breathinit") then {
		player setVariable ["STAF_breath_init", false, true];
		_snowinit = false;
	};
	if (!(player getVariable "STAF_breath_init")) then {
		missionNamespace getVariable "STAF_breath_condition";
		missionNamespace setVariable ["STAF_breath_condition", true, true];
		missionNamespace setVariable ["STAF_breath_init", true, true];
		[[{STAF_breath_condition}], "STAF_fnc_monitorLifeSigns", true, true, true] call BIS_fnc_MP;
		[[{STAF_breath_condition}], "STAF_fnc_coldBreathACE", true, true, true] call BIS_fnc_MP;
		[[{STAF_breath_condition}], "STAF_fnc_coldBreathTalking", true, true, true] call BIS_fnc_MP;
		[[player, ["Respawn", {[{STAF_breath_condition}] call STAF_fnc_monitorLifeSigns}]], "addEventHandler", true, true, true] call BIS_fnc_MP;
		[[player, ["Respawn", {[{STAF_breath_condition}] call STAF_fnc_coldBreathACE}]], "addEventHandler", true, true, true] call BIS_fnc_MP;
		[[player, ["Respawn", {[{STAF_breath_condition}] call STAF_fnc_coldBreathTalking}]], "addEventHandler", true, true, true] call BIS_fnc_MP;
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
