params ["_caller"];

lineIntersectsSurfaces [
  getPosWorld _caller,
  getPosWorld _caller vectorAdd [0, 0, 50],
  _caller, objNull, true, 1, "GEOM", "NONE"
] select 0 params ["","","","_house"];
if (isNil "_house") exitWith {false};
if (_house isKindOf "House") exitWith {true};
