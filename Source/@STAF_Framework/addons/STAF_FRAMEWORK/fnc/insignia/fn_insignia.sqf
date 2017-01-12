if (isDedicated) exitWith {};
params [
    ["_playerCountryMap", [], [[]]],
    "_uid",
    "_insignia"
];

_uid = getPlayerUID player;
while {true} do {
    _insignia = "";

    waitUntil {
        sleep 5;

        if ((getNumber(configFile >> "CfgVehicles" >> (typeOf player) >> "attendant")) == 1) then {
            _insignia = "STAF_Medic";
        } else {
            {
                if (_uid in (_x select 1)) exitWith {
                    _insignia = (_x select 0);
                };
            } forEach _playerCountryMap;
        };

       (!(isNull player) && {player call BIS_fnc_getUnitInsignia != _insignia})
    };

    [player, _insignia] call BIS_fnc_setUnitInsignia;
};