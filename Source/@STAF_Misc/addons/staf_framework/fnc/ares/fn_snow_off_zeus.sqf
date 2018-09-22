["STAF Weather", "Turn off Snow Effects",
{
	missionNamespace setVariable ["STAF_Snow_init",false];
	missionNamespace setVariable ["STAF_Snow_condition",false];
	missionNamespace setVariable ["STAF_breath_init",false];
	missionNamespace setVariable ["STAF_breath_condition",false];
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
