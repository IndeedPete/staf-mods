/*
 * Author: Moony
 * Lets Artillery Randomly fire on given Marker
 *
 * Arguments:
 * 0: Artillery <STRING>
 * 1: Target Marker <ARRAY>
 * 2: Rounds <NUMBER> (Optional) (Default: 1)
 * 3: Random Time <NUMBER> or <Array> (Optional) (Default: [20, 35, 45])
 *
 * Return Value:
 * None
 *
 * Example:
 * [this, ["tgt_1","tgt_2"]] call STAF_fnc_randomArtillery
 *
 * [this, ["tgt_1","tgt_2"], 3, 20] call STAF_fnc_randomArtillery
 *
 * [this, ["tgt_1","tgt_2"], 3, [20,30,40]] call STAF_fnc_randomArtillery
 *
 * Public: No
 */

 params [
	"_artillery",
	"_tgtmarker",
	["_rounds",1],
	["_random",[20, 35, 45]]
];

_ammo = (getArtilleryAmmo [_artillery]) select 0;
_var = _artillery setVariable ["STAF_var_randomArtillery", true];
while {_artillery getVariable "STAF_var_randomArtillery"} do { 
	_tgt = selectRandom _tgtmarker;
	_artillery doArtilleryFire [getMarkerPos _tgt,_ammo,_rounds];
	sleep (random _random);
};