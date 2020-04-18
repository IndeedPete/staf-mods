class Extended_Init_EventHandlers {
    class STAF_md500 {
        class STAF_MD500_init_eh {
            init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",0,""hideFLIR"",1,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle; [(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_helismallequipment.sqf"";";
        };
    };
    class STAF_md500_defender {
        class STAF_MD500_defender_init_eh {
            init = "[(_this select 0), nil, [""hideBench"",0,""hideFries"",1,""hideFLIR"",1,""hideUSARMY"",1,""hideRACS"",1]] call BIS_fnc_initVehicle; [(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_attackhelisequipment.sqf"";";
        };
    };
    class STAF_uh60m {
        class STAF_uh60m_init_eh {
            init = "[(_this select 0), nil, [""Hide_ESSS2x"",1,""Hide_ESSS4x"",1,""Hide_Nose"",1,""Navyclan_hide"",1,""Navyclan2_hide"",1,""Blackhawk_Hide"",1,""Hide_FlirTurret"",1,""Hide_Probe"",1,""Doorcock_Hide"",0,""Filters_Hide"",1]] call BIS_fnc_initVehicle; [(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_helismallequipment.sqf"";";
        };
    };

    class STAF_rubberboat {
        class STAF_rubberboat_init_eh {
            init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_boatequipment.sqf"";";
        };
    };

    class STAF_truck_transport {
        class STAF_truck_transport_init_eh {
          init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
        };
    };
    class STAF_truck_box {
        class STAF_truck_box_init_eh {
          init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
        };
    };
    class STAF_truck_fuel {
        class STAF_truck_fuel_init_eh {
          init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";";
        };
    };
    class STAF_truck_covered {
        class STAF_truck_covered_init_eh {
          init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf"";[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
        };
    };
    class STAF_offroad {
        class STAF_offroad_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf"";";
        };
    };
    class STAF_offroad_pickup {
        class STAF_offroad_init_eh {
          init = "[(_this select 0)] execVM ""\staf_pmc_main\scripts\blacktexture.sqf""; [(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf"";";
        };
    };
    class STAF_suv {
        class STAF_suv_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf"";";
        };
    };
    class STAF_suv_2 {
        class STAF_suv_2_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf"";";
        };
    };
    class STAF_caiman {
        class STAF_caiman_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
        };
    };
    class STAF_husky_woodland {
        class STAF_husky_woodland_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
        };
    };
    class STAF_husky_desert {
        class STAF_husky_desert_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_mrapequipment.sqf"";";
        };
    };
    class STAF_lsv {
        class STAF_lsv_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_carequipment.sqf""; (_this select 0) setObjectTexture [4, """"];";
        };
    };
    class STAF_btr90 {
        class STAF_btr90_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_apcequipment.sqf"";(_this select 0) removeWeaponTurret [""CUP_Vgmg_AGS17_veh"", [0]]; (_this select 0) removeMagazinesTurret [""CUP_400Rnd_30mm_AGS17_M"",[0]];";
        };
    };

    class STAF_hexacopter {
        class STAF_hexacopter_init_eh {
          init = "(_this select 0) setcaptive true;";
        };
    };
    class STAF_hexacopter_ammo {
        class STAF_hexacopter_ammo_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_droneammoequipment.sqf""; (_this select 0) setcaptive true;";
        };
    };
    class STAF_hexacopter_medical {
        class STAF_hexacopter_medical_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_dronemedicequipment.sqf""; (_this select 0) setcaptive true;";
        };
    };
    class STAF_hexacopter_explosive {
        class STAF_hexacopter_explosive_init_eh {
          init = "[(_this select 0)] execVM ""staf_framework\fnc\loadouts\fn_droneexplosionequipment.sqf""; (_this select 0) setcaptive true;";
        };
    };
};