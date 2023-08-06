params ["_player"];

_ZeusActionEligible = _player getVariable ["STAF_var_ZeusActionEligible", false];
_ZeusAdmin = ["76561198071715471","76561197980877311","76561197999146691","76561197971387924","76561198063419944","_SP_PLAYER_"]; //Jeromer, Killerfish, Liffy, Moony
_playerUID = getplayerUID _player;
_isZeusAdmin = _playerUID in _ZeusAdmin;

if (_ZeusActionEligible) exitwith {};

if (_isZeusAdmin) then {
  [_player, ["STAF_var_ZeusActionEligible", true, true]] remoteExec ["setVariable", 0, true];
};