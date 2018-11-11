_KnockOut = [
            "STAF_KnockOut",
            "Knock Out",
            "\staf_framework\img\knockout.paa",
            {
              [player, "gesturePoint"] call ace_common_fnc_doGesture;
              [1, _target, {[(_this select 0), true, (round(random(10)+25)), true] call ace_medical_fnc_setUnconscious;[(_this select 0), 0.05, "head", "punch"] call ace_medical_fnc_addDamageToUnit;}, {}, "Knocking out..."] call ace_common_fnc_progressBar;
            },
            {true}
          ] call ace_interact_menu_fnc_createAction;

["Man", 0, ["ACE_Head"], _KnockOut, true] call ace_interact_menu_fnc_addActionToClass;
