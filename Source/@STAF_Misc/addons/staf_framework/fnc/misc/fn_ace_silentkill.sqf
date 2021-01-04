_Silentkill = [
            "STAF_Silentkill",
            "Break Neck",
            "\staf_framework\img\knockout.paa",
            {
              [_player, "Acts_TreatingWounded04", 1] call ace_common_fnc_doAnimation;

              [
                5,
                _target,
                {
                  params ["_target"];

                  [_player, "", 2] call ace_common_fnc_doAnimation;
                  playSound3D ["z\ace\addons\medical_feedback\sounds\fracture_1.wav", _target];
                  _target setDamage 1;
                  [_target, "quick_view", "%1 broke the neck of %2", [[_player, false, true] call ace_common_fnc_getName], [[_target, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
                },
                {
                  params ["_target"];

                  [_player, "", 2] call ace_common_fnc_doAnimation;
                },
                "Breaking Neck"
              ]
              call ace_common_fnc_progressBar;

            },
            {
              (stance _player == "CROUCH") AND (_target getVariable ["ACE_isUnconscious", false]) AND (Alive _target) AND (vehicle _target == _target)
            }
          ] call ace_interact_menu_fnc_createAction;

["Man", 0, ["ACE_Head"], _Silentkill, true] call ace_interact_menu_fnc_addActionToClass;
