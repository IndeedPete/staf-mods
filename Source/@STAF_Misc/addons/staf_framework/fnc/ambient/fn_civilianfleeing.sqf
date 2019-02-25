//To deactivate use the following code: missionNamespace setVariable ["STAF_civilianFleeing_Condition", false];

missionNamespace setVariable ["STAF_civilianFleeing_Condition", true];

STAF_civilianfleeing_factionlist = ["CIV_F","CFP_C_AFG","CFP_C_AFRCHRISTIAN","CFP_C_AFRISLAMIC","CFP_C_ASIA","CFP_C_ME","CUP_C_CHERNARUS","CUP_C_RU","CUP_C_TK"];

[] spawn {
 while {missionNamespace getVariable "STAF_civilianFleeing_Condition"} do {
  {
    if (
      ((alive _x))
      && (!(_x getVariable ["Var_STAF_civilianfleeing",false]))
      && (((faction _x) in STAF_civilianfleeing_factionlist))
      && {((side group _x) == civilian)}
    ) then {
      _x addEventHandler ["FiredNear",{
        _civ=_this select 0;

        switch (round(random 2)) do {
          case 0:{_civ switchMove "ApanPercMstpSnonWnonDnon_G01";_civ setSpeedMode "FULL";};
          case 1:{_civ playMoveNow "ApanPknlMstpSnonWnonDnon_G01";_civ setSpeedMode "FULL";};
          case 2:{_civ playMoveNow "ApanPpneMstpSnonWnonDnon_G01";_civ setSpeedMode "FULL";};
          default{_civ playMoveNow "ApanPknlMstpSnonWnonDnon_G01";_civ setSpeedMode "FULL";};
        };

        //This should tell the AI where to run to but it seems not working correctly
        _houses = nearestObjects [_civ, ["House"], 100];
        _house = selectRandom _houses;
        _housebuildingpos = _house buildingPos -1;
        _random_housebuildingpos = selectRandom _housebuildingpos;

        //Orders the civilian to move to the building position
        _civ doMove _random_housebuildingpos;

        //Remove the eventHandler to prevent spamming
        _civ removeAllEventHandlers "FiredNear";
      }];
   };
   _x setVariable ["Var_STAF_civilianfleeing",true];
   {waitUntil {!alive _x};
     _x setVariable ["Var_STAF_civilianfleeing",false];
   };
  } forEach allUnits - switchableUnits - playableUnits;
  sleep 1;
 };

 {_x setVariable ["Var_STAF_civilianfleeing",false]; _x removeAllEventHandlers "FiredNear";} forEach allUnits - switchableUnits - playableUnits;

};
