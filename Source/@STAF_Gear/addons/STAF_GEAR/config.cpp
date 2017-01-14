class CfgPatches
{
	#include "patches.hpp"
};

class CfgVehicles
{
	// Cars (Altis)
	class B_MRAP_01_F;

	class STAF_B_MRAP_01_Sand_F: B_MRAP_01_F
	{
		displayName = "Hunter (Sand)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\mrap_01_base_sand_co.paa","\STAF_GEAR\txt\mrap_01_adds_sand_co.paa",""};
	};

	// Backpacks
	class IP_B_Kitbag_blk;
	class B_Kitbag_cbr;
	class B_Kitbag_rgr;
	class B_Carryall_khk;

	class STAF_B_Carryall_MCAM_Black: B_Carryall_khk
	{
		baseBackpack = "STAF_B_Carryall_MCAM_Black";
		displayName = "STAF Carryall Backpack (MCAM Black)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\backpack_tortila_MCAM_Black_co.paa"};
		picture = "\STAF_GEAR\img\icon_b_c_tortila_MCAM_Black.paa";
	};

	class STAF_B_Kitbag_blk: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_blk";
		displayName = "Kitbag (Black, EF)";
		hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_blk_co.paa"};
	};

	class STAF_B_Kitbag_medic_blk: STAF_B_Kitbag_blk
	{
		baseBackpack = "STAF_B_Kitbag_medic_blk";
		displayName = "STAF Medic Kitbag (Black)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\backpack_fast_medic_blk_co.paa"};
		scope = 2;

		class TransportItems
		{
			class _xx_ACE_adenosine
			{
				name = "Adenosine";
				count = 3;
			};
			class _xx_ACE_epinephrine
			{
				name = "Epinephrine";
				count = 7;
			};
			class _xx_ACE_morphine
			{
				name = "Morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "Elastic Bandage";
				count = 30;
			};
			class _xx_ACE_packingBandage
			{
				name = "Packing Bandage";
				count = 30;
			};
			class _xx_ACE_salineIV
			{
				name = "SalineIV (1l)";
				count = 4;
			};
			class _xx_ACE_salineIV_500
			{
				name = "SalineIV (500ml)";
				count = 8;
			};
			class _xx_ACE_salineIV_250
			{
				name = "SalineIV (250ml)";
				count = 12;
			};
			class _xx_ACE_tourniquet
			{
				name = "Tourniquet";
				count = 5;
			};
			class _xx_ACE_surgicalKit
			{
				name = "Surgical Kit";
				count = 1;
			};
			class _xx_ACE_personalAidKit
			{
				name = "Personal Aid Kit";
				count = 5;
			};
			class _xx_ACE_EarPlugs
			{
				name = "Ear Plugs";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "Body Bag";
				count = 2;
			};
		};
	};

	class STAF_B_Kitbag_medic_cbr: B_Kitbag_cbr
	{
		baseBackpack = "STAF_B_Kitbag_medic_cbr";
		displayName = "STAF Medic Kitbag (Coyote)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\backpack_fast_medic_cbr_co.paa"};

		class TransportItems
		{
			class _xx_ACE_adenosine
			{
				name = "Adenosine";
				count = 3;
			};
			class _xx_ACE_epinephrine
			{
				name = "Epinephrine";
				count = 7;
			};
			class _xx_ACE_morphine
			{
				name = "Morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "Elastic Bandage";
				count = 30;
			};
			class _xx_ACE_packingBandage
			{
				name = "Packing Bandage";
				count = 30;
			};
			class _xx_ACE_salineIV
			{
				name = "SalineIV (1l)";
				count = 4;
			};
			class _xx_ACE_salineIV_500
			{
				name = "SalineIV (500ml)";
				count = 8;
			};
			class _xx_ACE_salineIV_250
			{
				name = "SalineIV (250ml)";
				count = 12;
			};
			class _xx_ACE_tourniquet
			{
				name = "Tourniquet";
				count = 5;
			};
			class _xx_ACE_surgicalKit
			{
				name = "Surgical Kit";
				count = 1;
			};
			class _xx_ACE_personalAidKit
			{
				name = "Personal Aid Kit";
				count = 5;
			};
			class _xx_ACE_EarPlugs
			{
				name = "Ear Plugs";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "Body Bag";
				count = 2;
			};
		};
	};

	class STAF_B_Kitbag_medic_rgr: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_medic_rgr";
		displayName = "STAF Medic Kitbag (Green)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\backpack_fast_medic_rgr_co.paa"};

		class TransportItems
		{
			class _xx_ACE_adenosine
			{
				name = "Adenosine";
				count = 3;
			};
			class _xx_ACE_epinephrine
			{
				name = "Epinephrine";
				count = 7;
			};
			class _xx_ACE_morphine
			{
				name = "Morphine";
				count = 10;
			};
			class _xx_ACE_elasticBandage
			{
				name = "Elastic Bandage";
				count = 30;
			};
			class _xx_ACE_packingBandage
			{
				name = "Packing Bandage";
				count = 30;
			};
			class _xx_ACE_salineIV
			{
				name = "SalineIV (1l)";
				count = 4;
			};
			class _xx_ACE_salineIV_500
			{
				name = "SalineIV (500ml)";
				count = 8;
			};
			class _xx_ACE_salineIV_250
			{
				name = "SalineIV (250ml)";
				count = 12;
			};
			class _xx_ACE_tourniquet
			{
				name = "Tourniquet";
				count = 5;
			};
			class _xx_ACE_surgicalKit
			{
				name = "Surgical Kit";
				count = 1;
			};
			class _xx_ACE_personalAidKit
			{
				name = "Personal Aid Kit";
				count = 5;
			};
			class _xx_ACE_EarPlugs
			{
				name = "Ear Plugs";
				count = 5;
			};
			class _xx_ACE_bodyBag
			{
				name = "Body Bag";
				count = 2;
			};
		};
	};

	class STAF_B_Kitbag_exp_blk: STAF_B_Kitbag_blk
	{
		baseBackpack = "STAF_B_Kitbag_exp_blk";
		displayName = "STAF Explosives Kitbag (Black)";
		scope = 2;

		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				name = "Satchel Charge";
				count = 3;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name = "Demolition Charge";
				count = 1;
			};
		};

		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "Firering Device";
				count = 1;
			};
			class _xx_ACE_DefusalKit
			{
				name = "Defusal Kit";
				count = 1;
			};
		};
	};

	class STAF_B_Kitbag_exp_cbr: B_Kitbag_cbr
	{
		baseBackpack = "STAF_B_Kitbag_exp_cbr";
		displayName = "STAF Explosives Kitbag (Coyote)";

		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				name = "Satchel Charge";
				count = 3;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name = "Demolition Charge";
				count = 1;
			};
		};

		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "Firering Device";
				count = 1;
			};
			class _xx_ACE_DefusalKit
			{
				name = "Defusal Kit";
				count = 1;
			};
		};
	};

	class STAF_B_Kitbag_exp_rgr: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_exp_rgr";
		displayName = "STAF Explosives Kitbag (Green)";

		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				name = "Satchel Charge";
				count = 3;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name = "Demolition Charge";
				count = 1;
			};
		};

		class TransportItems
		{
			class _xx_ACE_Clacker
			{
				name = "Firering Device";
				count = 1;
			};
			class _xx_ACE_DefusalKit
			{
				name = "Defusal Kit";
				count = 1;
			};
		};
	};

	class STAF_B_Kitbag_engineer_blk: STAF_B_Kitbag_blk
	{
		baseBackpack = "STAF_B_Kitbag_engineer_blk";
		displayName = "STAF Engineer Kitbag (Black)";
		scope = 2;

		class TransportItems
		{
			class _xx_ACE_wirecutter
			{
				name = "Wirecutter";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "Tool Kit";
				count = 1;
			};
			class _xx_ACE_Clacker
			{
				name = "Firing Device";
				count = 1;
			};
			class _xx_ACE_Flashlight_XL50
			{
				name = "Flashlight XL50";
				count = 3;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "Entrenching Tool";
				count = 1;
			};
			class _xx_ACE_DefusalKit
			{
				name = "Defusal Kit";
				count = 1;
			};
		};
	};

	class STAF_B_Kitbag_engineer_cbr: B_Kitbag_cbr
	{
		baseBackpack = "STAF_B_Kitbag_engineer_cbr";
		displayName = "STAF Engineer Kitbag (Coyote)";

		class TransportItems
		{
			class _xx_ACE_wirecutter
			{
				name = "Wirecutter";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "Tool Kit";
				count = 1;
			};
			class _xx_ACE_Clacker
			{
				name = "Firing Device";
				count = 1;
			};
			class _xx_ACE_Flashlight_XL50
			{
				name = "Flashlight XL50";
				count = 3;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "Entrenching Tool";
				count = 1;
			};
			class _xx_ACE_DefusalKit
			{
				name = "Defusal Kit";
				count = 1;
			};
		};
	};

	class STAF_B_Kitbag_engineer_rgr: B_Kitbag_rgr
	{
		baseBackpack = "STAF_B_Kitbag_engineer_rgr";
		displayName = "STAF Engineer Kitbag (Green)";

		class TransportItems
		{
			class _xx_ACE_wirecutter
			{
				name = "Wirecutter";
				count = 1;
			};
			class _xx_ToolKit
			{
				name = "Tool Kit";
				count = 1;
			};
			class _xx_ACE_Clacker
			{
				name = "Firing Device";
				count = 1;
			};
			class _xx_ACE_Flashlight_XL50
			{
				name = "Flashlight XL50";
				count = 3;
			};
			class _xx_ACE_EntrenchingTool
			{
				name = "Entrenching Tool";
				count = 1;
			};
			class _xx_ACE_DefusalKit
			{
				name = "Defusal Kit";
				count = 1;
			};
		};
	};

	// Uniform Dummies
	class B_Soldier_F;

	class STAF_Dummy_Norwegian_Desert: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_norwegian_desert_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Norwegian_Desert";
	};

	class STAF_Dummy_Norwegian_Desert_Vest: STAF_Dummy_Norwegian_Desert
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_Norwegian_Desert_vest";
	};

	class STAF_Dummy_Norwegian_woodland: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_norwegian_woodland_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Norwegian_woodland";
	};

	class STAF_Dummy_Norwegian_woodland_Vest: STAF_Dummy_Norwegian_woodland
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_Norwegian_woodland_vest";
	};

	class STAF_Dummy_Guerilla1_1_Flecktarn_Norwegian: B_Soldier_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\c_cloth1_norwegian_co.paa","\STAF_GEAR\txt\ia_soldier_01_clothing_flecktarn_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla1_1_Flecktarn_Norwegian";
	};

	class STAF_Dummy_Guerilla1_1_Mcam_Skull: B_Soldier_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\c_cloth1_skull.paa","\STAF_GEAR\txt\ia_soldier_01_clothing_mcam_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla1_1_Mcam_Skull";
	};

	class STAF_Dummy_Guerilla1_1_US_Desert_Choc_Chip: B_Soldier_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\c_cloth1_Choc_Chip_co.paa","\STAF_GEAR\txt\ia_soldier_01_clothing_US_Desert_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla1_1_US_Desert_Choc_Chip";
	};

	class STAF_Dummy_Guerilla2_1_Steppentarn: B_Soldier_F
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ig_guerrilla2_1_BW_Tropen_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla2_1_Steppentarn";
	};

	class STAF_Dummy_Guerilla2_1_Flora_Coyote: B_Soldier_F
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ig_guerrilla2_1_Flora_Coyote_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla2_1_Flora_Coyote";
	};

	class STAF_Dummy_Guerilla2_1_Choc_Chip: B_Soldier_F
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ig_guerrilla2_1_Choc_Chip_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla2_1_Choc_Chip";
	};

	class STAF_Dummy_Guerrilla_4_1_US_Woodland: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ig_guerrilla4_1_US_Woodland_co.paa"};
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerrilla_4_1_US_Woodland";
	};

	class STAF_Dummy_Guerrilla_4_1_tan_vegetato: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ig_guerrilla4_1_tan_vegetato_co.paa"};
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerrilla_4_1_tan_vegetato";
	};

	class STAF_Dummy_Guerrilla_6_1_ERDL_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ig_guerrilla_6_1_ERDL_co.paa"};
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerrilla_6_1_ERDL_Black";
	};

	class STAF_Dummy_leader_DPM_MARPAT: B_Soldier_F
	{
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\officer_spc_DPM_MARPAT_co.paa","\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_leader_DPM_MARPAT";
	};

	class STAF_Dummy_OfficerUniform_Fabulous: B_Soldier_F
	{
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\officer_spc_fabulous_co.paa","\STAF_GEAR\txt\ia_soldier_01_clothing_fabulous_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		scope = 1;
		uniformClass = "STAF_U_I_OfficerUniform_Fabulous";
	};

	class STAF_Dummy_MCAM_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Black_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Black";
	};

	class STAF_Dummy_MCAM_Black_Vest: STAF_Dummy_MCAM_Black
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Black_vest";
	};

	class STAF_Dummy_MCAM_Black_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Black_Black_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Black_Black";
	};

	class STAF_Dummy_MCAM_Black_Black_Vest: STAF_Dummy_MCAM_Black_Black
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Black_Black_vest";
	};

	class STAF_Dummy_MCAM: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM";
	};

	class STAF_Dummy_MCAM_Vest: STAF_Dummy_MCAM
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_vest";
	};

	class STAF_Dummy_MCAM_Sage: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Sage_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Sage";
	};

	class STAF_Dummy_MCAM_Sage_Vest: STAF_Dummy_MCAM_Sage
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Sage_vest";
	};

	class STAF_Dummy_MCAM_Brown: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Brown_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Brown";
	};

	class STAF_Dummy_MCAM_Brown_Vest: STAF_Dummy_MCAM_Brown
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Brown_vest";
	};

	class STAF_Dummy_ATACS: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_ATACS_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_ATACS";
	};

	class STAF_Dummy_ATACS_Vest: STAF_Dummy_ATACS
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_ATACS_vest";
	};

	class STAF_Dummy_ATACS_Green: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_ATACS_Green_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_ATACS_Green";
	};

	class STAF_Dummy_ATACS_Green_Vest: STAF_Dummy_ATACS_Green
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_ATACS_Green_vest";
	};

	class STAF_Dummy_MCAM_Arid: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Arid_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arid";
	};

	class STAF_Dummy_MCAM_Arid_Vest: STAF_Dummy_MCAM_Arid
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arid_vest";
	};

	class STAF_Dummy_MCAM_Arid_Khaki: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Arid_Khaki_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arid_Khaki";
	};

	class STAF_Dummy_MCAM_Arid_Khaki_Vest: STAF_Dummy_MCAM_Arid_Khaki
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arid_Khaki_vest";
	};

	class STAF_Dummy_MCAM_Arid_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Arid_Black_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arid_Black";
	};

	class STAF_Dummy_MCAM_Arid_Black_Vest: STAF_Dummy_MCAM_Arid_Black
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arid_Black_vest";
	};

	class STAF_Dummy_ATACS_EF_Snow: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_ATACS_EF_Snow_Wolf_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_ATACS_EF_Snow";
	};

	class STAF_Dummy_ATACS_EF_Snow_Vest: STAF_Dummy_ATACS_EF_Snow
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_ATACS_EF_Snow_vest";
	};

	class STAF_Dummy_ATACS_Winter: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_ATACS_Wolf_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_ATACS_Winter";
	};

	class STAF_Dummy_ATACS_Winter_Vest: STAF_Dummy_ATACS_Winter
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_ATACS_Winter_vest";
	};

	class STAF_Dummy_EF_Snow_ATACS: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_EF_Snow_ATACS_Wolf_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_EF_Snow_ATACS";
	};

	class STAF_Dummy_EF_Snow_ATACS_Vest: STAF_Dummy_EF_Snow_ATACS
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_EF_Snow_ATACS_vest";
	};

	class STAF_Dummy_DPM_Snow: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_DPM_Snow_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_DPM_Snow";
	};

	class STAF_Dummy_DPM_Snow_Vest: STAF_Dummy_DPM_Snow
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_DPM_Snow_vest";
	};

	class STAF_Dummy_MCAM_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\clothing1_MCAM_Arctic_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arctic";
	};

	class STAF_Dummy_MCAM_Arctic_Vest: STAF_Dummy_MCAM_Arctic
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Arctic_vest";
	};

	class STAF_Dummy_Light_DPM_Desert: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_DPM_Desert_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_I_CombatUniform_light_DPM_Desert";
	};

	class STAF_Dummy_Light_DPM_Desert_Shortsleeve: STAF_Dummy_Light_DPM_Desert
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_I_CombatUniform_light_DPM_Desert_Shortsleeve";
	};

	class STAF_Dummy_Light_DPM_Desert_Sand: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_DPM_Desert_Sand_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_I_CombatUniform_light_DPM_Desert_Sand";
	};

	class STAF_Dummy_Light_DPM_Desert_Sand_Shortsleeve: STAF_Dummy_Light_DPM_Desert_Sand
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_I_CombatUniform_light_DPM_Desert_Sand_Shortsleeve";
	};

	class STAF_Dummy_Light_M81: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_M81_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_M81";
	};

	class STAF_Dummy_Light_M81_Shortsleeve: STAF_Dummy_Light_M81
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_M81_Shortsleeve";
	};

	class STAF_Dummy_Light_M81_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_M81_Black_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_M81_Black";
	};

	class STAF_Dummy_Light_M81_Black_Shortsleeve: STAF_Dummy_Light_M81_Black
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_M81_Black_Shortsleeve";
	};

	class STAF_Dummy_Light_choc_chip: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_choc_chip_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_choc_chip";
	};

	class STAF_Dummy_Light_choc_chip_Shortsleeve: STAF_Dummy_Light_choc_chip
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_choc_chip_Shortsleeve";
	};

	class STAF_Dummy_Light_choc_chip_brown: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_choc_chip_brown_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_choc_chip_brown";
	};

	class STAF_Dummy_Light_choc_chip_brown_Shortsleeve: STAF_Dummy_Light_choc_chip_brown
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_choc_chip_brown_Shortsleeve";
	};

	class STAF_Dummy_Light_coffee_stain: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_coffee_stain_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_coffee_stain";
	};

	class STAF_Dummy_Light_coffee_stain_Shortsleeve: STAF_Dummy_Light_coffee_stain
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_coffee_stain_Shortsleeve";
	};

	class STAF_Dummy_Light_coffee_stain_brown: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_coffee_stain_brown_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_coffee_stain_brown";
	};

	class STAF_Dummy_Light_coffee_stain_brown_Shortsleeve: STAF_Dummy_Light_coffee_stain_brown
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_coffee_stain_brown_Shortsleeve";
	};

	class STAF_Dummy_Light_tiger_stripe: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_tiger_stripe_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_tiger_stripe";
	};

	class STAF_Dummy_Light_tiger_stripe_Shortsleeve: STAF_Dummy_Light_tiger_stripe
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_tiger_stripe_Shortsleeve";
	};

	class STAF_Dummy_Light_tiger_stripe_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_tiger_stripe_Black_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_tiger_stripe_Black";
	};

	class STAF_Dummy_Light_tiger_stripe_Black_Shortsleeve: STAF_Dummy_Light_tiger_stripe_Black
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_tiger_stripe_Black_Shortsleeve";
	};

	class STAF_Dummy_Light_TTsKO_summer: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_TTsKO_summer_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_TTsKO_summer";
	};

	class STAF_Dummy_Light_TTsKO_summer_Shortsleeve: STAF_Dummy_Light_TTsKO_summer
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_TTsKO_summer_Shortsleeve";
	};

	class STAF_Dummy_Light_TTsKO_summer_Green: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_TTsKO_summer_Green_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_TTsKO_summer_Green";
	};

	class STAF_Dummy_Light_TTsKO_summer_Green_Shortsleeve: STAF_Dummy_Light_TTsKO_summer_Green
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_TTsKO_summer_Green_Shortsleeve";
	};

	class STAF_Dummy_Light_choc_chip_coffee_stain: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_choc_chip_coffee_stain_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_choc_chip_coffee_stain";
	};

	class STAF_Dummy_Light_choc_chip_coffee_stain_Shortsleeve: STAF_Dummy_Light_choc_chip_coffee_stain
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_choc_chip_coffee_stain_Shortsleeve";
	};

	class STAF_Dummy_Light_coffee_stain_choc_chip: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_coffee_stain_choc_chip_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_coffee_stain_choc_chip";
	};

	class STAF_Dummy_Light_coffee_stain_choc_chip_Shortsleeve: STAF_Dummy_Light_coffee_stain_choc_chip
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_coffee_stain_choc_chip_Shortsleeve";
	};

	class STAF_Dummy_Light_m81_TTsKO_Summer: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_m81_TTsKO_Summer_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_m81_TTsKO_Summer";
	};

	class STAF_Dummy_Light_m81_TTsKO_Summer_Shortsleeve: STAF_Dummy_Light_m81_TTsKO_Summer
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_m81_TTsKO_Summer_Shortsleeve";
	};

	class STAF_Dummy_Light_TTsKO_Summer_m81: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_TTsKO_Summer_m81_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_TTsKO_Summer_m81";
	};

	class STAF_Dummy_Light_TTsKO_Summer_m81_Shortsleeve: STAF_Dummy_Light_TTsKO_Summer_m81
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_TTsKO_Summer_m81_Shortsleeve";
	};

	class STAF_Dummy_Light_m81_tiger_stripe: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_m81_tiger_stripe_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_m81_tiger_stripe";
	};

	class STAF_Dummy_Light_m81_tiger_stripe_Shortsleeve: STAF_Dummy_Light_m81_tiger_stripe
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_m81_tiger_stripe_Shortsleeve";
	};

	class STAF_Dummy_Light_tiger_stripe_m81: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_tiger_stripe_m81_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_tiger_stripe_m81";
	};

	class STAF_Dummy_Light_tiger_stripe_m81_Shortsleeve: STAF_Dummy_Light_tiger_stripe_m81
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_tiger_stripe_m81_Shortsleeve";
	};

	class STAF_Dummy_Light_MARPAT_Jungle: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_MARPAT_Jungle_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Jungle";
	};

	class STAF_Dummy_Light_MARPAT_Jungle_Shortsleeve: STAF_Dummy_Light_MARPAT_Jungle
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Jungle_Shortsleeve";
	};

	class STAF_Dummy_Light_MARPAT_Jungle_Green: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_MARPAT_Jungle_Green_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Jungle_Green";
	};

	class STAF_Dummy_Light_MARPAT_Jungle_Green_Shortsleeve: STAF_Dummy_Light_MARPAT_Jungle_Green
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Jungle_Green_Shortsleeve";
	};

	class STAF_Dummy_Light_m81_MARPAT_Jungle: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_m81_MARPAT_Jungle_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_m81_MARPAT_Jungle";
	};

	class STAF_Dummy_Light_m81_MARPAT_Jungle_Shortsleeve: STAF_Dummy_Light_m81_MARPAT_Jungle
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_m81_MARPAT_Jungle_Shortsleeve";
	};

	class STAF_Dummy_Light_MARPAT_Jungle_m81: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_MARPAT_Jungle_m81_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Jungle_m81";
	};

	class STAF_Dummy_Light_MARPAT_Jungle_m81_Shortsleeve: STAF_Dummy_Light_MARPAT_Jungle_m81
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Jungle_m81_Shortsleeve";
	};

	class STAF_Dummy_Light_MARPAT_Altis: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_MARPAT_Altis_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Altis";
	};

	class STAF_Dummy_Light_MARPAT_Altis_Shortsleeve: STAF_Dummy_Light_MARPAT_Altis
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Altis_Shortsleeve";
	};

	class STAF_Dummy_Light_MARPAT_Altis_Sage: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\ia_soldier_01_clothing_MARPAT_Altis_Sage_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Altis_Sage";
	};

	class STAF_Dummy_Light_MARPAT_Altis_Sage_Shortsleeve: STAF_Dummy_Light_MARPAT_Altis_Sage
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Altis_Sage_Shortsleeve";
	};

	// Whiteboards
	class Land_MapBoard_F;

	class STAF_MapBoard_CoC_F: Land_MapBoard_F
	{
		displayName = "STAF Whiteboard (Chain of Command)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\WB_Chain_of_Command.paa"};
	};

	class STAF_MapBoard_MHQ_F: Land_MapBoard_F
	{
		displayName = "STAF Whiteboard (MHQ)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\WB_MHQ.paa"};
	};

	// Ammo Box

	class Box_NATO_Support_F;
	class STAF_SupplyBox: Box_NATO_Support_F {
			author = "STAF|Moony";
			displayName = "Supply Box [STAF]";
			class TransportItems {
				MACRO_ADDITEM(ACE_bloodIV, 15);
				MACRO_ADDITEM(ACE_bloodIV_500, 30);
				MACRO_ADDITEM(ACE_bloodIV_250, 60);
				MACRO_ADDITEM(ACE_bodyBag, 10);
				MACRO_ADDITEM(ACE_atropine, 20);
				MACRO_ADDITEM(ACE_epinephrine, 20);
				MACRO_ADDITEM(ACE_morphine, 20);
				MACRO_ADDITEM(ACE_fieldDressing, 50);
				MACRO_ADDITEM(ACE_elasticBandage, 50);
				MACRO_ADDITEM(ACE_quikclot, 50);
				MACRO_ADDITEM(ACE_packingBandage, 50);
				MACRO_ADDITEM(ACE_personalAidKit, 15);
				MACRO_ADDITEM(ACE_tourniquet, 20);
				MACRO_ADDITEM(ACE_SpraypaintBlack, 5);
				MACRO_ADDITEM(ACE_SpraypaintBlue, 5);
				MACRO_ADDITEM(ACE_SpraypaintGreen, 5);
				MACRO_ADDITEM(ACE_SpraypaintRed, 5);
				MACRO_ADDITEM(ACE_CableTie, 10);
				MACRO_ADDITEM(ACE_UAVBattery, 5);
				MACRO_ADDITEM(ACE_IR_Strobe_Item, 10);
				MACRO_ADDITEM(ACE_EarPlugs, 5);
			};
			class TransportMagazines {
				MACRO_ADDMagazines(1Rnd_HE_Grenade_shell, 10);
				MACRO_ADDMagazines(UGL_FlareWhite_F, 10);
				MACRO_ADDMagazines(UGL_FlareGreen_F, 10);
				MACRO_ADDMagazines(UGL_FlareRed_F, 10);
				MACRO_ADDMagazines(UGL_FlareYellow_F, 10);
				MACRO_ADDMagazines(UGL_FlareCIR_F, 10);
				MACRO_ADDMagazines(1Rnd_Smoke_Grenade_shell, 10);
				MACRO_ADDMagazines(1Rnd_SmokeRed_Grenade_shell, 10);
				MACRO_ADDMagazines(1Rnd_SmokeGreen_Grenade_shell, 10);
				MACRO_ADDMagazines(1Rnd_SmokeYellow_Grenade_shell, 10);
				MACRO_ADDMagazines(1Rnd_SmokePurple_Grenade_shell, 10);
				MACRO_ADDMagazines(1Rnd_SmokeBlue_Grenade_shell, 10);
				MACRO_ADDMagazines(1Rnd_SmokeOrange_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_HE_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_UGL_FlareWhite_F, 10);
				MACRO_ADDMagazines(3Rnd_UGL_FlareGreen_F, 10);
				MACRO_ADDMagazines(3Rnd_UGL_FlareRed_F, 10);
				MACRO_ADDMagazines(3Rnd_UGL_FlareYellow_F, 10);
				MACRO_ADDMagazines(3Rnd_UGL_FlareCIR_F, 10);
				MACRO_ADDMagazines(3Rnd_Smoke_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_SmokeRed_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_SmokeGreen_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_SmokeYellow_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_SmokePurple_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_SmokeBlue_Grenade_shell, 10);
				MACRO_ADDMagazines(3Rnd_SmokeOrange_Grenade_shell, 10);
				MACRO_ADDMagazines(ACE_HuntIR_M203, 5);
				MACRO_ADDMagazines(rhs_mag_M433_HEDP, 10);
				MACRO_ADDMagazines(rhs_mag_m4009, 10);
				MACRO_ADDMagazines(rhs_mag_m576, 10);
				MACRO_ADDMagazines(ClaymoreDirectionalMine_Remote_Mag, 5);
				MACRO_ADDMagazines(DemoCharge_Remote_Mag, 5);
				MACRO_ADDMagazines(APERSTripMine_Wire_Mag, 5);
				MACRO_ADDMagazines(APERSBoundingMine_Range_Mag	, 3);
				MACRO_ADDMagazines(ATMine_Range_Mag, 5);
				MACRO_ADDMagazines(SatchelCharge_Remote_Mag, 10);
				MACRO_ADDMagazines(rhs_mag_smaw_HEAA, 3);
				MACRO_ADDMagazines(rhs_mag_smaw_HEDP, 3);
				MACRO_ADDMagazines(rhs_mag_smaw_SR, 3);
				MACRO_ADDMagazines(rhs_fim92_mag, 3);
				MACRO_ADDMagazines(30Rnd_762x39_Mag_F, 15);
				MACRO_ADDMagazines(30Rnd_762x39_Mag_Tracer_F, 15);
				MACRO_ADDMagazines(hlc_5rnd_300WM_AP_AWM, 5);
				MACRO_ADDMagazines(6Rnd_45ACP_Cylinder, 5);
				MACRO_ADDMagazines(7Rnd_50_AE, 5);
				MACRO_ADDMagazines(20Rnd_762x51_Mag, 15);
				MACRO_ADDMagazines(ACE_20Rnd_762x51_Mag_Tracer, 15);
				MACRO_ADDMagazines(10Rnd_338_Mag, 5);
				MACRO_ADDMagazines(11Rnd_45ACP_Mag, 10);
				MACRO_ADDMagazines(KA_17Rnd_9x19_Mag, 10);
				MACRO_ADDMagazines(30Rnd_65x39_caseless_mag, 30);
				MACRO_ADDMagazines(30Rnd_65x39_caseless_mag_Tracer, 30);
				MACRO_ADDMagazines(5Rnd_127x108_Mag, 5);
				MACRO_ADDMagazines(7Rnd_408_Mag, 5);
				MACRO_ADDMagazines(200Rnd_556x45_Box_F, 5);
				MACRO_ADDMagazines(200Rnd_556x45_Box_Tracer_F, 5);
				MACRO_ADDMagazines(30Rnd_556x45_Stanag, 30);
				MACRO_ADDMagazines(30Rnd_556x45_Stanag_Tracer_Red, 30);
				MACRO_ADDMagazines(hlc_30Rnd_9x19_B_MP5, 10);
				MACRO_ADDMagazines(150Rnd_762x54_Box, 5);
				MACRO_ADDMagazines(150Rnd_762x54_Box_Tracer, 5);
				MACRO_ADDMagazines(50Rnd_570x28_SMG_03, 10);
				MACRO_ADDMagazines(rhsusf_5Rnd_HE, 7);
				MACRO_ADDMagazines(rhsusf_5Rnd_Slug, 7);
				MACRO_ADDMagazines(rhsusf_5Rnd_00Buck, 7);
				MACRO_ADDMagazines(rhsusf_5Rnd_FRAG, 7);
			};
			class TransportWeapons {
				MACRO_Weapons(arifle_MX_Black_F, 1);
				MACRO_Weapons(STAF_rifle_scar_blk, 1);
				MACRO_Weapons(STAF_rifle_scar_blk, 1);
				MACRO_Weapons(rhs_weap_mk18, 1);
				MACRO_Weapons(rhs_weap_M136, 2);
				MACRO_Weapons(rhs_weap_M136_hedp, 2);
				MACRO_Weapons(rhs_weap_M136_hp, 2);
				MACRO_Weapons(rhs_weap_fim92, 1);
			};
			class TransportBackpacks {};
	};
};

class CfgWeapons
{
	#include "headgear.hpp"
	#include "uniforms.hpp"
	#include "vests.hpp"
	#include "weapons.hpp"
};

class CfgGlasses
{
	class G_Bandanna_blk;

	class STAF_G_Bandanna_Punisher: G_Bandanna_blk
	{
		displayName = "STAF Bandana (Punisher)";
		hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\headgear_bandmask_punisher_co.paa"};
	};
};

class CfgFaces
{
	class Default
	{
		class Custom;
	};

	class Man_A3: Default
	{
		class WhiteHead_03;

		class STAF_WhiteHead_03_ATACS_Arid: WhiteHead_03
		{
			author = "STAF|IndeedPete";
			displayName = "STAF Coburn (ATACS Arid)";
			texture = "\STAF_GEAR\txt\m_white_03_ATACS_Arid_co.paa";
			identityTypes[] = {};
		};

		class STAF_WhiteHead_03_ATACS_Lush: WhiteHead_03
		{
			author = "STAF|IndeedPete";
			displayName = "STAF Coburn (ATACS Lush)";
			texture = "\STAF_GEAR\txt\m_white_03_ATACS_Lush_co.paa";
			identityTypes[] = {};
		};

		class STAF_WhiteHead_03_Crystal_Woodland: WhiteHead_03
		{
			author = "STAF|IndeedPete";
			displayName = "STAF Coburn (Crystal Woodland)";
			texture = "\STAF_GEAR\txt\m_white_03_Crystal_Woodland_co.paa";
			identityTypes[] = {};
		};

		class STAF_WhiteHead_03: WhiteHead_03
		{
			author = "STAF|IndeedPete";
			displayName = "STAF Coburn (Natural)";
			texture = "\STAF_GEAR\txt\m_white_03_natural_co.paa";
			identityTypes[] = {};
		};
	};
};

class CfgUnitInsignia
{
	class STAF_Medic
	{
		displayName = "Medic";
		author = "STAF";
		texture = "\STAF_GEAR\img\Medic.paa";
		textureVehicle = "";
	};

	class STAF_India
	{
		displayName = "India"; // Name displayed in Arsenal
		author = "STAF|Moony"; // Author displayed in Arsenal
		texture = "\STAF_GEAR\img\India.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};

	class STAF_USA
	{
		displayName = "USA"; // Name displayed in Arsenal
		author = "STAF|Moony"; // Author displayed in Arsenal
		texture = "\STAF_GEAR\img\United_States_of_America.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};

	class STAF_Israel
	{
		displayName = "Israel"; // Name displayed in Arsenal
		author = "STAF|Moony"; // Author displayed in Arsenal
		texture = "\STAF_GEAR\img\Israel.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};

	class STAF_Ukraine
	{
		displayName = "Ukraine"; // Name displayed in Arsenal
		author = "STAF|Moony"; // Author displayed in Arsenal
		texture = "\STAF_GEAR\img\Ukraine.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};

	class STAF_Faroes
	{
		displayName = "Faroes"; // Name displayed in Arsenal
		author = "STAF|Moony"; // Author displayed in Arsenal
		texture = "\STAF_GEAR\img\Faroes.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};
