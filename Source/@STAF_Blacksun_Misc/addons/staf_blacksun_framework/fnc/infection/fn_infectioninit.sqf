params ["_target","_shooter","_ammo"];

if (count _ammo isEqualTo 3) exitWith {};//undefined origin (fall, collisions etc)
if ((_ammo select 4) isEqualTo "rvg_zedAmmo") then {
  _random = random 1;

  hint format ["%1", _random];

  if (_random >= 0.65) then {
    _target spawn STAF_Horror_fnc_infection;
  };
};
