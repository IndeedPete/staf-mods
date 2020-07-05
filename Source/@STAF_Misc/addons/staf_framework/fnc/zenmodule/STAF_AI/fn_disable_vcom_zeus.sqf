if (!isServer) exitWith {};

["STAF AI", "Toggle VCOM on Group",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// If Object is supposed to be a Unit
	// Check if Module is placed on Object/Unit
	/*if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is a Unit
	if !(_objectUnderCursor isKindOf "CAManBase") exitWith {
		[objNull, "PLACE ON A UNIT"] call BIS_fnc_showCuratorFeedbackMessage;
	};*/

	// Check if Unit under Module is Alive
	if !(alive _objectUnderCursor) exitWith {
		[objNull, "UNIT MUST BE ALIVE"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Toggle Vcom

switch (_objectUnderCursor isKindOf "Man") do {
	case true:
		{
			switch (_objectUnderCursor getVariable ["Vcm_Disable",false]) do {
		    case true:
					{
						{
							_x setVariable ["Vcm_Disable", false, true]
						}	forEach units group _objectUnderCursor;
						[objNull, "VCOM ENABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
		    case false:
					{
						{
							_x setVariable ["Vcm_Disable", true, true]
						}	forEach units group _objectUnderCursor;
						[objNull, "VCOM DISABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
			};
		};
	case false:
		{
			_fullcrew = ((fullcrew _objectUnderCursor select 0) select 0);
			switch (_fullcrew getVariable ["Vcm_Disable",false]) do {
				case true:
					{
						{
							_x setVariable ["Vcm_Disable", false, true]
						}	forEach units group _fullcrew;
						[objNull, "VCOM ENABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
				case false:
					{
						{
							_x setVariable ["Vcm_Disable", true, true]
						}	forEach units group _fullcrew;
						[objNull, "VCOM DISABLED ON UNIT/GROUP"] call BIS_fnc_showCuratorFeedbackMessage;
					};
			};
		};
};
}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
