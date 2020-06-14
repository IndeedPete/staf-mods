_KnockOut = [
            "STAF_KnockOut",
            "Knock Out",
            "\staf_framework\img\knockout.paa",
            {
              [player, "gesturePoint"] call ace_common_fnc_doGesture;
              waitUntil{sleep 0.1};
              [_target, true, (round(random(10)+25)), true] call ace_medical_fnc_setUnconscious;
              [_target, 0.05, "head", "punch"] call ace_medical_fnc_addDamageToUnit;
            },
            {true}
          ] call ace_interact_menu_fnc_createAction;

["Man", 0, ["ACE_Head"], _KnockOut, true] call ace_interact_menu_fnc_addActionToClass;
