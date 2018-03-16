//Init of the box and arsenal
_box = _this select 0;

//Itemlists

_weapons = [
  "SWOP_a180Pistol",
  "SWOP_GLIE44",
  "SWOP_DH17BlasterRifle",
  "SWOP_DH17BlasterRifle_Scoped",
  "SWOP_el16hfeBlasterRifle",
  "SWOP_el16hfemod0",
  "swopHH12Rocket",
  "Binocular",
  "Rangefinder"
];

_backpacks = [
  "SWOP_resistance_back_DV_b",
  "SWOP_B_BlackBackpack_RTdv_Base",
  "B_Kitbag_cbr",
  "B_Kitbag_rgr",
  "B_Kitbag_mcamo",
  "B_Kitbag_sgg",
  "B_LegStrapBag_black_F",
  "B_LegStrapBag_coyote_F",
  "B_LegStrapBag_olive_F",
  "SWOP_B_BrownBackpack_RTdv_Base",
  "SWOP_B_CloudBackpack_RTdv_Base",
  "SWOP_B_magmaBackpack_RTdv_Base",
  "SWOP_B_SandBackpack_RTdv_Base",
  "SWOP_B_SnowBackpack_RTdv_Base",
  "SWOP_B_WoodBackpack_RTdv_Base",
  "B_TacticalPack_blk",
  "B_TacticalPack_rgr",
  "B_TacticalPack_ocamo",
  "B_TacticalPack_mcamo",
  "B_TacticalPack_oli",
  "B_AssaultPack_blk",
  "B_AssaultPack_cbr",
  "B_AssaultPack_dgtl",
  "B_AssaultPack_rgr",
  "B_AssaultPack_ocamo",
  "B_AssaultPack_khk",
  "B_AssaultPack_mcamo",
  "B_AssaultPack_sgg",
  "B_AssaultPack_tna_F",
  "SWOP_resistance_backpack_b",
  "SWOP_resistance_backpack2_b",
  "SWOP_resistance_BigBackpack_b",
  "SWOP_resistance_BigBackpack2_b",
  "SWOP_resistance_back_jump_b"
];

_items = [
  "ItemGPS",
  "ItemMap",
  "SWOP_Resistance_HeavyUnif_Brown_F_CombatUniform",
  "SWOP_Resistance_HeavyUnif_Green_F_CombatUniform",
  "SWOP_Resistance_HeavyUnif_KhakiR_F_CombatUniform",
  "SWOP_Resistance_HeavyUnif_Khaki_F_CombatUniform",
  "SWOP_Resistance_helmTroopHeavy",
  "SWOP_Resistance_vestHeavyBr",
  "SWOP_Resistance_vestHeavyKh",
  "SWOP_Resistance_helmTroop",
  "SWOP_Resistance_capOf",
  "SWOP_Resistance_Ofunif_F_CombatUniform",
  "SWOP_ResistancePilH",
  "SWOP_ResistancePilH2",
  "SWOP_ResistancePilH2blue",
  "SWOP_ResistancePilHblue",
  "SWOP_ResistancePilH2green",
  "SWOP_ResistancePilHgreen",
  "SWOP_Resistance_capSpecBr",
  "SWOP_Resistance_capSpecGr",
  "SWOP_Resistance_unif_beigeK_F_CombatUniform",
  "SWOP_Resistance_unif_beigeB_F_CombatUniform",
  "SWOP_Resistance_unif_beigeDB_F_CombatUniform",
  "SWOP_Resistance_unif_beigeR_F_CombatUniform",
  "SWOP_Resistance_unif_khakiK_F_CombatUniform",
  "SWOP_Resistance_unif_khakiB_F_CombatUniform",
  "SWOP_Resistance_unif_khakiDB_F_CombatUniform",
  "SWOP_Resistance_unif_khakiR_F_CombatUniform",
  "SWOP_Resistance_vestTroop",
  "SWOP_Rebpil_F_CombatUniform",
  "SWOP_Rebpil_Blue_CombatUniform",
  "SWOP_Rebpil_Green_CombatUniform",
  "SWOP_RebT_F_CombatUniform",
  "SWOP_RebB_F_CombatUniform",
  "SWOP_RebWbr_F_CombatUniform",
  "SWOP_Reb_f_BD_F_CombatUniform",
  "SWOP_Reb_f_DB_F_CombatUniform",
  "SWOP_Reb_f_DD_F_CombatUniform",
  "SWOP_Reb_f_WB_F_CombatUniform",
  "SWOP_Reb_f_WW_F_CombatUniform",
  "SWOP_RebC_F_CombatUniform",
  "SWOP_RebDB_F_CombatUniform",
  "SWOP_RebWdark_F_CombatUniform",
  "SWOP_RebDsvet_F_CombatUniform",
  "SWOP_RebD_F_CombatUniform",
  "SWOP_RebF_F_CombatUniform",
  "SWOP_RebGreyB_F_CombatUniform",
  "SWOP_RebU_F_CombatUniform",
  "SWOP_RebGB_F_CombatUniform",
  "SWOP_RebW_F_CombatUniform",
  "SWOP_NVChipClean",
  "SWOP_NVChip",
  "SWOP_NVChip2",
  "ToolKit",
  "ItemWatch",
  "ItemCompass"
];

_magazines = [
  "SWOP_bacta_G",
  "SWOP_BCCKtermimploder_G",
  "SWOP_BCCKstermDet_G",
  "swop_termDetDT_G",
  "SWOP_termDet_G",
  "SWOP_termDet_Gm",
  "SWOP_SCAR_DioxisGM",
  "SWOP_SCAR_EMP_GrenadeGM",
  "swop_EMP_Remote_Mag",
  "TermMine_Mag",
  "TermMineB_Mag",
  "TermMineC_Mag",
  "swop_mag_flashbang",
  "swop_mag_gimpact",
  "swop_mag_incendiary",
  "swop_SmokeShell",
  "SWOPthrowablectype",
  "SWOPthrowableExplosive",
  "B_IR_Grenade",
  "DemoCharge_Remote_Mag",
  "SmokeShellBlue",
  "SmokeShellGreen",
  "SmokeShellOrange",
  "SmokeShellPurple",
  "SmokeShellRed",
  "SmokeShellYellow",
  "SatchelCharge_Remote_Mag",
  "SmokeShell",
  "SWOP_DH17BlasterRifle_Mag",
  "SWOP_el16hfe_Mag",
  "SWOP_a180Pistol_Mag",
  "SWOP_GLIE44_Mag",
  "hh12rocketmag"
];

_ACE = [
  "ACE_VMM3",
  "ACE_fieldDressing",
  "ACE_packingBandage",
  "ACE_elasticBandage",
  "ACE_tourniquet",
  "ACE_morphine",
  "ACE_adenosine",
  "ACE_atropine",
  "ACE_epinephrine",
  "ACE_plasmaIV",
  "ACE_plasmaIV_500",
  "ACE_plasmaIV_250",
  "ACE_salineIV",
  "ACE_salineIV_500",
  "ACE_salineIV_250",
  "ACE_bloodIV",
  "ACE_bloodIV_500",
  "ACE_bloodIV_250",
  "ACE_quikclot",
  "ACE_personalAidKit",
  "ACE_surgicalKit",
  "ACE_bodyBag",
  "ACE_wirecutter",
  "ACE_Sandbag_empty",
  "ACE_SpraypaintBlack",
  "ACE_SpraypaintRed",
  "ACE_SpraypaintBlue",
  "ACE_SpraypaintGreen",
  "ACE_EntrenchingTool",
  "ACE_Tripod",
  "ACE_CableTie",
  "ACE_Chemlight_Shield",
  "ACE_Clacker",
  "ACE_M26_Clacker",
  "ACE_DefusalKit",
  "ACE_DeadManSwitch",
  "ACE_Flashlight_MX991",
  "ACE_Flashlight_KSF1",
  "ACE_Flashlight_XL50",
  "ACE_EarPlugs",
  "adv_aceSplint_splint"
];

//Adding Itemlists to the Arsenal
[_box,(_items + _backpacks + _magazines + _weapons + _ACE),true] call ace_arsenal_fnc_initBox;

[_box,["<img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa' /> Open Arsenal",{[(_this select 0), player,false] call ace_arsenal_fnc_openBox;}]] remoteExec ["addAction",0,true];
