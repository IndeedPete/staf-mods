/*/////////////////////////////////////////////////
Author: Crowdedlight
			   
File: fn_zeusRegister.sqf
Parameters: none
Return: none

Using the same setup method as JShock in JSHK contamination mod. 

*///////////////////////////////////////////////

//only load for zeus
if (!hasInterface) exitWith {};

//spawn script to register zen modules
private _wait = [] spawn
{
	private _moduleList = [] call {

		private _stafHorror = [
			["Toggle Blacksun Arsenal",{_this call STAF_Horror_fnc_arsenal_zeus}],
			["Cure Infected Unit",{_this call STAF_Horror_fnc_cure_zeus}],
			["Infect Unit",{_this call STAF_Horror_fnc_infect_zeus}],
			["Play Horror Sound",{_this call STAF_Horror_fnc_playsound3d_zeus}]
		];
		_stafHorror;
	};	

	//registering ZEN custom modules
	{
		private _regHorror = 
		[
			"STAF", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach _moduleList;
};