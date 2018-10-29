class CfgGroups {
    class WEST {
        class STAF_Blacksun_SCP {
            name = "SCP Foundation";
            class Infantry {
                name = "Infantry (Mobile Task Force)";
                class STAF_Blacksun_SCP_Sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "STAF_Blacksun_SCP";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                };
                class STAF_Blacksun_SCP_Fire_Team {
                    name = "Fire Team";
                    side = 1;
                    faction = "STAF_blacksun_scp";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Grenadier";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_MG";
                    };
                };
                class STAF_Blacksun_SCP_Squad {
                    name = "Squad";
                    side = 1;
                    faction = "STAF_blacksun_scp";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Grenadier";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_MG";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_Rifleman";
                    };
                };
            };
            class SpecOps {
                name = "Special Forces (Contamination Force)";
                class STAF_Blacksun_SCP_CBRN_Fire_Team {
                    name = "Fire Team";
                    side = 1;
                    faction = "STAF_blacksun_scp";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Grenadier";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Scientist";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_MG";
                    };
                };

                class STAF_Blacksun_SCP_CBRN_Sentry {
                    name = "Sentry";
                    side = 1;
                    faction = "STAF_blacksun_scp";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman";
                    };
                };

                class STAF_Blacksun_SCP_CBRN_Squad {
                    name = "Squad";
                    side = 1;
                    faction = "STAF_blacksun_scp";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Grenadier";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Scientist";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_MG";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman";
                    };
                };
            };
        };
    };
    class EAST {
        class STAF_Blacksun_SCP_opf {
            name = "SCP Foundation";
            class Infantry {
                name = "Infantry (Mobile Task Force)";
                class STAF_Blacksun_SCP_Sentry_opf {
                    name = "Sentry";
                    side = 0;
                    faction = "STAF_Blacksun_SCP_opf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                };
                class STAF_Blacksun_SCP_Fire_Team_opf {
                    name = "Fire Team";
                    side = 0;
                    faction = "STAF_blacksun_scp_opf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Grenadier_opf";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_MG_opf";
                    };
                };
                class STAF_Blacksun_SCP_Squad_opf {
                    name = "Squad";
                    side = 0;
                    faction = "STAF_blacksun_scp_opf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Grenadier_opf";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_MG_opf";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_opf";
                    };
                };
            };
            class SpecOps {
                name = "Special Forces (Contamination Force)";
                class STAF_Blacksun_SCP_CBRN_Fire_Team_opf {
                    name = "Fire Team";
                    side = 0;
                    faction = "STAF_blacksun_scp_opf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Grenadier_opf";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Scientist_opf";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_MG_opf";
                    };
                };

                class STAF_Blacksun_SCP_CBRN_Sentry_opf {
                    name = "Sentry";
                    side = 0;
                    faction = "STAF_blacksun_scp_opf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
                    };
                };

                class STAF_Blacksun_SCP_CBRN_Squad_opf {
                    name = "Squad";
                    side = 0;
                    faction = "STAF_blacksun_scp_opf";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Grenadier_opf";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Scientist_opf";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_MG_opf";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_opf";
                    };
                };
            };
        };
    };
    class INDEP {
        class STAF_Blacksun_SCP_ind {
            name = "SCP Foundation";
            class Infantry {
                name = "Infantry (Mobile Task Force)";
                class STAF_Blacksun_SCP_Sentry_ind {
                    name = "Sentry";
                    side = 0;
                    faction = "STAF_Blacksun_SCP_ind";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                };
                class STAF_Blacksun_SCP_Fire_Team_ind {
                    name = "Fire Team";
                    side = 0;
                    faction = "STAF_blacksun_scp_ind";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Grenadier_ind";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_MG_ind";
                    };
                };
                class STAF_Blacksun_SCP_Squad_ind {
                    name = "Squad";
                    side = 0;
                    faction = "STAF_blacksun_scp_ind";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Grenadier_ind";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_MG_ind";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 0;
                        vehicle = "STAF_Blacksun_MTF_Rifleman_ind";
                    };
                };
            };
            class SpecOps {
                name = "Special Forces (Contamination Force)";
                class STAF_Blacksun_SCP_CBRN_Fire_Team_ind {
                    name = "Fire Team";
                    side = 2;
                    faction = "STAF_blacksun_scp_ind";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Grenadier_ind";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Scientist_ind";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_MG_ind";
                    };
                };

                class STAF_Blacksun_SCP_CBRN_Sentry_ind {
                    name = "Sentry";
                    side = 2;
                    faction = "STAF_blacksun_scp_ind";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
                    };
                };

                class STAF_Blacksun_SCP_CBRN_Squad_ind {
                    name = "Squad";
                    side = 2;
                    faction = "STAF_blacksun_scp_ind";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Grenadier_ind";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Scientist_ind";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
                    };
                    class Unit4 {
                        position[] = { -10 , -10 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
                    };
                    class Unit5 {
                        position[] = { 15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_MG_ind";
                    };
                    class Unit6 {
                        position[] = { -15 , -15 , 0 };
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "STAF_Blacksun_MTF_CBRN_Rifleman_ind";
                    };
                };
            };
        };
    };
};
