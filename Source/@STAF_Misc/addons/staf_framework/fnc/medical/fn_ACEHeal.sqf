params [
	["_injured", player, [ObjNull]]
];

[player, _injured] call ACE_medical_fnc_treatmentAdvanced_fullHealLocal;

//KAT Medical
_injured setVariable ["ace_medical_airwayOccluded", false];
_injured setVariable ["kat_aceAirway_overstretch", false];
_injured setVariable ["ace_medical_airwayCollapsed", false];
_injured setVariable ["ace_medical_airwayStatus", 100];
_injured setVariable ["kat_aceAirway_swollen", 100];

_injured setDamage 0;
