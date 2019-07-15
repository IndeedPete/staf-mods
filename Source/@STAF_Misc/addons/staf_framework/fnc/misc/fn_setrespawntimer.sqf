params ["_unit", "_num"];

if (_num < 3) then {
  _num = 3;
};

[_num] remoteExec ["setPlayerRespawnTime", _unit];
