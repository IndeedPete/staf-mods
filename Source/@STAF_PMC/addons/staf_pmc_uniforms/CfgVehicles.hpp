class CfgVehicles {
  class B_Soldier_F;
  class C_Marshal_F;
  class C_scientist_F;

  class STAF_Dummy_Marshal: C_Marshal_F
  {
		scope = 1;
    uniformClass = "STAF_Marshal";
    modelSides[] = {3, 2, 1, 0};
  };

  class STAF_Dummy_Scientist: C_scientist_F
  {
    scope = 1;
    uniformClass = "STAF_Scientist";
    modelSides[] = {3, 2, 1, 0};
  };

	class STAF_Dummy_Norwegian_Desert: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_norwegian_desert_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_norwegian_woodland_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\c_cloth1_norwegian_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_flecktarn_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla1_1_Flecktarn_Norwegian";
	};

	class STAF_Dummy_Guerilla1_1_Mcam_Skull: B_Soldier_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\c_cloth1_skull.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_mcam_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla1_1_Mcam_Skull";
	};

	class STAF_Dummy_Guerilla1_1_US_Desert_Choc_Chip: B_Soldier_F
	{
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\c_cloth1_Choc_Chip_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_US_Desert_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla1_1_US_Desert_Choc_Chip";
	};

	class STAF_Dummy_Guerilla2_1_Steppentarn: B_Soldier_F
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla2_1_BW_Tropen_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla2_1_Steppentarn";
	};

	class STAF_Dummy_Guerilla2_1_Flora_Coyote: B_Soldier_F
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla2_1_Flora_Coyote_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla2_1_Flora_Coyote";
	};

	class STAF_Dummy_Guerilla2_1_Choc_Chip: B_Soldier_F
	{
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla2_1_Choc_Chip_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerilla2_1_Choc_Chip";
	};

	class STAF_Dummy_Guerrilla_4_1_US_Woodland: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla4_1_US_Woodland_co.paa"};
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerrilla_4_1_US_Woodland";
	};

	class STAF_Dummy_Guerrilla_4_1_tan_vegetato: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla4_1_tan_vegetato_co.paa"};
		model = "\A3\Characters_F_EPB\Guerrilla\ig_guerrilla4_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerrilla_4_1_tan_vegetato";
	};

	class STAF_Dummy_Guerrilla_6_1_ERDL_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla_6_1_ERDL_co.paa"};
		model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_Guerrilla_6_1_ERDL_Black";
	};

	class STAF_Dummy_leader_DPM_MARPAT: B_Soldier_F
	{
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_DPM_MARPAT_co.paa","\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa"};
		model = "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
		scope = 1;
		uniformClass = "STAF_U_BG_leader_DPM_MARPAT";
	};

	class STAF_Dummy_OfficerUniform_Fabulous: B_Soldier_F
	{
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_fabulous_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_fabulous_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		scope = 1;
		uniformClass = "STAF_U_I_OfficerUniform_Fabulous";
	};

	class STAF_Dummy_MCAM_Black: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Black_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Black_Black_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Sage_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Brown_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_ATACS_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_ATACS_Green_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_Khaki_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_Black_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_ATACS_EF_Snow_Wolf_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_ATACS_Wolf_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_EF_Snow_ATACS_Wolf_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_DPM_Snow_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_MCAM_Arctic_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_DPM_Desert_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_DPM_Desert_Sand_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_M81_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_M81_Black_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_brown_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_brown_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_Black_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_summer_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_summer_Green_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_coffee_stain_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_choc_chip_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_TTsKO_Summer_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_Summer_m81_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_tiger_stripe_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_m81_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_Green_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_MARPAT_Jungle_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_m81_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Altis_co.paa"};
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
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Altis_Sage_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Altis_Sage";
	};

	class STAF_Dummy_Light_MARPAT_Altis_Sage_Shortsleeve: STAF_Dummy_Light_MARPAT_Altis_Sage
	{
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "STAF_U_B_CombatUniform_light_MARPAT_Altis_Sage_Shortsleeve";
	};
};
