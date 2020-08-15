_varCheck = missionNamespace getVariable ["STAF_var_MissionNamespaceCuratorModule_DC", false];

if !(_varcheck) then {
    missionNamespace setVariable ["STAF_var_MissionNamespaceCuratorModule_DC", true];

    _ID = addMissionEventHandler ["HandleDisconnect", {
        params ["", "", "_moderatorModuleOwner"];

        private _zeusVarName = format ["STAF_var_MissionNamespaceCuratorModule_%1", _moderatorModuleOwner];
        private _zeus = missionNamespace getVariable _zeusVarName;

        if (!isNil "_zeus") then {
            if (!isNull _zeus) then {deleteVehicle _zeus};
            missionNamespace setVariable [_zeusVarName, nil];
        };
    }];
    missionNamespace setVariable ["STAF_var_MissionNamespaceCuratorModule_DC_ID", _ID];
};