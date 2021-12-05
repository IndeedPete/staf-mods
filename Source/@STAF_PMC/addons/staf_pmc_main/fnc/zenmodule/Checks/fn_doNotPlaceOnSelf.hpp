_doNotPlaceOnSelf = if (_objectUnderCursor == ace_player) exitWith {
				[objNull, "YOU CAN NOT REMOVE YOUR OWN ACTION"] call BIS_fnc_showCuratorFeedbackMessage;
			};