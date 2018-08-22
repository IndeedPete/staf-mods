["STAF", "Set Respwn Timer",
{
	private _dialogResult =
	[
		"Set Respawn Timer",
		[
			// The last number is optional! If you want the first selection you can remove the number.
				//["Combo Box Control", ["Choice 1","Choice 2"], 1],
				["How long should Respawn take?", ["5","30","60","90","120","180","300"], 4]
				//["Text Control", "", "default text"],
				//["Slider Control", "SLIDER", 1],
				//["Side Control", "SIDE", 2]
		]
	] call Ares_fnc_showChooseDialog;

	// If the dialog was closed.
	if (_dialogResult isEqualTo []) exitWith{};

	// Get the selected data
	_dialogResult params ["_comboBoxResult"];

	// Sets the Respawn Time
	if ((_dialogResult select 0) == 0) then {
		[5] remoteExec ["setPlayerRespawnTime", 0, true];
		_respawntime = [player,["Respawn", {params ["_unit", "_corpse"];setPlayerRespawnTime 5;}]] remoteExec ["addEventHandler", 0, true];
	};
	if ((_dialogResult select 0) == 1) then {
		[30] remoteExec ["setPlayerRespawnTime", 0, true];
		_respawntime = [player,["Respawn", {params ["_unit", "_corpse"];setPlayerRespawnTime 30;}]] remoteExec ["addEventHandler", 0, true];
	};
	if ((_dialogResult select 0) == 2) then {
		[60] remoteExec ["setPlayerRespawnTime", 0, true];
		_respawntime = [player,["Respawn", {params ["_unit", "_corpse"];setPlayerRespawnTime 60;}]] remoteExec ["addEventHandler", 0, true];
	};
	if ((_dialogResult select 0) == 3) then {
		[90] remoteExec ["setPlayerRespawnTime", 0, true];
		_respawntime = [player,["Respawn", {params ["_unit", "_corpse"];setPlayerRespawnTime 90;}]] remoteExec ["addEventHandler", 0, true];
	};
	if ((_dialogResult select 0) == 4) then {
		[120] remoteExec ["setPlayerRespawnTime", 0, true];
		_respawntime = [player,["Respawn", {params ["_unit", "_corpse"];setPlayerRespawnTime 120;}]] remoteExec ["addEventHandler", 0, true];
	};
	if ((_dialogResult select 0) == 5) then {
		[180] remoteExec ["setPlayerRespawnTime", 0, true];
		_respawntime = [player,["Respawn", {params ["_unit", "_corpse"];setPlayerRespawnTime 180;}]] remoteExec ["addEventHandler", 0, true];
	};
	if ((_dialogResult select 0) == 6) then {
		[300] remoteExec ["setPlayerRespawnTime", 0, true];
		_respawntime = [player,["Respawn", {params ["_unit", "_corpse"];setPlayerRespawnTime 300;}]] remoteExec ["addEventHandler", 0, true];
	};
}] call Ares_fnc_RegisterCustomModule;
