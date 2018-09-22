["STAF Weather", "Create Breath Vapor",
{
	_breathinit = missionNamespace getVariable "STAF_breath_init";
	if (isnil "_breathinit") then {
		missionNamespace setVariable ["STAF_breath_init", false];
	};
	if (!(_breathinit)) then {
		missionNamespace setVariable ["STAF_breath_init", true];
		missionNamespace setVariable ["STAF_breath_condition", true];
		[player,{STAF_breath_condition}] call STAF_fnc_monitorLifeSigns;
		[player,{STAF_breath_condition}] call STAF_fnc_coldBreathACE;
		[player,{STAF_breath_condition}] call STAF_fnc_coldBreathTalking;
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
