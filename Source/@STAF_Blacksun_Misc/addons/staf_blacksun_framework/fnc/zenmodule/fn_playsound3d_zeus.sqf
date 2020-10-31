if (!isServer) exitWith {};

["STAF Horror", "Play Spooky Sound",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// Dialog
	_soundSelection = ["_selectambient","_selectbat","_selectbreathing","_selecteatdrink","_selectflesh","_selectghost_hiss","_selectmonster_growl","_selectmonster_screech","_selectscream","_selectscream_men","_selectscream_women","_selectscream_baby","_selectwolf"];
	_soundNames = ["Ambience","Bat","Breathing","Eating/Drinking","Flesh","Ghost Hiss","Monster Growl","Monster Screech","Scream (All)","Scream (Men)","Scream (Women)","Scream (Baby)","Wolf"];

	[
		"Ambient Horror Sounds", 
		[
			[
				"COMBO",
				"Select a Sound",
				[
					_soundSelection,
					_soundNames, 
					0
				]
			]
		], 
		{
			params ["_dialogValues", "_arguments"];
			_dialogValues params ["_dialogselection"];
			_arguments params ["_position","_objectUnderCursor"];

			if (isNull _objectUnderCursor) then {

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

				switch _dialogselection do {
					case "_selectambient": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _ambient, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectbat": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _bat, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectbreathing": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _breathing, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selecteatdrink": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _eatdrink, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectflesh": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _flesh, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectghost_hiss": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _ghost_hiss, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectmonster_growl": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _monster_growl, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectmonster_screech": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _monster_screech, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream_baby": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _scream_baby, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream_women": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _scream_women, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream_men": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _scream_men, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream": {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _scream, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case _selectwolf: {_obj = "Land_TacticalBacon_F" createVehicle _position; playSound3D [selectRandom _wolf, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
				};
			} else {

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

				switch _dialogselection do {
					case "_selectambient": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _ambient, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectbat": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _bat, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectbreathing": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _breathing, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selecteatdrink": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _eatdrink, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectflesh": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _flesh, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectghost_hiss": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _ghost_hiss, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectmonster_growl": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _monster_growl, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectmonster_screech": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _monster_screech, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream_baby": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _scream_baby, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream_women": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _scream_women, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream_men": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _scream_men, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case "_selectscream": {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _scream, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
					case _selectwolf: {_obj = "Land_TacticalBacon_F" createVehicle getPos _objectUnderCursor; playSound3D [selectRandom _wolf, nil, false, getposasl _obj, 1, 1, 100]; deleteVehicle _obj;};
				};
			};				
		}, 
		{},
		[
			_position,
			_objectUnderCursor
		]
	] call zen_dialog_fnc_create;
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
