class CfgGroups {
    class WEST {
        class STAF_PMC_Groups {
            name = "Security Tactics and Assault Force";

            class Infantry {
                name = "Infantry";

                class STAF_Fireteam {
                    name = "Fireteam";
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
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STAF_contractor_mg";
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
                        vehicle = "STAF_contractor_AT";
                    };
                };

                class STAF_Riflesquad {
                    name = "Rifle Squad";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STAF_contractor_mg";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "STAF_contractor_marksman";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_contractor_medic";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor_AT";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                    class Unit7 {
                        position[] = { 20 , -20 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_contractor";
                    };
                };

                class STAF_Recon {
                    name = "Recon Sentry (#4)";
                    side = 1;
                    faction = "STAF_PMC";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "CORPORAL";
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
            };
        };
    };
};
