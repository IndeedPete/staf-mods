if (STAF_Horror_Infection_Init) then {
	_createInfectionEvent = [
		"STAF_Horror_InfectionEH",
		{
			params ["_unit"];

			if (_unit getVariable "STAF_Horror_Infected") exitWith {};
			
			if (STAF_cbaDebug) then {
				systemChat format ["Infection Eventhandler %1", _unit];
				diag_log format ["Infection Eventhandler %1", _unit];
			};
			if (STAF_cbaDebug) then {
				systemChat "Infection Eventhandler Fired";
				diag_log format ["Infection Eventhandler Fired"];
			};

			_random = random 1;
			_chance = parseNumber STAF_Horror_Infection_Chance;

			// Debug Message
			if (STAF_cbaDebug) then {
				systemChat format ["Infection Random Chance = %1", _random];
				diag_log format ["Infection Random Chance = %1", _random];
			};

			if (_random >= _chance) then {
				_unit spawn STAF_Horror_fnc_infection;
			};
		}
	] call CBA_fnc_addEventHandler;

	// Debug Message
	if (STAF_cbaDebug) then {
		systemChat "Infection Eventhandler added";
		diag_log format ["Infection Eventhandler added"];
	};
};

//Add this to Line 293 in XEH_postinit (bootstrap) in the Zombie Mod
//["STAF_Horror_InfectionEH", ["_personWhoIsGrabbed","_zombie"]] call CBA_fnc_localEvent;