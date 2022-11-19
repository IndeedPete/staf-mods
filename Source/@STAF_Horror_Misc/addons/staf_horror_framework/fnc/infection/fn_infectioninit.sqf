params ["_target"];

_random = random 1;
_chance = missionNamespace getvariable "STAF_Horror_InfectionChance";

if (_random >= _chance) then {
  _target spawn STAF_Horror_fnc_infection;
};