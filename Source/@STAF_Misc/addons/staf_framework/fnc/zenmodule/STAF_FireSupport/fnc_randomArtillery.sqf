// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

// Code

_ammoList = ["Sh_155mm_AMOS","Smoke_120mm_AMOS_White","Cluster_155mm_AMOS","AT_Mine_155mm_AMOS_range","Sh_82mm_AMOS","Flare_82mm_AMOS_White","Smoke_82mm_AMOS_White","ammo_Missile_Cruise_01","ammo_Missile_Cruise_01_Cluster","ammo_ShipCannon_120mm_HE","ammo_ShipCannon_120mm_smoke","ammo_ShipCannon_120mm_mine","ammo_ShipCannon_120mm_HE_cluster","ammo_ShipCannon_120mm_AT_mine","R_230mm_HE","R_230mm_Cluster"]; //Kind of ammo that can be used
_spread = 50; //Spread in Meters
_rounds = 3; //Number of Rounds each Fire Mission
_delay = [1, 2, 4]; //Delay between Rounds in Fire Mission
_safezone = 0; //Safezone radius - minimal distance from the target position where shells may be directed at (unused)
_alt = 250; //Altitude where the shell will be created
_name = "Random Aritllery" //Name Chosen by Zeus

_logicCenter = createCenter sideLogic;
_logicGroup = createGroup _logicCenter;
_LogicObject= _logicGroup createUnit ["Logic", _position, [], 0, "NONE"];

_ammo = "Sh_82mm_AMOS";

[_LogicObject, _ammo, _spread, _rounds, _delay, {false}, _safezone, _alt]spawn {
	while {alive _LogicObject} do {
		[_LogicObject, _ammo, _spread, _rounds, _delay, {false}, _safezone, _alt] spawn BIS_fnc_fireSupportVirtual;
		sleep (random 5);
	};
};

[_logic, _name] call zen_position_logics_fnc_add;

/*
155 mm HE Shells = "Sh_155mm_AMOS",
120 mm Smoke (White) = "Smoke_120mm_AMOS_White",
Cluster Shells = "Cluster_155mm_AMOS",
AT Mine Cluster = "AT_Mine_155mm_AMOS_range",
HE Mortar Shells = "Sh_82mm_AMOS",
82 mm Flare (White) = "Flare_82mm_AMOS_White",
82 mm Smoke (White) = "Smoke_82mm_AMOS_White",
Cruise Missile HE = "ammo_Missile_Cruise_01",
Cruise Missile Cluster = "ammo_Missile_Cruise_01_Cluster",
120 mm Ship HE Shells = "ammo_ShipCannon_120mm_HE",
120 mm Ship Smoke (White) = "ammo_ShipCannon_120mm_smoke",
120 mm Ship Mine Cluster = "ammo_ShipCannon_120mm_mine",
120 mm Ship Cluster Shells = "ammo_ShipCannon_120mm_HE_cluster",
120 mm Ship AT Mine Cluster = "ammo_ShipCannon_120mm_AT_mine",
230 mm Rocket = "R_230mm_HE",
230 mm Cluster Rocket = "R_230mm_Cluster"

There needs to be a loop, otherwise there will only be as many shots as designated with _rounds.
Currently the Fire Support is not bound to the logic. It will spawn at it but not move with it.
Probably best idea is to have a loop that checks the position every time and create a new Virtual Support.

Create a "Vehicle" like this:
class Module_F;

class STAF_Module_Base: Module_F {
	author = "Moony"";
	category = "NO_CATEGORY";
	function = "";
	scope = 1;
	scopeCurator = 2;
	class EventHandlers {
		class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
	};
};

class STAF_Module_Random_Artillery: STAF_Module_Base {
	curatorCanAttach = 1;
	category = "Ordnance";
	displayName = "Random Artillery";
	//function = QFUNC(moduleCreateTarget);
	icon = ;
	portrait = ;
};

This way I can use this as the logic and choose a picture and create my own List.


[_ctrlList, "STAF_Module_Random_Artillery", 0, false] call zen_position_logics_fnc_initList
*/