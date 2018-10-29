_unit = _this select 0;
_startUniform = ["STAF_Scientist","STAF_Scientist_opf","STAF_Scientist_ind"];
_leader = ["STAF_Blacksun_Chaos_Leader","STAF_Blacksun_Chaos_Leader_opf","STAF_Blacksun_Chaos_Leader_ind"];
_rifleman = ["STAF_Blacksun_Chaos_Rifleman","STAF_Blacksun_Chaos_Rifleman_opf","STAF_Blacksun_Chaos_Rifleman_ind"];
_medic = ["STAF_Blacksun_Chaos_Medic","STAF_Blacksun_Chaos_Medic_opf","STAF_Blacksun_Chaos_Medic_ind"];
_explosvie_specialist = ["STAF_Blacksun_Chaos_Explosvie_Specialist","STAF_Blacksun_Chaos_Explosvie_Specialist_opf","STAF_Blacksun_Chaos_Explosvie_Specialist_ind"];
_MG = ["STAF_Blacksun_Chaos_MG","STAF_Blacksun_Chaos_MG_opf","STAF_Blacksun_Chaos_MG_ind"];
_marksman = ["STAF_Blacksun_Chaos_Marksman","STAF_Blacksun_Chaos_Marksman_opf","STAF_Blacksun_Chaos_Marksman_ind"];
_heli_pilot = ["STAF_Blacksun_Chaos_Heli_Pilot","STAF_Blacksun_Chaos_Heli_Pilot_opf","STAF_Blacksun_Chaos_Heli_Pilot_ind"];

if ((uniform _unit) in _startUniform) then {
    //BLUFOR
    if ((typeOf _unit) in _leader) then {[_this select 0] call STAF_Blacksun_Chaos_fnc_gear_Blacksun_Chaos_leader};
    if ((typeOf _unit) in _rifleman) then {[_this select 0] call STAF_Blacksun_Chaos_fnc_gear_Blacksun_Chaos_rifleman};
    if ((typeOf _unit) in _medic) then {[_this select 0] call STAF_Blacksun_Chaos_fnc_gear_Blacksun_Chaos_medic};
    if ((typeOf _unit) in _explosvie_specialist) then {[_this select 0] call STAF_Blacksun_Chaos_fnc_gear_Blacksun_Chaos_explosvie_specialist};
    if ((typeOf _unit) in _MG) then {[_this select 0] call STAF_Blacksun_Chaos_fnc_gear_Blacksun_Chaos_mg};
    if ((typeOf _unit) in _marksman) then {[_this select 0] call STAF_Blacksun_Chaos_fnc_gear_Blacksun_Chaos_marksman};
    if ((typeOf _unit) in _heli_pilot) then {[_this select 0] call STAF_Blacksun_Chaos_fnc_gear_Blacksun_Chaos_heli_pilot};
}
else {
};
