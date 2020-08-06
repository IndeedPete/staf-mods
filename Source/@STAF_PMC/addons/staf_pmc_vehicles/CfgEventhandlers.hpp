class Extended_Init_EventHandlers {

  // Heli Small: _this call STAF_PMC_fnc_fn_pmcvehicle_helismallequipment;
  class STAF_md500 {
      class STAF_MD500_init_eh {
          init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",0,""hideFLIR"",1,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle; _this call STAF_PMC_fnc_fn_pmcvehicle_helismallequipment;";
      };
  };
  class STAF_uh60m {
      class STAF_uh60m_init_eh {
          init = "[(_this select 0), nil, [""Hide_ESSS2x"",1,""Hide_ESSS4x"",1,""Hide_Nose"",1,""Navyclan_hide"",1,""Navyclan2_hide"",1,""Blackhawk_Hide"",1,""Hide_FlirTurret"",1,""Hide_Probe"",1,""Doorcock_Hide"",0,""Filters_Hide"",1]] call BIS_fnc_initVehicle; _this call STAF_PMC_fnc_fn_pmcvehicle_helismallequipment;";
      };
  };
  class STAF_uh1h {
      class STAF_uh1h_init_eh {
          init = "_this call STAF_PMC_fnc_fn_pmcvehicle_helismallequipment;";
      };
  };

  // Attack Heli: _this call STAF_PMC_fnc_pmcvehicle_attackhelisequipment;
  class STAF_md500_defender {
      class STAF_MD500_defender_init_eh {
          init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",1,""hideFLIR"",1,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle; _this call STAF_PMC_fnc_pmcvehicle_attackhelisequipment;";
      };
  };

  // Boat: _this call STAF_PMC_fnc_pmcvehicle_boatequipment;
  class STAF_rubberboat {
      class STAF_rubberboat_init_eh {
          init = "_this call STAF_PMC_fnc_pmcvehicle_boatequipment;";
      };
  };

  // MARAP: _this call STAF_PMC_fnc_pmcvehicle_mrapequipment;
  class STAF_truck_transport {
      class STAF_truck_transport_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_mrapequipment;";
      };
  };
  class STAF_truck_box {
      class STAF_truck_box_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_mrapequipment;";
      };
  };
  class STAF_truck_covered {
      class STAF_truck_covered_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_mrapequipment;";
      };
  };
  class STAF_caiman {
      class STAF_caiman_init_eh {
        init = "[(_this select 0), nil, [""hide_ogpkover"",0,""hide_ogpknet"",0,""hide_ogpkbust"",0,""DUKE_Hide"",1]] call BIS_fnc_initVehicle; _this call STAF_PMC_fnc_pmcvehicle_mrapequipment;";
      };
  };
  class STAF_MATV_M240 {
      class STAF_MATV_M240_init_eh {
        init = "[(_this select 0), nil, [""hide_ogpkover"",0,""hide_ogpknet"",0,""hide_ogpkbust"",0,""hide_rhino"",1,""DoorLF"",0,""DoorRF"",0,""DoorLB"",0,""DoorRB"",0,""DUKE_Hide"",1,""hide_spare"",0]] call BIS_fnc_initVehicle; _this call STAF_PMC_fnc_pmcvehicle_mrapequipment;";
      };
  };
  class STAF_MATV_M2 {
      class STAF_MATV_M2_init_eh {
        init = "[(_this select 0), nil, [""hide_ogpkover"",0,""hide_ogpknet"",0,""hide_ogpkbust"",0,""hide_rhino"",1,""DoorLF"",0,""DoorRF"",0,""DoorLB"",0,""DoorRB"",0,""DUKE_Hide"",1,""hide_spare"",0]] call BIS_fnc_initVehicle; _this call STAF_PMC_fnc_pmcvehicle_mrapequipment;";
      };
  };

  // Car: _this call STAF_PMC_fnc_pmcvehicle_carequipment;
  class STAF_offroad {
      class STAF_offroad_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_carequipment;";
      };
  };
  class STAF_offroad_pickup {
      class STAF_offroad_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_carequipment;";
      };
  };
  class STAF_suv {
      class STAF_suv_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_carequipment;";
      };
  };
  class STAF_suv_2 {
      class STAF_suv_2_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_carequipment;";
      };
  };
  class STAF_lsv {
      class STAF_lsv_init_eh {
        init = "(_this select 0) setObjectTexture [4, """"]; _this call STAF_PMC_fnc_pmcvehicle_carequipment;";
      };
  };

  //APC: _this call STAF_PMC_fnc_pmcvehicle_apcequipment;
  class STAF_btr90 {
      class STAF_btr90_init_eh {
        init = "(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]]; _this call STAF_PMC_fnc_pmcvehicle_apcequipment;";
      };
  };

  // Drone Equipment: _this call STAF_PMC_fnc_pmcvehicle_droneammoequipment;
  class STAF_hexacopter_ammo {
      class STAF_hexacopter_ammo_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_droneammoequipment;";
      };
  };

  // Drone Medical: _this call STAF_PMC_fnc_pmcvehicle_dronemedicequipment;
  class STAF_hexacopter_medical {
      class STAF_hexacopter_medical_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_dronemedicequipment;";
      };
  };

  //Drone Explosive: _this call STAF_PMC_fnc_pmcvehicle_droneexplosionequipment;
  class STAF_hexacopter_explosive {
      class STAF_hexacopter_explosive_init_eh {
        init = "_this call STAF_PMC_fnc_pmcvehicle_droneexplosionequipment;";
      };
  };
};