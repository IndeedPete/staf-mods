_object = _this select 0;
_marker = _this select 1;

[_object, _marker] spawn {
  While {!isNull (_this select 0)} do {
    (_this select 1) setMarkerPos (getPos (_this select 0));
    (_this select 1) setMarkerDir (getDir (_this select 0));
    sleep 0.1;
    if (!alive (_this select 0)) exitWith {deleteMarker (_this select 1)};
    if (isNull (_this select 0)) exitWith {deleteMarker (_this select 1)};
  };
};
