//////////////////////////////////////////////////////////////////////////////////

class CfgPatches {
    class STAF_csat_additions {
      units[] = {
        "STAF_O_SAM_System_02_F",
        "STAF_O_Ship_MRLS_01_F",
        "STAF_O_Ship_Gun_01_F",
        "STAF_O_SAM_System_01_F",
        "STAF_O_AAA_System_01_F",
        "STAF_O_T_SAM_System_02_F",
        "STAF_O_T_Ship_MRLS_01_F",
        "STAF_O_T_Ship_Gun_01_F",
        "STAF_O_T_SAM_System_01_F",
        "STAF_O_T_AAA_System_01_F",
        "STAF_O_UGV_02_Demining_F",
        "STAF_O_UGV_02_Science_F",
        "STAF_O_T_UGV_02_Demining_F",
        "STAF_O_T_UGV_02_Science_F",
        "STAF_CBA_O_InvisibleTarget",
        "STAF_CBA_O_T_InvisibleTarget",
        "STAF_ACE_O_SpottingScope",
        "STAF_ACE_O_T_SpottingScope"
      };
      weapons[] = {};
      requiredAddons[] = {
			     "cba_ai",
           "ACE_SpottingScope",
           "cfp_main",
           "TEC_CSAT",
            "A3_Data_F_Loadorder",
            "A3_Data_F_Curator_Loadorder",
            "A3_Data_F_Kart_Loadorder",
            "A3_Data_F_Bootcamp_Loadorder",
            "A3_Data_F_Heli_Loadorder",
            "A3_Data_F_Mark_Loadorder",
            "A3_Data_F_Exp_A_Loadorder",
            "A3_Data_F_Exp_B_Loadorder",
            "A3_Data_F_Exp_Loadorder",
            "A3_Data_F_Jets_Loadorder",
            "A3_Data_F_Argo_Loadorder",
            "A3_Data_F_Patrol_Loadorder",
            "A3_Data_F_Orange_Loadorder",
            "A3_Data_F_Tacops_Loadorder",
            "A3_Data_F_Tank_Loadorder",
            
            // CBA
            "cba_ui",
            "cba_xeh",
            "cba_jr",

            // CUP
            "CUP_BaseConfigs",
            "CUP_Creatures_People_Core",
            "CUP_Vehicles_Core",
            "CUP_Weapons_WeaponsCore"
      };
      requiredVersion = 1.62;
      author = "STAF";
      url = "http://www.stafclan.com";
    };
};
