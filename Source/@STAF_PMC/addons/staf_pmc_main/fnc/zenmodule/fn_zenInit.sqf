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

		private _stafEquipment = [
			["Toggle PMC Arsenal",{_this call STAF_PMC_fnc_pmcArsenalZeus}],
			["Add PMC Inventory",{_this call STAF_PMC_fnc_pmcInventory}]
		];

		_stafEquipment;
	};	

	//registering ZEN custom modules
	{
		private _regEquipment = 
		[
			"STAF Equipment", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach _moduleList;
};