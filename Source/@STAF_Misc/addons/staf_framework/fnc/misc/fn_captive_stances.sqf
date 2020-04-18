_captive_stance = [
  "STAF_Captive_Stance",
  "Captive Stances",
  "",
  {},
  {_target getVariable "ACE_captives_isHandcuffed"}
] call ace_interact_menu_fnc_createAction;


_stand = [
              "STAF_Captive_Stand",
              "Stand up!",
              "",
              {

              },
              {!(_target getVariable "STAF_Captive_Stance_Stand")}
          ] call ace_interact_menu_fnc_createAction;

_crouch = [
              "STAF_Captive_Crouch",
              "Crouch down!",
              "",
              {

              },
              {!(_target getVariable "STAF_Captive_Stance_Crouch")}
          ] call ace_interact_menu_fnc_createAction;

_prone = [
              "STAF_Captive_Prone",
              "Go Prone!",
              "",
              {

              },
              {!(_target getVariable "STAF_Captive_Stance_Prone")}
          ] call ace_interact_menu_fnc_createAction;

_sit = [
              "STAF_Captive_Sit",
              "Sit down!",
              "",
              {
                [_target,"SIT_LOW","ASIS",objNull,true] call BIS_fnc_ambientAnim;
              },
              {!(_target getVariable "STAF_Captive_Stance_Crouch")}
          ] call ace_interact_menu_fnc_createAction;

["Man", 0, ["ACE_MainActions"], _captive_stance, true] call ace_interact_menu_fnc_addActionToClass;
["Man", 0, ["ACE_MainActions", "STAF_Captive_Stance"], _stand, true] call ace_interact_menu_fnc_addActionToClass;
["Man", 0, ["ACE_MainActions", "STAF_Captive_Stance"], _crouch, true] call ace_interact_menu_fnc_addActionToClass;
["Man", 0, ["ACE_MainActions", "STAF_Captive_Stance"], _prone, true] call ace_interact_menu_fnc_addActionToClass;
["Man", 0, ["ACE_MainActions", "STAF_Captive_Stance"], _sit, true] call ace_interact_menu_fnc_addActionToClass;
