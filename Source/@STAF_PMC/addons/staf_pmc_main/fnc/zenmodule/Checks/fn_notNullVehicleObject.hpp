_notNullVehicleObject = if (isNull _objectUnderCursor) exitWith {
				[objNull, "PLACE ON AN VEHCILE/Object"] call BIS_fnc_showCuratorFeedbackMessage;
			};