_doNotPlaceOnObjectUnit = if (_objectUnderCursor isKindOf "CAManBase") exitWith {
				[objNull, "DON'T PLACE ON UNIT/OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
			};