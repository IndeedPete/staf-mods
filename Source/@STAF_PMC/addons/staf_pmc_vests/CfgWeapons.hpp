class CfgWeapons {

  class V_PlateCarrierH_CTRG;
  class V_PlateCarrier2_rgr;
  class IP_V_PlateCarrier2_khkEF;
  class VestItem;

  class STAF_V_PlateCarrierL_Pete_Arid: V_PlateCarrierH_CTRG
  {
  	displayName = "STAF Pete's Plate Carrier Rig Mk.2 (Arid)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\vests_pete_Arid_co.paa"};
  	model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
  	// picture = "\IP_EUROFORCE\men\img\icon_v_plate_carrier_1_khaki_ca.paa";

    class ItemInfo: VestItem
  	{
  		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
  	};
  };

  class STAF_V_PlateCarrierL_Pete_Lush: STAF_V_PlateCarrierL_Pete_Arid
  {
  	displayName = "STAF Pete's Plate Carrier Rig Mk.2 (Lush)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\vests_pete_lush_co.paa"};
  	// picture = "\IP_EUROFORCE\men\img\icon_v_plate_carrier_1_green_ca.paa";
  };

  class STAF_V_PlateCarrierL_Pete_Winter: STAF_V_PlateCarrierL_Pete_Arid
  {
  	displayName = "STAF Pete's Plate Carrier Rig Mk.2 (Winter)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\vests_pete_Winter_co.paa"};
  	// picture = "\IP_EUROFORCE\men\img\icon_v_plate_carrier_1_grey_ca.paa";
  };

  class STAF_V_PlateCarrier2_Stroke_rgr: V_PlateCarrier2_rgr
  {
  	displayName = "STAF StrokeUnit's Carrier Rig (Green)";
  	hiddenSelections[] = {"camo"};
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\vests_stroke_rgr_co.paa"};

        class ItemInfo: VestItem
  	{
  		hiddenSelections[] = {"camo"};
  	};
  };

  class STAF_V_PlateCarrier2_Stroke_khk: IP_V_PlateCarrier2_khkEF
  {
  	displayName = "STAF StrokeUnit's Carrier Rig (Khaki)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\vests_stroke_khk_co.paa"};
  };
};
