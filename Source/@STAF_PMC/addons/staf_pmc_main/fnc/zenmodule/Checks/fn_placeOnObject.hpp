_placeOnObject = if (_objectUnderCursor isKindOf "CAManBase") exitWith {
				[objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
			};