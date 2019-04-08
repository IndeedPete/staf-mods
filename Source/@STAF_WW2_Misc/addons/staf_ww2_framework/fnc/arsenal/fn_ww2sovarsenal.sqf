//Init of the box and arsenal
_box = _this select 0;

//Itemlists

_weapons = [
            "LIB_DP28",
            "LIB_DT_OPTIC",
            "LIB_DT",
            "LIB_M9130",
            "LIB_M9130_DYAKONOV",
            "LIB_M9130_Bayonet",
            "LIB_M38",
            "LIB_M44",
            "LIB_M9130PU",
            "LIB_PPSh41_m",
            "LIB_PTRD",
            "LIB_RPzB",
            "LIB_RPzB_w",
            "LIB_BM37_Barrel",
            "LIB_BM37_Tripod",
            "LIB_SVT_40",
            "LIB_M1A1_Bazooka",
            "LIB_FLARE_PISTOL",
            "LIB_M1895",
            "LIB_TT33",
            "LIB_Binocular_SU"
];

_backpacks = [
            "B_LIB_SOV_RA_Radio",
            "B_LIB_SOV_RA_Rucksack",
            "B_LIB_SOV_RA_Rucksack_Green",
            "B_LIB_SOV_RA_Rucksack2",
            "B_LIB_SOV_RA_Rucksack2_Green",
            "B_LIB_SOV_RA_MGAmmoBag_Empty",
            "B_LIB_SOV_RA_GasBag",
            "B_LIB_SOV_RA_MedicalBag_Empty",
            "B_LIB_SOV_Parachute",
            "LIB_Maxim_Bag",
            "LIB_Maxim_Bar",
            "B_LIB_SOV_RA_Shinel",
            "B_LIB_SOV_RA_Paradrop"
];

_items = [
            "V_LIB_SOV_RA_OfficerVest",
            "V_LIB_SOV_RAZV_OfficerVest",
            "V_LIB_SOV_IShBrVestPPShDisc",
            "V_LIB_SOV_IShBrVestPPShMag",
            "V_LIB_SOV_IShBrVestMG",
            "V_LIB_SOV_RA_MosinBelt",
            "U_LIB_NKVD_Efreitor",
            "U_LIB_NKVD_Leutenant",
            "U_LIB_NKVD_Sergeant",
            "U_LIB_NKVD_StLeutenant",
            "U_LIB_NKVD_Starshina",
            "U_LIB_NKVD_Strelok",
            "V_LIB_SOV_RA_TankOfficerSet",
            "V_LIB_SOV_RA_MGBelt",
            "V_LIB_SOV_RAZV_MGBelt",
            "V_LIB_SOV_RA_PPShBelt",
            "V_LIB_SOV_RAZV_PPShBelt",
            "U_LIB_SOV_Tank_kapitan",
            "U_LIB_SOV_Leutenant",
            "U_LIB_SOV_Stsergeant",
            "U_LIB_SOV_Starshina",
            "U_LIB_SOV_Artleutenant",
            "U_LIB_SOV_Strelokart",
            "U_LIB_SOV_Razvedchik_am",
            "U_LIB_SOV_Razvedchik_autumn",
            "U_LIB_SOV_Razvedchik_lis",
            "U_LIB_SOV_Razvedchik_mix",
            "U_LIB_SOV_Leutenant_inset_pocket",
            "U_LIB_SOV_Sergeant_inset_pocket",
            "U_LIB_SOV_Sniper_autumn",
            "U_LIB_SOV_Sniper_spring",
            "U_LIB_SOV_Sniper",
            "U_LIB_SOV_Efreitor",
            "U_LIB_SOV_Kapitan",
            "U_LIB_SOV_Strelok",
            "U_LIB_SOV_Efreitor_summer",
            "U_LIB_SOV_Kapitan_summer",
            "U_LIB_SOV_Sergeant",
            "U_LIB_SOV_Strelok_summer",
            "U_LIB_SOV_Tank_ryadovoi",
            "U_LIB_SOV_Tank_leutenant",
            "U_LIB_SOV_Tank_sergeant",
            "U_LIB_SOV_Tank_private_field",
            "U_LIB_SOV_Stleutenant",
            "V_LIB_SOV_RA_SniperVest",
            "V_LIB_SOV_RA_SVTBelt",
            "V_LIB_SOV_RAZV_SVTBelt",
            "U_LIB_SOV_Pilot",
            "fow_g_gloves4",
            "fow_g_gloves5",
            "fow_g_gloves6",
            "fow_g_gloves2",
            "fow_g_gloves1",
            "fow_g_gloves3",
            "fow_g_watch2",
            "fow_g_watch1",
            "immersion_cigs_cigar0",
            "immersion_cigs_cigar1",
            "immersion_cigs_cigar2",
            "immersion_cigs_cigar3",
            "immersion_cigs_cigar4",
            "murshun_cigs_cig0",
            "murshun_cigs_cig1",
            "murshun_cigs_cig2",
            "murshun_cigs_cig3",
            "murshun_cigs_cig4",
            "LIB_GER_Gloves4",
            "LIB_GER_Gloves5",
            "LIB_GER_Gloves2",
            "LIB_GER_Gloves1",
            "LIB_GER_Gloves3",
            "fow_i_whistle",
            "H_LIB_NKVD_PrivateCap",
            "H_LIB_NKVD_OfficerCap",
            "H_LIB_SOV_RA_Helmet",
            "H_LIB_SOV_RA_PrivateCap",
            "H_LIB_SOV_TankHelmet",
            "H_LIB_SOV_RA_OfficerCap",
            "H_LIB_SOV_Ushanka",
            "H_LIB_SOV_Ushanka2",
            "H_LIB_SOV_PilotHelmet",
            "DemoCharge_Remote_Mag",
            "SatchelCharge_Remote_Mag",
            "ACE_HandFlare_Green",
            "ACE_HandFlare_Red",
            "ACE_HandFlare_White",
            "ACE_HandFlare_Yellow",
            "ACE_FlareTripMine_Mag",
            "LIB_F1",
            "LIB_PMD6_MINE_mag",
            "LIB_pomzec_MINE_mag",
            "LIB_Rg42",
            "LIB_Rpg6",
            "LIB_RDG",
            "LIB_TM44_MINE_mag"
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

_other = [
            "ItemCompass",
            "ItemMap",
            "ItemWatch"
];

_othermagazines = [

];

_magazines = [];
{
    {
        _magazines pushBackUnique _x;
    } forEach ([_x] call CBA_fnc_compatibleMagazines);
} forEach _weapons;

_attachments = [];
{
    {
        _attachments pushBackUnique _x;
    } forEach ([_x] call CBA_fnc_compatibleItems);
} forEach _weapons;

//Adding Itemlists to the Arsenal
[_box,(_items + _backpacks + _magazines + _weapons + _ACE + _other + _attachments + _othermagazines),true] call ace_arsenal_fnc_initBox;

[_box,["<img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa' /> Open Arsenal",{[(_this select 0), player,false] call ace_arsenal_fnc_openBox;}]] remoteExec ["addAction",0,true];
