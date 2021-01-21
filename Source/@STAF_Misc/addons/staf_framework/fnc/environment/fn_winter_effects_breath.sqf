[] spawn {
	while {(missionNamespace getVariable "STAF_var_gf_breath_enable") isEqualTo true} do {		
		{		
			if (((alive _x)) && (!(_x getVariable ["STAF_var_gf_breath",false]))) then {		
				[_x] call STAF_Scripts_fnc_gf_breath;			
			};
				
			_x setVariable ["STAF_var_gf_breath",true];
			
			waitUntil {!alive _x};

			_x setVariable ["STAF_var_gf_breath",false];
		} forEach allunits;
		sleep 15;			
	};
};