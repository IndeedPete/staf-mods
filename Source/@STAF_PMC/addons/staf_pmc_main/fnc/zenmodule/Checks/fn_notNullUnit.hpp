_notNullUnit = if (isNull _objectUnderCursor) exitWith {
				[objNull, "PLACE ON AN UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
			};