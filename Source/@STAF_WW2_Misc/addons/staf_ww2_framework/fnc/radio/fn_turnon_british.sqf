//Init of the radio
_radio = _this select 0;

//add a Turn off action
_turnon = [
            "STAF_TurnOn_British",
            "Turn Radio On",
            "\staf_framework\img\knockout.paa",
            {
              [player, "gesturePoint"] call ace_common_fnc_doGesture;
              [_radio] call STAF_WW2_fnc_britishradio;
            },
            {true}
          ] call ace_interact_menu_fnc_createAction;

[_radio, 0, ["ACE_MainActions"], _turnon, true] call ace_interact_menu_fnc_addActionToObject;
