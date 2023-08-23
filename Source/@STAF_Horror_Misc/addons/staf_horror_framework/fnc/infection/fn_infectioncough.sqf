params ["_unit", "_infection"];

while { alive _unit && (_unit getVariable "STAF_Horror_Infected") } do {
  _infection = _unit getVariable ["STAF_Horror_Infection_Level", 0];
	
  _cough = [
		"STAF_Horror_cough1",
		"STAF_Horror_cough2",
		"STAF_Horror_cough3",
		"STAF_Horror_cough4",
		"STAF_Horror_cough5",
		"STAF_Horror_cough6",
		"STAF_Horror_cough7",
		"STAF_Horror_cough8",
		"STAF_Horror_cough9"
	] call BIS_fnc_selectRandom;

	enableCamShake true;

	switch (true) do {
		case (_infection <= 0.5): {
			_unit setVariable ["STAF_Horror_CoughTime", (round(random(60)+10))]
		};
		case ((_infection > 0.5) && (_infection < 0.75)): {
			_unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+15))]
		};
		case ((_infection >= 0.75) && (_infection <= 0.9)): {
			_unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+10))]
		};
		case (_infection > 0.9): {
			_unit setVariable ["STAF_Horror_CoughTime", (round(random(5/_infection)+10))]
		};
	};

	_coughTime = _unit getVariable "STAF_Horror_CoughTime";

	sleep _coughTime;

	// Debug Message
	if (STAF_cbaDebug) then {
		_name = [_unit, false, true] call ace_common_fnc_getName;
		systemChat format ["%1 is coughing", _name];
		diag_log format ["%1 is coughing", _name];
	};
	if (_unit getVariable "STAF_Horror_Infected") then {	
		addCamShake [_infection, 3, 25];
		if (alive _unit) then {
			_unit say3D [_cough, 10];
		};
	}; // Last check if unit is still infected
  	sleep 3;
	resetCamShake;
};