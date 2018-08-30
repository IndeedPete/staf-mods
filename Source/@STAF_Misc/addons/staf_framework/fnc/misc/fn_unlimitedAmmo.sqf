params [
	["_Vehicle", ObjNull, [ObjNull]],
	["_text", "Heal me", [""]],
	["_condition", "true", [""]]
];

_Vehicle addEventHandler ["Fired",{(_this select 0) setVehicleAmmo 1}];
