#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define back_xx(a,b) class _xx_##a {backpack = a; count = b;}

class CfgVehicles {
	class C_IDAP_supplyCrate_F;
	class B_supplyCrate_F;
	class plp_ct_KappaCaseBlackFlat;
	class plp_ct_KappaCaseBlackSmall;
	class plp_ct_KappaCaseBlackMed;
	class plp_ct_KappaCaseBlackBig;
	class plp_ct_MilCaseCompactBlack;
	class plp_ct_RifleCaseBlack;

	class STAF_SuperBox_Orange: C_IDAP_supplyCrate_F
	{
		displayName = "Super Box (Orange)";
		maximumLoad = 999999999999;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class STAF_SuperBox_Green: B_supplyCrate_F
	{
		displayName = "Super Box (Green)";
		maximumLoad = 999999999999;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";

		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
	};

	class STAF_Ammobox_Ammo: plp_ct_KappaCaseBlackFlat
	{
		displayName = "Ammo Box (STAF)";
		maximumLoad = 1600;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1.2};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Cargo
		ace_cargo_size = 2;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)

		class TransportMagazines {
			mag_xx(30Rnd_762x39_AK12_Mag_F,12);
			mag_xx(CUP_30Rnd_556x45_PMAG_QP,30);
			mag_xx(hlc_30rnd_556x45_EPR_G36,12);
			mag_xx(30Rnd_65x39_caseless_mag,12);
			mag_xx(20Rnd_762x51_Mag,8);
			mag_xx(CUP_20Rnd_762x51_B_SCAR_bkl,8);
			mag_xx(CUP_30Rnd_762x51_FNFAL_M,4);
			mag_xx(1Rnd_HE_Grenade_shell,15);
			mag_xx(ACE_M84,12);
			mag_xx(HandGrenade,20);
			mag_xx(SmokeShell,20);
			mag_xx(SmokeShellRed,10);
			mag_xx(SmokeShellGreen,10);
			mag_xx(1Rnd_Smoke_Grenade_shell,15);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,7);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,7);
		};
		class TransportItems {};
		class TransportBackpacks {};
		class TransportWeapons {};
	};
	class STAF_Ammobox_Ammo_MG: plp_ct_KappaCaseBlackSmall
	{
		displayName = "MG Ammo Box (STAF)";
		maximumLoad = 2000;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1.2};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Cargo
		ace_cargo_size = 1;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)

		class TransportMagazines {
			mag_xx(CUP_100Rnd_556x45_BetaCMag,10);
			mag_xx(150Rnd_93x64_Mag,8);
			mag_xx(rhsusf_200Rnd_556x45_box,8);
			mag_xx(150Rnd_762x54_Box,8);
			mag_xx(75rnd_762x39_AK12_Mag_F,8);
		};
		class TransportItems {};
		class TransportBackpacks {};
		class TransportWeapons {};
	};
	class STAF_Ammobox_Medical: plp_ct_KappaCaseBlackMed
	{
		displayName = "Medical Box (STAF)";
		maximumLoad = 1000;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1.2};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Cargo
		ace_cargo_size = 4;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)

		class TransportMagazines{};
		class TransportItems {
			/*item_xx(kat_aatKit,10);
			item_xx(kat_accuvac,2);
			item_xx(ACE_adenosine,15);
			item_xx(kat_X_AED,1);
			item_xx(digi_Antidot,10);
			item_xx(kat_AED,2);*/
			item_xx(ACE_fieldDressing,50);
			item_xx(ACE_elasticBandage,20);
			item_xx(ACE_packingBandage,60);
			item_xx(ACE_quikclot,30);
			item_xx(ACE_bloodIV,5);
			item_xx(ACE_bloodIV_500,15);
			item_xx(ACE_bloodIV_250,20);
			item_xx(ACE_bodyBag,6);
			item_xx(kat_chestSeal,20);
			item_xx(ACE_EarPlugs,10);
			item_xx(ACE_epinephrine,20);
			item_xx(kat_guedel,3);
			item_xx(kat_larynx,3);
			item_xx(ACE_morphine,30);
			item_xx(kat_Pulseoximeter,2);
			item_xx(ACE_salineIV,8);
			item_xx(ACE_salineIV_500,10);
			item_xx(ACE_salineIV_250,15);
			item_xx(ACE_splint,20);
			item_xx(kat_stethoscope,2);
			item_xx(ACE_surgicalKit,2);
			item_xx(ACE_tourniquet,25);
		};
		class TransportBackpacks {};
		class TransportWeapons {};
	};
	class STAF_Ammobox_Launcher: plp_ct_KappaCaseBlackBig
	{
		displayName = "Launcher Box (STAF)";
		maximumLoad = 1600;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1.2};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Cargo
		ace_cargo_size = 4;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)

		class TransportMagazines{
			mag_xx(CUP_SMAW_HEDP_M,5);
			mag_xx(CUP_SMAW_HEAA_M,3);
			mag_xx(CUP_SMAW_Spotting,3);
		};
		class TransportItems {};
		class TransportBackpacks {};
		class TransportWeapons {
			weap_xx(CUP_launch_M136_Loaded,3);
			weap_xx(CUP_launch_Igla_Loaded,3);
		};
	};
	class STAF_Ammobox_cbrn: plp_ct_MilCaseCompactBlack
	{
		displayName = "CBRN Response Box (STAF)";
		maximumLoad = 2000;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1.2};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Cargo
		ace_cargo_size = 3;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)

		class TransportMagazines{};
		class TransportItems {
			item_xx(U_C_CBRN_Suit_01_Blue_F,25);
			item_xx(avon_fm12,25);
			item_xx(digi_Antidot,50);
			item_xx(digi_gasmaskFilter,75);
		};
		class TransportBackpacks {};
		class TransportWeapons {};
	};
	class STAF_Ammobox_STAF: plp_ct_MilCaseCompactBlack
	{
		displayName = "Resupply Box (STAF)";
		maximumLoad = 2000;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1.2};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Cargo
		ace_cargo_size = 2;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)

		class TransportMagazines{
			mag_xx(30Rnd_762x39_AK12_Mag_F,6);
			mag_xx(CUP_30Rnd_556x45_PMAG_QP,20);
			mag_xx(hlc_30rnd_556x45_EPR_G36,5);
			mag_xx(30Rnd_65x39_caseless_mag,5);
			mag_xx(20Rnd_762x51_Mag,4);
			mag_xx(CUP_20Rnd_762x51_B_SCAR_bkl,4);
			mag_xx(1Rnd_HE_Grenade_shell,8);
			mag_xx(CUP_100Rnd_556x45_BetaCMag,10);
			mag_xx(150Rnd_93x64_Mag,3);
			mag_xx(rhsusf_200Rnd_556x45_box,3);
			mag_xx(150Rnd_762x54_Box,3);
			mag_xx(75rnd_762x39_AK12_Mag_F,3);
			mag_xx(ACE_M84,5);
			mag_xx(HandGrenade,8);
			mag_xx(SmokeShell,8);
			mag_xx(SmokeShellRed,4);
			mag_xx(SmokeShellGreen,4);
			mag_xx(1Rnd_Smoke_Grenade_shell,9);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,4);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,4);
		};
		class TransportItems {
			item_xx(ACE_CableTie,5);
			item_xx(ACE_DefusalKit,1);
			item_xx(ACE_EntrenchingTool,3);
			item_xx(ACE_Fortify,2);
			item_xx(ACE_Flashlight_XL50,3);
			item_xx(ACE_Clacker,1);
			item_xx(ACE_fieldDressing,10);
			item_xx(ACE_elasticBandage,4);
			item_xx(ACE_packingBandage,15);
			item_xx(ACE_quikclot,10);
			item_xx(ACE_epinephrine,3);
			item_xx(ACE_morphine,5);
			item_xx(ACE_wirecutter,2);
			item_xx(ACE_UAVBattery,2);
			item_xx(ItemAndroid,2);
			item_xx(ACE_EarPlugs,2);
		};
		class TransportBackpacks {};
		class TransportWeapons {};
	};
	class STAF_SniperBox: plp_ct_RifleCaseBlack
	{
		displayName = "Sniper Case (STAF)";
		maximumLoad = 400;
		editorCategory = "EdCat_Supplies";
		editorSubcategory = "EdSubcat_STAF_Supplies";
		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1.2, 1.2};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)

		// Cargo
		ace_cargo_size = 3;  // Cargo space the object takes
        ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
        ace_cargo_noRename = 1;  // Blocks renaming object (1-blocked, 0-allowed)

		class TransportMagazines{
			mag_xx(hlc_5rnd_300WM_AP_AWM,4);
			mag_xx(hlc_5rnd_300WM_FMJ_AWM,4);
			mag_xx(hlc_5rnd_300WM_mk248_AWM,3);
			mag_xx(hlc_5rnd_300WM_SBT_AWM,3);
		};
		class TransportItems {
			item_xx(rhsusf_acc_nxs_3515x50f1_md_sun,1);
			item_xx(optic_nightstalker,1);
		};
		class TransportBackpacks {};
		class TransportWeapons {
			weap_xx(hlc_rifle_awmagnum_BL,1);
		};
	};
};

