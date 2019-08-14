class CfgVehicles {
  //Ship Weapons

  class B_SAM_System_02_F;
  class B_Ship_MRLS_01_F;
  class B_Ship_Gun_01_F;
  class B_SAM_System_01_F;
  class B_AAA_System_01_F;
  class O_UGV_02_Demining_F;
  class O_UGV_02_Science_F;
  class B_TargetSoldier;
  class ACE_SpottingScopeObject;

  class STAF_O_SAM_System_02_F: B_SAM_System_02_F {
    faction = "TEC_CSAT";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_Ship_MRLS_01_F: B_Ship_MRLS_01_F {
    faction = "TEC_CSAT";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_Ship_Gun_01_F: B_Ship_Gun_01_F {
    faction = "TEC_CSAT";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_SAM_System_01_F: B_SAM_System_01_F {
    faction = "TEC_CSAT";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_AAA_System_01_F: B_AAA_System_01_F {
    faction = "TEC_CSAT";
    side = 0;
		crew = "O_UAV_AI";
  };

  class STAF_O_T_SAM_System_02_F: B_SAM_System_02_F {
    faction = "TEC_CSAT_Pacific";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_T_Ship_MRLS_01_F: B_Ship_MRLS_01_F {
    faction = "TEC_CSAT_Pacific";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_T_Ship_Gun_01_F: B_Ship_Gun_01_F {
    faction = "TEC_CSAT_Pacific";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_T_SAM_System_01_F: B_SAM_System_01_F {
    faction = "TEC_CSAT_Pacific";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_T_AAA_System_01_F: B_AAA_System_01_F {
    faction = "TEC_CSAT_Pacific";
    side = 0;
		crew = "O_UAV_AI";
  };

  class STAF_O_UGV_02_Demining_F: O_UGV_02_Demining_F {
    faction = "TEC_CSAT";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_UGV_02_Science_F: O_UGV_02_Science_F {
    faction = "TEC_CSAT";
    side = 0;
		crew = "O_UAV_AI";
  };
  class STAF_O_T_UGV_02_Demining_F: STAF_O_UGV_02_Demining_F {
    faction = "TEC_CSAT_Pacific";
  };
  class STAF_O_T_UGV_02_Science_F: STAF_O_UGV_02_Science_F {
    faction = "TEC_CSAT_Pacific";
  };

  class CBA_O_InvisibleTarget: B_TargetSoldier
  {
    scope = 1;
    scopeCurator = 1;
  };
  class CBA_O_T_InvisibleTarget: B_TargetSoldier
  {
    scope = 1;
    scopeCurator = 1;
  };
  class STAF_CBA_O_InvisibleTarget: CBA_O_InvisibleTarget {
    faction = "TEC_CSAT";
  };
  class STAF_CBA_O_T_InvisibleTarget: CBA_O_T_InvisibleTarget {
    faction = "TEC_CSAT_Pacific";
  };

  class ACE_O_SpottingScope: ACE_SpottingScopeObject
  {
    scope = 1;
    scopeCurator = 1;
  };
  class STAF_ACE_O_SpottingScope: ACE_O_SpottingScope {
    faction = "TEC_CSAT";
  };
  class STAF_ACE_O_T_SpottingScope: ACE_O_SpottingScope {
    faction = "TEC_CSAT_Pacific";
  };
};
