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
	
	//---VSM---//

		class B_Soldier_F;
		class B_Soldier_03_f;
		class I_C_Soldier_base_F;
		class O_Soldier_F;
		
		class Operator_Mcam: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_Rgr: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_M81: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_Tan: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_Blk: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_mctropical: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_mcarid: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_atacsfg: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_atacsau: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_aor1: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Operator_aor2: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_Warfighter_g3_aridPH_Full_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_g3_aridPH_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_g3_ND_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_g3_MC_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_g3_MC_full_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_g3_DT_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_AOR1_g3_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_AOR2_g3_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_AOR1f_g3_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Warfighter_AOR2f_g3_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class Alpine_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Alpine_Massif_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Alpine_Massif_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Alpine_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Alpine_white_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Alpine_white_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Multicam_alpine_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		
		class AOR_2_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_Grey_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_CryeSS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_GreySS_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_Crye_Tee_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_BlkCasual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_TCasual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_BCasual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class AOR_2_SS_uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class Arid_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Multicam_Arid_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Multicam_Arid_Blue_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Multicam_Arid_Black_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Arid_Arid_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Arid_Arid_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Arid_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class DTS_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class DTS_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class DTS_Massif_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class DTS_Massif_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class DTS_BDU_Uniform: I_C_Soldier_base_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class black_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class Multicam_black_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class black_Black_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class black_black_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class black_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_AOR1_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_SS_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_SS_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_SS_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_SS_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_Tee_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_SS_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Crye_SS_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_od_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_od_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_tan_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_tan_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_BDU_OD_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_BDU_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_BDU_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_AOR1_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_CSAT_MulticamTropic_Uniform: O_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_CSAT_AOR2_Uniform: O_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_M81_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_SS_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_SS_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_SS_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_SS_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_Tee_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_SS_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Crye_SS_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Casual_uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_od_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_od_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_tan_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_tan_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_BDU_OD_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_BDU_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_BDU_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_M81_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_Multicam_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_SS_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_SS_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_SS_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_SS_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_Tee_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_SS_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Crye_SS_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_od_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_od_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_tan_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_tan_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_BDU_OD_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_BDU_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_BDU_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Multicam_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		
		class VSM_MulticamTropic_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_SS_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_SS_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_SS_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_SS_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_Tee_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_SS_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Crye_SS_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_od_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_od_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_tan_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_tan_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_BDU_OD_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_BDU_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_BDU_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_OCP_Crye_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_SS_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_SS_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_od_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_SS_od_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_SS_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_tan_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_SS_tan_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_Tee_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_SS_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_grey_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Crye_SS_grey_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Casual_uniform: B_Soldier_03_f    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_od_pants_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_od_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_od_shirt_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_tan_pants_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_tan_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_tan_shirt_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_BDU_OD_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_BDU_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_BDU_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OCP_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_OGA_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_od_pants_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_od_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_od_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_od_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_od_tan_pants_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_od_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_od_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_od_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_od_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_od_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_od_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_grey_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_grey_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_grey_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_grey_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_grey_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Crye_SS_grey_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_OD_Casual_uniform: B_Soldier_03_f    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_tan_Casual_uniform: B_Soldier_03_f    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_grey_Casual_uniform: B_Soldier_03_f    
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_ProjectHonor_Crye_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_SS_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_SS_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_od_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_SS_od_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_SS_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_tan_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_SS_tan_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_Tee_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_SS_grey_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_grey_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Crye_SS_grey_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Casual_uniform: B_Soldier_03_f    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_od_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_od_pants_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_od_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_od_shirt_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_tan_pants_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_tan_shirt_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_tan_shirt_Uniform_SS: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_BDU_OD_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_BDU_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_BDU_tan_pants_Uniform: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_ProjectHonor_Uniform_TShirt: B_Soldier_F    
		{
			scope = 1;
			scopeCurator = 1;
		};

		class VSM_Scorpion_Crye_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_SS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_SS_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_SS_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_SS_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_SS_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_Tee_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_SS_grey_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Crye_SS_grey_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Casual_uniform: B_Soldier_03_f
		{
			scope = 1;
			scopeCurator = 1;
		};

		class ABU_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_BP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_BP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_BS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_BS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class ABU_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class AOR1_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR1_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class AOR2_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AOR2_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class AORU_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class AORU_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class CADPAT_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class CADPAT_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
	
		class DualTex_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class DualTex_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class M81_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M81_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class M90_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class M90d_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class M90d_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class MARPAT_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MARPAT_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class MC_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MC_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class MCB_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class MCB_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class OGA_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class OGA_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class Project_Honor_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class Project_Honor_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class SCORPION_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SCORPION_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class SURPAT_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class SURPAT_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class TIGER_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_GP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_GP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_GS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_GS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_TP_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_TP_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_TS_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_TS_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_BDU: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_BDU_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_BDU_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_Cyre: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_Cyre_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_Cyre_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_Cyre_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_Cyre_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};  
		class TIGER_Uniform_Cyre_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

		class OGA_G_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class OGA_G_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class OGA_Uniform_Cyre_Green: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class M81_Uniform_crye_Tee: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class M81_Uniform_crye: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class M81_Uniform_crye_TP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class M81_Uniform_crye_TS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class M81_Uniform_crye_GP: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class M81_Uniform_crye_GS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_MulticamTropic_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_OGA_OD_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_od_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_od_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_od_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_od_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_tan_pants_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_tan_pants_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_tan_shirt_Uniform: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_tan_shirt_Uniform_SS: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};
		class VSM_Scorpion_Uniform_TShirt: B_Soldier_F
		{
			scope = 1;
			scopeCurator = 1;
		};

	//---End---//

	//---MGSR---//
		class C_man_1;

		class mgsr_prisoner: C_man_1
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_solid_snake_ps1: C_man_1
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_dirty: mgsr_prisoner
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_muddy: mgsr_prisoner
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_blue: mgsr_prisoner
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_blue_dirty: mgsr_prisoner_blue
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_blue_muddy: mgsr_prisoner_blue
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_olive: mgsr_prisoner
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_olive_dirty: mgsr_prisoner_olive
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_prisoner_olive_muddy: mgsr_prisoner_olive
		{
			scope = 1;
			scopeCurator = 1;
		};
		class mgsr_sneaksuit: C_man_1
		{
			scope = 1;
			scopeCurator = 1;
		};
		
	//---END---//
};
