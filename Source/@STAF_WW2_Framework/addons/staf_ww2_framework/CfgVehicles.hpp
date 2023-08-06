#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define back_xx(a,b) class _xx_##a {backpack = a; count = b;}

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
	class LIB_BasicAmmunitionBox_US;

	class STAF_Module_WW2_GerArsenal_F: Module_F
	{
		category = "STAF";
		displayName = "(WW2) German Arsenal";
		function = "STAF_WW2_fnc_ww2gerArsenalInit";
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
			description = "This adds the German WW2 Arsenal to any Synced Object.";
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

	class STAF_Module_WW2_JapArsenal_F: Module_F
	{
		category = "STAF";
		displayName = "(WW2) Japanese Arsenal";
		function = "STAF_WW2_fnc_ww2japArsenalInit";
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
			description = "This adds the Japanese WW2 Arsenal to any Synced Object.";
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

	class STAF_Module_WW2_SovArsenal_F: Module_F
	{
		category = "STAF";
		displayName = "(WW2) Soviet Arsenal";
		function = "STAF_WW2_fnc_ww2sovArsenalInit";
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
			description = "This adds the Soviet WW2 Arsenal to any Synced Object.";
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

	class STAF_Module_WW2_USArsenal_F: Module_F
	{
		category = "STAF";
		displayName = "(WW2) US Arsenal";
		function = "STAF_WW2_fnc_ww2usArsenalInit";
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
			description = "This adds the US WW2 Arsenal to any Synced Object.";
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

	class STAF_Module_WW2_UKArsenal_F: Module_F
	{
		category = "STAF";
		displayName = "(WW2) UK Arsenal";
		function = "STAF_WW2_fnc_ww2ukArsenalInit";
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
			description = "This adds the UK WW2 Arsenal to any Synced Object.";
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

	class STAF_Module_WW2_Music_Radio_F: Module_F
	{
		category = "STAF_WW2";
		displayName = "Music Radio";
		function = "STAF_WW2_fnc_radioinit";
		functionPriority = 10;
		isDisposable = 0;
		is3DEN = 0;
		isGlobal = 0;
		isTriggerActivated = 0;
		scope = 2;

		class Attributes: AttributesBase
		{
			class STAF_Module_WW2_Music_Radio_Type: Combo
  			{
				property = "STAF_Module_WW2_Music_Radio_Type_Combo";
				displayName = "What Radio Type?";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class german	{name = "German"; value = 0;};
					class soviet	{name = "Soviet"; value = 1;};
					class british	{name = "UK"; value = 2;};
					class us	{name = "US"; value = 3;};
					class japan	{name = "Japanese"; value = 4;};
					class french	{name = "French"; value = 5;};
				};
			};
			class STAF_Module_WW2_Music_Radio_StartOn: Combo
  			{
				property = "STAF_Module_WW2_Music_Radio_StartOn_Combo";
				displayName = "Should the Radio start turned on?";
				typeName = "NUMBER";
				defaultValue = "0";
				class Values
				{
					class answer_no	{name = "No"; value = 0;};
					class answer_yes	{name = "Yes";	value = 1;};
				};
			};
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription
		{
			description = "Sync a Vehicle to this module to create a Radio loop to it!";
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

	class STAF_Bagpipe_crate : LIB_BasicAmmunitionBox_US
	{
		displayName = "Bagpipe Create";

		class TransportWeapons {weap_xx(LIB_Bagpipes,10);};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
};
