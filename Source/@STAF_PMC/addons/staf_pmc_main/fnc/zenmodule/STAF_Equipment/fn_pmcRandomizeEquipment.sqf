// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_pmc_main\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
#include "\staf_pmc_main\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"

// Dialog
[
	"Apply Inventory",
	[
	[
		"COMBO",
			[
				"Loadout Class",
				"Randomize the Loadout Class"
			],
		[
		["_contractor","_at","_aa","_mg","_medic","_engineer","_marksman","_crew","_diver","_heli_pilot","_bodyguard"],
		["Contractor","Contractor AT","Contractor AA","Contractor MG","Field Medic","Engineer","Marksman","Vehicle Crew","Diver","Helicopter Pilot","Bodyguard"],
		0
		]
	]
	],
	{
		params ["_dialogValues", "_objectUnderCursor"];
		_dialogValues params ["_inventoryType"];

		_switch = switch _inventoryType do {
			case "_contractor": {_unit call STAF_PMC_fnc_gear_contractor};
			case "_at": {_unit call STAF_PMC_fnc_gear_contractor_at};
			case "_aa": {_unit call STAF_PMC_fnc_gear_contractor_aa};
			case "_mg": {_unit call STAF_PMC_fnc_gear_contractor_mg};
			case "_medic": {_unit call STAF_PMC_fnc_gear_contractor_medic};
			case "_engineer": {_unit call STAF_PMC_fnc_gear_contractor_engineer};
			case "_bodyguard": {_unit call STAF_PMC_fnc_gear_contractor_bodyguard};
			case "_heli_pilot": {_unit call STAF_PMC_fnc_gear_contractor_heli_pilot};
			case "_marksman": {_unit call STAF_PMC_fnc_gear_contractor_marksman};
			case "_diver": {_unit call STAF_PMC_fnc_gear_contractor_diver};
			case "_crew": {_unit call STAF_PMC_fnc_gear_contractor_crew};
		};
	},
	{},
	_objectUnderCursor
] call zen_dialog_fnc_create;
