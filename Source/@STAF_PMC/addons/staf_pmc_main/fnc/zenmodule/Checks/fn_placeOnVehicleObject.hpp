_placeOnVehicleObject = if (_objectUnderCursor isKindOf "CAManBase") exitWith {
				[objNull, "PLACE ON AN VEHCILE/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
			};