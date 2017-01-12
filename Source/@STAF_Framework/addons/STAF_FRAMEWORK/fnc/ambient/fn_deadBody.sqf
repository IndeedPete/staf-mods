private ["_unit", "_anims", "_anim"];
_unit = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_anims = ["", "KIA_passenger_injured_medevac_truck01", "KIA_passenger_injured_medevac_truck02", "KIA_passenger_injured_medevac_truck03", "AadjPpneMstpSrasWrflDright", "AadjPpneMstpSrasWrflDleft", "AadjPpneMstpSrasWrflDdown", "KIA_gunner_standup01", "KIA_gunner_static_low01", "Static_Dead"];
_anim = _anims call BIS_fnc_selectRandom;

_unit setDir (random 360);
_unit setCaptive true;
_unit setDamage 1;

if (_anim != "") then {
	[_unit, _anim] spawn {
		waitUntil{time > 0};
		(_this select 0) switchMove (_this select 1);
	};
};