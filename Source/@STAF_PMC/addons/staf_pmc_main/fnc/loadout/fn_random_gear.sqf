params ["_unit"];

_startUniform = ["STAF_Scientist","STAF_Scientist_opf","STAF_Scientist_ind"];
_savedLoadoutSet = _unit getVariable ["STAF_var_Unit_Loadout_Set", false];
_savedLoadout = _unit getVariable ["STAF_var_Unit_Loadout", getUnitLoadout _unit];

if (_savedLoadoutSet) exitWith 
{
    _unit setUnitLoadout [_savedLoadout, true];
    _unit setVariable ["STAF_var_Unit_Loadout", getUnitLoadout _unit];
    _unit setVariable ["STAF_var_Unit_Loadout_Set", true, true];
};

if ((uniform _unit) in _startUniform) then {
    
    if (missionNamespace getvariable ["STAF_cbaDebug", false]) then {systemChat "Unit Randomization was used";};

    switch (typeOf _unit) do {
        //BLUFOR
            case "STAF_contractor": {_unit call STAF_PMC_fnc_gear_contractor};
            case "STAF_contractor_at": {_unit call STAF_PMC_fnc_gear_contractor_at};
            case "STAF_contractor_aa": {_unit call STAF_PMC_fnc_gear_contractor_aa};
            case "STAF_contractor_mg": {_unit call STAF_PMC_fnc_gear_contractor_mg};
            case "STAF_contractor_medic": {_unit call STAF_PMC_fnc_gear_contractor_medic};
            case "STAF_contractor_engineer": {_unit call STAF_PMC_fnc_gear_contractor_engineer};
            case "STAF_contractor_bodyguard": {_unit call STAF_PMC_fnc_gear_contractor_bodyguard};
            case "STAF_contractor_heli_pilot": {_unit call STAF_PMC_fnc_gear_contractor_heli_pilot};
            case "STAF_contractor_marksman": {_unit call STAF_PMC_fnc_gear_contractor_marksman};
            case "STAF_contractor_diver": {_unit call STAF_PMC_fnc_gear_contractor_diver};
            case "STAF_contractor_crew": {_unit call STAF_PMC_fnc_gear_contractor_crew};

        //OPFOR
            case "STAF_contractor_opf": {_unit call STAF_PMC_fnc_gear_contractor};
            case "STAF_contractor_at_opf": {_unit call STAF_PMC_fnc_gear_contractor_at};
            case "STAF_contractor_aa_opf": {_unit call STAF_PMC_fnc_gear_contractor_aa};
            case "STAF_contractor_mg_opf": {_unit call STAF_PMC_fnc_gear_contractor_mg};
            case "STAF_contractor_medic_opf": {_unit call STAF_PMC_fnc_gear_contractor_medic};
            case "STAF_contractor_engineer_opf": {_unit call STAF_PMC_fnc_gear_contractor_engineer};
            case "STAF_contractor_bodyguard_opf": {_unit call STAF_PMC_fnc_gear_contractor_bodyguard};
            case "STAF_contractor_heli_pilot_opf": {_unit call STAF_PMC_fnc_gear_contractor_heli_pilot};
            case "STAF_contractor_marksman_opf": {_unit call STAF_PMC_fnc_gear_contractor_marksman};
            case "STAF_contractor_diver_opf": {_unit call STAF_PMC_fnc_gear_contractor_diver};
            case "STAF_contractor_crew_opf": {_unit call STAF_PMC_fnc_gear_contractor_crew};

        //INDFOR
            case "STAF_contractor_ind": {_unit call STAF_PMC_fnc_gear_contractor};
            case "STAF_contractor_at_ind": {_unit call STAF_PMC_fnc_gear_contractor_at};
            case "STAF_contractor_aa_ind": {_unit call STAF_PMC_fnc_gear_contractor_aa};
            case "STAF_contractor_mg_ind": {_unit call STAF_PMC_fnc_gear_contractor_mg};
            case "STAF_contractor_medic_ind": {_unit call STAF_PMC_fnc_gear_contractor_medic};
            case "STAF_contractor_engineer_ind": {_unit call STAF_PMC_fnc_gear_contractor_engineer};
            case "STAF_contractor_bodyguard_ind": {_unit call STAF_PMC_fnc_gear_contractor_bodyguard};
            case "STAF_contractor_heli_pilot_ind": {_unit call STAF_PMC_fnc_gear_contractor_heli_pilot};
            case "STAF_contractor_marksman_ind": {_unit call STAF_PMC_fnc_gear_contractor_marksman};
            case "STAF_contractor_diver_ind": {_unit call STAF_PMC_fnc_gear_contractor_diver};
            case "STAF_contractor_crew_ind": {_unit call STAF_PMC_fnc_gear_contractor_crew};
        default {_unit call STAF_PMC_fnc_gear_contractor_bodyguard};
    };
};