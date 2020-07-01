class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit; // Default edit box (i.e., text input field)
			class Combo; // Default combo box (i.e., drop-down menu)
			class Checkbox; // Default checkbox (returned value is Bool)
			class CheckboxNumber; // Default checkbox (returned value is Number)
			class ModuleDescription; // Module description
			class Units; // Selection of units on which the module is applied
		};
		// Description base classes, for more information see below
		class ModuleDescription
		{
			class AnyBrain;
			class AnyAI;
			class AnyVehicle;
			class AnyStaticObject;
		};
	};

	class STAF_Module_PMC_Arsenal_F: Module_F
	{
		category = "STAF";
		displayName = "PMC Arsenal";
		function = "STAF_PMC_fnc_pmcarsenalInit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "This Adds the PMC Arsenal to any Synced Object.";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any object to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyStaticObject", "AnyVehicle"};
			};
		};
	};

	class STAF_Module_PMC_Vehicle_Equipment_F: Module_F
	{
		category = "STAF";
		displayName = "PMC Vehicle Equipment";
		function = "STAF_PMC_fnc_pmcvehicle_equipment";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_PMC_Vehicle_Equipment_Type: Combo
  		{
				property = "STAF_Module_PMC_Vehicle_Equipment_Type_Combo";
				displayName = "What Vehicle Type?";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class car	{name = "Car"; value = 0;};
					class mrap	{name = "MRAP"; value = 1;};
					class apc {name = "APC"; value = 2}
					class truck	{name = "Truck"; value = 1;};
					class helismall	{name = "Heli (Small)"; value = 3;};
					class helibig	{name = "Heli (Big)"; value = 4;};
					class boat {name = "Boat"; value = 5;};
					class droneammo {name = "Drone (Ammo)"; value = 6;};
					class dronemedic {name = "Drone (Medical)"; value = 7;};
					class droneexplosive {name = "Drone (Explosive)"; value = 8;};
				};
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync a Vehicle to this module to add Equipment to it!";
			sync[] = {"LocationArea_F"};

			class LocationArea_F
			{
				description[] =	{"Synchronise any Vehicle to this module."};
				position = 0;
				direction = 0;
				optional = 0;
				duplicate = 0;
				synced[] = {"AnyVehicle"};
			};
		};
	};
};
