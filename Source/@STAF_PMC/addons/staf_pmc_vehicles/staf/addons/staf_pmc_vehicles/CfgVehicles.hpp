class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_Heli_Light_01_F;
    class B_Heli_Light_01_F_OCimport_01 : B_Heli_Light_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Heli_Light_01_F_OCimport_02 : B_Heli_Light_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class B_Heli_Light_01_armed_F;
    class B_Heli_Light_01_armed_F_OCimport_01 : B_Heli_Light_01_armed_F { scope = 0; class EventHandlers; };
    class B_Heli_Light_01_armed_F_OCimport_02 : B_Heli_Light_01_armed_F_OCimport_01 { scope = 0; class EventHandlers; };

    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Light_02_unarmed_F_OCimport_01 : O_Heli_Light_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class O_Heli_Light_02_unarmed_F_OCimport_02 : O_Heli_Light_02_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CopilotTurret;
        };
    };

    class O_T_VTOL_02_infantry_grey_F;
    class O_T_VTOL_02_infantry_grey_F_OCimport_01 : O_T_VTOL_02_infantry_grey_F { scope = 0; class EventHandlers; class Turrets; };
    class O_T_VTOL_02_infantry_grey_F_OCimport_02 : O_T_VTOL_02_infantry_grey_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class GunnerTurret;
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class O_T_VTOL_02_vehicle_grey_F;
    class O_T_VTOL_02_vehicle_grey_F_OCimport_01 : O_T_VTOL_02_vehicle_grey_F { scope = 0; class EventHandlers; class Turrets; };
    class O_T_VTOL_02_vehicle_grey_F_OCimport_02 : O_T_VTOL_02_vehicle_grey_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class GunnerTurret;
        };
    };

    class RHS_Mi24V_AT_vvs;
    class RHS_Mi24V_AT_vvs_OCimport_01 : RHS_Mi24V_AT_vvs { scope = 0; class EventHandlers; class Turrets; };
    class RHS_Mi24V_AT_vvs_OCimport_02 : RHS_Mi24V_AT_vvs_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class sab_falcon;
    class sab_falcon_OCimport_01 : sab_falcon { scope = 0; class EventHandlers; class Turrets; };
    class sab_falcon_OCimport_02 : sab_falcon_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class rhsusf_M1117_O;
    class rhsusf_M1117_O_OCimport_01 : rhsusf_M1117_O { scope = 0; class EventHandlers; class Turrets; };
    class rhsusf_M1117_O_OCimport_02 : rhsusf_M1117_O_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
            class MainTurret_Out;
            class MainTurret2_Out;
        };
    };

    class B_Boat_Transport_01_F;
    class B_Boat_Transport_01_F_OCimport_01 : B_Boat_Transport_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Boat_Transport_01_F_OCimport_02 : B_Boat_Transport_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class B_Boat_Armed_01_minigun_F;
    class B_Boat_Armed_01_minigun_F_OCimport_01 : B_Boat_Armed_01_minigun_F { scope = 0; class EventHandlers; class Turrets; };
    class B_Boat_Armed_01_minigun_F_OCimport_02 : B_Boat_Armed_01_minigun_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class FrontTurret;
            class RearTurret;
        };
    };

    class I_C_Boat_Transport_02_F;
    class I_C_Boat_Transport_02_F_OCimport_01 : I_C_Boat_Transport_02_F { scope = 0; class EventHandlers; class Turrets; };
    class I_C_Boat_Transport_02_F_OCimport_02 : I_C_Boat_Transport_02_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
        };
    };

    class B_SDV_01_F;
    class B_SDV_01_F_OCimport_01 : B_SDV_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_SDV_01_F_OCimport_02 : B_SDV_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CommanderTurret;
        };
    };

    class B_MRAP_01_F;
    class B_MRAP_01_F_OCimport_01 : B_MRAP_01_F { scope = 0; class EventHandlers; };
    class B_MRAP_01_F_OCimport_02 : B_MRAP_01_F_OCimport_01 { scope = 0; class EventHandlers; };

    class B_MRAP_01_hmg_F;
    class B_MRAP_01_hmg_F_OCimport_01 : B_MRAP_01_hmg_F { scope = 0; class EventHandlers; class Turrets; };
    class B_MRAP_01_hmg_F_OCimport_02 : B_MRAP_01_hmg_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class B_LSV_01_unarmed_F;
    class B_LSV_01_unarmed_F_OCimport_01 : B_LSV_01_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class B_LSV_01_unarmed_F_OCimport_02 : B_LSV_01_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class B_LSV_01_armed_F;
    class B_LSV_01_armed_F_OCimport_01 : B_LSV_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class B_LSV_01_armed_F_OCimport_02 : B_LSV_01_armed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class TopTurret;
            class CodRiverTurret;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class B_Quadbike_01_F;
    class B_Quadbike_01_F_OCimport_01 : B_Quadbike_01_F { scope = 0; class EventHandlers; };
    class B_Quadbike_01_F_OCimport_02 : B_Quadbike_01_F_OCimport_01 { scope = 0; class EventHandlers; };

    class C_Truck_02_transport_F;
    class C_Truck_02_transport_F_OCimport_01 : C_Truck_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Truck_02_transport_F_OCimport_02 : C_Truck_02_transport_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class C_Offroad_02_unarmed_F;
    class C_Offroad_02_unarmed_F_OCimport_01 : C_Offroad_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_02_unarmed_F_OCimport_02 : C_Offroad_02_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class C_Offroad_01_F;
    class C_Offroad_01_F_OCimport_01 : C_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_F_OCimport_02 : C_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class C_SUV_01_F;
    class C_SUV_01_F_OCimport_01 : C_SUV_01_F { scope = 0; class EventHandlers; };
    class C_SUV_01_F_OCimport_02 : C_SUV_01_F_OCimport_01 { scope = 0; class EventHandlers; };

    class B_UAV_01_F;
    class B_UAV_01_F_OCimport_01 : B_UAV_01_F { scope = 0; class EventHandlers; class Turrets; };
    class B_UAV_01_F_OCimport_02 : B_UAV_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };
    class STAF_mh6 : B_Heli_Light_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "MH-6 Little Bird";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_mh6.jpg";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_ah6 : B_Heli_Light_01_armed_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH-6 Little Bird";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_ah6m_l.jpg";

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_ka50 : O_Heli_Light_02_unarmed_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ka-60 Kasatka (unarmed)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot_heavy";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_ka50.jpg";

        class Turrets : Turrets {
            class CopilotTurret : CopilotTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_falcon : sab_falcon_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Dassault Falcon 50";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_pilot";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_falcon.jpg";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_vtol_infantry : O_T_VTOL_02_infantry_grey_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot_heavy";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_vtol_infantry.jpg";

        class Turrets : Turrets {
            class GunnerTurret : GunnerTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_vtol_vehicle : O_T_VTOL_02_vehicle_grey_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot_heavy";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_vtol_vehicle.jpg";

        class Turrets : Turrets {
            class GunnerTurret : GunnerTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_mi24v_at : RHS_Mi24V_AT_vvs_OCimport_02 {
        author = "Moony";
        scope = 2;
        scopeCurator = 2;
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_helipilot_heavy";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_m1117 : rhsusf_M1117_O_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "M1117 ASV (OD)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAFF_m1117.jpg";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = "rhsusf_army_ucp_grenadier"; };
            class MainTurret_Out : MainTurret_Out { gunnerType = ""; };
            class MainTurret2_Out : MainTurret2_Out { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_rubberboat : B_Boat_Transport_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Assault Boat";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_diver_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_rubberboat.jpg";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_rhib : I_C_Boat_Transport_02_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "RHIB";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_rhib.jpg";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_sdv : B_SDV_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "SDV";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_diver_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_sdv.jpg";

        class Turrets : Turrets {
            class CommanderTurret : CommanderTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_mrap : B_MRAP_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_mrap.jpg";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_mrap_hmg : B_MRAP_01_hmg_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "M-ATV (HMG)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_mrap_hmg.jpg";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_lsv : B_LSV_01_unarmed_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prowler (Unarmed)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_lsv.jpg";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_lsv_hmg : B_LSV_01_armed_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Prowler (Armed)";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_lsv_hmg.jpg";

        class Turrets : Turrets {
            class TopTurret : TopTurret { gunnerType = ""; };
            class CodRiverTurret : CodRiverTurret { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_quadbike : B_Quadbike_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Quad Bike";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_quadbike.jpg";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_truck : C_Truck_02_transport_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak Transport";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_truck.jpg";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_offroad : C_Offroad_02_unarmed_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Jeep Wrangler";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_offroad.jpg";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_offroad_hmg : C_Offroad_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_offroad_hmg.jpg";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_suv : C_SUV_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 1;
        faction = "STAF_PMC";
        crew = "STAF_contractor_mx";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_suv.jpg";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };

    class STAF_quadcopter : B_UAV_01_F_OCimport_02 {
        author = "STAF|Moony";
        scope = 2;
        scopeCurator = 2;
        displayName = "AR-2 Darter";
        side = 1;
        faction = "STAF_PMC";
        crew = "B_UAV_AI";
        editorPreview = "\staf_pmc_vehicles\staf\addons\staf_pmc_vehicles\STAF_quadcopter.jpg";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
    };
};
