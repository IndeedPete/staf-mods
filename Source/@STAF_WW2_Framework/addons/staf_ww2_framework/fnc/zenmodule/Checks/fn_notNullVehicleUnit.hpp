_notNullVehicleUnit = if (isNull _objectUnderCursor) exitWith {
				[objNull, "PLACE ON AN VEHCILE/UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
			};