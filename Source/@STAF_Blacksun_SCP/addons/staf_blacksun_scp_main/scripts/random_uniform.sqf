_unit = _this select 0;
_startUniform = ["STAF_Scientist","STAF_Scientist_opf","STAF_Scientist_ind"];
_mtf_rifleman = ["STAF_Blacksun_MTF_Rifleman","STAF_Blacksun_MTF_Rifleman_opf","STAF_Blacksun_MTF_Rifleman_ind"];
_mtf_grenadier = ["STAF_Blacksun_MTF_Grenadier","STAF_Blacksun_MTF_Grenadier_opf","STAF_Blacksun_MTF_Grenadier_ind"];
_mtf_mg = ["STAF_Blacksun_MTF_MG","STAF_Blacksun_MTF_MG_opf","STAF_Blacksun_MTF_MG_ind"];
_mtf_scientist = ["STAF_Blacksun_MTF_Scientist","STAF_Blacksun_MTF_Scientist_opf","STAF_Blacksun_MTF_Scientist_ind"];
_mtf_pilot = ["STAF_Blacksun_MTF_Pilot","STAF_Blacksun_MTF_Pilot_opf","STAF_Blacksun_MTF_Pilot_ind"];
_mtf_cbrn = ["STAF_Blacksun_MTF_CBRN","STAF_Blacksun_MTF_CBRN_opf","STAF_Blacksun_MTF_CBRN_ind"];
_scp_scientist = ["STAF_Blacksun_SCP_Scientist","STAF_Blacksun_SCP_Scientist_opf","STAF_Blacksun_SCP_Scientist_ind"];
_scp_guard = ["STAF_Blacksun_SCP_Guard","STAF_Blacksun_SCP_Guard_opf","STAF_Blacksun_SCP_Guard_ind"];
_scp_prisoner = ["STAF_Blacksun_SCP_Prisoner","STAF_Blacksun_SCP_Prisoner_opf","STAF_Blacksun_SCP_Prisoner_ind"];
_scp_worker = ["STAF_Blacksun_SCP_Worker","STAF_Blacksun_SCP_Worker_opf","STAF_Blacksun_SCP_Worker_ind"];

if ((uniform _unit) in _startUniform) then {
    //BLUFOR
    if ((typeOf _unit) in _mtf_rifleman) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_mtf_rifleman};
    if ((typeOf _unit) in _mtf_grenadier) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_mtf_grenadier};
    if ((typeOf _unit) in _mtf_mg) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_mtf_mg};
    if ((typeOf _unit) in _mtf_scientist) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_mtf_scientist};
    if ((typeOf _unit) in _mtf_pilot) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_mtf_pilot};
    if ((typeOf _unit) in _mtf_cbrn) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_mtf_cbrn};
    if ((typeOf _unit) in _scp_scientist) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_scp_scientist};
    if ((typeOf _unit) in _scp_guard) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_scp_guard};
    if ((typeOf _unit) in _scp_prisoner) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_scp_prisoner};
    if ((typeOf _unit) in _scp_worker) then {[_this select 0] call STAF_Blacksun_SCP_fnc_gear_scp_worker};
}
else {
};
