_notNullObject = if (isNull _objectUnderCursor) exitWith {
				[objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
			};