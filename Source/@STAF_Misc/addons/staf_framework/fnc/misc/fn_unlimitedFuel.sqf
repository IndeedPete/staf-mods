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
		_vehicle setvariable ["STAF_UnlimitedFuel", false];
		_vehicle setvariable ["STAF_UnlimitedFuelState", false];
	};
	case false: {

		[_vehicle] spawn
		{
			while {alive (_this select 0) OR ((_this select 0) getvariable ["STAF_UnlimitedFuelState", false])} do
			{
				if ((fuel (_this select 0)) < 0.8) then
				{
					(_this select 0) setFuel 1;
				};
				sleep 120;
			};
		};

		[objNull, "VEHICLE HAS UNLIMITED FUEL NOW"] call BIS_fnc_showCuratorFeedbackMessage;
		_vehicle setvariable ["STAF_UnlimitedFuel", true];
		_vehicle setvariable ["STAF_UnlimitedFuelState", true];
	};
};
