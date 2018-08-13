_unit = _this select 0;
_startUniform = ["STAF_Scientist"];

if ((uniform _unit) in _startUniform) then {
    if ((typeOf _unit) isEqualTo "STAF_contractor") then {[_this select 0] call STAF_fnc_gear_contractor};
    if ((typeOf _unit) isEqualTo "STAF_contractor_at") then {[_this select 0] call STAF_fnc_gear_contractor_at};
    if ((typeOf _unit) isEqualTo "STAF_contractor_mg") then {[_this select 0] call STAF_fnc_gear_contractor_mg};
    if ((typeOf _unit) isEqualTo "STAF_contractor_medic") then {[_this select 0] call STAF_fnc_gear_contractor_medic};
    if ((typeOf _unit) isEqualTo "STAF_contractor_engineer") then {[_this select 0] call STAF_fnc_gear_contractor_engineer};
    if ((typeOf _unit) isEqualTo "STAF_contractor_bodyguard") then {[_this select 0] call STAF_fnc_gear_contractor_bodyguard};
    if ((typeOf _unit) isEqualTo "STAF_contractor_heli_pilot") then {[_this select 0] call STAF_fnc_gear_contractor_heli_pilot};
    if ((typeOf _unit) isEqualTo "STAF_contractor_marksman") then {[_this select 0] call STAF_fnc_gear_contractor_marksman};
    if ((typeOf _unit) isEqualTo "STAF_contractor_diver") then {[_this select 0] call STAF_fnc_gear_contractor_diver};
}
else {
};
