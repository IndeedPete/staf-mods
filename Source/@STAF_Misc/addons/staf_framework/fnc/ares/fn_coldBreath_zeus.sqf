["STAF Weather", "Create Breath Vapor",
{
	_breathinit = missionNamespace getVariable "STAF_breath_init";
	if (isnil "_breathinit") then {
		missionNamespace setVariable ["STAF_breath_init", false];
		_snowinit = false;
	};
	if (!(missionNamespace getVariable "STAF_breath_init")) then {
		missionNamespace setVariable ["STAF_breath_init", true];
		missionNamespace setVariable ["STAF_breath_condition", true];
		[[player,{STAF_breath_condition}],STAF_fnc_monitorLifeSigns] remoteexec ["call", -2, true];
		[[player,{STAF_breath_condition}],STAF_fnc_coldBreathACE] remoteexec ["call", -2, true];
		[[player,{STAF_breath_condition}],STAF_fnc_coldBreathTalking] remoteexec ["call", -2, true];
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
