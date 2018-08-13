class CfgWeapons {

  class VestItem;
  class ItemCore;
  class V_PlateCarrierH_CTRG;
  class V_PlateCarrier1_rgr;
  class V_PlateCarrier2_rgr;
  class V_TacVest_khk;

  class Vest_Camo_Base: ItemCore
  {
      class ItemInfo;
  };

  // Tactical

  class STAF_V_TacVest_digital_arctic: V_TacVest_khk
  {
  	displayName = "STAF Tactical Vest (Arctic, Digital)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\tacticalvest_digital_arctic_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_v_tacvest_digital_arctic_ca.paa";
  };

  class STAF_V_TacVest_hex_arctic: V_TacVest_khk
  {
  	displayName = "STAF Tactical Vest (Arctic, Hex)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\tacticalvest_hex_arctic_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_v_tacvest_digital_arctic_ca.paa";
  };

  class STAF_V_TacVest_mcam_arctic: V_TacVest_khk
  {
  	displayName = "STAF Tactical Vest (Arctic, MCAM)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\tacticalvest_mcam_arctic_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_v_tacvest_mcam_arctic_ca.paa";
  };

  class STAF_V_TacVest_white_arctic: V_TacVest_khk
  {
  	displayName = "STAF Tactical Vest (Arctic, White)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\tacticalvest_white_arctic_co.paa"};
  	picture = "\staf_pmc_main\arsenal\icon_v_tacvest_white_arctic_ca.paa";
  };

  //Carrier Vests

  class STAF_V_PlateCarrier1_grey_arctic: Vest_Camo_Base
  {

    scope = 2;
    displayName = "STAF Carrier Lite (Arctic, Grey)";
  	picture = "\staf_pmc_main\arsenal\icon_v_plate_carrier_1_grey_ca.paa";
    model = "A3\Characters_F\BLUFOR\equip_b_Vest01";
    hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\V_PlateCarrier1_grey_co.paa"};

    class ItemInfo: VestItem
    {
        uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d";
        containerClass = "Supply120";
        mass = 80;
        armor = "5";
        passThrough = 0.3;
        hiddenSelections[] = {"camo"};
    };
  };

  class STAF_V_PlateCarrier2_grey_arctic: STAF_V_PlateCarrier1_grey_arctic
  {
    displayName = "STAF Carrier Lite (Arctic, Grey)";

    class ItemInfo: VestItem
    {
        uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d";
        containerClass = "Supply120";
        mass = 80;
        armor = "5";
        passThrough = 0.3;
        hiddenSelections[] = {"camo"};
    };
  };

  class STAF_V_PlateCarrier2_medic_arctic: STAF_V_PlateCarrier2_grey_arctic
  {
  	displayName = "STAF Carrier Lite (Arctic, Medic)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\V_PlateCarrier1_medic_co.paa"};
  };
};
