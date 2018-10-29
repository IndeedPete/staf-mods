_unit = _this select 0;
_startUniform = ["STAF_Scientist","STAF_Scientist_opf","STAF_Scientist_ind"];
_leader = ["STAF_Blacksun_Leader","STAF_Blacksun_Leader_opf","STAF_Blacksun_Leader_ind"];
_rifleman = ["STAF_Blacksun_Rifleman","STAF_Blacksun_Rifleman_opf","STAF_Blacksun_Rifleman_ind"];
_medic = ["STAF_Blacksun_Medic","STAF_Blacksun_Medic_opf","STAF_Blacksun_Medic_ind"];
_explosvie_specialist = ["STAF_Blacksun_Explosvie_Specialist","STAF_Blacksun_Explosvie_Specialist_opf","STAF_Blacksun_Explosvie_Specialist_ind"];
_MG = ["STAF_Blacksun_MG","STAF_Blacksun_MG_opf","STAF_Blacksun_MG_ind"];
_marksman = ["STAF_Blacksun_Marksman","STAF_Blacksun_Marksman_opf","STAF_Blacksun_Marksman_ind"];
_heli_pilot = ["STAF_Blacksun_Heli_Pilot","STAF_Blacksun_Heli_Pilot_opf","STAF_Blacksun_Heli_Pilot_ind"];

if ((uniform _unit) in _startUniform) then {
    //BLUFOR
    if ((typeOf _unit) in _leader) then {[_this select 0] call STAF_Blacksun_fnc_gear_Blacksun_leader};
    if ((typeOf _unit) in _rifleman) then {[_this select 0] call STAF_Blacksun_fnc_gear_Blacksun_rifleman};
    if ((typeOf _unit) in _medic) then {[_this select 0] call STAF_Blacksun_fnc_gear_Blacksun_medic};
    if ((typeOf _unit) in _explosvie_specialist) then {[_this select 0] call STAF_Blacksun_fnc_gear_Blacksun_explosvie_specialist};
    if ((typeOf _unit) in _MG) then {[_this select 0] call STAF_Blacksun_fnc_gear_Blacksun_mg};
    if ((typeOf _unit) in _marksman) then {[_this select 0] call STAF_Blacksun_fnc_gear_Blacksun_marksman};
    if ((typeOf _unit) in _heli_pilot) then {[_this select 0] call STAF_Blacksun_fnc_gear_Blacksun_heli_pilot};
}
else {
};
