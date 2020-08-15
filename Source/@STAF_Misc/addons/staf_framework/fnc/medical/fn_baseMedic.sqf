params [
	["_medic", ObjNull, [ObjNull]],
	["_text", "Heal me", [""]],
	["_text2", "Heal everyone", [""]],
	["_condition", "true", [""]]
];

if (!(isServer) && {_medic getVariable ["STAF_BaseMedic", false]}) exitWith {};

// Adds "Heal me"
_heal = [
	_medic,
	[
		(format ["<img size='1' shadow='1' image='\a3\ui_f\data\igui\cfg\Actions\heal_ca.paa'/> %1", _text]),
		{
			[player] call ace_medical_treatment_fnc_fullHeallocal;
			["STAF_notification_healed",[]] call bis_fnc_showNotification;
		},
		[],
		9,
		false,
		true,
		"",
		(
			format [
				"(_this distance _target < 3) && {%1} && (Alive _target)",
				_condition
			]
		)
	]
] remoteExec ["addAction", 0, true];

// Adds Heal everyone
_healeveryone = [
	_medic,
	[
		(format ["<img size='1' shadow='1' image='\a3\ui_f\data\igui\cfg\Actions\heal_ca.paa'/> %1", _text2]),
		{
			params ["_target", "_caller", "_actionId", "_arguments"];

			_radiusUnits = _target nearEntities ["Man", 10];
			_healedUnits = _radiusUnits - [_caller];

			{
				[_x] call ace_medical_treatment_fnc_fullHeallocal;
			} forEach _radiusUnits;

			{
				["STAF_notification_healedbysomeone",[]] remoteExecCall ["bis_fnc_showNotification", _x];
			} forEach _healedUnits;
			["STAF_notification_sombodyhealed",[]] call bis_fnc_showNotification;
		},
		[],
		8.5,
		false,
		true,
		"",
		(
			format [
				"(_this distance _target < 3) && {%1} && (Alive _target)",
				_condition
			]
		)
	]
] remoteExec ["addAction", 0, true];

[_medic, "STAF_Medic"] remoteExec ["BIS_fnc_setUnitInsignia", 0, true];
_medic setVariable ["STAF_BaseMedic", true, true];
