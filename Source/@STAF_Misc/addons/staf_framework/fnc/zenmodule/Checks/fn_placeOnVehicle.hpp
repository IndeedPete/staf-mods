_placeOnVehicle = if (_objectUnderCursor isKindOf "CAManBase") exitWith {
				[objNull, "PLACE ON AN VEHCILE"] call BIS_fnc_showCuratorFeedbackMessage;
			};