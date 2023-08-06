_notNullUnit = if (isNull _objectUnderCursor) exitWith {
				[objNull, "PLACE ON AN Unit"] call BIS_fnc_showCuratorFeedbackMessage;
			};