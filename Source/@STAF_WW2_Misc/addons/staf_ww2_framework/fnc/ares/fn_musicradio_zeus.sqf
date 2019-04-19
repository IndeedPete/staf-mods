["STAF WW2", "Music Radio",
{
  // Get all the passed parameters
	params [["_position", [0,0,0], [[]], 3], ["_objectUnderCursor", objNull, [objNull]]];

	// We check if there is a object under the cursor or not,
	// If the object under cursor is null (nothing was selected), then prompt the user to select object(s) by calling Achilles_fnc_SelectUnits.
	// But if the module had been placed upon an object, then return that object surounded by brackets (add it to an array).
	private _selectedObjects = if (isNull _objectUnderCursor) then
	{
		["Objects"] call Achilles_fnc_SelectUnits;
	}
	else
	{
		[_objectUnderCursor];
	};

	// If the selection was canceled, exit the script to prevent any issues and errors.
	if (isNil "_selectedObjects") exitWith {};

	// If the selection is empty, also exit, but with a message.
	// Side note: using isEqualTo [] is faster than count _selectedObjects == 0. So always try to improve performance when ever possible.
	if (_selectedObjects isEqualTo []) exitWith
	{
		// This is only from 0.1.0 update and higher! Use old Ares_fnc_ShowZeusMessage and playSound "FD_Start_F" if below that version! Syntax is the same.
		// Show the message to the Curator.
		["No object was selected!"] call Achilles_fnc_showZeusErrorMessage;
	};
	private _dialogResult =
	[
		"Apply Inventory",
		[
			// The last number is optional! If you want the first selection you can remove the number.
				["What radio type?", ["German","Soviet","British","US","Japanese"], 0]
		]
	] call Ares_fnc_showChooseDialog;

	// If the dialog was closed.
	if (_dialogResult isEqualTo []) exitWith{};

	// Get the selected data
	_dialogResult params ["_radiotype"];

  // Call STAF Music Radio
  switch (_dialogResult select 0) do {
    case 0: {{[_x] call STAF_WW2_fnc_germanradio;} forEach _selectedObjects;};
    case 1: {{[_x] call STAF_WW2_fnc_sovietradio;} forEach _selectedObjects;};
    case 2: {{[_x] call STAF_WW2_fnc_britishradio;} forEach _selectedObjects;};
    case 3: {{[_x] call STAF_WW2_fnc_usradio;} forEach _selectedObjects;};
    case 4: {{[_x] call STAF_WW2_fnc_japradio;} forEach _selectedObjects;};
  };

}] remoteexeccall ["Ares_fnc_RegisterCustomModule", 0, true];
