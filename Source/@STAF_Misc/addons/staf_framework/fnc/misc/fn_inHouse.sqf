lineIntersectsSurfaces [
  getPosWorld _this,
  getPosWorld _this vectorAdd [0, 0, 50],
  _this, objNull, true, 1, "GEOM", "NONE"
] select 0 params ["","","","_house"];
if (_house isKindOf "House") exitWith {true};
false;
