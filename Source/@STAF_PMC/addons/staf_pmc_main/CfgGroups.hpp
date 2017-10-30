class CfgGroups {
    class WEST {

        class STAF_PMC {
            name = "Security Tactics and Assault Force";

            class Infantry {
                name = "Infantry";

                class STAF_PMC_Sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                };

                class STAF_PMC_Fire_Team {
                    name = "Fire Team";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_at";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_mg";
                    };
                };

                class STAF_PMC_Squad {
                    name = "Squad";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_marksman";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_engineer";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_medic";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_at";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_mg";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

                class STAF_PMC_Engineer_Sentry {
                    name = "Engineer Sentry";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_contractor_engineer";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_engineer";
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";

                class STAF_PMC_SUV_Team {
                    name = "SUV Team";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_suv";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                };

                class STAF_PMC_Jeep_Team {
                    name = "Jeep Team";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_offroad";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                };

                class STAF_PMC_Offroad_Team {
                    name = "Offroad Team";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_offroad_pickup";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_mg";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_marksman";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_engineer";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

                class STAF_PMC_Assault_Boat_Team {
                    name = "Assault Boat Team";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_rubberboat";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_marksman";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_mg";
                    };
                };

            };

            class Air {
                name = "Air";

            };


        };

    };
};
