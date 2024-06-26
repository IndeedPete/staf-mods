//Init of the box and arsenal
_box = _this select 0;

//Itemlists

_weapons = [
  "SWOP_CA87BlasterRifle",
  "SW_cj9_BlasterRifle",
  "SWOP_DH17BlasterRifle",
  "SWOP_DH17BlasterRifle_Scoped",
  "SWOP_DLT19BlasterRifle",
  "SWOP_DLT19DBlasterRifle",
  "SWOP_DLT19XBlasterRifle",
  "SWOP_DT29Pistol",
  "SWOP_DT29Pistol_Scoped",
  "SWOP_e11",
  "SWOP_e11_GRIP",
  "SWOP_e11_Scoped",
  "swop_e11b",
  "e11_dt",
  "SWOP_E11SBlasterRifle",
  "SWOP_E11SBlasterRifle_Scoped",
  "SWOP_E22",
  "SWOP_EE4BlasterRifle",
  "SWOP_EE4BlasterRifle_Scoped",
  "SWOP_K16Pistol",
  "swop_red_lance_lightsaber",
  "swop_red_lightsaber",
  "swop_special_lightsaber_2",
  "BTX42_Flamethrower",
  "relbyv10",
  "SWOP_rk3",
  "SWOP_rt97cBlasterRifle",
  "SWOP_rt97cBlasterRifle_Scoped",
  "SW_Scattergun",
  "swop_ScoutPistol",
  "swop_SE14cPistol",
  "SW_iondisruptor_BlasterRifle",
  "SWOP_T21BlasterRifle",
  "SWOP_T21B_BlasterRifle",
  "HeavyRepeater",
  "HeavyRepeater_Mod0",
  "SWOP_WESTARM5_rifle",
  "SWOP_WESTARM5_GL",
  "SWOP_x8Pistol",
  "Binocular"
];

_backpacks = [
  "SWOP_B_AssaultPackPC_Base",
  "SWOP_O_DioPackUAV",
  "SWOP_B_IMPjetackpack_Base",
  "SWOP_B_IMPjetBackpack_Base",
  "SWOP_ImpJumptroopBackpack",
  "SWOP_B_Filterpack_Base",
  "SWOP_B_AssaultPackPS_Base",
  "SWOP_ImpSkyBackpack",
  "SWOP_B_ImSnowBackpack_Base",
  "SWOP_B_ImMedicSnowBackpack_Base",
  "SWOP_B_ITdv_Base"
];

_items = [
  "SWOP_ImpAdm_F_CombatUniform",
  "SWOP_ShoreT_f_CombatUniform",
  "SWOP_ImpKr_F_CombatUniform",
  "SWOP_ImpGuard_F_CombatUniform",
  "SWOP_ImpN_F_CombatUniform",
  "SWOP_ImpOf_F_CombatUniform",
  "SWOP_ImpLt_F_CombatUniform",
  "SWOP_TIEpilotB_F_CombatUniform",
  "SWOP_empire_pilot_unif__F_CombatUniform",
  "SWOP_TIEpilot_F_CombatUniform",
  "SWOP_DeathT_f_CombatUniform",
  "SWOP_Galacticmarines_lt_F_CombatUniform",
  "SWOP_Galacticmarines_xo_F_CombatUniform",
  "SWOP_Galacticmarines_Bacara_F_CombatUniform",
  "SWOP_Galacticmarines_elite_F_CombatUniform",
  "SWOP_Galacticmarines_flame_F_CombatUniform",
  "SWOP_Galacticmarines_regularsofficer_F_CombatUniform",
  "SWOP_Galacticmarines_regulars_F_CombatUniform",
  "SWOP_Galacticmarines_trooper_F_CombatUniform",
  "SWOP_StormS_F_CombatUniform",
  "SWOP_ST_nova_F_CombatUniform",
  "SWOP_Scout_F_CombatUniform",
  "SWOP_Shadow_F_CombatUniform",
  "SWOP_SHTC_F_CombatUniform",
  "SWOP_SHTC501_F_CombatUniform",
  "SWOP_Shore_f_CombatUniform",
  "SWOP_ShoreC_f_CombatUniform",
  "SWOP_SnowT_F_CombatUniform",
  "SWOP_SnowT_Cap_F_CombatUniform",
  "SWOP_SnowT_Lt_F_CombatUniform",
  "SWOP_StormC_F_CombatUniform",
  "SWOP_StormT_F_CombatUniform",
  "SWOP_ST_clear_F_CombatUniform",
  "SWOP_ST_commander_F_CombatUniform",
  "SWOP_ST_jump_F_CombatUniform",
  "SWOP_ImpAdmBron",
  "SWOP_ImpCapBron",
  "SWOP_ciberimplant",
  "SWOP_DeathElarm",
  "SWOP_DeathGrarm",
  "SWOP_HelmDeath",
  "SWOP_HelmDeathG2",
  "SWOP_HelmDeathG",
  "SWOP_HelmDeathL",
  "SWOP_DeathTrarm",
  "SWOP_DeathGrarm2",
  "TFAR_fadak",
  "SWOP_GM_regulars_armor",
  "SWOP_gmarinesarmor",
  "SWOP_GM_bacara_armor",
  "SWOP_gmarinesarmorC",
  "SWOP_gmarinesarmorELITE",
  "SWOP_gmarinesarmorL",
  "SWOP_GalacticMarinesRegularsOfficer_helmet",
  "SWOP_GalacticMarinesRegulars_helmet",
  "SWOP_GM_regularsofficer_armor",
  "ItemGPS",
  "SWOP_ImpGABron",
  "SWOP_HelmImpCadet",
  "SWOP_ImpCapS",
  "SWOP_ImpCapB",
  "SWOP_ImpCap",
  "SWOP_ImpCapG",
  "SWOP_TankCr",
  "SWOP_HelmTank",
  "SWOP_ImpDriverHelm",
  "SWOP_ImpEngineerHelm",
  "SWOP_ImpGuardCape",
  "SWOP_ImpGuardHelm",
  "SWOP_ImpInfernoH",
  "SWOP_ImpInfernoH2",
  "SWOP_ImpInfernoH3",
  "SWOP_ImpnavH",
  "SWOP_Empire_pilot_vest",
  "SWOP_ImpTIEPILOTH",
  "SWOP_ImpTIEPILOTH2",
  "SWOP_ImpTIEPILOTH3",
  "SWOP_infernoVest",
  "SWOP_Inferno_vestTroop",
  "SWOP_Inferno_vestTroopHeavy",
  "SWOP_Inferno_vestTroopSpec",
  "SWOP_ImpLton",
  "SWOP_Novatrooper",
  "SWOP_NovatrooperCamaB",
  "SWOP_NovatrooperCamaY",
  "SWOP_NovaHelm",
  "SWOP_Sandarmor",
  "SWOP_SandarmorCamaY",
  "SWOP_SandarmorCamaT",
  "SWOP_SandarmorCamaO",
  "SWOP_SandarmorCamaG",
  "SWOP_SandarmorCamaS",
  "SWOP_HelmSD",
  "SWOP_Backpack",
  "SWOP_ScaVestSG",
  "SWOP_ScaVestS",
  "SWOP_ScaVestG",
  "SWOP_ScaVestA",
  "SWOP_HelmSC",
  "SWOP_scBron",
  "SWOP_Shadowarmor",
  "SWOP_ShadowarmorP",
  "SWOP_HelmSHad",
  "SWOP_SHTCarmor",
  "SWOP_SHTC501armor",
  "SWOP_SHTC501armorCamaS",
  "SWOP_SHTCarmorCamaO",
  "SWOP_HelmSH",
  "SWOP_HelmSH501",
  "SWOP_Shorearmor",
  "SWOP_ShorearmorC",
  "SWOP_HelmShore",
  "SWOP_Snowarmor",
  "SWOP_SnowarmorC",
  "SWOP_SnowarmorL",
  "SWOP_HelmSkyTrooper",
  "SWOP_HelmSTCC",
  "SWOP_stcBron",
  "SWOP_Stormarmor",
  "SWOP_StormarmorCamaY",
  "SWOP_StormClearUnif",
  "SWOP_StormarmorCamaT",
  "SWOP_StormarmorCamaO",
  "SWOP_StormarmorCamaG",
  "SWOP_StormarmorCamaS",
  "SWOP_StComarmor",
  "SWOP_HelmCommand",
  "SWOP_HelmST",
  "SWOP_stromClearHelm",
  "SWOP_STrooper_HUD",
  "SWOP_Incineratorarmor",
  "SWOP_IncineratorarmorCamaB",
  "SWOP_IncineratorarmorCamaO",
  "SWOP_HelmSS",
  "SWOP_StormJumpUnif",
  "SWOP_stromJumpHelm",
  "ItemMap",
  "SWOP_NVChipClean",
  "SWOP_NVChip",
  "SWOP_NVChip2",
  "ToolKit",
  "ItemWatch",
  "SWOP_Maul_F_CombatUniform"
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
  "O_IR_Grenade",
  "DemoCharge_Remote_Mag",
  "SmokeShellBlue",
  "SmokeShellGreen",
  "SmokeShellOrange",
  "SmokeShellPurple",
  "SmokeShellRed",
  "SmokeShellYellow",
  "SatchelCharge_Remote_Mag",
  "SmokeShell",
  "SW_PersonalShield_Mag",
  "SW_halfshield_Mag",
  "SW_SquadShield_Mag",
  "SW_SquadShield_magCARGA"
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

_attachments = [];
{
    {
        _attachments pushBackUnique _x;
    } forEach ([_x] call CBA_fnc_compatibleItems);
} forEach _weapons;

//Adding Itemlists to the Arsenal
[_box,(_items + _backpacks + _magazines + _weapons + _ACE + _attachments),true] call ace_arsenal_fnc_initBox;

[_box,["<img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa' /> Open Arsenal",{[(_this select 0), player,false] call ace_arsenal_fnc_openBox;}]] remoteExec ["addAction",0,true];
