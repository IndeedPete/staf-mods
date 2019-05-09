class EventHandlers;
class CfgVehicles {
  //C-130
  class CUP_O_Su25_Dyn_SLA;
  class CFP_B_UGARMY_Helicopter_Pilot_01;

  class STAF_CFP_B_UGARMY_Pilot_01: CFP_B_UGARMY_Helicopter_Pilot_01 {
    name = "Pilot"
    faction = "CFP_B_UGARMY";
    displayName = "Pilot";

    linkedItems[] = {"CUP_V_B_PilotVest", "CUP_H_RUS_ZSH_Shield_Down", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS7"};
    headgearList[] = {"CUP_H_RUS_ZSH_Shield_Down",1};
    vestList[] = {"CUP_V_B_PilotVest",1};

    ALiVE_orbatCreator_loadout[] = {};
    };

  class STAF_CUP_O_Su25_Dyn_SLA: CUP_O_Su25_Dyn_SLA {
  	crew = "STAF_CFP_B_UGARMY_Pilot_01";
    faction = "CFP_B_UGARMY";
    side = 1;
    };
};
