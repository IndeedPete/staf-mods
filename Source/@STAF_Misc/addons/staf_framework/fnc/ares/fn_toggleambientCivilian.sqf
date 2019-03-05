// Most of this is take straight from the Achilles Modules Code. I just adjusted it to our needs

["STAF AI", "Toggle Ambient Civilians",
{
  _ac_zeus_spawning_active = missionNamespace getVariable "STAF_AmbientCivilian_active";
  _ac_zeus_debug = missionNamespace getVariable "STAF_AmbientCivilian_debug";
  _ac_zeus_type = missionNamespace getVariable "STAF_AmbientCivilian_type";
  _ac_zeus_perbuilding = missionNamespace getVariable "STAF_AmbientCivilian_perbuilding";
  _ac_zeus_maxcount = missionNamespace getVariable "STAF_AmbientCivilian_maxcount";
  _ac_zeus_rate = missionNamespace getVariable "STAF_AmbientCivilian_rate";
  _ac_zeus_minspawn = missionNamespace getVariable "STAF_AmbientCivilian_minspawn";
  _ac_zeus_maxspawn = missionNamespace getVariable "STAF_AmbientCivilian_maxspawn";
  _ac_zeus_blacklist = missionNamespace getVariable "STAF_AmbientCivilian_blacklist";
  _ac_zeus_hide = missionNamespace getVariable "STAF_AmbientCivilian_hide";

  //Checks if Ambient Civilians is active at all
  if (isNil "_ac_zeus_spawning_active") exitWith {
    ["<t color=""#ff0000"" font=""PuristaBold"" align=""center"">Error:</t><br/><t align=""center"">Ambient Civilians is not active!</t>", 2, player, 10] call ace_common_fnc_displayTextStructured;
  };

  //Checks the state of the Ambient Civilians Spawn and toggles it
  if (_ac_zeus_spawning_active) then {
    _ac_zeus_spawning_active = missionNamespace setVariable ["STAF_AmbientCivilian_active", false];
  } else {
    _ac_zeus_spawning_active = missionNamespace setVariable ["STAF_AmbientCivilian_active", true];

    _parameters = [
      ["UNIT_CLASSES", _ac_zeus_type],
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
  	_parameters spawn STAF_fnc_ambientCivilian_StartCivilians;
  };
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
