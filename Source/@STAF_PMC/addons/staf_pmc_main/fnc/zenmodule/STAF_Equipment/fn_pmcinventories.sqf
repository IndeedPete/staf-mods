if (!isServer) exitWith {};

["STAF Equipment", "PMC Inventory",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	//If Object is supposed to be an Object
	// Check if Module is placed on Object/Unit
	if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is an Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
	  [objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Dialog
	[
	  "Apply Inventory",
	  [
	    [
	      "COMBO",
				[
					"Loadout",
					"Adds a predifined loadout to the vehicle"
				],
	      [
	        ["_car","_MRAP","_apc","_truck","_smallHeli","_bigHeli","_boat","_ammoDrone","_medicalDrone","_expDrone"],
	        ["Car","MRAP","APC","Truck","Heli (Small)","Heli (Big)","Boat","Drone (Ammo)","Drone (Medical)","Drone (Explosives)"],
	        0
	      ]
	    ]
	  ],
	  {
			params ["_dialogValues", "_objectUnderCursor"];
    	_dialogValues params ["_inventoryType"];

			_switch = switch _inventoryType do {
				case "_car": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_carequipment};
				case "_MRAP": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_mrapequipment};
				case "_apc": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_apcequipment};
				case "_truck": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_mrapequipment};
				case "_smallHeli": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_helismallequipment};
				case "_bigHeli": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_helibigequipment};
				case "_boat": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_boatequipment};
				case "_ammoDrone": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_droneammoequipment};
				case "_medicalDrone": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_dronemedicequipment};
				case "_expDrone": {[_objectUnderCursor] call STAF_PMC_fnc_pmcvehicle_droneexplosionequipment};
			};
		},
	  {},
		_objectUnderCursor
	] call zen_dialog_fnc_create;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
