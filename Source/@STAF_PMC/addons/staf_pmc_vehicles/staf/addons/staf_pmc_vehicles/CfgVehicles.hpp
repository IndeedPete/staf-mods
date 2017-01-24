class CfgVehicles {

    class B_Heli_Light_01_F;
    class B_Heli_Light_01_armed_F;
    class O_Heli_Light_02_unarmed_F;
    class O_T_VTOL_02_infantry_grey_F;
    class O_T_VTOL_02_vehicle_grey_F;
    class sab_falcon;
    class rhsusf_M1117_O;
    class B_Boat_Transport_01_F;
    class B_Boat_Armed_01_minigun_F;
    class I_C_Boat_Transport_02_F;
    class B_SDV_01_F;
    class B_MRAP_01_F;
    class B_MRAP_01_hmg_F;
    class B_LSV_01_unarmed_F;
    class B_LSV_01_armed_F;
    class B_Quadbike_01_F;
    class C_Truck_02_transport_F;
    class C_Truck_02_box_F;
    class C_Truck_02_fuel_F;
    class C_Offroad_02_unarmed_F;
    class C_Offroad_01_F;
    class C_SUV_01_F;
    class B_UAV_01_F;

    class STAF_mh6 : B_Heli_Light_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 Little Bird";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_mh6.jpg";
    };

    class STAF_ah6 : B_Heli_Light_01_armed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6 Little Bird";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_ah6.jpg";
    };

    class STAF_ka50 : O_Heli_Light_02_unarmed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot_heavy";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_ka50.jpg";
    };

    class STAF_falcon : sab_falcon {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dassault Falcon 50";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_pilot";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_falcon.jpg";
    };

    class STAF_vtol_infantry : O_T_VTOL_02_infantry_grey_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot_heavy";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_vtol_infantry.jpg";
    };

    class STAF_vtol_vehicle : O_T_VTOL_02_vehicle_grey_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot_heavy";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_vtol_vehicle.jpg";
    };

    class STAF_m1117 : rhsusf_M1117_O {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1117 ASV (OD)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAFF_m1117.jpg";
    };

    class STAF_rubberboat : B_Boat_Transport_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_diver_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_rubberboat.jpg";
    };

    class STAF_rhib : I_C_Boat_Transport_02_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_rhib.jpg";
    };

    class STAF_sdv : B_SDV_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_diver_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_sdv.jpg";
    };

    class STAF_mrap : B_MRAP_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_mrap.jpg";
    };

    class STAF_mrap_hmg : B_MRAP_01_hmg_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (HMG)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_mrap_hmg.jpg";
    };

    class STAF_lsv : B_LSV_01_unarmed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prowler (Unarmed)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_lsv.jpg";
    };

    class STAF_lsv_hmg : B_LSV_01_armed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prowler (Armed)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_lsv_hmg.jpg";
    };

    class STAF_quadbike : B_Quadbike_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_quadbike.jpg";
    };

    class STAF_truck_transport : C_Truck_02_transport_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_truck_transport.jpg";
    };

    class STAF_truck_box : C_Truck_02_box_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Repair";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_truck_repair.jpg";
    };

    class STAF_truck_fuel : C_Truck_02_fuel_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Fuel";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_truck_fuel.jpg";
    };

    class STAF_offroad : C_Offroad_02_unarmed_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_offroad.jpg";
    };

    class STAF_offroad_pickup : C_Offroad_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_offroad_hmg.jpg";
    };

    class STAF_suv : C_SUV_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_suv.jpg";
    };

    class STAF_quadcopter : B_UAV_01_F {
        author = "STAF";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "STAF_PMC";
        crew = "B_UAV_AI";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\eden\STAF_quadcopter.jpg";
    };
};
