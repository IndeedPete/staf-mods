params [
	["_medic", ObjNull, [ObjNull]],
	["_text", "Heal me", [""]],
	["_text2", "Heal everyone", [""]],
	["_condition", "true", [""]]
];

if (!(isServer) && {_medic getVariable ["STAF_BaseMedic", false]}) exitWith {};

// Adds "Heal me"
[
	_medic,
	[
		(format ["<img size='1' shadow='1' image='\a3\ui_f\data\igui\cfg\Actions\heal_ca.paa'/> %1", _text]),
		{
			[player, player] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
			["STAF_notification_healed",[]] call bis_fnc_showNotification;
		},
		[],
		6,
		false,
		true,
		"",
		(
			format [
				"(_this distance _target < 3) && {%1}",
				_condition
			]
		)
	]
] remoteExec ["addAction", 0, true];

// Adds Heal everyone
[
	_medic,
	[
		(format ["<img size='1' shadow='1' image='\a3\ui_f\data\igui\cfg\Actions\heal_ca.paa'/> %1", _text2]),
		{
			{
				if(_x distance (getPos (_this select 0)) < 10) then {
					[player, _x] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;
				}
			} forEach allUnits;
			["STAF_notification_sombodyhealed",[]] call bis_fnc_showNotification;
		},
		[],
		6,
		false,
		true,
		"",
		(
			format [
				"(_this distance _target < 3) && {%1}",
				_condition
			]
		)
	]
] remoteExec ["addAction", 0, true];

[_medic, "STAF_Medic"] remoteExec ["BIS_fnc_setUnitInsignia", 0, true];
_medic setVariable ["STAF_BaseMedic", true, true];
