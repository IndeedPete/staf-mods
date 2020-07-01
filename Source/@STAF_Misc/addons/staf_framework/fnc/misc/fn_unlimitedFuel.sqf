params [
	["_vehicle", ObjNull, [ObjNull]],
	["_text", "Heal me", [""]],
	["_condition", "true", [""]]
];

//If Object is supposed to be an Object
// Check if Module is placed on Object/Unit
if (isNull _objectUnderCursor) exitWith {
	[objNull, "PLACE ON AN OBJECT OR VEHICLE"] call BIS_fnc_showCuratorFeedbackMessage;
};

// Check if Object under Module is an Object
if (_objectUnderCursor isKindOf "CAManBase") exitWith {
	[objNull, "PLACE ON AN OBJECT OR VEHICLE"] call BIS_fnc_showCuratorFeedbackMessage;
};

switch (_vehicle getvariable ["STAF_UnlimitedFuel", false]) do {
	case true: {
		[objNull, "VEHICLE HAS LIMITED FUEL NOW"] call BIS_fnc_showCuratorFeedbackMessage;

		_vehicle setvariable ["STAF_UnlimitedFuelState", false];
		_vehicle setvariable ["STAF_UnlimitedFuel", false];
	};

	case false: {
		[objNull, "VEHICLE HAS UNLIMITED FUEL NOW"] call BIS_fnc_showCuratorFeedbackMessage;

		[_vehicle] spawn {
			_vehicle = _this select 0;

			while {(alive _vehicle) OR ((_vehicle getvariable ["STAF_UnlimitedFuelState", false]) == false )} do {
				if (fuel _vehicle < 0.8) then {
						_vehicle setFuel 1;
				};
				sleep 120;
			};
		};

		_vehicle setvariable ["STAF_UnlimitedFuelState", true];
		_vehicle setvariable ["STAF_UnlimitedFuel", true];
	};
};
