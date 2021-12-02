// Get all the passed parameters
params [
	"_position",
	"_objectUnderCursor"
];

#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnObjectUnit.hpp"
#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnNothing.hpp"

// Code
//Show Notification
["STAF_notification_hatesarma",[]] remoteExecCall ["bis_fnc_showNotification", allPlayers];