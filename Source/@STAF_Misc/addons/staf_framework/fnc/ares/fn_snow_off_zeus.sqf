["STAF Weather", "Turn off Snow Effects",
{
	missionNamespace getVariable "STAF_Snow_init";
	missionNamespace getVariable "STAF_Snow_condition";
	missionNamespace getVariable "STAF_breath_init";
	missionNamespace getVariable "STAF_breath_condition";
	missionNamespace setVariable ["STAF_Snow_init",false,true];
	missionNamespace setVariable ["STAF_Snow_condition",false,true];
	missionNamespace setVariable ["STAF_breath_init",false,true];
	missionNamespace setVariable ["STAF_breath_condition",false,true];
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
