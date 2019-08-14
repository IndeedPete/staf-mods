class CfgGroups
{
	class East
	{
		side = 0;
		name = "OPFOR";
		class TEC_CSAT_Navy
		{
			name = "2035 CSAT (Iran, Navy)";
			class TEC_SPECOPS
			{
				name = "Special Forces";
				class TEC_SOFDivers
				{
					faction = "TEC_CSAT_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Diver_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_Diver_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Diver_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Diver_EXP_F";
					};
				};
				class TEC_SOFDiversBoat
				{
					faction = "TEC_CSAT_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team (Boat)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Diver_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_Diver_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Diver_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Diver_EXP_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Zodiac_F";
					};
				};
				class TEC_SOFDiversSDV
				{
					faction = "TEC_CSAT_Navy";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Diver Team (SDV)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Diver_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_Diver_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Diver_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Diver_EXP_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Submarine_SDV_F";
					};
				};
			};
			class TEC_Helicopters_Navy
			{
				name = "Helicopters";
				class TEC_AttackTeam_Navy
				{
					faction = "TEC_CSAT_Navy";
					name = "Attack Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_Navy_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_Navy_F";
					};
				};
				class TEC_MEDEVACTeam_Navy
				{
					faction = "TEC_CSAT_Navy";
					name = "MEDEVAC Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Orca_Navy_MEDEVAC_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_Navy_F";
					};
				};
				class TEC_AASLTTeam_Navy
				{
					faction = "TEC_CSAT_Navy";
					name = "Air Assault Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_Navy_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Orca_Navy_F";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Orca_Navy_F";
					};
				};
			};
		};
		class TEC_CSAT
		{
			name = "2035 CSAT (Iran, Mediterranean)";
			class TEC_Infantry
			{
				name = "Infantry";
				class TEC_InfSquad
				{
					faction = "TEC_CSAT";
					name = "Rifle Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAR_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_LAT_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_F";
					};
				};
				class TEC_WeapSquad
				{
					faction = "TEC_CSAT";
					name = "Weapons Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AAR_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAT_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_A_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_F";
					};
				};
				class TEC_InfTeam
				{
					faction = "TEC_CSAT";
					name = "Fire Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_LAT_F";
					};
				};
				class TEC_ATTeam
				{
					faction = "TEC_CSAT";
					name = "Anti-Armor Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAT_F";
					};
				};
				class TEC_AATeam
				{
					faction = "TEC_CSAT";
					name = "Anti-Air Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAA_F";
					};
				};
				class TEC_InfSentry
				{
					faction = "TEC_CSAT";
					name = "Sentry";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_GL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_F";
					};
				};
			};
			class TEC_Infantry_SA
			{
				name = "Infantry (Semiarid)";
				scopeCurator = 2;
				class TEC_InfSquad_SA
				{
					faction = "TEC_CSAT";
					name = "Rifle Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_TL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AR_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AR_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AAR_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_LAT_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_Semiarid_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_F";
					};
				};
				class TEC_WeapSquad_SA
				{
					faction = "TEC_CSAT";
					name = "Weapons Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AAR_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AAT_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Semiarid_A_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Semiarid_F";
					};
				};
				class TEC_InfTeam_SA
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fire Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_LAT_F";
					};
				};
				class TEC_ATTeam_SA
				{
					faction = "TEC_CSAT";
					name = "Anti-Armor Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AT_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AAT_F";
						scope = 2;
						scopeCurator = 2;
					};
				};
				class TEC_AATeam_SA
				{
					faction = "TEC_CSAT";
					name = "Anti-Air Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AA_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AA_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_AAA_F";
						scope = 2;
						scopeCurator = 2;
					};
				};
				class TEC_InfSentry_SA
				{
					faction = "TEC_CSAT";
					name = "Sentry";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_GL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Semiarid_F";
					};
				};
			};
			class TEC_Infantry_U
			{
				name = "Infantry (Urban)";
				scopeCurator = 2;
				class TEC_InfSquad_U
				{
					faction = "TEC_CSAT";
					name = "Rifle Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_TL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AR_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AR_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AAR_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_LAT_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_Urban_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_F";
					};
				};
				class TEC_WeapSquad_U
				{
					faction = "TEC_CSAT";
					name = "Weapons Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AAR_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AAT_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Urban_A_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Urban_F";
					};
				};
				class TEC_InfTeam_U
				{
					faction = "TEC_CSAT";
					name = "Fire Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_LAT_F";
					};
				};
				class TEC_ATTeam_U
				{
					faction = "TEC_CSAT";
					name = "Anti-Armor Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AT_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AAT_F";
						scope = 2;
						scopeCurator = 2;
					};
				};
				class TEC_AATeam_U
				{
					faction = "TEC_CSAT";
					name = "Anti-Air Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AA_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AA_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_AAA_F";
						scope = 2;
						scopeCurator = 2;
					};
				};
				class TEC_InfSentry_U
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_GL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Urban_F";
					};
				};
			};
			class TEC_InfantryRecon
			{
				name = "Infantry (Recon)";
				class TEC_ReconTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Recon_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_Recon_M_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Recon_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_LAT_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_JTAC_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_EXP_F";
					};
				};
				class TEC_ReconPatrol
				{
					faction = "TEC_CSAT";
					name = "Recon Patrol";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Recon_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_Recon_M_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_F";
					};
				};
				class TEC_ReconSentry
				{
					faction = "TEC_CSAT";
					name = "Recon Sentry";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Recon_M_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_F";
					};
				};
			};
			class TEC_UAV
			{
				name = "UAV Operators";
				class TEC_MAVTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Quadcopter UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_01_F";
					};
				};
				class TEC_MAVTeam_AL6
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Hexacopter UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_UAV_AL6_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_06_F";
					};
				};
				class TEC_MAVTeam_AL6_Medical
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Hexacopter UAV Team (Medical)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_UAV_AL6_Medical_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_06_Medical_F";
					};
				};
				class TEC_MAVTeam_AL6_EOD
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Hexacopter UAV Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_UAV_AL6_Antimine_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_06_Antimine_F";
					};
				};
				class TEC_UGVTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UGV_01_F";
					};
				};
				class TEC_UGVTeam_RCWS
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UGV_01_RCWS_F";
					};
				};
				class TEC_UAVTeam_Helo
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Helicopter UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_VH_UAV_03_F";
					};
				};
				class TEC_UAVTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_VH_UAV_04_F";
					};
				};
				class TEC_UAVTeam_CAS
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_02_F";
					};
				};
			};
			class TEC_SPECOPS
			{
				name = "Special Forces";
				class TEC_SOFTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Special Forces Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_SOF_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_SOF_M_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_SOF_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_LAT_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_EXP_F";
					};
				};
				class TEC_SOFPatrol
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Special Forces Patrol";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_SOF_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_SOF_M_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_F";
					};
				};
				class TEC_SOFSentry
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Special Forces Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_SOF_M_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_F";
					};
				};
				class TEC_SniperTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Sniper_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Spotter_F";
					};
				};
				class TEC_SSniperTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Scout Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Sniper_Scout_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Spotter_Scout_F";
					};
				};
				class TEC_VSniperTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Viper Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Viper_Sniper_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Viper_Spotter_F";
					};
				};
				class TEC_ViperTeam
				{
					name = "Viper Team";
					side = 0;
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TEC_O_Viper_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TEC_O_Viper_JTAC_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TEC_O_Viper_M_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TEC_O_Viper_EXP_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TEC_O_Viper_LAT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TEC_O_Viper_Medic_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
			};
			class TEC_Support
			{
				name = "Support Infantry";
				class TEC_CLSTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (CLS)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_F";
					};
				};
				class TEC_EODTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_EXP_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_EXP_F";
					};
				};
				class TEC_ENGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (Engineer)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Engineer_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Engineer_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Repair_F";
					};
				};
				class TEC_HMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_HMG_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_GMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_GMG_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_AHMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Autonomous HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AHMG_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_AGMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Autonomous GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AGMG_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_MortTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
					name = "Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_Asst_F";
					};
				};
			};
			class TEC_Motorized
			{
				name = "Motorized Infantry";
				class TEC_MInfTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Shir_GMG";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
				};
				class TEC_MATTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Anti-Armor Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAT_F";
					};
				};
				class TEC_MMedTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Medical Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda_Ambulance";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_F";
					};
				};
				class TEC_MAATeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Anti-Air Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AA_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AA_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAA_F";
					};
				};
				class TEC_MHMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_HMG_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_MGMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_GMG_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_MAHMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Autonomous HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AHMG_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_MAGMGTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Autonomous GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AGMG_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_F";
					};
				};
				class TEC_MMortTeam
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_Asst_F";
					};
				};
				class TEC_MReinforcement
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Reinforcements";
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Truck_Tempest";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {5,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_F";
					};
					class Unit3
					{
						position[] = {5,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_LAT_F";
					};
					class Unit4
					{
						position[] = {5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_M_F";
					};
					class Unit5
					{
						position[] = {5,-8,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Soldier_TL_F";
					};
					class Unit6
					{
						position[] = {5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_AR_F";
					};
					class Unit7
					{
						position[] = {-5,-8,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_A_F";
					};
					class Unit8
					{
						position[] = {-5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_F";
					};
					class Unit9
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Soldier_TL_F";
					};
					class Unit10
					{
						position[] = {-5,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_AR_F";
					};
					class Unit11
					{
						position[] = {-5,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_GL_F";
					};
					class Unit12
					{
						position[] = {-5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_LAT_F";
					};
				};
				class TEC_MReconViperTeam
				{
					name = "Motorized Viper Recon Team";
					side = 0;
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TEC_VH_LSV_Qilin_Viper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TEC_O_Viper_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TEC_O_Viper_JTAC_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TEC_O_Viper_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TEC_O_Viper_EXP_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TEC_O_Viper_LAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TEC_O_Viper_Medic_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class TEC_MAssaultViperTeam
				{
					name = "Motorized Viper Assault Team";
					side = 0;
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TEC_VH_LSV_Qilin_Armed_Viper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TEC_O_Viper_TL_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TEC_O_Viper_JTAC_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TEC_O_Viper_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TEC_O_Viper_Exp_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TEC_O_Viper_LAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TEC_O_Viper_Medic_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			};
			class TEC_Mechanized
			{
				name = "Mechanized Infantry";
				class TEC_MEInfSquad
				{
					faction = "TEC_CSAT";
					name = "Mechanized Rifle Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_APC_Marid_F";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAR_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_LAT_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_F";
					};
				};
				class TEC_MEATSquad
				{
					faction = "TEC_CSAT";
					name = "Mechanized Anti-Armor Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_APC_Kamysh_F";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AT_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AAT_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_AAT_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAT_F";
					};
				};
				class TEC_MEAASquad
				{
					faction = "TEC_CSAT";
					name = "Mechanized Anti-Air Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_APC_Kamysh_F";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_SL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AA_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AA_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AA_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_AAA_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_AAA_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AAA_F";
					};
				};
				class TEC_MESupSquad
				{
					faction = "TEC_CSAT";
					name = "Mechanized Support Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_APC_Marid_F";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_TL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Repair_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Engineer_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_AR_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_EXP_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_A_F";
					};
				};
			};
			class TEC_Armor
			{
				name = "Armor";
				class TEC_TankPlatoon
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
				};
				class TEC_TankPlatoonHeavy
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Angara_Command";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Angara";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Angara";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_Tank_Angara";
					};
				};
				class TEC_TankPlatoon_AA
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Combined)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
				};
				class TEC_TankSection
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_F";
					};
				};
				class TEC_TankSectionHeavy
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Angara";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Angara";
					};
				};
			};
			class TEC_Artillery
			{
				name = "Artillery";
				class TEC_MLRSPlatoon
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery MLRS Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_Truck_Zamak_MLRS";
					};
				};
				class TEC_MLRSSection
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery MLRS Section";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Truck_Zamak_MLRS";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Truck_Zamak_MLRS";
					};
				};
				class TEC_SPGPlatoon
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_SPG_F";
					};
				};
				class TEC_SPGSection
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Section";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_SPG_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_Tank_Varsuk_SPG_F";
					};
				};
			};
			class TEC_Helicopters
			{
				name = "Helicopters";
				class TEC_AttackTeam
				{
					faction = "TEC_CSAT";
					name = "Attack Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_F";
					};
				};
				class TEC_HAttackTeam
				{
					faction = "TEC_CSAT";
					name = "Heavy Attack Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Kajman_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Kajman_F";
					};
				};
				class TEC_HunterKillerTeam
				{
					faction = "TEC_CSAT";
					name = "Hunter Killer Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Kajman_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_F";
					};
				};
				class TEC_MEDEVACTeam
				{
					faction = "TEC_CSAT";
					name = "MEDEVAC Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Orca_MEDEVAC_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_F";
					};
				};
				class TEC_AASLTTeam
				{
					faction = "TEC_CSAT";
					name = "Air Assault Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Keftar_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Orca_F";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Orca_F";
					};
				};
				class TEC_HAASLTTeam
				{
					faction = "TEC_CSAT";
					name = "Heavy Air Assault Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Kajman_F";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Taru_Transport_F";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_Helicopter_Taru_Transport_F";
					};
				};
			};
		};
		class TEC_CSAT_Pacific
		{
			name = "2035 CSAT (Iran, Pacific)";
			class TEC_Infantry_WL
			{
				name = "Infantry";
				scopeCurator = 2;
				class TEC_InfSquad_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Rifle Squad";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAR_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_LAT_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_Woodland_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_F";
					};
				};
				class TEC_WeapSquad_WL
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Weapons Squad";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_SL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAR_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAT_F";
						scope = 2;
						scopeCurator = 2;
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_A_F";
					};
					class Unit7
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Woodland_F";
					};
				};
				class TEC_InfTeam_WL
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Fire Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_GL_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_LAT_F";
					};
				};
				class TEC_ATTeam_WL
				{
					faction = "TEC_CSAT";
					name = "Anti-Armor Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAT_F";
						scope = 2;
						scopeCurator = 2;
					};
				};
				class TEC_AATeam_WL
				{
					faction = "TEC_CSAT";
					name = "Anti-Air Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					side = 0;
					scope = 2;
					scopeCurator = 2;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AA_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AA_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAA_F";
						scope = 2;
						scopeCurator = 2;
					};
				};
				class TEC_InfSentry_WL
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_GL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_F";
					};
				};
			};
			class TEC_SPECOPS_WL
			{
				name = "Special Forces";
				faction = "TEC_CSAT_Pacific";
				class TEC_SOFTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Special Forces Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_SOF_TL_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_SOF_M_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_Medic_Woodland_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_SOF_Woodland_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_LAT_Woodland_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_Woodland_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_EXP_Woodland_F";
					};
				};
				class TEC_SOFPatrol_WL
				{
					faction = "TEC_CSAT_Woodland";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Special Forces Patrol";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_SOF_TL_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_SOF_M_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_Medic_Woodland_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_Woodland_F";
					};
				};
				class TEC_SOFSentry_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Special Forces Sentry";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_SOF_M_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_SOF_Woodland_F";
					};
				};
				class TEC_SniperTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Sniper_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Spotter_Woodland_F";
					};
				};
				class TEC_SSniperTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Scout Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Sniper_Woodland_Scout_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Spotter_Woodland_Scout_F";
					};
				};
				class TEC_VSniperTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Viper Sniper Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Viper_Sniper_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Viper_Spotter_Woodland_F";
					};
				};
				class TEC_ViperTeam_WL
				{
					name = "Viper Team";
					side = 0;
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TEC_O_Viper_TL_Woodland_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TEC_O_Viper_JTAC_Woodland_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TEC_O_Viper_M_Woodland_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TEC_O_Viper_EXP_Woodland_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TEC_O_Viper_LAT_Woodland_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TEC_O_Viper_Medic_Woodland_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
			};
			class TEC_Support_WL
			{
				name = "Support Infantry";
				class TEC_CLSTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (CLS)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Woodland_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Woodland_F";
					};
				};
				class TEC_EODTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_EXP_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_EXP_F";
					};
				};
				class TEC_ENGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Support Team (Engineer)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Engineer_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Engineer_Woodland_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_Repair_F";
					};
				};
				class TEC_HMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_HMG_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_GMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_GMG_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_AHMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Autonomous HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AHMG_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_AGMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Autonomous GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AGMG_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_MortTeam_WL
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_mortar.paa";
					name = "Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_Asst_Woodland_F";
					};
				};
			};
			class TEC_Motorized_WL
			{
				name = "Motorized Infantry";
				class TEC_MInfTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Shir_GMG";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
				};
				class TEC_MMedTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Medical Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda_Ambulance";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Woodland_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Woodland_F";
					};
				};
				class TEC_MATTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Anti-Armor Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAT_F";
					};
				};
				class TEC_MAATeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Anti-Air Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AA_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AA_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAA_F";
					};
				};
				class TEC_MHMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_HMG_Woodland_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_MGMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_GMG_Woodland_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_MAHMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Autonomous HMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AHMG_Woodland_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_MAGMGTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Autonomous GMG Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_AGMG_Woodland_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Asst_Woodland_F";
					};
				};
				class TEC_MMortTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Mortar Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_MRAP_Abda";
					};
					class Unit1
					{
						position[] = {-10,-10,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {15,-15,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_Woodland_F";
					};
					class Unit3
					{
						position[] = {20,-20,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Support_Mortar_Asst_Woodland_F";
					};
				};
				class TEC_MReinforcement_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					name = "Motorized Reinforcements";
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Truck_Tempest";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_SL_F";
					};
					class Unit2
					{
						position[] = {5,-2,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_F";
					};
					class Unit3
					{
						position[] = {5,-4,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_LAT_F";
					};
					class Unit4
					{
						position[] = {5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_M_F";
					};
					class Unit5
					{
						position[] = {5,-8,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_TL_F";
					};
					class Unit6
					{
						position[] = {5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_AR_F";
					};
					class Unit7
					{
						position[] = {-5,-8,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_A_F";
					};
					class Unit8
					{
						position[] = {-5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Woodland_F";
					};
					class Unit9
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_TL_F";
					};
					class Unit10
					{
						position[] = {-5,-2,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_AR_F";
					};
					class Unit11
					{
						position[] = {-5,-4,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_GL_F";
					};
					class Unit12
					{
						position[] = {-5,-6,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_LAT_F";
					};
				};
				class TEC_MReconViperTeam_WL
				{
					name = "Motorized Viper Recon Team";
					side = 0;
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TEC_VH_WD_LSV_Qilin_Viper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TEC_O_Viper_TL_Woodland_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TEC_O_Viper_JTAC_Woodland_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TEC_O_Viper_M_Woodland_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TEC_O_Viper_EXP_Woodland_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TEC_O_Viper_LAT_Woodland_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TEC_O_Viper_Medic_Woodland_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class TEC_MAssaultViperTeam_WL
				{
					name = "Motorized Viper Assault Team";
					side = 0;
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side = 0;
						vehicle = "TEC_VH_WD_LSV_Qilin_Armed_Viper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TEC_O_Viper_TL_Woodland_F";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TEC_O_Viper_JTAC_Woodland_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TEC_O_Viper_M_Woodland_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TEC_O_Viper_Exp_Woodland_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TEC_O_Viper_LAT_Woodland_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TEC_O_Viper_Medic_Woodland_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			};
			class TEC_Mechanized_WL
			{
				name = "Mechanized Infantry";
				class TEC_MEInfSquad_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Mechanized Rifle Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_APC_Marid";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_SL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAR_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_LAT_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_Woodland_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_F";
					};
				};
				class TEC_MEATSquad_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Mechanized Anti-Armor Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_APC_Kamysh";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_SL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AT_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAT_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_AAT_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAT_F";
					};
				};
				class TEC_MEAASquad_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Mechanized Anti-Air Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_APC_Kamysh";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_SL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AA_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AA_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AA_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAA_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_AAA_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AAA_F";
					};
				};
				class TEC_MESupSquad_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Mechanized Support Squad";
					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_APC_Marid";
					};
					class Unit1
					{
						position[] = {5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit2
					{
						position[] = {-5,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_Repair_F";
					};
					class Unit3
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Engineer_Woodland_F";
					};
					class Unit4
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Medic_Woodland_F";
					};
					class Unit5
					{
						position[] = {5,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_AR_F";
					};
					class Unit6
					{
						position[] = {-5,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_EXP_F";
					};
					class Unit7
					{
						position[] = {0,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_medic_Woodland_F";
					};
					class Unit8
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_A_F";
					};
				};
			};
			class TEC_Armor_WL
			{
				name = "Armor";
				class TEC_TankPlatoon_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
				};
				class TEC_TankPlatoonHeavy_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Angara_Command";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Angara";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Angara";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Angara";
					};
				};
				class TEC_TankPlatoon_AA_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Platoon (Combined)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
				};
				class TEC_TankSection_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk";
					};
				};
				class TEC_TankSectionHeavy_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					name = "Tank Section (Heavy)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Angara";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Angara";
					};
				};
			};
			class TEC_Artillery_WL
			{
				name = "Artillery";
				class TEC_MLRSPlatoon_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery MLRS Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Truck_Zamak_MLRS";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Truck_Zamak_MLRS";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Truck_Zamak_MLRS";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_WD_Truck_Zamak_MLRS";
					};
				};
				class TEC_MLRSSection_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery MLRS Section";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Truck_Zamak_MLRS";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Truck_Zamak_MLRS";
					};
				};
				class TEC_SPGPlatoon_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Platoon";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk_SPG";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk_SPG";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk_SPG";
					};
					class Unit3
					{
						position[] = {40,-60,3};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk_SPG";
					};
				};
				class TEC_SPGSection_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";
					name = "Artillery SPG Section";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk_SPG";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_VH_WD_Tank_Varsuk_SPG";
					};
				};
			};
			class TEC_Helicopters_WL
			{
				name = "Helicopters";
				class TEC_AttackTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Attack Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Keftar";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Keftar";
					};
				};
				class TEC_HAttackTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Heavy Attack Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Kajman";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Kajman";
					};
				};
				class TEC_HunterKillerTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Hunter Killer Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Kajman";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Keftar";
					};
				};
				class TEC_MEDEVACTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "MEDEVAC Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Orca_MEDEVAC";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Keftar";
					};
				};
				class TEC_AASLTTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Air Assault Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Keftar";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Orca";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Orca";
					};
				};
				class TEC_HAASLTTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Heavy Air Assault Team";
					icon = "\A3\ui_f\data\map\markers\nato\o_air.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CAPTAIN";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Kajman";
					};
					class Unit1
					{
						position[] = {-20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Taru_Transport";
					};
					class Unit2
					{
						position[] = {20,-30,3};
						rank = "LIEUTENANT";
						side = 0;
						vehicle = "TEC_VH_WD_Helicopter_Taru_Transport";
					};
				};
			};
			class TEC_InfantryRecon_WL
			{
				name = "Infantry (Recon)";
				class TEC_ReconTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					name = "Recon Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Recon_TL_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_Recon_M_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_Medic_Woodland_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Recon_Woodland_F";
					};
					class Unit4
					{
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_LAT_Woodland_F";
					};
					class Unit5
					{
						position[] = {15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_JTAC_Woodland_F";
					};
					class Unit6
					{
						position[] = {-15,-15,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_EXP_Woodland_F";
					};
				};
				class TEC_ReconPatrol_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Recon Patrol";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_Recon_TL_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "Corporal";
						side = 0;
						vehicle = "TEC_O_Recon_M_Woodland_F";
					};
					class Unit2
					{
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_Medic_Woodland_F";
					};
					class Unit3
					{
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_Woodland_F";
					};
				};
				class TEC_ReconSentry_WL
				{
					faction = "TEC_CSAT_Pacific";
					name = "Recon Sentry";
					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Recon_M_Woodland_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_Recon_Woodland_F";
					};
				};
			};
			class TEC_UAV_WL
			{
				name = "UAV Operators";
				class TEC_MAVTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Quadcopter UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_01_F";
					};
				};
				class TEC_MAVTeam_WL_AL6
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Hexacopter UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_UAV_AL6_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_06_F";
					};
				};
				class TEC_MAVTeam_WL_AL6_Medical
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Hexacopter UAV Team (Medical)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_UAV_AL6_Medical_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_06_Medical_F";
					};
				};
				class TEC_MAVTeam_WL_AL6_EOD
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Hexacopter UAV Team (EOD)";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_Soldier_Woodland_UAV_AL6_Antimine_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_06_Antimine_F";
					};
				};
				class TEC_UGVTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_WD_UGV_01_F";
					};
				};
				class TEC_UGVTeam_RCWS_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UGV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_WD_UGV_01_RCWS_F";
					};
				};
				class TEC_UAVTeam_Helo_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Helicopter UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_VH_UAV_03_F";
					};
				};
				class TEC_UAVTeam_WL
				{
					faction = "TEC_CSAT_Pacific";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Recon UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_VH_UAV_04_F";
					};
				};
				class TEC_UAVTeam_CAS
				{
					faction = "TEC_CSAT";
					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
					name = "Attack UAV Team";
					side = 0;
					class Unit0
					{
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_TL_F";
					};
					class Unit1
					{
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 0;
						vehicle = "TEC_O_soldier_Woodland_UAV_F";
					};
					class Unit2
					{
						position[] = {0,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "TEC_O_UAV_02_F";
					};
				};
			};
		};
	};
};
