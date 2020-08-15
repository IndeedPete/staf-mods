if (!isServer) exitWith {};

["STAF", "Destroy without Explosion",
{
	// Get all the passed parameters
	params [
		"_position",
		"_objectUnderCursor"
	];

	// If Object is supposed to be an Object
	// Check if Module is placed on Object/Unit
	if (isNull _objectUnderCursor) exitWith {
		[objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Check if Object under Module is an Object
	if (_objectUnderCursor isKindOf "CAManBase") exitWith {
	  [objNull, "PLACE ON AN OBJECT"] call BIS_fnc_showCuratorFeedbackMessage;
	};

	// Code
	// Destory Vehicle without an explosion and cookoff!
	_objectUnderCursor setVariable ["ace_cookoff_enable", false, true];
	_objectUnderCursor setVariable ["ace_cookoff_enableAmmoCookoff", false, true];
	_objectUnderCursor setDamage [1, false];
	[objNull, "OBJECT IS DESTROYED WITHOUT AN EXPLOSION"] call BIS_fnc_showCuratorFeedbackMessage;

}] remoteexeccall ["zen_custom_modules_fnc_register", 0, true];
