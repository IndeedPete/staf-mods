_unit = _this select 0;
_startUniform = ["STAF_Scientist_opf"];

if ((uniform _unit) in _startUniform) then {
    if ((typeOf _unit) isEqualTo "STAF_contractor_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_at_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_at_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_mg_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_mg_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_medic_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_medic_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_engineer_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_engineer_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_bodyguard_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_bodyguard_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_heli_pilot_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_heli_pilot_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_marksman_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_marksman_opf};
    if ((typeOf _unit) isEqualTo "STAF_contractor_diver_opf") then {[_this select 0] call STAF_OPFOR_fnc_gear_contractor_diver_opf};
}
else {
};
