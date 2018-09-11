class CfgWeapons {

  class VestItem;
  class ItemCore;
  class ItemInfo;
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

    class ItemInfo: ItemInfo
        {
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01.p3d";
            containerClass = Supply120;
            mass = 80;

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.3;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.3;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
  };

  class STAF_V_PlateCarrier2_grey_arctic: STAF_V_PlateCarrier1_grey_arctic
  {
    displayName = "STAF Carrier Rig (Arctic, Grey)";

    class ItemInfo: ItemInfo
        {
            uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02.p3d";
            containerClass = Supply120;
            mass = 80;

            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.3;
                };

                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.3;
                };

                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };

                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
  };

  class STAF_V_PlateCarrier2_medic_arctic: STAF_V_PlateCarrier2_grey_arctic
  {
  	displayName = "STAF Carrier Rig (Arctic, Medic)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\V_PlateCarrier1_medic_co.paa"};
  };

  class STAF_V_PlateCarrier1_mcam_alpine: STAF_V_PlateCarrier1_grey_arctic
  {
  	displayName = "STAF Carrier Lite (Arctic, MCAM Alpine)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\vests_pmc_mcam_alpine_co.paa"};
  };

  class STAF_V_PlateCarrier2_mcam_alpine: STAF_V_PlateCarrier2_grey_arctic
  {
  	displayName = "STAF Carrier Rig (Arctic, MCAM Alpine)";
  	hiddenSelectionsTextures[] = {"\staf_pmc_vests\txt\vests_pmc_mcam_alpine_co.paa"};
  };

  //Hidden Vest
  class STAF_V_TacVest_hidden: V_TacVest_khk
  {
  	displayName = "STAF Bulletproof Vest (Hidden)";
  	hiddenSelectionsTextures[] = {""};
  	picture = "\staf_pmc_main\arsenal\staf_iconsmall.paa";
    model = "\A3\weapons_f\empty";
    scope = 2;
    scopeArsenal = 2;

    class ItemInfo: ItemInfo
    {
      uniformModel = "\A3\weapons_f\empty";
      containerClass = Supply100;
      mass = 60;

      class HitpointsProtectionInfo
      {
          class Chest
          {
              hitpointName = "HitChest";
              armor = 11;
              passThrough = 0.5;
          };

          class Diaphragm
          {
              hitpointName = "HitDiaphragm";
              armor = 11;
              passThrough = 0.5;
          };

          class Abdomen
          {
              hitpointName = "HitAbdomen";
              armor = 11;
              passThrough = 0.5;
          };

          class Body
          {
              hitpointName = "HitBody";
              passThrough = 0.5;
          };
      };
    };
  };

  //GSG9 Vests

};
