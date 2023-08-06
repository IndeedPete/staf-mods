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

		private _stafww2 = [
			["Toggle US Arsenal",{_this call STAF_WW2_fnc_ww2usArsenalZeus}],
			["Toggle UK Arsenal",{_this call STAF_WW2_fnc_ww2ukArsenalZeus}],
			["Toggle Soviet Arsenal",{_this call STAF_WW2_fnc_ww2sovArsenalZeus}],
			["Toggle German Arsenal",{_this call STAF_WW2_fnc_ww2gerArsenalZeus}],
			["Toggle Japanese Arsenal",{_this call STAF_WW2_fnc_ww2japArsenalZeus}],
			["Add Radio",{_this call STAF_WW2_fnc_musicradio_zeus}]
		];

		_stafww2;
	};	

	//registering ZEN custom modules
	{
		private _regww2 = 
		[
			"STAF WW2", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach _moduleList;
};