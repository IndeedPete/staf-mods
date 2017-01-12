#include "\z\ace\addons\medical\script_component.hpp"

params [
	["_injured", player, [ObjNull]]
];

_injured setVariable [QGVAR(pain), 0, true];
_injured setVariable [QGVAR(morphine), 0, true];
_injured setVariable [QGVAR(bloodVolume), 100, true];
_injured setVariable ["ACE_isUnconscious", false, true];
_injured setVariable [QGVAR(tourniquets), [0,0,0,0,0,0], true];
_injured setVariable [QGVAR(openWounds), [], true];
_injured setVariable [QGVAR(bandagedWounds), [], true];
_injured setVariable [QGVAR(internalWounds), [], true];
_injured setVariable [QGVAR(lastUniqueWoundID), 1, true];
_injured setVariable [QGVAR(heartRate), 80];
_injured setVariable [QGVAR(heartRateAdjustments), []];
_injured setVariable [QGVAR(bloodPressure), [80, 120]];
_injured setVariable [QGVAR(peripheralResistance), 100];
_injured setVariable [QGVAR(fractures), [], true];
_injured setVariable [QGVAR(triageLevel), 0, true];
_injured setVariable [QGVAR(triageCard), [], true];
_injured setVariable [QGVAR(salineIVVolume), 0, true];
_injured setVariable [QGVAR(plasmaIVVolume), 0, true];
_injured setVariable [QGVAR(bloodIVVolume), 0, true];
_injured setVariable [QGVAR(bodyPartStatus), [0,0,0,0,0,0], true];
_injured setVariable [QGVAR(airwayStatus), 100];
_injured setVariable [QGVAR(airwayOccluded), false];
_injured setVariable [QGVAR(airwayCollapsed), false];
_injured setVariable [QGVAR(addedToUnitLoop), false, true];
_injured setVariable [QGVAR(inCardiacArrest), false, true];
_injured setVariable [QGVAR(hasLostBlood), 0, true];
_injured setVariable [QGVAR(isBleeding), false, true];
_injured setVariable [QGVAR(hasPain), false, true];
_injured setVariable [QGVAR(amountOfReviveLives), GVAR(amountOfReviveLives), true];
_injured setVariable [QGVAR(painSuppress), 0, true];
_injured setDamage 0;