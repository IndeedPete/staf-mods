params [
  ["_logic", ObjNull,[ObjNull]],
	["_vehicle", [], [[]]],
  ["_activated",true ,[true]]
];

// Choose which Civilians

_ac_debug = _logic getVariable ["STAF_Module_AmbientCivilian_debug",false];
_ac_type = _logic getVariable "STAF_Module_AmbientCivilian_type";
_ac_perbuilding = _logic getVariable ["STAF_Module_AmbientCivilian_perBuilding", 0.1];
_ac_maxcount = _logic getVariable ["STAF_Module_AmbientCivilian_maxCount", 100];
_ac_rate = _logic getVariable ["STAF_Module_AmbientCivilian_rate", 3];
_ac_minspawn = _logic getVariable ["STAF_Module_AmbientCivilian_minSpawn", 50];
_ac_maxspawn = _logic getVariable ["STAF_Module_AmbientCivilian_maxSpawn", 500];
_ac_blacklist = _logic getVariable "STAF_Module_AmbientCivilian_blacklist";
_ac_hide = _logic getVariable ["STAF_Module_AmbientCivilian_hide", true];

missionNamespace setVariable ["STAF_AmbientCivilian_active",true];
_ac_spawning_active = missionNamespace getVariable ["STAF_AmbientCivilian_active",true];

_ac_Afghan = ["CFP_C_AFG_Civilian_02","CFP_C_AFG_Civilian_01"];
_ac_African_christ = ["CFP_C_AFRCHRISTIAN_Civ_1_01","CFP_C_AFRCHRISTIAN_Civ_2_01","CFP_C_AFRCHRISTIAN_Civ_3_01","CFP_C_AFRCHRISTIAN_Civ_4_01","CFP_C_AFRCHRISTIAN_Civ_5_01","CFP_C_AFRCHRISTIAN_Civ_6_01","CFP_C_AFRCHRISTIAN_Civ_7_01","CFP_C_AFRCHRISTIAN_Civ_8_01","CFP_C_AFRCHRISTIAN_Civ_9_01","CFP_C_AFRCHRISTIAN_Civ_10_01","CFP_C_AFRCHRISTIAN_Civ_11_01","CFP_C_AFRCHRISTIAN_Civ_12_01","CFP_C_AFRCHRISTIAN_Civ_13_01","CFP_C_AFRCHRISTIAN_Civ_14_01"];
_ac_African_islam = ["CFP_C_AFRISLAMIC_Civ_1_01","CFP_C_AFRISLAMIC_Civ_2_01","CFP_C_AFRISLAMIC_Civ_3_01","CFP_C_AFRISLAMIC_Civ_4_01","CFP_C_AFRISLAMIC_Civ_5_01","CFP_C_AFRISLAMIC_Civ_6_01","CFP_C_AFRISLAMIC_Civ_7_01","CFP_C_AFRISLAMIC_Civ_8_01","CFP_C_AFRISLAMIC_Civ_9_01","CFP_C_AFRISLAMIC_Civ_10_01","CFP_C_AFRISLAMIC_Civ_11_01","CFP_C_AFRISLAMIC_Civ_12_01"];
_ac_Asian = ["CFP_C_ASIA_Civ_1_01","CFP_C_ASIA_Civ_2_01","CFP_C_ASIA_Civ_3_01","CFP_C_ASIA_Civ_4_01","CFP_C_ASIA_Civ_5_01","CFP_C_ASIA_Civ_6_01","CFP_C_ASIA_Civ_7_01","CFP_C_ASIA_Civ_8_01","CFP_C_ASIA_Civ_9_01","CFP_C_ASIA_Civ_10_01","CFP_C_ASIA_Civ_11_01","CFP_C_ASIA_Civ_12_01"];
_ac_European = ["C_man_p_beggar_F_euro","C_Man_casual_1_F_euro","C_Man_casual_2_F_euro","C_Man_casual_3_F_euro","C_Man_sport_1_F_euro","C_Man_sport_2_F_euro","C_Man_sport_3_F_euro","C_Man_casual_4_F_euro","C_Man_casual_5_F_euro","C_Man_casual_6_F_euro","C_Man_polo_1_F_euro","C_Man_polo_2_F_euro","C_Man_polo_3_F_euro","C_Man_polo_4_F_euro","C_Man_polo_5_F_euro","C_Man_polo_6_F_euro","C_Man_shorts_1_F_euro","C_Man_p_fugitive_F_euro"];
_ac_Middle_Eastern = ["CFP_C_ME_Civ_2_01","CFP_C_ME_Civ_1_01"];
_ac_Russian = ["CUP_C_R_Assistant_01","CUP_C_R_Citizen_02","CUP_C_R_Citizen_01","CUP_C_R_Citizen_04","CUP_C_R_Citizen_03","CUP_C_R_Functionary_01","CUP_C_R_Functionary_02","CUP_C_R_Worker_05","CUP_C_R_Mechanic_02","CUP_C_R_Mechanic_03","CUP_C_R_Mechanic_01","CUP_C_R_Profiteer_02","CUP_C_R_Profiteer_03","CUP_C_R_Profiteer_04","CUP_C_R_Rocker_01","CUP_C_R_Rocker_03","CUP_C_R_Rocker_02","CUP_C_R_Rocker_04","CUP_C_R_Schoolteacher_01","CUP_C_R_Villager_01","CUP_C_R_Villager_04","CUP_C_R_Villager_02","CUP_C_R_Villager_03","CUP_C_R_Woodlander_01","CUP_C_R_Woodlander_02","CUP_C_R_Woodlander_03","CUP_C_R_Woodlander_04","CUP_C_R_Worker_03","CUP_C_R_Worker_04","CUP_C_R_Worker_02","CUP_C_R_Worker_01"];
_ac_Takistan = ["CUP_C_TK_Man_04","CUP_C_TK_Man_04_Jack","CUP_C_TK_Man_04_Waist","CUP_C_TK_Man_07","CUP_C_TK_Man_07_Coat","CUP_C_TK_Man_07_Waist","CUP_C_TK_Man_08","CUP_C_TK_Man_08_Jack","CUP_C_TK_Man_08_Waist","CUP_C_TK_Man_05_Coat","CUP_C_TK_Man_05_Jack","CUP_C_TK_Man_05_Waist","CUP_C_TK_Man_06_Coat","CUP_C_TK_Man_06_Jack","CUP_C_TK_Man_06_Waist","CUP_C_TK_Man_02","CUP_C_TK_Man_02_Jack","CUP_C_TK_Man_02_Waist","CUP_C_TK_Man_01_Waist","CUP_C_TK_Man_01_Coat","CUP_C_TK_Man_01_Jack","CUP_C_TK_Man_03_Coat","CUP_C_TK_Man_03_Jack","CUP_C_TK_Man_03_Waist"];
_ac_Tanoan = ["C_Man_casual_1_F_tanoan","C_Man_casual_2_F_tanoan","C_Man_casual_3_F_tanoan","C_Man_sport_1_F_tanoan","C_Man_sport_2_F_tanoan","C_Man_sport_3_F_tanoan","C_Man_casual_4_F_tanoan","C_Man_casual_5_F_tanoan","C_Man_casual_6_F_tanoan"];

_ac_typechoice = switch (_ac_type) do {
  case ("Afghan") : {_ac_Afghan};
  case ("African_christ") : {_ac_African_christ};
  case ("African_islam") : {_ac_African_islam};
  case ("Asian") : {_ac_Asian};
  case ("European") : {_ac_European};
  case ("Middle_Eastern") : {_ac_Middle_Eastern};
  case ("Russian") : {_ac_Russian};
  case ("Takistan") : {_ac_Takistan};
  case ("Tanoan") : {_ac_Tanoan};
  default {_ac_European};
};
_ac_blacklist_replace = [_ac_blacklist, " ", ""] call CBA_fnc_replace;
_ac_blacklist_array = [_ac_blacklist_replace, ","] call CBA_fnc_split;

_ac_mns_spawning_active = missionNamespace getVariable ["STAF_AmbientCivilian_active",true];
_ac_mns_debug = missionNamespace setVariable ["STAF_AmbientCivilian_debug", _ac_debug];
_ac_mns_Type = missionNamespace setVariable ["STAF_AmbientCivilian_type", _ac_typechoice];
_ac_mns_perbuilding = missionNamespace setVariable ["STAF_AmbientCivilian_perbuilding", _ac_perbuilding];
_ac_mns_maxcount = missionNamespace setVariable ["STAF_AmbientCivilian_maxcount", _ac_maxcount];
_ac_mns_rate = missionNamespace setVariable ["STAF_AmbientCivilian_rate", _ac_rate];
_ac_mns_minspawn = missionNamespace setVariable ["STAF_AmbientCivilian_minspawn", _ac_minspawn];
_ac_mns_maxspawn = missionNamespace setVariable ["STAF_AmbientCivilian_maxspawn", _ac_maxspawn];
_ac_mns_blacklist = missionNamespace setVariable ["STAF_AmbientCivilian_blacklist", _ac_blacklist_array];
_ac_mns_hide = missionNamespace setVariable ["STAF_AmbientCivilian_hide", _ac_hide];

//===================================DEBUG=====================================//

    STAF_ambientCivilian_SilentDebugMode = false;

    STAF_ambientCivilian_DebugTextEventArgs = []; // Empty
    STAF_ambientCivilian_DebugMarkerEventArgs = []; // [name, position, size, direction, shape ("RECTANGLE" or "ELLIPSE"), markerColor, markerText (optional)] or alternatively [name, position, type, markerColor (optional), markerText (optional)]
    STAF_ambientCivilian_DeleteDebugMarkerEventArgs = [];  // [name]

    "STAF_ambientCivilian_DebugTextEventArgs" addPublicVariableEventHandler {
        STAF_ambientCivilian_DebugTextEventArgs call STAF_fnc_ambientCivilian_ShowDebugTextLocal;
    };

    "STAF_ambientCivilian_DebugMarkerEventArgs" addPublicVariableEventHandler {
        STAF_ambientCivilian_DebugMarkerEventArgs call STAF_fnc_ambientCivilian_SetDebugMarkerLocal;
    };

    "STAF_ambientCivilian_DeleteDebugMarkerEventArgs" addPublicVariableEventHandler {
        STAF_ambientCivilian_DeleteDebugMarkerEventArgs call STAF_fnc_ambientCivilian_DeleteDebugMarkerLocal;
    };

//===================================DEBUG=====================================//

// The following constants may be used to tweak behaviour

STAF_ambientCivilian_SIDE = civilian;      // If you for some reason want the units to spawn into another side.
STAF_ambientCivilian_MINSKILL = 0.4;       // If you spawn something other than civilians, you may want to set another skill level of the spawned units.
STAF_ambientCivilian_MAXSKILL = 0.6;       // If you spawn something other than civilians, you may want to set another skill level of the spawned units.

STAF_ambientCivilian_MAXWAITINGTIME = 300; // Maximum standing still time in seconds
STAF_ambientCivilian_RUNNINGCHANCE = 0.05; // Chance of running instead of walking

// Civilian personalities
STAF_ambientCivilian_BEHAVIOURS = [
	["CITIZEN", 100] // Default citizen with ordinary behaviour. Spawns in a house and walks to another house, and so on...
];

// Do not edit anything beneath this line!

STAF_ambientCivilian_INSTANCE_NO = 0;

// Set civilian parameters.

_parameters = [
  ["UNIT_CLASSES", _ac_typechoice],
  ["UNITS_PER_BUILDING", _ac_perbuilding],
  ["MAX_GROUPS_COUNT", _ac_maxcount],
  ["MIN_SPAWN_DISTANCE", _ac_minspawn],
  ["MAX_SPAWN_DISTANCE", _ac_maxspawn],
  ["BLACKLIST_MARKERS", _ac_blacklist_array],
  ["HIDE_BLACKLIST_MARKERS", _ac_hide],
  ["ON_UNIT_SPAWNED_CALLBACK", {}],
  ["ON_UNIT_REMOVE_CALLBACK", { true }],
  ["DEBUG", _ac_debug],
  ["SPAWN_RATE", _ac_rate]
];

// Start the script
_parameters spawn STAF_fnc_ambientCivilian_StartCivilians;
