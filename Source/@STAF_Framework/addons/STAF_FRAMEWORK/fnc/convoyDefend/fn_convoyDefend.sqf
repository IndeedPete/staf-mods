// convoyDefend_init.sqf
// © APRIL 2013 - norrin
private ["_vcl","_markerArray","_convoyArray","_restartConvoy"]; 
if !(isnil ("NORRN_convoyDefend_init")) exitWith {};
NORRN_convoyDefend_init = true;
// define fncs
Norrn_convoyGetIn 	 	= compileFinal PreprocessFile "\STAF_FRAMEWORK\fnc\convoyDefend\getIn.sqf";
Norrn_convoyMaxSpeed 	= compileFinal PreprocessFile "\STAF_FRAMEWORK\fnc\convoyDefend\convoyMaxSpeed.sqf";
Norrn_convoyAmbush		= compileFinal PreprocessFile "\STAF_FRAMEWORK\fnc\convoyDefend\convoyAmbush.sqf";
Norrn_convoyMove		= compileFinal PreprocessFile "\STAF_FRAMEWORK\fnc\convoyDefend\convoyMove.sqf";
Norrn_convoyRestart		= compileFinal PreprocessFile "\STAF_FRAMEWORK\fnc\convoyDefend\convoyRestart.sqf";
// Passed vars
_markerArray 		 	= _this select 0;
_convoyArray 		 	= _this select 1;
_restartConvoy			= _this select 2;
// Start the convoy moving
[_markerArray,_convoyArray,_restartConvoy] spawn Norrn_convoyMove;