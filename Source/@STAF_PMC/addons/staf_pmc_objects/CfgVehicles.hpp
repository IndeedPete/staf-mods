#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define back_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgVehicles {
	class Land_MapBoard_F;
	class B_supplyCrate_F;
	class Box_NATO_Wps_F;
	class Box_NATO_Ammo_F;
	class Box_NATO_WpsLaunch_F;

	class STAF_MapBoard_CoC_F: Land_MapBoard_F
	{
		displayName = "STAF Whiteboard (Chain of Command)";
		hiddenSelectionsTextures[] = {"\staf_pmc_main\txt\WB_Chain_of_Command.paa"};
	};

	class STAF_MapBoard_MHQ_F: Land_MapBoard_F
	{
		displayName = "STAF Whiteboard (MHQ)";
		hiddenSelectionsTextures[] = {"\staf_pmc_main\txt\WB_MHQ.paa"};
	};

	/*class STAF_SupplyBox_F: B_supplyCrate_F
	{
			displayName = "Supply Box (STAF)";

			class TransportItems {
				item_xx(ACE_bloodIV,15);
				item_xx(ACE_bloodIV_500,30);
				item_xx(ACE_bloodIV_250,60);
				item_xx(ACE_bodyBag,10);
				item_xx(ACE_adenosine,20);
				item_xx(ACE_epinephrine,20);
				item_xx(ACE_morphine,20);
				item_xx(ACE_fieldDressing,50);
				item_xx(ACE_elasticBandage,50);
				item_xx(ACE_quikclot,50);
				item_xx(ACE_packingBandage,50);
				item_xx(ACE_personalAidKit,15);
				item_xx(ACE_tourniquet,20);
				item_xx(ACE_SpraypaintBlack,5);
				item_xx(ACE_SpraypaintBlue,5);
				item_xx(ACE_SpraypaintGreen,5);
				item_xx(ACE_SpraypaintRed,5);
				item_xx(ACE_CableTie,10);
				item_xx(ACE_UAVBattery,5);
				item_xx(ACE_IR_Strobe_Item,10);
				item_xx(ACE_EarPlugs,5);
			};
			class TransportMagazines {
				mag_xx(1Rnd_HE_Grenade_shell,10);
				mag_xx(UGL_FlareWhite_F,10);
				mag_xx(UGL_FlareGreen_F,10);
				mag_xx(UGL_FlareRed_F,10);
				mag_xx(UGL_FlareYellow_F,10);
				mag_xx(UGL_FlareCIR_F,10);
				mag_xx(1Rnd_Smoke_Grenade_shell,10);
				mag_xx(1Rnd_SmokeRed_Grenade_shell,10);
				mag_xx(1Rnd_SmokeGreen_Grenade_shell,10);
				mag_xx(1Rnd_SmokeYellow_Grenade_shell,10);
				mag_xx(1Rnd_SmokePurple_Grenade_shell,10);
				mag_xx(1Rnd_SmokeBlue_Grenade_shell,10);
				mag_xx(1Rnd_SmokeOrange_Grenade_shell,10);
				mag_xx(3Rnd_HE_Grenade_shell,10);
				mag_xx(3Rnd_UGL_FlareWhite_F,10);
				mag_xx(3Rnd_UGL_FlareGreen_F,10);
				mag_xx(3Rnd_UGL_FlareRed_F,10);
				mag_xx(3Rnd_UGL_FlareYellow_F,10);
				mag_xx(3Rnd_UGL_FlareCIR_F,10);
				mag_xx(3Rnd_Smoke_Grenade_shell,10);
				mag_xx(3Rnd_SmokeRed_Grenade_shell,10);
				mag_xx(3Rnd_SmokeGreen_Grenade_shell,10);
				mag_xx(3Rnd_SmokeYellow_Grenade_shell,10);
				mag_xx(3Rnd_SmokePurple_Grenade_shell,10);
				mag_xx(3Rnd_SmokeBlue_Grenade_shell,10);
				mag_xx(3Rnd_SmokeOrange_Grenade_shell,10);
				mag_xx(ACE_HuntIR_M203,5);
				mag_xx(rhs_mag_M433_HEDP,10);
				mag_xx(rhs_mag_m4009,10);
				mag_xx(rhs_mag_m576,10);
				mag_xx(ClaymoreDirectionalMine_Remote_Mag,5);
				mag_xx(DemoCharge_Remote_Mag,5);
				mag_xx(APERSTripMine_Wire_Mag,5);
				mag_xx(APERSBoundingMine_Range_Mag,3);
				mag_xx(ATMine_Range_Mag,5);
				mag_xx(SatchelCharge_Remote_Mag,10);
				mag_xx(rhs_mag_smaw_HEAA,3);
				mag_xx(rhs_mag_smaw_HEDP,3);
				mag_xx(rhs_mag_smaw_SR,3);
				mag_xx(rhs_fim92_mag,3);
				mag_xx(30Rnd_762x39_Mag_F,15);
				mag_xx(30Rnd_762x39_Mag_Tracer_F,15);
				mag_xx(hlc_5rnd_300WM_AP_AWM,5);
				mag_xx(6Rnd_45ACP_Cylinder,5);
				mag_xx(7Rnd_50_AE,5);
				mag_xx(20Rnd_762x51_Mag,15);
				mag_xx(ACE_20Rnd_762x51_Mag_Tracer,15);
				mag_xx(10Rnd_338_Mag,5);
				mag_xx(11Rnd_45ACP_Mag,10);
				mag_xx(KA_17Rnd_9x19_Mag,10);
				mag_xx(30Rnd_65x39_caseless_mag,30);
				mag_xx(30Rnd_65x39_caseless_mag_Tracer,30);
				mag_xx(5Rnd_127x108_Mag,5);
				mag_xx(7Rnd_408_Mag,5);
				mag_xx(200Rnd_556x45_Box_F,5);
				mag_xx(200Rnd_556x45_Box_Tracer_F,5);
				mag_xx(30Rnd_556x45_Stanag,30);
				mag_xx(30Rnd_556x45_Stanag_Tracer_Red,30);
				mag_xx(hlc_30Rnd_9x19_B_MP5,10);
				mag_xx(150Rnd_762x54_Box,5);
				mag_xx(150Rnd_762x54_Box_Tracer,5);
				mag_xx(50Rnd_570x28_SMG_03,10);
				mag_xx(rhsusf_5Rnd_HE,7);
				mag_xx(rhsusf_5Rnd_Slug,7);
				mag_xx(rhsusf_5Rnd_00Buck,7);
				mag_xx(rhsusf_5Rnd_FRAG,7);
			};
			class TransportWeapons {
				weap_xx(STAF_rifle_scar_blk,2);
				weap_xx(rhs_weap_M136,2);
				weap_xx(rhs_weap_M136_hedp,2);
				weap_xx(rhs_weap_M136_hp,2);
				weap_xx(STAF_launcher_smaw,1);
			};
			class TransportBackpacks {};
	};*/

	class STAF_Ammobox_F: Box_NATO_Ammo_F
	{
			displayName = "Basic Ammo (STAF)";
			maximumLoad = 150;
			model = "\a3\weapons_f\ammoboxes\AmmoBox_F.p3d";
			hiddenSelections[] = {"Camo_Signs","Camo"};
			hiddenSelectionsTextures[] = {"plp_containers\data\empty.paa","plp_containers\data\plasticBlack.paa"};

			class TransportMagazines {
				mag_xx(30Rnd_556x45_Stanag,30);
				mag_xx(20Rnd_762x51_Mag,10);
				mag_xx(KA_17Rnd_9x19_Mag,15);
				mag_xx(hlc_30Rnd_9x19_B_MP5,10);
				mag_xx(hlc_200rnd_556x45_M_SAW,2);
				mag_xx(rhs_mag_smaw_HEAA,2);
				mag_xx(rhs_mag_smaw_SR,1);
				mag_xx(SmokeShell,15);
				mag_xx(SmokeShellGreen,7);
				mag_xx(SmokeShellRed,7);
				mag_xx(HandGrenade,15);
				mag_xx(ACE_M14,5);
				mag_xx(ACE_M84,10);
				mag_xx(1Rnd_HE_Grenade_shell,10);
				mag_xx(3Rnd_HE_Grenade_shell,2);
				mag_xx(1Rnd_SmokeGreen_Grenade_shell,5);
				mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
				mag_xx(1Rnd_Smoke_Grenade_shell,10);
				mag_xx(3Rnd_SmokeGreen_Grenade_shell,1);
				mag_xx(3Rnd_SmokeRed_Grenade_shell,1);
				mag_xx(3Rnd_Smoke_Grenade_shell,2);
			};
	};

	class STAF_Weaponsbox_F: Box_NATO_Wps_F
	{
			displayName = "Basic Weapons (STAF)";
			maximumLoad = 250;
			model = "\a3\weapons_f\ammoboxes\WpnsBox_F.p3d";
			hiddenSelections[] = {"Camo_Signs","Camo"};
			hiddenSelectionsTextures[] = {"plp_containers\data\empty.paa","plp_containers\data\plasticBlack.paa"};

			class TransportWeapons {
				weap_xx(STAF_rifle_scar_blk_xps,3);
				weap_xx(STAF_rifle_scar_gl_blk_xps,1);
				weap_xx(STAF_rifle_m249,1);
				weap_xx(STAF_rifle_mp5,2);
				weap_xx(STAF_rifle_m14,1);
				weap_xx(STAF_pistol_glock17,5);
			};
			class TransportMagazines {
				mag_xx(30Rnd_556x45_Stanag,16);
				mag_xx(20Rnd_762x51_Mag,6);
				mag_xx(KA_17Rnd_9x19_Mag,9);
				mag_xx(hlc_30Rnd_9x19_B_MP5,8);
				mag_xx(hlc_200rnd_556x45_M_SAW,3);
				mag_xx(SmokeShell,15);
				mag_xx(SmokeShellGreen,7);
				mag_xx(SmokeShellRed,7);
				mag_xx(HandGrenade,15);
				mag_xx(ACE_M14,5);
				mag_xx(ACE_M84,10);
				mag_xx(1Rnd_HE_Grenade_shell,10);
				mag_xx(3Rnd_HE_Grenade_shell,2);
				mag_xx(1Rnd_SmokeGreen_Grenade_shell,5);
				mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
				mag_xx(1Rnd_Smoke_Grenade_shell,10);
				mag_xx(3Rnd_SmokeGreen_Grenade_shell,1);
				mag_xx(3Rnd_SmokeRed_Grenade_shell,1);
				mag_xx(3Rnd_Smoke_Grenade_shell,2);
			};
	};

	class STAF_Launcherbox_F: Box_NATO_WpsLaunch_F
	{
			displayName = "Launchers (STAF)";
			model = "\a3\weapons_f\ammoboxes\WpnsBox_long_F.p3d";
			maximumLoad = 350;
			hiddenSelections[] = {"Camo_Signs","Camo"};
			hiddenSelectionsTextures[] = {"plp_containers\data\empty.paa","plp_containers\data\plasticBlack.paa"};

			class TransportWeapons {
				weap_xx(STAF_launcher_smaw,2);
				weap_xx(STAF_launcher_m136_heat,3);
				weap_xx(STAF_launcher_m136_hedp,3);
				weap_xx(STAF_launcher_m136_hp,3);
			};
			class TransportMagazines {
				mag_xx(rhs_mag_smaw_HEAA,10);
				mag_xx(rhs_mag_smaw_SR,2);
			};
	};

	/*class STAF_SupplyBox_F: B_supplyCrate_F
	{
			displayName = "NAME";
			model = "\a3\weapons_f\ammoboxes\AmmoBox_F.p3d";
			hiddenSelections[] = {"Camo_Signs","Camo"};
			hiddenSelectionsTextures[] = {"plp_containers\data\empty.paa","plp_containers\data\plasticBlack.paa"};

			class TransportItems {
				//item_xx(CLASS,COUNT);
			};
			class TransportMagazines {
				//mag_xx(CLASS,COUNT);
			};
			class TransportWeapons {
				//weap_xx(CLASS,COUNT);
			};
			class TransportBackpacks {
				//back_xx(CLASS,COUNT);
			};
	};*/
};
