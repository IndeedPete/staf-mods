params [
	["_Vehicle", ObjNull, [ObjNull]],
	["_text", "Heal me", [""]],
	["_condition", "true", [""]]
];

switch (_vehicle getvariable ["STAF_UnlimitedAmmo", false]) do {
	case true: {

		_vehicle removeEventHandler ["Fired", (_vehicle getvariable "STAF_UnlimitedAmmoState")];
		[objNull, "UNIT HAS LIMITED AMMO NOW"] call BIS_fnc_showCuratorFeedbackMessage;
		_vehicle setvariable ["STAF_UnlimitedAmmo", false];
		_vehicle setvariable ["STAF_UnlimitedAmmoState", nil];
	};
	case false: {

		_UnlimitedAmmoEventhandler = _Vehicle addEventHandler ["Fired",{(_this select 0) setVehicleAmmo 1}];
		[objNull, "UNIT HAS UNLIMITED AMMO NOW"] call BIS_fnc_showCuratorFeedbackMessage;
		_vehicle setvariable ["STAF_UnlimitedAmmo", true];
		_vehicle setvariable ["STAF_UnlimitedAmmoState", _UnlimitedAmmoEventhandler];
	};
};
