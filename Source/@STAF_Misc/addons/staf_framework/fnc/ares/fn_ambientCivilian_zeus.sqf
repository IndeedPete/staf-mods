// Most of this is take straight from the Achilles Modules Code. I just adjusted it to our needs

["STAF AI", "Ambient Civilians",
{
  private _dialogResult =
	[
		"Civilian Spawning",
		[
				["Type", ["Afghan","African Christ","African Islam","Asian","European","Middle Eastern","Russian","Takistan","Tanoan"], 5],
        ["Per Building", "SLIDER", 1],
		    ["Max Count", "", "100"],
		    ["Spawn Rate (in sec)", "", "3"],
		    ["Min Spawn Distance", "", "5"],
		    ["Max Spawn Distance", "", "500"]
		]
	] call Ares_fnc_showChooseDialog;

	// If the dialog was closed.
	if (_dialogResult isEqualTo []) exitWith{};

	// Get the selected data
	_dialogResult params ["_ac_zeus_type","_ac_zeus_perbuilding","_ac_zeus_maxcount","_ac_zeus_rate","_ac_zeus_minspawn","_ac_zeus_maxspawn"];

  _ac_zeus_spawning_active_check = missionNamespace getVariable "STAF_AmbientCivilian_active";

  //Checks if Ambient Civilians is active at all
  if (!isNil "_ac_zeus_spawning_active_check") exitWith {
    ["<t color=""#ff0000"" font=""PuristaBold"" align=""center"">Error:</t><br/><t align=""center"">Ambient Civilians is already active!</t>", 2, player, 10] call ace_common_fnc_displayTextStructured;
  };



  _ac_zeus_type = _dialogResult select 0;
  _ac_zeus_perbuilding = _dialogResult select 1;
  _ac_zeus_maxcount_result = _dialogResult select 2;
  _ac_zeus_maxcount = parseNumber _ac_zeus_maxcount_result;
  _ac_zeus_rate_result = _dialogResult select 3;
  _ac_zeus_rate = parseNumber _ac_zeus_rate_result;
  _ac_zeus_minspawn_result = _dialogResult select 4;
  _ac_zeus_minspawn = parseNumber _ac_zeus_minspawn_result;
  _ac_zeus_maxspawn_result = _dialogResult select 5;
  _ac_zeus_maxspawn = parseNumber _ac_zeus_maxspawn_result;
  _ac_zeus_debug = false;
  _ac_zeus_blacklist = call STAF_fnc_countblacklistmarker;
  _ac_zeus_hide = false;

  _ac_zeus_Afghan = ["CFP_C_AFG_Civilian_02","CFP_C_AFG_Civilian_01"];
  _ac_zeus_African_christ = ["CFP_C_AFRCHRISTIAN_Civ_1_01","CFP_C_AFRCHRISTIAN_Civ_2_01","CFP_C_AFRCHRISTIAN_Civ_3_01","CFP_C_AFRCHRISTIAN_Civ_4_01","CFP_C_AFRCHRISTIAN_Civ_5_01","CFP_C_AFRCHRISTIAN_Civ_6_01","CFP_C_AFRCHRISTIAN_Civ_7_01","CFP_C_AFRCHRISTIAN_Civ_8_01","CFP_C_AFRCHRISTIAN_Civ_9_01","CFP_C_AFRCHRISTIAN_Civ_10_01","CFP_C_AFRCHRISTIAN_Civ_11_01","CFP_C_AFRCHRISTIAN_Civ_12_01","CFP_C_AFRCHRISTIAN_Civ_13_01","CFP_C_AFRCHRISTIAN_Civ_14_01"];
  _ac_zeus_African_islam = ["CFP_C_AFRISLAMIC_Civ_1_01","CFP_C_AFRISLAMIC_Civ_2_01","CFP_C_AFRISLAMIC_Civ_3_01","CFP_C_AFRISLAMIC_Civ_4_01","CFP_C_AFRISLAMIC_Civ_5_01","CFP_C_AFRISLAMIC_Civ_6_01","CFP_C_AFRISLAMIC_Civ_7_01","CFP_C_AFRISLAMIC_Civ_8_01","CFP_C_AFRISLAMIC_Civ_9_01","CFP_C_AFRISLAMIC_Civ_10_01","CFP_C_AFRISLAMIC_Civ_11_01","CFP_C_AFRISLAMIC_Civ_12_01"];
  _ac_zeus_Asian = ["CFP_C_ASIA_Civ_1_01","CFP_C_ASIA_Civ_2_01","CFP_C_ASIA_Civ_3_01","CFP_C_ASIA_Civ_4_01","CFP_C_ASIA_Civ_5_01","CFP_C_ASIA_Civ_6_01","CFP_C_ASIA_Civ_7_01","CFP_C_ASIA_Civ_8_01","CFP_C_ASIA_Civ_9_01","CFP_C_ASIA_Civ_10_01","CFP_C_ASIA_Civ_11_01","CFP_C_ASIA_Civ_12_01"];
  _ac_zeus_European = ["C_man_p_beggar_F_euro","C_Man_casual_1_F_euro","C_Man_casual_2_F_euro","C_Man_casual_3_F_euro","C_Man_sport_1_F_euro","C_Man_sport_2_F_euro","C_Man_sport_3_F_euro","C_Man_casual_4_F_euro","C_Man_casual_5_F_euro","C_Man_casual_6_F_euro","C_Man_polo_1_F_euro","C_Man_polo_2_F_euro","C_Man_polo_3_F_euro","C_Man_polo_4_F_euro","C_Man_polo_5_F_euro","C_Man_polo_6_F_euro","C_Man_shorts_1_F_euro","C_Man_p_fugitive_F_euro"];
  _ac_zeus_Middle_Eastern = ["CFP_C_ME_Civ_2_01","CFP_C_ME_Civ_1_01"];
  _ac_zeus_Russian = ["CUP_C_R_Assistant_01","CUP_C_R_Citizen_02","CUP_C_R_Citizen_01","CUP_C_R_Citizen_04","CUP_C_R_Citizen_03","CUP_C_R_Functionary_01","CUP_C_R_Functionary_02","CUP_C_R_Worker_05","CUP_C_R_Mechanic_02","CUP_C_R_Mechanic_03","CUP_C_R_Mechanic_01","CUP_C_R_Profiteer_02","CUP_C_R_Profiteer_03","CUP_C_R_Profiteer_04","CUP_C_R_Rocker_01","CUP_C_R_Rocker_03","CUP_C_R_Rocker_02","CUP_C_R_Rocker_04","CUP_C_R_Schoolteacher_01","CUP_C_R_Villager_01","CUP_C_R_Villager_04","CUP_C_R_Villager_02","CUP_C_R_Villager_03","CUP_C_R_Woodlander_01","CUP_C_R_Woodlander_02","CUP_C_R_Woodlander_03","CUP_C_R_Woodlander_04","CUP_C_R_Worker_03","CUP_C_R_Worker_04","CUP_C_R_Worker_02","CUP_C_R_Worker_01"];
  _ac_zeus_Takistan = ["CUP_C_TK_Man_04","CUP_C_TK_Man_04_Jack","CUP_C_TK_Man_04_Waist","CUP_C_TK_Man_07","CUP_C_TK_Man_07_Coat","CUP_C_TK_Man_07_Waist","CUP_C_TK_Man_08","CUP_C_TK_Man_08_Jack","CUP_C_TK_Man_08_Waist","CUP_C_TK_Man_05_Coat","CUP_C_TK_Man_05_Jack","CUP_C_TK_Man_05_Waist","CUP_C_TK_Man_06_Coat","CUP_C_TK_Man_06_Jack","CUP_C_TK_Man_06_Waist","CUP_C_TK_Man_02","CUP_C_TK_Man_02_Jack","CUP_C_TK_Man_02_Waist","CUP_C_TK_Man_01_Waist","CUP_C_TK_Man_01_Coat","CUP_C_TK_Man_01_Jack","CUP_C_TK_Man_03_Coat","CUP_C_TK_Man_03_Jack","CUP_C_TK_Man_03_Waist"];
  _ac_zeus_Tanoan = ["C_Man_casual_1_F_tanoan","C_Man_casual_2_F_tanoan","C_Man_casual_3_F_tanoan","C_Man_sport_1_F_tanoan","C_Man_sport_2_F_tanoan","C_Man_sport_3_F_tanoan","C_Man_casual_4_F_tanoan","C_Man_casual_5_F_tanoan","C_Man_casual_6_F_tanoan"];


  _ac_zeus_typechoice = switch (_ac_zeus_type) do {
    case 0 : {_ac_zeus_Afghan};
    case 1 : {_ac_zeus_African_christ};
    case 2 : {_ac_zeus_African_islam};
    case 3 : {_ac_zeus_Asian};
    case 4 : {_ac_zeus_European};
    case 5 : {_ac_zeus_Middle_Eastern};
    case 6 : {_ac_zeus_Russian};
    case 7 : {_ac_zeus_Takistan};
    case 8 : {_ac_zeus_Tanoan};
    default {_ac_zeus_European};
  };

  _ac_zeus_mns_type = missionNamespace setVariable ["STAF_AmbientCivilian_type",_ac_zeus_typechoice];
  _ac_zeus_mns_perbuilding = missionNamespace setVariable ["STAF_AmbientCivilian_perbuilding",_ac_zeus_perbuilding];
  _ac_zeus_mns_maxcount = missionNamespace setVariable ["STAF_AmbientCivilian_maxcount",_ac_zeus_maxcount];
  _ac_zeus_mns_rate = missionNamespace setVariable ["STAF_AmbientCivilian_rate",_ac_zeus_rate];
  _ac_zeus_mns_minspawn = missionNamespace setVariable ["STAF_AmbientCivilian_minspawn",_ac_zeus_minspawn];
  _ac_zeus_mns_maxspawn = missionNamespace setVariable ["STAF_AmbientCivilian_maxspawn",_ac_zeus_maxspawn];
  _ac_zeus_mns_spawning_active = missionNamespace setVariable ["STAF_AmbientCivilian_active",true];
  _ac_zeus_mns_debug = missionNamespace setVariable ["STAF_AmbientCivilian_debug",false];
  _ac_zeus_mns_blacklist = missionNamespace setVariable ["STAF_AmbientCivilian_blacklist",[""]];
  _ac_zeus_mns_hide = missionNamespace setVariable ["STAF_AmbientCivilian_hide",false];

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
    ["UNIT_CLASSES", _ac_zeus_typechoice],
    ["UNITS_PER_BUILDING", _ac_zeus_perbuilding],
    ["MAX_GROUPS_COUNT", _ac_zeus_maxcount],
    ["MIN_SPAWN_DISTANCE", _ac_zeus_minspawn],
    ["MAX_SPAWN_DISTANCE", _ac_zeus_maxspawn],
    ["BLACKLIST_MARKERS", _ac_zeus_blacklist],
    ["HIDE_BLACKLIST_MARKERS", _ac_zeus_hide],
    ["ON_UNIT_SPAWNED_CALLBACK", {}],
    ["ON_UNIT_REMOVE_CALLBACK", { true }],
    ["DEBUG", _ac_zeus_debug],
    ["SPAWN_RATE",_ac_zeus_rate]
	];

	// Start the script
	_parameters call STAF_fnc_ambientCivilian_StartCivilians;

}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
