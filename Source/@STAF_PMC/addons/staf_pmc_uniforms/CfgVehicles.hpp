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

  class STAF_Dummy_Scientist_ind: C_scientist_F
  {
    scope = 1;
    uniformClass = "STAF_Scientist_ind";
    modelSides[] = {3, 2, 1, 0};
  };

  class STAF_Dummy_Scientist_opf: C_scientist_F
  {
    scope = 1;
    uniformClass = "STAF_Scientist_opf";
    modelSides[] = {3, 2, 1, 0};
  };

  // Norwegian

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

	class STAF_Dummy_Norwegian_Woodland: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_norwegian_woodland_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Norwegian_Woodland";
	};

	class STAF_Dummy_Norwegian_Woodland_Vest: STAF_Dummy_Norwegian_Woodland
	{
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		uniformClass = "STAF_U_B_CombatUniform_Norwegian_woodland_vest";
	};

  // Guerilla

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

  // Föhrer

	class STAF_Dummy_OfficerUniform_Fabulous: B_Soldier_F
	{
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_fabulous_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_fabulous_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		scope = 1;
		uniformClass = "STAF_U_I_OfficerUniform_Fabulous";
	};

  class STAF_Dummy_OfficerUniform_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_arctic_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_arctic_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		scope = 1;
		uniformClass = "STAF_U_I_OfficerUniform_Arctic";
	};

  class STAF_Dummy_OfficerUniform_White: B_Soldier_F
	{
		hiddenSelections[] = {"Camo1","Camo2","insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_white_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_arctic_co.paa"};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		scope = 1;
		uniformClass = "STAF_U_I_OfficerUniform_White";
	};

  //STAF Arctic

  class STAF_Dummy_Atacs_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_atacs_white_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Atacs_Arctic";
	};

  class STAF_Dummy_Brit_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_brit_white_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Brit_Arctic";
	};

  class STAF_Dummy_Digital_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_digital_white_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Digital_Arctic";
	};

  class STAF_Dummy_Fleckentarn_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_fleckentarn_white_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Fleckentarn_Arctic";
	};

  class STAF_Dummy_Hex_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_hex_white_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Hex_Arctic";
	};

  class STAF_Dummy_Splinter_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_splinter_white_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Splinter_Arctic";
	};

  class STAF_Dummy_White_Arctic: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_white_white_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_White_Arctic";
	};

  class STAF_Dummy_MCAM_Alpine: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_mcam_alpine_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Alpine";
	};

  class STAF_Dummy_MCAM_Mountain: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_mcam_mountain_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_MCAM_Mountain";
	};

  class STAF_Dummy_MCAM_M85: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_m85_snow_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_M85_Arctic";
	};

  class STAF_Dummy_MCAM_Tiger: B_Soldier_F
	{
		hiddenSelections[] = {"Camo","Insignia"};
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_snow_tiger_co.paa"};
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		scope = 1;
		uniformClass = "STAF_U_B_CombatUniform_Tiger_Arctic";
	};
};
