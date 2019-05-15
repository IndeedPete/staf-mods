#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

class CfgVehicles {
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

	class STAF_Horror_Module_Arsenal_F: Module_F
	{
		category = "STAF_Horror";
		displayName = "Arsenal";
		function = "STAF_Horror_fnc_arsenalInit";
	  icon = "\staf_blacksun_framework\img\blacksun_logo_blk.paa";
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
			description = "This Adds the Horror Arsenal to any Synced Object.";
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

	class STAF_Horror_Module_Infection_F: Module_F
	{
		category = "STAF_Horror";
		displayName = "Infection";
		function = "STAF_Horror_fnc_infectioneh";
	  icon = "\staf_blacksun_framework\img\blacksun_logo_blk.paa";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{

      class STAF_Horror_Module_Infection_Rate: Edit
      {
        property = "STAF_Horror_Module_Infection_Rate_edit";
        displayName = "Set infection rate";
        tooltip = "Defines how fast the infection takes from infecting to death. Only values between 0 and 1 are logical."
				defaultValue = "0.01";
      };
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "This enables infection for all player!";
			sync[] = {"LocationArea_F"};
		};
	};

	class Item_Base_F;

	class STAF_Item_geiger_counter: Item_Base_F {
    scope = 2;
    scopeCurator = 2;
    displayName = "Geiger Counter";
    author = "Moony";
    vehicleClass = "Items";
    class TransportItems
    {
      MACRO_ADDITEM(STAF_geiger_counter,1);
    };
	};

  class STAF_Item_TestingKit: STAF_Item_geiger_counter {
    displayName = "Infection Testing Kit";
    class TransportItems
    {
      MACRO_ADDITEM(STAF_TestingKit,1);
    };
	};

	class STAF_Item_AntiVirus_Pills: Item_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "Antivirus Pills";
		author = "Ryan";
		vehicleClass = "Items";
		mapSize = 0.25;
		class TransportItems
		{
      MACRO_ADDITEM(STAF_Item_AntiVirus_Pills,1);
		};
	};

	class STAF_Item_AntiVirus_Injector: Item_Base_F {
		scope = 2;
		scopeCurator = 2;
		displayName = "Antivirus Injector";
		author = "Ryan";
		vehicleClass = "Items";
		mapSize = 0.25;
		class TransportItems
		{
      MACRO_ADDITEM(STAF_Item_AntiVirus_Injector,1);
		};
	};
};
