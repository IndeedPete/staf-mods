class EventHandlers;
class CfgVehicles {
  //C-130
  class CUP_O_Su25_Dyn_SLA;
  class CFP_B_UGARMY_Helicopter_Pilot_01;

  class STAF_CFP_B_UGARMY_Pilot_01: CFP_B_UGARMY_Helicopter_Pilot_01 {
    name = "Pilot";
    faction = "CFP_B_UGARMY";
    displayName = "Pilot";

    linkedItems[] = {"CUP_V_B_PilotVest", "CUP_H_RUS_ZSH_Shield_Down", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7"};
    headgearList[] = {"CUP_H_RUS_ZSH_Shield_Down",1};
    vestList[] = {"CUP_V_B_PilotVest",1};

    ALiVE_orbatCreator_loadout[] = {};
    };

  class STAF_CUP_B_Su25_Dyn_SLA: CUP_O_Su25_Dyn_SLA {
  	crew = "STAF_CFP_B_UGARMY_Pilot_01";
    faction = "CFP_B_UGARMY";
    side = 1;
    };

  //== OPFOR ==

  class CFP_B_UGARMY_Ural_ZU_23_01;
  class CFP_B_UGARMY_BRDM_2_01;
  class CFP_B_UGARMY_BMP_2_01;
  class CFP_B_UGARMY_BTR_60_01;
  class CFP_B_UGARMY_BTR_90_01;
  class CFP_B_UGARMY_BM_21_01;
  class CFP_B_UGARMY_RG_31_01;
  class CFP_B_UGARMY_UAZ_01;
  class CFP_B_UGARMY_UAZ_DShKM_01;
  class CFP_B_UGARMY_UAZ_Open_01;
  class CFP_B_UGARMY_UAZ_SPG_01;
  class CFP_B_UGARMY_Ural_01;
  class CFP_B_UGARMY_Ural_Ammo_01;
  class CFP_B_UGARMY_Ural_Refuel_01;
  class CFP_B_UGARMY_Ural_Repair_01;
  class CFP_B_UGARMY_Ural_Open_01;
  class CFP_B_UGARMY_Mi_17_01;
  class CFP_B_UGARMY_Mi_17_VIV_01;
  class CFP_B_UGARMY_Mi_24D_01;
  class CFP_B_UGARMY_T55_01;
  class CFP_B_UGARMY_T90_01;
  class CFP_B_UGARMY_D30_AT_01;
  class CFP_B_UGARMY_DShKM_01;
  class CFP_B_UGARMY_DShKM_Minitripod_01;
  class CFP_B_UGARMY_Podnos_2B14_01;
  class CFP_B_UGARMY_SPG_9_01;
  class CFP_B_UGARMY_ZU_23_01;

  class STAF_CFP_O_UGARMY_Ural_ZU_23_01 : CFP_B_UGARMY_Ural_ZU_23_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_BRDM_2_01 : CFP_B_UGARMY_BRDM_2_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Crew_01";
  };
  class STAF_CFP_O_UGARMY_BMP_2_01 : CFP_B_UGARMY_BMP_2_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Crew_01";
  };
  class STAF_CFP_O_UGARMY_BTR_60_01 : CFP_B_UGARMY_BTR_60_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Crew_01";
  };
  class STAF_CFP_O_UGARMY_BTR_90_01 : CFP_B_UGARMY_BTR_90_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Crew_01";
  };
  class STAF_CFP_O_UGARMY_BM_21_01 : CFP_B_UGARMY_BM_21_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_RG_31_01 : CFP_B_UGARMY_RG_31_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_UAZ_01 : CFP_B_UGARMY_UAZ_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_UAZ_DShKM_01 : CFP_B_UGARMY_UAZ_DShKM_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_UAZ_Open_01 : CFP_B_UGARMY_UAZ_Open_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_UAZ_SPG_01 : CFP_B_UGARMY_UAZ_SPG_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_Ural_01 : CFP_B_UGARMY_Ural_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_Ural_Ammo_01 : CFP_B_UGARMY_Ural_Ammo_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_Ural_Refuel_01 : CFP_B_UGARMY_Ural_Refuel_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_Ural_Repair_01 : CFP_B_UGARMY_Ural_Repair_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_Ural_Open_01 : CFP_B_UGARMY_Ural_Open_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_Light_01";
  };
  class STAF_CFP_O_UGARMY_Mi_17_01 : CFP_B_UGARMY_Mi_17_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Pilot_01";
  };
  class STAF_CFP_O_UGARMY_Mi_17_VIV_01 : CFP_B_UGARMY_Mi_17_VIV_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Pilot_01";
  };
  class STAF_CFP_O_UGARMY_Mi_24D_01 : CFP_B_UGARMY_Mi_24D_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Pilot_01";
  };
  class STAF_CFP_O_UGARMY_T55_01 : CFP_B_UGARMY_T55_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Crew_01";
  };
  class STAF_CFP_O_UGARMY_T90_01 : CFP_B_UGARMY_T90_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Crew_01";
  };
  class STAF_CFP_O_UGARMY_D30_AT_01 : CFP_B_UGARMY_D30_AT_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_01";
  };
  class STAF_CFP_O_UGARMY_DShKM_01 : CFP_B_UGARMY_DShKM_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_01";
  };
  class STAF_CFP_O_UGARMY_DShKM_Minitripod_01 : CFP_B_UGARMY_DShKM_Minitripod_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_01";
  };
  class STAF_CFP_O_UGARMY_Podnos_2B14_01 : CFP_B_UGARMY_Podnos_2B14_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_01";
  };
  class STAF_CFP_O_UGARMY_SPG_9_01 : CFP_B_UGARMY_SPG_9_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_01";
  };
  class STAF_CFP_O_UGARMY_ZU_23_01 : CFP_B_UGARMY_ZU_23_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Rifleman_01";
  };
  class STAF_CUP_O_Su25_Dyn_SLA : STAF_CUP_B_Su25_Dyn_SLA {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
      crew = "STAF_CFP_O_UGARMY_Pilot_01";
  };

  class CFP_B_UGARMY_Operator_01;
  class CFP_B_UGARMY_Operator_Explosive_Specialist_01;
  class CFP_B_UGARMY_Operator_Medic_01;
  class CFP_B_UGARMY_Operator_Team_Leader_01;
  class CFP_B_UGARMY_Asst_Gunner_DShKM_01;
  class CFP_B_UGARMY_Asst_Gunner_Mortar_01;
  class CFP_B_UGARMY_Asst_Gunner_SPG_01;
  class CFP_B_UGARMY_Crew_01;
  class CFP_B_UGARMY_Engineer_01;
  class CFP_B_UGARMY_Engineer_Light_01;
  class CFP_B_UGARMY_Explosive_Specialist_01;
  class CFP_B_UGARMY_Explosive_Specialist_Light_01;
  class CFP_B_UGARMY_Grenadier_01;
  class CFP_B_UGARMY_Grenadier_Light_01;
  class CFP_B_UGARMY_Gunner_DShKM_01;
  class CFP_B_UGARMY_Gunner_Mortar_01;
  class CFP_B_UGARMY_Gunner_SPG_01;
  class CFP_B_UGARMY_Machine_Gunner_01;
  class CFP_B_UGARMY_Machine_Gunner_Light_01;
  class CFP_B_UGARMY_Medic_01;
  class CFP_B_UGARMY_Medic_Light_01;
  class CFP_B_UGARMY_Rifleman_01;
  class CFP_B_UGARMY_Rifleman_Light_01;
  class CFP_B_UGARMY_Rifleman_AT_01;
  class CFP_B_UGARMY_Rifleman_AT_Light_01;
  class CFP_B_UGARMY_Sniper_01;
  class CFP_B_UGARMY_Squad_Leader_01;
  class CFP_B_UGARMY_Squad_Leader_Light_01;

  class STAF_CFP_O_UGARMY_Operator_01 : CFP_B_UGARMY_Operator_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Operator_Explosive_Specialist_01 : CFP_B_UGARMY_Operator_Explosive_Specialist_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Operator_Medic_01 : CFP_B_UGARMY_Operator_Medic_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Operator_Team_Leader_01 : CFP_B_UGARMY_Operator_Team_Leader_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Asst_Gunner_DShKM_01 : CFP_B_UGARMY_Asst_Gunner_DShKM_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Asst_Gunner_Mortar_01 : CFP_B_UGARMY_Asst_Gunner_Mortar_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Asst_Gunner_SPG_01 : CFP_B_UGARMY_Asst_Gunner_SPG_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Crew_01 : CFP_B_UGARMY_Crew_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Engineer_01 : CFP_B_UGARMY_Engineer_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Engineer_Light_01 : CFP_B_UGARMY_Engineer_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Explosive_Specialist_01 : CFP_B_UGARMY_Explosive_Specialist_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Explosive_Specialist_Light_01 : CFP_B_UGARMY_Explosive_Specialist_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Grenadier_01 : CFP_B_UGARMY_Grenadier_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Grenadier_Light_01 : CFP_B_UGARMY_Grenadier_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Gunner_DShKM_01 : CFP_B_UGARMY_Gunner_DShKM_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Gunner_Mortar_01 : CFP_B_UGARMY_Gunner_Mortar_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Gunner_SPG_01 : CFP_B_UGARMY_Gunner_SPG_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Helicopter_Pilot_01 : CFP_B_UGARMY_Helicopter_Pilot_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Machine_Gunner_01 : CFP_B_UGARMY_Machine_Gunner_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Machine_Gunner_Light_01 : CFP_B_UGARMY_Machine_Gunner_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Medic_01 : CFP_B_UGARMY_Medic_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Medic_Light_01 : CFP_B_UGARMY_Medic_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Rifleman_01 : CFP_B_UGARMY_Rifleman_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Rifleman_Light_01 : CFP_B_UGARMY_Rifleman_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Rifleman_AT_01 : CFP_B_UGARMY_Rifleman_AT_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Rifleman_AT_Light_01 : CFP_B_UGARMY_Rifleman_AT_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Sniper_01 : CFP_B_UGARMY_Sniper_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Squad_Leader_01 : CFP_B_UGARMY_Squad_Leader_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Squad_Leader_Light_01 : CFP_B_UGARMY_Squad_Leader_Light_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };
  class STAF_CFP_O_UGARMY_Pilot_01 : STAF_CFP_B_UGARMY_Pilot_01 {
      side = 0;
      faction = "STAF_CFP_O_UGARMY";
  };

};
