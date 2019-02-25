class EventHandlers;
class CfgVehicles {
  //C-130
  class CUP_B_C130J_USMC;
  class CUP_B_C130J_Cargo_USMC;

  class STAF_CUP_O_C130J_CSAT: CUP_B_C130J_USMC {
  	crew = "O_helipilot_F";
    editorPreview = "\staf_cup_additions_csat\eden\STAF_CUP_O_C130J_CSAT.jpg";
    faction = "OPF_F";
    typicalCargo[] = {"O_helipilot_F"};
    hiddenSelectionsTextures[] = {"staf_cup_additions_csat\txt\c130j_body_csat.paa","staf_cup_additions_csat\txt\c130j_wings_co_csat.paa"};
    side = 0;
    };
  class STAF_CUP_O_C130J_Cargo_CSAT: CUP_B_C130J_Cargo_USMC {
  	crew = "O_helipilot_F";
    editorPreview = "\staf_cup_additions_csat\eden\STAF_CUP_O_C130J_Cargo_CSAT.jpg";
    faction = "OPF_F";
    typicalCargo[] = {"O_helipilot_F"};
    hiddenSelectionsTextures[] = {"staf_cup_additions_csat\txt\c130j_body_csat.paa","staf_cup_additions_csat\txt\c130j_wings_co_csat.paa"};
    side = 0;
    };
};
