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
			["Toggle PMC Arsenal (Covert/Takistan)",{_this call STAF_PMC_fnc_pmcArsenalZeus_takistan}],
			["Randomize PMC Unit",{_this call STAF_PMC_fnc_pmcRandomizeEquipment}],
			["Add PMC Inventory",{_this call STAF_PMC_fnc_pmcInventories}]
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