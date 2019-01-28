_vehicle = _this select 0;

// Set Variable for toggle Module
[_vehicle, ["STAF_allowFleeing", false]] remoteExec ["setVariable", 0, true];
_vehicle allowFleeing 0;
