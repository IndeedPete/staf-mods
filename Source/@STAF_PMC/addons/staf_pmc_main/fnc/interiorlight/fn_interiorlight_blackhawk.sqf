_InteriorLightOn_Blackhawk_Cockpit = [
  "STAF_InteriorLightOn_Blackhawk_Cockpit",
  "Turn on Cockpit Light",
  "\a3\ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa",
  {
    _blackhawk_cockpit = "#lightpoint" createVehicleLocal getpos _target;
    _blackhawk_cockpit lightAttachObject [_target, [-0.006,4.825,0.15]];
    _blackhawk_cockpit setLightColor [0.92,0.30,0];
    _blackhawk_cockpit setLightAmbient [0.92,0.30,0];
    _blackhawk_cockpit setLightIntensity 100;
    _blackhawk_cockpit setLightDayLight true;
    _blackhawk_cockpit setLightAttenuation [0,0,3,1];
    _target setVariable ["STAF_InteriorLight_Blackhawk_Cockpit", _blackhawk_cockpit];
    _target setVariable ["STAF_InteriorLight_Blackhawk_Back_On", true];
  },
  {_target getVariable ["STAF_InteriorLight_Blackhawk_Back_On", false]}
] call ace_interact_menu_fnc_createAction;

_InteriorLightOn_Blackhawk_Back = [
  "STAF_InteriorLightOn_Blackhawk_Back",
  "Turn on Back Light",
  "\a3\ui_f\data\IGUI\Cfg\VehicleToggles\LightsIconOn_ca.paa",
  {
    _blackhawk_back = "#lightpoint" createVehicleLocal getpos _target;
    _blackhawk_back lightAttachObject [_target, [-0.006,4.825,0.15]];
    _blackhawk_back setLightColor [0.92,0.30,0];
    _blackhawk_back setLightAmbient [0.92,0.30,0];
    _blackhawk_back setLightIntensity 100;
    _blackhawk_back setLightDayLight true;
    _blackhawk_back setLightAttenuation [0,0,3,1];
    _target setVariable ["STAF_InteriorLight_Blackhawk_Back", _blackhawk_cockpit];
    _target setVariable ["STAF_InteriorLight_Blackhawk_Back_On", true];
  },
  {_target getVariable ["STAF_InteriorLight_Blackhawk_Back_On", false]}
] call ace_interact_menu_fnc_createAction;

_InteriorLightOff_Blackhawk_Cockpit = [
  "STAF_InteriorLightOff_Blackhawk_Cockpit",
  "Turn off Cockpit Light",
  "\staf_pmc_main\fnc\interiorlight\LightsIconOff_ca.paa",
  {
    _blackhawk_cockpit = _target getVariable "STAF_InteriorLight_Blackhawk_Cockpit";
    deleteVehicle _blackhawk_cockpit;
    _target setVariable ["STAF_InteriorLight_Blackhawk_Back_On", false];
  },
  {_target getVariable ["STAF_InteriorLight_Blackhawk_Back_On", false]}
] call ace_interact_menu_fnc_createAction;

_InteriorLightOff_Blackhawk_Back = [
  "STAF_InteriorLightOff_Blackhawk_Back",
  "Turn off Back Light",
  "\staf_pmc_main\fnc\interiorlight\LightsIconOff_ca.paa",
  {
    _blackhawk_back = _target getVariable "STAF_InteriorLight_Blackhawk_Back";
    deleteVehicle _blackhawk_back;
    _target setVariable ["STAF_InteriorLight_Blackhawk_Back_On", false];
  },
  {_target getVariable ["STAF_InteriorLight_Blackhawk_Back_On", false]}
] call ace_interact_menu_fnc_createAction;

_InteriorLightSub_Blackhawk = [
  "STAF_InteriorLight_Blackhawk",
  "Interior Light",
  "\staf_pmc_main\fnc\interiorlight\LightsIcon_ca.paa",
  {},
  {true}
] call ace_interact_menu_fnc_createAction;

["STAF_uh60m", 0, ["ACE_MainActions"], _InteriorLightSub_Blackhawk, true] call ace_interact_menu_fnc_addActionToClass;
["STAF_uh60m", 0, ["ACE_MainActions","STAF_InteriorLight_Blackhawk"], _InteriorLightOn_Blackhawk_Cockpit, true] call ace_interact_menu_fnc_addActionToClass;
["STAF_uh60m", 0, ["ACE_MainActions","STAF_InteriorLight_Blackhawk"], _InteriorLightOff_Blackhawk_Cockpit, true] call ace_interact_menu_fnc_addActionToClass;
["STAF_uh60m", 0, ["ACE_MainActions","STAF_InteriorLight_Blackhawk"], _InteriorLightOn_Blackhawk_Back, true] call ace_interact_menu_fnc_addActionToClass;
["STAF_uh60m", 0, ["ACE_MainActions","STAF_InteriorLight_Blackhawk"], _InteriorLightOff_Blackhawk_Back, true] call ace_interact_menu_fnc_addActionToClass;
