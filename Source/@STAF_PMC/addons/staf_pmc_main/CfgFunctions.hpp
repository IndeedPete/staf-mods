class CfgFunctions
{
	class STAF_PMC
	{
		class Arsenal
		{
			file = "\staf_pmc_main\fnc\arsenal";
			class pmcarsenalInit{};
			class pmcarsenal{};
		};
		class Loadout
		{
			file = "\staf_pmc_main\fnc\loadout";
			class gear_contractor{};
			class gear_contractor_at{};
			class gear_contractor_aa{};
			class gear_contractor_bodyguard{};
			class gear_contractor_engineer{};
			class gear_contractor_heli_pilot{};
			class gear_contractor_marksman{};
			class gear_contractor_medic{};
			class gear_contractor_mg{};
			class gear_contractor_crew{};
			class gear_contractor_diver{};
			class pmcvehicle_apcequipment{};
			class pmcvehicle_attackhelisequipment{};
			class pmcvehicle_boatequipment{};
			class pmcvehicle_carequipment{};
			class pmcvehicle_droneammoequipment{};
			class pmcvehicle_droneexplosionequipment{};
			class pmcvehicle_dronemedicequipment{};
			class pmcvehicle_helibigequipment{};
			class pmcvehicle_helismallequipment{};
			class pmcvehicle_mrapequipment{};
			class pmcvehicle_equipment{};
		};
		class Zenmodule_STAF
		{
			file = "\staf_pmc_main\fnc\zenmodule";

			class zenInit{postinit = 1;};
		};
		class Zenmodule_STAF_Equipment
		{
			file = "\staf_pmc_main\fnc\zenmodule\STAF_Equipment";
			class pmcArsenalZeus{};
			class pmcInventories{};
		};
	};
};
