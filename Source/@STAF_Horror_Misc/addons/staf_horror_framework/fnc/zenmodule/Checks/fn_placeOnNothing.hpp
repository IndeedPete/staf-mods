_placeOnNothing = if !(isNull _objectUnderCursor) exitWith {
				[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
			};