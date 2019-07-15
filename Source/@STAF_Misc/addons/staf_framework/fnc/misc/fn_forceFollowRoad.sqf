params ["_veh"];

switch (_veh getVariable ["STAF_ForceFollowRoad",false]) do {
    case true: {
      _veh setVariable ["STAF_ForceFollowRoad", false];
      _veh forceFollowRoad true;
    };
    case false: {
      _veh setVariable ["STAF_ForceFollowRoad", true];
      _veh forceFollowRoad false;
    };
};
