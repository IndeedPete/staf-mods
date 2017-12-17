_HideBody = [
  "STAF_HideBody",
  "Hide Body",
  "\a3\ui_f\data\IGUI\Cfg\Revive\overlayIcons\d100_ca.paa",
  {_target remoteExec ["hideBody", 0, true]; waitUntil {sleep 10;}; deleteVehicle _target},
  {!Alive _target}
] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions"], _HideBody, true] call ace_interact_menu_fnc_addActionToClass;
