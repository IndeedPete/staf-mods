params [
	["_medic", ObjNull, [ObjNull]],
	["_text", "Heal me.", [""]],
	["_condition", "true", [""]]
];

if (!(isServer) && {_medic getVariable ["STAF_BaseMedic", false]}) exitWith {};
[_medic, [(format ["<img size='1' shadow='1' image='\a3\ui_f\data\igui\cfg\Actions\heal_ca.paa'/> '%1'", _text]), {[player] call STAF_fnc_ACEHeal}, [], 1.5, false, true, "", (format ["(_this distance _target < 3) && {%1}", _condition])]] remoteExec ["addAction", 0, true];
[_medic, "STAF_Medic"] remoteExec ["BIS_fnc_setUnitInsignia", 0, true];
_medic setVariable ["STAF_BaseMedic", true, true];