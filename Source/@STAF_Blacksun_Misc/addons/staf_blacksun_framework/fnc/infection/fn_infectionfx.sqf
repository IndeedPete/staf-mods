params ["_unit"];

//coughing and screenshake maybe even a screeneffect
//Coughing and Screenshake have both a seperate Random timer that is multiplied with the infection

//Coughing
_unit call STAF_Horror_fnc_infectioncough;
