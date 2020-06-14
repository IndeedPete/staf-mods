params [
	"_Zeus_Module"
];

if (!(_Zeus_Module getvariable ["STAF_ZeusActionModule", false])) then {
  _ZeusSubAction = [
    "STAF_Zeus",
    "Zeus",
    "\a3\ui_f_curator\Data\Logos\arma3_zeus_icon_ca.paa",
    {},
    {}
  ] call ace_interact_menu_fnc_createAction;

  [_Zeus_Module, 1, ["ACE_SelfActions"], _ZeusSubAction, true] call ace_interact_menu_fnc_addActionToObject;
  _Zeus_Module setvariable ["STAF_ZeusActionModule", true];
};
