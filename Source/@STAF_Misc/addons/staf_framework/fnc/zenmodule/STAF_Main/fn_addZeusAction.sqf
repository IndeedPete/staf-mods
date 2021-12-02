	params [
		"_position",
		"_objectUnderCursor"
	];

	#include "\staf_framework\fnc\zenmodule\Checks\fn_notNullUnit.hpp"
	#include "\staf_framework\fnc\zenmodule\Checks\fn_placeOnUnit.hpp"
	#include "\staf_framework\fnc\zenmodule\Checks\fn_doNotPlaceOnSelf.hpp"
	#include "\staf_framework\fnc\zenmodule\Checks\fn_isAlive.hpp"
	
	_ZeusAction = _objectUnderCursor getVariable ["STAF_var_ZeusAction", false];
	_ZeusActionEligible = _objectUnderCursor getVariable ["STAF_var_ZeusActionEligible", false];

	if (_ZeusActionEligible) then {
		_objectUnderCursor setVariable ["STAF_var_ZeusActionEligible", false, true];
		_objectUnderCursor setVariable ["STAF_var_ZeusAction", nil, true];
		[_objectUnderCursor] remoteexec ["STAF_fnc_zeusactiondemotion_exec", 2];    
		[objNull, "UNIT NOW LOST THE ZEUS ACTION"] call BIS_fnc_showCuratorFeedbackMessage;
	} else {
		_objectUnderCursor setVariable ["STAF_var_ZeusActionEligible", true, true];
		_objectUnderCursor setVariable ["STAF_var_ZeusAction", false, true];
		[objNull, "UNIT NOW HAS THE ZEUS ACTION"] call BIS_fnc_showCuratorFeedbackMessage;
	};
