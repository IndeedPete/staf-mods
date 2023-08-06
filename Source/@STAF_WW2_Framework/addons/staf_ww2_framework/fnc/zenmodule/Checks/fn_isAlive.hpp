_isAlive = if !(alive _objectUnderCursor) exitWith {
				[objNull, "UNIT MUST BE ALIVE"] call BIS_fnc_showCuratorFeedbackMessage;
			};