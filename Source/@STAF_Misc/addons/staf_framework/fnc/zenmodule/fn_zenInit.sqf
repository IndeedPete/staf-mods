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

		private _stafMain = [
			["Toggle Carryable (ACE)",{_this call STAF_fnc_aceCarryable}],
			["Toggle Dragable (ACE)",{_this call STAF_fnc_aceDragable}],
			["Toggle Zeus Action",{_this call STAF_fnc_addZeusAction}],
			["Destroy without Explosion",{_this call STAF_fnc_destroyWithoutExplosion}],
			["Remove Crater",{_this call STAF_fnc_removeCrater}],
			["Set Respawn Timer",{_this call STAF_fnc_respawnTimer}],
			//["Toggle Sabotage Action",{_this call STAF_fnc_sabotage}],
			["Unlimited Ammo",{_this call STAF_fnc_unlimitedAmmoZeus}],
			["Unlimited Fuel",{_this call STAF_fnc_unlimitedFuelZeus}]
		];

		private _stafAI = [
			["Make Unit Kill Itself",{_this call STAF_fnc_aiSuicide}],
			["Toggle VCOM on Group",{_this call STAF_fnc_disableVcom}],
			//["Toggle Group Behaviour",{_this call STAF_fnc_groupCombatBehaviour}],
			["Toggle AI Stationary",{_this call STAF_fnc_stationaryAI}],
			["Toggle Group Stationary",{_this call STAF_fnc_stationaryGroup}]
		];

		private _stafEnvironment = [
			["Sandstorm Start",{_this call STAF_fnc_sandstormEnable}],
			["Sandstorm End",{_this call STAF_fnc_sandstormDisable}]
		];

		private _stafEquipment = [
			["Clear Inventory",{_this call STAF_fnc_clearInventory}],
			["Add ACE Fortify Budget",{_this call STAF_fnc_fortifyBudget}],
			["Toggle ACE Fortify",{_this call STAF_fnc_fortifyToggle}]
		];

		private _stafFun = [
			["War Crimes",{_this call STAF_fnc_warcrimesNotification}],
			["Zeus Hates Arma",{_this call STAF_fnc_zeusHatesArma}],
			["Zeus Hates Playerbase",{_this call STAF_fnc_zeusHatesPlayerbase}]
		];

		private _stafMedical = [
			["Base Medic",{_this call STAF_fnc_baseMedicZeus}]
		];

		_combinedArr = [_stafMain, _stafAI, _stafEnvironment, _stafEquipment, _stafFun, _stafMedical];
		_combinedArr;
	};	

	//registering ZEN custom modules
	{
		private _regMain = 
		[
			"STAF", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach (_moduleList select 0);

	{
		private _regAI = 
		[
			"STAF AI", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach (_moduleList select 1);

	{
		private _regEnvironment = 
		[
			"STAF Environment", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach (_moduleList select 2);

	{
		private _regEquipment = 
		[
			"STAF Equipment", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach (_moduleList select 3);

	{
		private _regFun = 
		[
			"STAF Fun", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach (_moduleList select 4);

	{
		private _regMedical = 
		[
			"STAF Medical", 
			(_x select 0), 
			(_x select 1),
			(_x select 2)
		] call zen_custom_modules_fnc_register;
	} forEach (_moduleList select 5);
};