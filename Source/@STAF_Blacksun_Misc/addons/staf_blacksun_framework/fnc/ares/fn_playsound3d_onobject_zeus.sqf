["STAF Horror", "Play Sound (on Object)",
{
	// Get all the passed parameters
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	// Creating sound groups
	_ambient = ["staf_blacksun_framework\snd\ambient_01.ogg","staf_blacksun_framework\snd\ambient_02.ogg","staf_blacksun_framework\snd\ambient_03.ogg","staf_blacksun_framework\snd\ambient_04.ogg","staf_blacksun_framework\snd\ambient_05.ogg"];
	_bat = ["staf_blacksun_framework\snd\bat_01.ogg"];
	_breathing = ["staf_blacksun_framework\snd\breathing_01.ogg","staf_blacksun_framework\snd\breathing_02.ogg","staf_blacksun_framework\snd\breathing_03.ogg","staf_blacksun_framework\snd\breathing_04.ogg","staf_blacksun_framework\snd\breathing_05.ogg","staf_blacksun_framework\snd\breathing_06.ogg"];
	_eatdrink = ["staf_blacksun_framework\snd\eating_drinking_01.ogg"];
	_flesh = ["staf_blacksun_framework\snd\flesh_sound_01.ogg","staf_blacksun_framework\snd\flesh_sound_02.ogg"];
	_ghost_hiss = ["staf_blacksun_framework\snd\ghost_hiss_01.ogg"];
	_monster_growl = ["staf_blacksun_framework\snd\monster_growl_01.ogg","staf_blacksun_framework\snd\monster_growl_02.ogg"];
	_monster_screech = ["staf_blacksun_framework\snd\monster_screech_01.ogg","staf_blacksun_framework\snd\monster_screech_02.ogg"];
	_scream_baby = ["staf_blacksun_framework\snd\scream_01_baby.ogg","staf_blacksun_framework\snd\scream_02_baby.ogg"];
	_scream_women = ["staf_blacksun_framework\snd\scream_01_women.ogg","staf_blacksun_framework\snd\scream_02_women.ogg","staf_blacksun_framework\snd\scream_03_women.ogg","staf_blacksun_framework\snd\scream_04_women.ogg","staf_blacksun_framework\snd\scream_05_women.ogg","staf_blacksun_framework\snd\scream_06_women.ogg"];
	_scream_men = ["staf_blacksun_framework\snd\scream_01_men.ogg","staf_blacksun_framework\snd\scream_02_men.ogg","staf_blacksun_framework\snd\scream_02_men.ogg"];
	_scream = _scream_baby + _scream_women + _scream_men;
	_wolf = ["staf_blacksun_framework\snd\wolf_01.ogg"];

	// We check if there is a object under the cursor or not,
	// If the object under cursor is null (nothing was selected), then prompt the user to select object(s) by calling Achilles_fnc_SelectUnits.
	// But if the module had been placed upon an object, then return that object surounded by brackets (add it to an array).
	private _selectedObjects = if (isNull _objectUnderCursor) then
	{
		["Objects"] call Achilles_fnc_SelectUnits;
	}
	else
	{
		[_objectUnderCursor];
	};

	// If the selection was canceled, exit the script to prevent any issues and errors.
	if (isNil "_selectedObjects") exitWith {};

	// If the selection is empty, also exit, but with a message.
	// Side note: using isEqualTo [] is faster than count _selectedObjects == 0. So always try to improve performance when ever possible.
	if (_selectedObjects isEqualTo []) exitWith
	{
		// This is only from 0.1.0 update and higher! Use old Ares_fnc_ShowZeusMessage and playSound "FD_Start_F" if below that version! Syntax is the same.
		// Show the message to the Curator.
		["No object was selected!"] call Achilles_fnc_showZeusErrorMessage;
	};

	// Creates a dialog.
	private _dialogResult =
	[
		"Choose Sound",
		[
			// The last number is optional! If you want the first selection you can remove the number.
				["What sound do you want to play?", ["Ambience","Bat","Breathing","Eating/Drinking","Flesh","Ghost Hiss","Monster Growl","Monster Screech","Scream (All)","Scream (Men)","Scream (Women)","Scream (Baby)","Wolf"], 0]
		]
	] call Ares_fnc_showChooseDialog;

	// If the dialog was closed.
	if (_dialogResult isEqualTo []) exitWith{};

	// Get the selected data
	_dialogResult params ["_comboBoxResult"];

	if ((_dialogResult select 0) == 0) then {
		{
		    playSound3D [selectRandom _ambient, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 1) then {
		{
		    playSound3D [selectRandom _bat, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 2) then {
		{
		    playSound3D [selectRandom _breathing, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 3) then {
		{
		    playSound3D [selectRandom _eatdrink, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 4) then {
		{
		    playSound3D [selectRandom _flesh, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 5) then {
		{
		    playSound3D [selectRandom _ghost_hiss, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 6) then {
		{
		    playSound3D [selectRandom _monster_growl, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 7) then {
		{
		    playSound3D [selectRandom _monster_screech, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 8) then {
		{
		    playSound3D [selectRandom _scream, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 9) then {
		{
		    playSound3D [selectRandom _scream_men, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 10) then {
		{
		    playSound3D [selectRandom _scream_women, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 11) then {
		{
		    playSound3D [selectRandom _scream_baby, _x, false, getposasl _x, 1, 1, 100];
		} forEach _selectedObjects;
	};

	if ((_dialogResult select 0) == 12) then {
		{
		    playSound3D [selectRandom _wolf, _x, false, getposasl _x, 2, 1, 100];
		} forEach _selectedObjects;
	};
}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
