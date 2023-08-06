_notNullVehicleObject = if (isNull _objectUnderCursor) exitWith {
				[objNull, "PLACE ON AN VEHCILE/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
			};