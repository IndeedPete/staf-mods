_unit = _this select 0;
_startUniform = ["STAF_Scientist","STAF_Scientist_opf","STAF_Scientist_ind"];

if ((uniform _unit) in _startUniform) then {
    //BLUFOR
    if ((typeOf _unit) isEqualTo "STAF_contractor") then {[_this select 0] call STAF_PMC_fnc_gear_contractor};
    if ((typeOf _unit) isEqualTo "STAF_contractor_at") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_at};
    if ((typeOf _unit) isEqualTo "STAF_contractor_aa") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_aa};
    if ((typeOf _unit) isEqualTo "STAF_contractor_mg") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_mg};
    if ((typeOf _unit) isEqualTo "STAF_contractor_medic") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_medic};
    if ((typeOf _unit) isEqualTo "STAF_contractor_engineer") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_engineer};
    if ((typeOf _unit) isEqualTo "STAF_contractor_bodyguard") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_bodyguard};
    if ((typeOf _unit) isEqualTo "STAF_contractor_heli_pilot") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_heli_pilot};
    if ((typeOf _unit) isEqualTo "STAF_contractor_marksman") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_marksman};
    if ((typeOf _unit) isEqualTo "STAF_contractor_diver") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_diver};
    if ((typeOf _unit) isEqualTo "STAF_contractor_crew") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_crew};
    // OPFOR
    if ((typeOf _unit) isEqualTo "STAF_contractor_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor};
    if ((typeOf _unit) isEqualTo "STAF_contractor_at_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_at};
    if ((typeOf _unit) isEqualTo "STAF_contractor_aa_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_aa};
    if ((typeOf _unit) isEqualTo "STAF_contractor_mg_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_mg};
    if ((typeOf _unit) isEqualTo "STAF_contractor_medic_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_medic};
    if ((typeOf _unit) isEqualTo "STAF_contractor_engineer_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_engineer};
    if ((typeOf _unit) isEqualTo "STAF_contractor_bodyguard_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_bodyguard};
    if ((typeOf _unit) isEqualTo "STAF_contractor_heli_pilot_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_heli_pilot};
    if ((typeOf _unit) isEqualTo "STAF_contractor_marksman_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_marksman};
    if ((typeOf _unit) isEqualTo "STAF_contractor_diver_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_diver};
    if ((typeOf _unit) isEqualTo "STAF_contractor_crew_opf") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_crew};
    //INDFOR
    if ((typeOf _unit) isEqualTo "STAF_contractor_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor};
    if ((typeOf _unit) isEqualTo "STAF_contractor_at_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_at};
    if ((typeOf _unit) isEqualTo "STAF_contractor_aa_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_aa};
    if ((typeOf _unit) isEqualTo "STAF_contractor_mg_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_mg};
    if ((typeOf _unit) isEqualTo "STAF_contractor_medic_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_medic};
    if ((typeOf _unit) isEqualTo "STAF_contractor_engineer_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_engineer};
    if ((typeOf _unit) isEqualTo "STAF_contractor_bodyguard_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_bodyguard};
    if ((typeOf _unit) isEqualTo "STAF_contractor_heli_pilot_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_heli_pilot};
    if ((typeOf _unit) isEqualTo "STAF_contractor_marksman_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_marksman};
    if ((typeOf _unit) isEqualTo "STAF_contractor_diver_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_diver};
    if ((typeOf _unit) isEqualTo "STAF_contractor_crew_ind") then {[_this select 0] call STAF_PMC_fnc_gear_contractor_crew};
}
else {
};
