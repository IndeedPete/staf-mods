["CAManBase", "killed", {
    params["_unit"];
    // Exit if unit is player
    if (isPlayer _unit) exitWith {};

    /*_unit addAction ["Hide Body", {
        removeAllActions (_this select 0);
        hideBody (_this select 0);
    }];*/
    [_unit, ["Hide Body",{
        removeAllActions (_this select 0);
        hideBody (_this select 0);
        [] spawn {sleep 10; deletevehicle (_this select 0);};
    }]] remoteExec ["addAction", 0, true];
}] call CBA_fnc_addClassEventHandler;
