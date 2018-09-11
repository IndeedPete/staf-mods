//Init of the box and arsenal
_box = _this select 0;

//Itemlists

_weapons = [
  "SWOP_b2gun",
  "swop_CISShotgun",
  "SWOP_E5",
  "SWOP_E5C",
  "SWOP_E5M",
  "SWOP_X6BlasterRifle",
  "SWOP_rg4dPistol",
  "RocketRPS6_F",
  "swop_red_lance_lightsaber",
  "swop_red_lightsaber",
  "swop_special_lightsaber_2",
  "SW_E60r"
];

_backpacks = [
  "SWOP_B_Droid_DV",
  "SWOP_B_Droid_camo_DV",
  "SWOP_B_Droid_geon_DV",
  "SWOP_B_Droid_backpack",
  "SWOP_B_Droid_camo_backpack",
  "SWOP_B_Droid_geon_backpack",
  "SWOP_B_Droid_heavy_backpack"
];

_items = [
  "SWOP_B1_droid_F_standart",
  "SWOP_B1_droid_camo_F_standart",
  "SWOP_B1_droid_geon_F_standart",
  "SWOP_B1_droid_commander_F_standart",
  "SWOP_B1_droid_camo_commander_F_standart",
  "SWOP_B1_droid_geon_commander_F_standart",
  "SWOP_B1_droid_crew_F_standart",
  "SWOP_B1_droid_guard_F_standart",
  "SWOP_B1_droid_heavy_F_standart",
  "SWOP_B1_droid_pilot_F_standart",
  "SWOP_B2_superdroid_F_Spec",
  "SWOP_NVChipClean",
  "SWOP_NVChip",
  "SWOP_NVChip2",
  "SWOP_Magnadroid_F_Spec",
  "ItemCompass",
  "TFAR_fadak",
  "ItemGPS",
  "ItemMap",
  "ToolKit",
  "ItemWatch",
  "SWOP_Maul_F_CombatUniform"
];

_magazines = [
  "SWOP_b2gun_Mag",
  "SWOP_b2rocket_Mag",
  "swop_CISShotgun_Mag",
  "SWOP_E5C_Mag",
  "SWOP_E5_UW_Mag",
  "SWOP_E5M_Mag",
  "SWOP_X6BlasterRifle_Mag",
  "SWOP_rg4dPistol_Mag",
  "e60rRocket",
  "RocketRPS6_F",
  "RocketRPS6HEATFF_Mag",
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
