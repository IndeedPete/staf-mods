["STAF (New)", "Create Area Marker",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	//If Object is supposed to be an Object
	// Check if Module is placed on Object/Unit
	/*if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is an Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
	  [objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};*/


	//If Object is supposed to be a Unit
	// Check if Module is placed on Object/Unit
	/*if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is a Unit
	if !(_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Unit under Module is Alive
	if !(alive _objectUnderCursor) exitWith {
		[objNull, "UNIT MUST BE ALIVE"] call BIS_fnc_showCuratorFeedbackMessage;
	};*/

	[
		"Area_Marker",
		[
			//Dialog

			//Shape
			[
				["Rectangle","Ellipse"],
				["Rectangle","Ellipse"]
			],
			1
		],
		{
			// Code

		},
		{},
		[]
	] call zen_dialog_fnc_create;



}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
