class CfgWeapons {
  class UniformItem;
  class ItemInfo;
  class U_B_CombatUniform_mcam;
  class U_B_CombatUniform_mcam_vest;
  class U_BG_Guerilla1_1;
  class U_BG_Guerilla2_1;
  class U_I_G_resistanceLeader_F;
  class U_BG_Guerrilla_6_1;
  class U_BG_leader;
  class U_I_OfficerUniform;
  class U_I_CombatUniform;
  class U_I_CombatUniform_shortsleeve;

  class STAF_U_B_CombatUniform_Norwegian_Desert: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Norwegian, M03 Desert)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_norwegian_desert_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_norwegian_desert_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Norwegian_Desert";
  	};
  };

  class STAF_U_B_CombatUniform_Norwegian_Desert_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Norwegian, M03 Desert)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_norwegian_desert_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_norwegian_desert_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Norwegian_Desert_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_Norwegian_woodland: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Norwegian, M98 Woodland)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_norwegian_woodland_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_norwegian_woodland_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Norwegian_woodland";
  	};
  };

  class STAF_U_B_CombatUniform_Norwegian_woodland_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Norwegian, M98 Woodland)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_norwegian_woodland_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_norwegian_woodland_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Norwegian_woodland_Vest";
  	};
  };

  class STAF_U_BG_Guerilla1_1_Flecktarn_Norwegian: U_BG_Guerilla1_1
  {
  	displayName = "STAF Guerilla Garment (German Flecktarn, Norwegian M98 Woodland)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\c_cloth1_norwegian_co.paa","\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_flecktarn_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_guerrilla1_1_flecktarn_norwegian_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"camo1","camo2"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerilla1_1_Flecktarn_Norwegian";
  	};
  };

  class STAF_U_BG_Guerilla1_1_Mcam_Skull: U_BG_Guerilla1_1
  {
  	displayName = "STAF Guerilla Garment (MultiCam, Skull)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\c_cloth1_skull.paa","\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_mcam_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_guerrilla1_1_Mcam_Skull_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"camo1","camo2"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerilla1_1_Mcam_Skull";
  	};
  };

  class STAF_U_BG_Guerilla1_1_US_Desert_Choc_Chip: U_BG_Guerilla1_1
  {
  	displayName = "STAF Guerilla Garment (US Desert, Choc Chip)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\c_cloth1_Choc_Chip_co.paa","\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_US_Desert_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_guerrilla1_1_US_Desert_Choc_Chip_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"camo1","camo2"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerilla1_1_US_Desert_Choc_Chip";
  	};
  };

  class STAF_U_BG_Guerilla2_1_Steppentarn: U_BG_Guerilla2_1
  {
  	displayName = "STAF Guerilla Outfit (Steppentarn, Dark)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ig_guerrilla2_1_BW_Tropen_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_guerrilla2_1_BW_Tropen_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"camo"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerilla2_1_Steppentarn";
  	};
  };

  class STAF_U_BG_Guerilla2_1_Flora_Coyote: U_BG_Guerilla2_1
  {
  	displayName = "STAF Guerilla Outfit (Flora, Coyote)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ig_guerrilla2_1_Flora_Coyote_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_guerrilla2_1_BW_Tropen_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"camo"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerilla2_1_Flora_Coyote";
  	};
  };

  class STAF_U_BG_Guerilla2_1_Choc_Chip: U_BG_Guerilla2_1
  {
  	displayName = "STAF Guerilla Outfit (Choc Chip, Squares)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ig_guerrilla2_1_Choc_Chip_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_guerrilla2_1_BW_Tropen_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"camo"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerilla2_1_Choc_Chip";
  	};
  };

  class STAF_U_BG_Guerrilla_4_1_US_Woodland: U_I_G_resistanceLeader_F
  {
  	displayName = "STAF Guerilla Fatigues (Green, US Woodland)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ig_guerrilla4_1_US_Woodland_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_i_g_resistanceleader_US_Woodland_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerrilla_4_1_US_Woodland";
  	};
  };

  class STAF_U_BG_Guerrilla_4_1_tan_vegetato: U_I_G_resistanceLeader_F
  {
  	displayName = "STAF Guerilla Fatigues (Tan, Vegetato Desert)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ig_guerrilla4_1_tan_vegetato_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_i_g_resistanceleader_tan_vegetato_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerrilla_4_1_tan_vegetato";
  	};
  };

  class STAF_U_BG_Guerrilla_6_1_ERDL_Black: U_BG_Guerrilla_6_1
  {
  	displayName = "STAF Guerilla Apparel (ERDL, Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ig_guerrilla_6_1_ERDL_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_guerrilla_6_1_ERDL_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"Camo"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerrilla_6_1_ERDL_Black";
  	};
  };

  class STAF_U_BG_leader_DPM_MARPAT: U_BG_leader
  {
  	displayName = "STAF Guerilla Uniform (British DPM, MARPAT)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\officer_spc_DPM_MARPAT_co.paa","\A3\Characters_F\Civil\Data\c_cloth1_kabeiroi_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_g_ig_leader_DPM_MARPAT_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo1","Camo2"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_leader_DPM_MARPAT";
  	};
  };

  class STAF_U_I_OfficerUniform_Fabulous: U_I_OfficerUniform
  {
  	displayName = "STAF Absolutely Fa!-Bu!-Lous!";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\officer_spc_fabulous_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ir_officer_spc_fabulous_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_OfficerUniform_Fabulous";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Black: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Black_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Black_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Black";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Black_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Black_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Black_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Black_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Black_Black: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam Black, Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Black_Black_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Black_Black_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Black_Black";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Black_Black_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam Black, Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Black_Black_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Black_Black_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Black_Black_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Sage: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam, Sage)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Sage_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Sage_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Sage";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Sage_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam, Sage)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Sage_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Sage_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Sage_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Brown: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam, Brown)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Brown_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Brown_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Brown";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Brown_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam, Brown)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Brown_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Brown_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Brown_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (ATACS)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (ATACS)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS_Green: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (ATACS, Green)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_Green_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_Green_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS_Green";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS_Green_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (ATACS, Green)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_Green_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_Green_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS_Green_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arid: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam Arid)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arid_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arid";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arid_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam Arid)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arid_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arid_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arid_Khaki: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam Arid, Khaki)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_Khaki_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arid_Khaki_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arid_Khaki";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arid_Khaki_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam Arid, Khaki)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_Khaki_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arid_Khaki_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arid_Khaki_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arid_Black: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam Arid, Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_Black_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arid_Black_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arid_Black";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arid_Black_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam Arid, Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arid_Black_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arid_Black_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arid_Black_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS_EF_Snow: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (ATACS Winter, EF Snow)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_EF_Snow_Wolf_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_EFSnow_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS_EF_Snow";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS_EF_Snow_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (ATACS Winter, EF Snow)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_EF_Snow_Wolf_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_EFSnow_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS_EF_Snow_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS_Winter: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (ATACS Winter)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_Wolf_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_winter_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS_Winter";
  	};
  };

  class STAF_U_B_CombatUniform_ATACS_Winter_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (ATACS Winter)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_ATACS_Wolf_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_ATACS_winter_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_ATACS_Winter_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_EF_Snow_ATACS: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (EF Snow, ATACS Winter)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_EF_Snow_ATACS_Wolf_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_EFSnow_ATACS_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_EF_Snow_ATACS";
  	};
  };

  class STAF_U_B_CombatUniform_EF_Snow_ATACS_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (EF Snow, ATACS Winter)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_EF_Snow_ATACS_Wolf_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_EFSnow_ATACS_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_EF_Snow_ATACS_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_DPM_Snow: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (British DPM Snow)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_DPM_Snow_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_DPM_Snow_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_DPM_Snow";
  	};
  };

  class STAF_U_B_CombatUniform_DPM_Snow_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (British DPM Snow)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_DPM_Snow_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_DPM_Snow_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_DPM_Snow_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Multicam Alpine)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arctic_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arctic_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Multicam Alpine)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\clothing1_MCAM_Arctic_co.paa"};
  	picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_b_combatuniform_MCAM_Arctic_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arctic_Vest";
  	};
  };

  class STAF_U_I_CombatUniform_light_DPM_Desert: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (DPM Desert)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_DPM_Desert_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_DPM_Desert";
  	};
  };

  class STAF_U_I_CombatUniform_light_DPM_Desert_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (DPM Desert, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_DPM_Desert_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_DPM_Desert_Shortsleeve";
  	};
  };

  class STAF_U_I_CombatUniform_light_DPM_Desert_Sand: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (DPM Desert, Sand)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_DPM_Desert_Sand_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_DPM_Desert_Sand";
  	};
  };

  class STAF_U_I_CombatUniform_light_DPM_Desert_Sand_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (DPM Desert, Sand, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_DPM_Desert_Sand_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_DPM_Desert_Sand_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_M81: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_M81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_M81";
  	};
  };

  class STAF_U_B_CombatUniform_light_M81_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_M81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_M81_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_M81_Black: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_M81_Black_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_M81_Black";
  	};
  };

  class STAF_U_B_CombatUniform_light_M81_Black_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, Black, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_M81_Black_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_M81_Black_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_choc_chip: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Choc Chip)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_choc_chip";
  	};
  };

  class STAF_U_B_CombatUniform_light_choc_chip_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Choc Chip, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_choc_chip_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_choc_chip_brown: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Choc Chip, Brown)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_brown_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_choc_chip_brown";
  	};
  };

  class STAF_U_B_CombatUniform_light_choc_chip_brown_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Choc Chip, Brown, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_brown_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_choc_chip_brown_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_coffee_stain: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Coffee Stain)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_coffee_stain";
  	};
  };

  class STAF_U_B_CombatUniform_light_coffee_stain_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Coffee Stain, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_coffee_stain_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_coffee_stain_brown: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Coffee Stain, Brown)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_brown_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_coffee_stain_brown";
  	};
  };

  class STAF_U_B_CombatUniform_light_coffee_stain_brown_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Coffee Stain, Brown, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_brown_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_coffee_stain_brown_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_tiger_stripe: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Tiger Stripe)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_tiger_stripe";
  	};
  };

  class STAF_U_B_CombatUniform_light_tiger_stripe_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Tiger Stripe, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_tiger_stripe_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_tiger_stripe_Black: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Tiger Stripe, Black)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_Black_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_tiger_stripe_Black";
  	};
  };

  class STAF_U_B_CombatUniform_light_tiger_stripe_Black_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Tiger Stripe, Black, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_Black_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_tiger_stripe_Black_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_TTsKO_summer: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (TTsKO Summer)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_summer_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_TTsKO_summer";
  	};
  };

  class STAF_U_B_CombatUniform_light_TTsKO_summer_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (TTsKO Summer, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_summer_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_TTsKO_summer_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_TTsKO_summer_Green: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (TTsKO Summer, Green)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_summer_Green_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_TTsKO_summer_Green";
  	};
  };

  class STAF_U_B_CombatUniform_light_TTsKO_summer_Green_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (TTsKO Summer, Green, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_summer_Green_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_TTsKO_summer_Green_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_choc_chip_coffee_stain: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Choc Chip, Coffee Stain)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_coffee_stain_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_choc_chip_coffee_stain";
  	};
  };

  class STAF_U_B_CombatUniform_light_choc_chip_coffee_stain_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Choc Chip, Coffee Stain, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_choc_chip_coffee_stain_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_choc_chip_coffee_stain_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_coffee_stain_choc_chip: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Coffee Stain, Choc Chip)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_choc_chip_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_coffee_stain_choc_chip";
  	};
  };

  class STAF_U_B_CombatUniform_light_coffee_stain_choc_chip_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Coffee Stain, Choc Chip, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_coffee_stain_choc_chip_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_coffee_stain_choc_chip_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_m81_TTsKO_Summer: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, TTsKO Summer)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_TTsKO_Summer_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_m81_TTsKO_Summer";
  	};
  };

  class STAF_U_B_CombatUniform_light_m81_TTsKO_Summer_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, TTsKO Summer, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_TTsKO_Summer_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_m81_TTsKO_Summer_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_TTsKO_Summer_m81: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (TTsKO Summer, M81)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_Summer_m81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_TTsKO_Summer_m81";
  	};
  };

  class STAF_U_B_CombatUniform_light_TTsKO_Summer_m81_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (TTsKO Summer, M81, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_TTsKO_Summer_m81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_TTsKO_Summer_m81_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_m81_tiger_stripe: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, Tiger Stripe)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_tiger_stripe_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_m81_tiger_stripe";
  	};
  };

  class STAF_U_B_CombatUniform_light_m81_tiger_stripe_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, Tiger Stripe, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_tiger_stripe_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_m81_tiger_stripe_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_tiger_stripe_m81: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Tiger Stripe, M81)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_m81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_tiger_stripe_m81";
  	};
  };

  class STAF_U_B_CombatUniform_light_tiger_stripe_m81_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (Tiger Stripe, M81, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_tiger_stripe_m81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";
  	scope = 1;

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_tiger_stripe_m81_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Jungle: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Jungle)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Jungle";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Jungle_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Jungle, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Jungle_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Jungle_Green: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Jungle, Green)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_Green_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Jungle_Green";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Jungle_Green_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Jungle, Green, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_Green_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Jungle_Green_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_m81_MARPAT_Jungle: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, MARPAT Jungle)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_MARPAT_Jungle_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_m81_MARPAT_Jungle";
  	};
  };

  class STAF_U_B_CombatUniform_light_m81_MARPAT_Jungle_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (M81, MARPAT Jungle, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_m81_MARPAT_Jungle_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_m81_MARPAT_Jungle_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Jungle_m81: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Jungle, M81)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_m81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Jungle_m81";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Jungle_m81_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Jungle, M81, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Jungle_m81_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Jungle_m81_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Altis: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Altis)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Altis_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Altis";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Altis_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Altis, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Altis_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Altis_Shortsleeve";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Altis_Sage: U_I_CombatUniform
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Altis, Sage)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Altis_Sage_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Altis_Sage";
  	};
  };

  class STAF_U_B_CombatUniform_light_MARPAT_Altis_Sage_Shortsleeve: U_I_CombatUniform_shortsleeve
  {
  	author = "IndeedPete";
  	displayName = "STAF Light Combat Fatigues (MARPAT Altis, Sage, Rolled-up)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\txt\ia_soldier_01_clothing_MARPAT_Altis_Sage_co.paa"};
  	//picture = "\staf_pmc_uniforms\staf\addons\staf_pmc_uniforms\arsenal\icon_u_ia_soldier_01_clothing_rolled_olive_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		hiddenSelections[] = {"Camo"};
  		uniformClass = "STAF_Dummy_Light_MARPAT_Altis_Sage_Shortsleeve";
  	};
  };

};
