//Init of the box and arsenal
_box = _this select 0;

//Itemlists

_weapons = [
            "fow_w_type100",
            "fow_w_type99",
            "fow_w_type99_lmg",
            "fow_w_type99_sniper",
            "LIB_FLARE_PISTOL",
            "LIB_Binocular_GER"
];

_backpacks = [
            "fow_b_ija_ammobox",
            "fow_b_ija_ammobox_metal",
            "fow_b_ija_ammobox_wood",
            "fow_b_ija_backpack",
            "fow_b_ija_backpack_foliage",
            "fow_b_ija_type97_mortar_support",
            "fow_b_ija_type97_mortar_weapon",
            "fow_b_ija_type97_mortar_adv_weapon"
];

_items = [
            "fow_h_ija_fieldcap_marine_neck",
            "fow_h_ija_fieldcap_neck",
            "fow_h_ija_fieldcap",
            "fow_h_ija_fieldcap_marine",
            "fow_h_ija_fieldcap_officer",
            "fow_h_ija_flight_helmet",
            "fow_h_ija_hakimachi",
            "fow_v_ija_bayonet",
            "fow_v_ija_grenadier",
            "fow_v_ija_medic",
            "fow_v_ija_mg",
            "fow_v_ija_mortar",
            "fow_v_ija_nco",
            "fow_v_ija_officer",
            "fow_v_ija_rifle",
            "fow_u_ija_pilot",
            "fow_h_ija_tank_helmet",
            "fow_h_ija_type90",
            "fow_h_ija_type90_foliage",
            "fow_h_ija_type90_net",
            "fow_h_ija_type90_net_neck",
            "fow_h_ija_type90_snlf",
            "fow_u_ija_type98",
            "fow_u_ija_type98_khakibrown",
            "fow_u_ija_type98_short",
            "fow_u_ija_type98_snlf",
            "fow_u_ija_type98_foliage",
            "fow_g_gloves4",
            "fow_g_gloves5",
            "fow_g_gloves6",
            "fow_g_gloves2",
            "fow_g_gloves1",
            "fow_g_gloves3",
            "fow_g_watch2",
            "fow_g_watch1",
            "fow_i_rangeTables_type97",
            "DemoCharge_Remote_Mag",
            "SatchelCharge_Remote_Mag",
            "ACE_HandFlare_Green",
            "ACE_HandFlare_Red",
            "ACE_HandFlare_White",
            "ACE_HandFlare_Yellow",
            "ACE_FlareTripMine_Mag",
            "fow_e_type97",
            "fow_e_type99",
            "fow_e_type99_at"
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
