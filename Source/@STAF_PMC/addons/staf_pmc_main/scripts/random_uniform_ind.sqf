_unit = _this select 0;
_startUniform = ["STAF_Scientist_ind"];

if ((uniform _unit) in _startUniform) then {
    if ((typeOf _unit) isEqualTo "STAF_contractor_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_at_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_at_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_mg_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_mg_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_medic_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_medic_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_engineer_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_engineer_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_bodyguard_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_bodyguard_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_heli_pilot_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_heli_pilot_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_marksman_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_marksman_ind};
    if ((typeOf _unit) isEqualTo "STAF_contractor_diver_ind") then {[_this select 0] call STAF_INDFOR_fnc_gear_contractor_diver_ind};
}
else {
};
