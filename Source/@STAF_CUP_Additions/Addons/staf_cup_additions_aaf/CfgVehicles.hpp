class EventHandlers;
class CfgVehicles {
  //C-130
  class CUP_C130J_Base;
  class CUP_C130J_VIV_Base;

  class CUP_I_C130J_AAF: CUP_C130J_Base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_I_C130J_Cargo_AAF: CUP_C130J_VIV_Base {
    scope = 1;
    scopeCurator = 1;
    };

  class STAF_CUP_I_C130J_AAF: CUP_I_C130J_AAF {
    editorPreview = "\staf_cup_additions_aaf\eden\STAF_CUP_I_C130J_AAF.jpg";
    hiddenSelectionsTextures[] = {"staf_cup_additions_AAF\txt\c130j_body_AAF.paa","staf_cup_additions_AAF\txt\c130j_wings_co_aaf.paa"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_I_C130J_Cargo_AAF: CUP_I_C130J_Cargo_AAF {
    editorPreview = "\staf_cup_additions_aaf\eden\STAF_CUP_I_C130J_Cargo_AAF.jpg";
    hiddenSelectionsTextures[] = {"staf_cup_additions_AAF\txt\c130j_body_AAF.paa","staf_cup_additions_AAF\txt\c130j_wings_co_aaf.paa"};
    scope = 2;
    scopeCurator = 2;
    };
};
