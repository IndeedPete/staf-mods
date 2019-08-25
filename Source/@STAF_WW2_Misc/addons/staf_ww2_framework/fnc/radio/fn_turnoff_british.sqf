//Init of the radio
_radio = _this select 0;

//add a Turn off action
_turnoff = [
            "STAF_TurnOff_British",
            "Turn Radio Off",
            "\staf_framework\img\knockout.paa",
            {
              [player, "gesturePoint"] call ace_common_fnc_doGesture;

              _radiotype = typeOf _target;
              _radiopos = position _target;
              _radiodir = direction _target;
              deleteVehicle _target;
              _radionew createVehicle [_radiotype,_radiopos];
              _radionew setdir _radiodir;

              //Create new turn on action
              [_radionew] call STAF_fnc_TurnOn_British;
            },
            {true}
          ] call ace_interact_menu_fnc_createAction;

[_radio, 0, ["ACE_MainActions"], _turnoff, true] call ace_interact_menu_fnc_addActionToObject;
