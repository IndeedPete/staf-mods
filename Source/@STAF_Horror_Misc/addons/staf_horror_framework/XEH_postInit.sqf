if (STAF_Horror_Infection) then {
	private _createInfectionEvent = [
	"IMS_EventHandler_Hit", 
		{
			if !(isNil {_hitter getVariable "WBK_AI_ISZombie"}) then {
				params ["_unit","_hitter","_weapon"];

				_random = random 1;
				_chance = STAF_Horror_Infection_Chance;

				if (_random >= _chance) then {
					_unit spawn STAF_Horror_fnc_infection;
				};
			};
		}
	] call CBA_fnc_addEventHandler;
};