class CfgWeapons {
  class UniformItem;
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
  class U_Marshal;
  class U_C_Scientist;

  class STAF_Marshal: U_Marshal
  {
  	displayName = "STAF Marshal";
    modelSides[] = {3, 2, 1, 0};

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply20";
  		hiddenSelections[] = {"Camo"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Marshal";
  	};
  };

  class STAF_Scientist: U_C_Scientist
  {
    displayName = "STAF Scientist";
    modelSides[] = {3, 2, 1, 0};

    class ItemInfo: UniformItem
    {
      containerClass = "Supply40";
      hiddenSelections[] = {"Camo"};
      mass = 40;
      uniformModel = "-";
      uniformClass = "STAF_Dummy_Scientist";
    };
  };

  class STAF_Scientist_ind: U_C_Scientist
  {
    displayName = "STAF Scientist (Indfor)";
    modelSides[] = {3, 2, 1, 0};

    class ItemInfo: UniformItem
    {
      containerClass = "Supply40";
      hiddenSelections[] = {"Camo"};
      mass = 40;
      uniformModel = "-";
      uniformClass = "STAF_Dummy_Scientist_ind";
    };
  };

  class STAF_Scientist_opf: U_C_Scientist
  {
    displayName = "STAF Scientist (Opfor)";
    modelSides[] = {3, 2, 1, 0};

    class ItemInfo: UniformItem
    {
      containerClass = "Supply40";
      hiddenSelections[] = {"Camo"};
      mass = 40;
      uniformModel = "-";
      uniformClass = "STAF_Dummy_Scientist_opf";
    };
  };

  // Norwegian

  class STAF_U_B_CombatUniform_Norwegian_Desert: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Norwegian, M03 Desert)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_Norwegian_desert_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_norwegian_desert_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_Norwegian_desert_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_Norwegian_desert_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Norwegian_Desert_Vest";
  	};
  };

  class STAF_U_B_CombatUniform_Norwegian_Woodland: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Norwegian, M98 Woodland)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_Norwegian_woodland_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_norwegian_woodland_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Norwegian_Woodland";
  	};
  };

  class STAF_U_B_CombatUniform_Norwegian_Woodland_vest: U_B_CombatUniform_mcam_vest
  {
  	displayName = "STAF Recon Fatigues (Norwegian, M98 Woodland)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_Norwegian_woodland_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_Norwegian_woodland_vest_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Norwegian_Woodland_Vest";
  	};
  };

  //Guerilla

  class STAF_U_BG_Guerilla1_1_Flecktarn_Norwegian: U_BG_Guerilla1_1
  {
  	displayName = "STAF Guerilla Garment (German Flecktarn, Norwegian M98 Woodland)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\c_cloth1_norwegian_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_flecktarn_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_g_guerrilla1_1_flecktarn_norwegian_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\c_cloth1_skull.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_mcam_co.paa"};
  	//picture = "\staf_pmc_main\arsenal\icon_u_g_guerrilla1_1_Mcam_Skull_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\c_cloth1_Choc_Chip_co.paa","\staf_pmc_uniforms\txt\ia_soldier_01_clothing_US_Desert_co.paa"};
  	//picture = "\staf_pmc_main\arsenal\icon_u_g_guerrilla1_1_US_Desert_Choc_Chip_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla2_1_BW_Tropen_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_g_guerrilla2_1_BW_Tropen_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla2_1_Flora_Coyote_co.paa"};
  	//picture = "\staf_pmc_main\arsenal\icon_u_g_guerrilla2_1_BW_Tropen_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla2_1_Choc_Chip_co.paa"};
  	//picture = "\staf_pmc_main\arsenal\icon_u_g_guerrilla2_1_BW_Tropen_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla4_1_US_Woodland_co.paa"};
  	//picture = "\staf_pmc_main\arsenal\icon_u_i_g_resistanceleader_US_Woodland_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla4_1_tan_vegetato_co.paa"};
  	//picture = "\staf_pmc_main\arsenal\icon_u_i_g_resistanceleader_tan_vegetato_ca.paa";

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
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\ig_guerrilla_6_1_ERDL_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_g_guerrilla_6_1_ERDL_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply30";
  		hiddenSelections[] = {"Camo"};
  		mass = 30;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Guerrilla_6_1_ERDL_Black";
  	};
  };

  //Föhrer

  class STAF_U_I_OfficerUniform_Fabulous: U_I_OfficerUniform
  {
  	displayName = "STAF Absolutely Fa!-Bu!-Lous!";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_fabulous_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_ir_officer_spc_fabulous_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_OfficerUniform_Fabulous";
  	};
  };

  class STAF_U_I_OfficerUniform_Arctic: U_I_OfficerUniform
  {
  	displayName = "STAF Officer (Arctic, Stripes)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_arctic_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_ir_officer_spc_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_OfficerUniform_Arctic";
  	};
  };

  class STAF_U_I_OfficerUniform_White: U_I_OfficerUniform
  {
  	displayName = "STAF Officer (Arctic, White)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\officer_spc_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_ir_officer_spc_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_OfficerUniform_White";
  	};
  };

  //STAF Arctic

  class STAF_U_B_CombatUniform_Atacs_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, ATACS)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_atacs_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_atacs_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Atacs_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_Brit_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, British)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_brit_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_brit_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Brit_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_Digital_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, Digital)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_digital_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_digital_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Digital_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_Fleckentarn_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, Fleckentarn)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_fleckentarn_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_fleckentarn_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Fleckentarn_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_Hex_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, Hex)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_hex_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_hex_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_hex_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_MCAM_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, MCAM)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_mcam_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_mcam_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_MCAM_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_Splinter_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, Splinter)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_splinter_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_splinter_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_Splinter_Arctic";
  	};
  };

  class STAF_U_B_CombatUniform_White_Arctic: U_B_CombatUniform_mcam
  {
  	displayName = "STAF Combat Fatigues (Arctic, White)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_uniforms\txt\clothing1_white_white_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_u_b_combatuniform_white_arctic_ca.paa";

  	class ItemInfo: UniformItem
  	{
  		containerClass = "Supply40";
  		hiddenSelections[] = {"Camo"};
  		mass = 40;
  		uniformModel = "-";
  		uniformClass = "STAF_Dummy_White_Arctic";
  	};
  };
};
