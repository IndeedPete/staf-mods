private ["_logicCentre", "_logicGroup"];
_logicCentre = createCenter sideLogic;
_logicGroup = createGroup _logicCentre;

(_logicGroup createUnit ["logic", [0,0,0], [], 0, "NONE"])