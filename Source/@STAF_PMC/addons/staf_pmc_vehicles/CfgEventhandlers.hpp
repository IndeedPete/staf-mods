class Extended_Init_EventHandlers {

  // Heli Small: _this call STAF_PMC_fnc_fn_pmcvehicle_helismallequipment;
  class STAF_md500 {
    class STAF_MD500_init_eh {
        init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",0,""hideFLIR"",0,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle;";
    };
  };
  class STAF_uh60m {
    class STAF_uh60m_init_eh {
        init = "[(_this select 0), nil, [""Hide_ESSS2x"",1,""Hide_ESSS4x"",1,""Hide_Nose"",1,""Navyclan_hide"",1,""Navyclan2_hide"",1,""Blackhawk_Hide"",1,""Hide_FlirTurret"",1,""Hide_Probe"",1,""Doorcock_Hide"",0,""Filters_Hide"",1]] call BIS_fnc_initVehicle;";
    };
  };

  // Attack Heli: _this call STAF_PMC_fnc_pmcvehicle_attackhelisequipment;
  class STAF_md500_defender {
    class STAF_MD500_defender_init_eh {
        init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",1,""hideFLIR"",0,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle;";
    };
  };

  // MARAP: _this call STAF_PMC_fnc_pmcvehicle_mrapequipment;
  class STAF_caiman {
    class STAF_caiman_init_eh {
      init = "[(_this select 0), nil, [""hide_ogpkover"",0,""hide_ogpknet"",0,""hide_ogpkbust"",0,""DUKE_Hide"",1]] call BIS_fnc_initVehicle;";
    };
  };
  class STAF_MATV_M240 {
    class STAF_MATV_M240_init_eh {
      init = "[(_this select 0), nil, [""hide_ogpkover"",0,""hide_ogpknet"",0,""hide_ogpkbust"",0,""hide_rhino"",1,""DoorLF"",0,""DoorRF"",0,""DoorLB"",0,""DoorRB"",0,""DUKE_Hide"",1,""hide_spare"",0]] call BIS_fnc_initVehicle;";
    };
  };
  class STAF_MATV_M2 {
    class STAF_MATV_M2_init_eh {
      init = "[(_this select 0), nil, [""hide_ogpkover"",0,""hide_ogpknet"",0,""hide_ogpkbust"",0,""hide_rhino"",1,""DoorLF"",0,""DoorRF"",0,""DoorLB"",0,""DoorRB"",0,""DUKE_Hide"",1,""hide_spare"",0]] call BIS_fnc_initVehicle;";
    };
  };


  //APC:
  class STAF_btr90 {
    class STAF_btr90_init_eh {
      init = "(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]];";
    };
  };
  class STAF_bm2t {
    class STAF_bm2t_init_eh {
      init = "(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]];";
    };
  };
  class STAF_M1126_ICV_M2 {
    class STAF_M1126_ICV_M2_init_eh {
      init = "(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]];";
    };
  };
  class STAF_M1128_MGS {
    class STAF_M1128_MGS_init_eh {
      init = "(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]];";
    };
  };
  class STAF_M1130_CV_M2 {
    class STAF_M1130_CV_M2_init_eh {
      init = "(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]];";
    };
  };
  class STAF_M1129_MC_MK19 {
    class STAF_M1129_MC_MK19_init_eh {
      init = "(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]];";
    };
  };  
  class STAF_merkava {
    class STAF_merkava_init_eh {
      init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.05,0.05,0.05,1)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.05,0.05,0.05,1)'];";
    };
  };
};