_placeOnUnit = if !(_objectUnderCursor isKindOf "CAManBase") exitWith {
				[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
			};