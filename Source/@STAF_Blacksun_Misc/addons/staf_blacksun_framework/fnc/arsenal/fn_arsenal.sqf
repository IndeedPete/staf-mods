//Init of the box and arsenal
_box = _this select 0;

//Picture on arsenal
if (isServer) then {
  if ((typeOf _box) isEqualTo "Portable_GCS_Base_CTRG_F") then {
    [_box,[2,"\staf_framework\img\terminaldown.paa"]] remoteExec ["setObjectTexture",0,true];
    [_box,[3,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
  if ((typeOf _box) isEqualTo "Portable_GCS_Base_F") then {
    [_box,[2,"\staf_framework\img\terminaldown.paa"]] remoteExec ["setObjectTexture",0,true];
    [_box,[3,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
  if ((typeOf _box) isEqualTo "Land_Laptop_unfolded_F") then {
    [_box,[0,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
  if ((typeOf _box) isEqualTo "Land_Laptop_device_F") then {
    [_box,[0,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
};



//Itemlists

_weapons = [
            "STAF_rifle_416C",
            "STAF_rifle_416D165",
            "STAF_lmg_mk48",
            "STAF_hgun_ACPC2",
            "STAF_srifle_DMR_02",
            "STAF_rifle_416D165_gl",
            "STAF_SMG_03C_black"
];

_backpacks = [
            "B_LegStrapBag_black_F",
            "B_ViperHarness_blk_F"
];

_items = [
            //ACE
            "ACE_EarPlugs",
            "ACE_elasticBandage",
            "ACE_packingBandage",
            "ACE_tourniquet",
            "ACE_morphine",
            "ACE_personalAidKit",
            "ACE_wirecutter",
            "ACE_Clacker",
            "ACE_Flashlight_XL50",
            "ACE_DefusalKit",
            "ACE_salineIV",
            "ACE_salineIV_500",
            "ACE_salineIV_250",
            "ACE_surgicalKit",
            "ACE_bodyBag",
            "ACE_adenosine",
            "ACE_epinephrine",
            "ACE_quikclot",
            "ACE_fieldDressing",
            "ACE_SpraypaintBlack",
            "ACE_bloodIV",
            "ACE_bloodIV_250",
            "ACE_bloodIV_500",
            "ACE_SpraypaintBlue",
            "ACE_CableTie",
            "ACE_DefusalKit",
            "ACE_EntrenchingTool",
            "ACE_Flashlight_MX991",
            "ACE_SpraypaintGreen",
            "ACE_HuntIR_monitor",
            "ACE_Clacker",
            "ACE_Flashlight_XL50",
            "ACE_MapTools",
            "ACE_plasmaIV",
            "ACE_plasmaIV_250",
            "ACE_plasmaIV_500",
            "ACE_SpraypaintRed",
            "ACE_SpottingScope",
            "ACE_UAVBattery",
            "ACE_DAGR",
            "ACE_Kestrel4500",
            "ACE_ATragMX",
            "ACE_RangeCard",
            //ADV
            "adv_aceSplint_splint",
            "adv_aceCPR_AED",
            //Vanilla
            "G_Bandanna_blk",
            "G_Balaclava_TI_blk_F",
            "G_Balaclava_TI_G_blk_F",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "B_UavTerminal",
            "O_UavTerminal",
            "I_UavTerminal",
            "ItemGPS",
            "ToolKit",
            //TFAR
            "TFAR_anprc152",
            //CTAB
            "ItemAndroid",
            "ItemcTab",
            //VSM
            "VSM_balaclava_Black_Skull",
            "VSM_balaclava_Black",
            "VSM_balaclava2_Black",
            "VSM_FaceMask_black",
            "VSM_FaceMask_Ghost",
            //STAF
            "STAF_G_Bandanna_Punisher",
            "STAF_geiger_counter",
            "STAF_TestingKit",
            "RyanZombiesAntiVirusTemporary_Item",
            //CUP
            "CUP_NVG_PVS7",
            //CFP
            "CFP_Beard",
            "CFP_Beard_Grey",
            "CFP_Beard_Red"
];

_uniforms = [
            "tacs_Uniform_Garment_LS_BS_BP_BB",
            "tacs_Uniform_Garment_RS_BS_BP_BB"
];

_headgear = [
            "STAF_h_airframe_01_black",
            "STAF_h_airframe_02_black",
            "STAF_h_airframe_03_black",
            "STAF_h_airframe_04_black",
            "STAF_h_airframe_05_black",
            "STAF_h_airframe_06_black"
];

_vests = [
            "Specter_RAV_BLK"
];

_othermagazines = [
            //Grenades
            "ACE_M14",
            "Chemlight_blue",
            "Chemlight_green",
            "ACE_Chemlight_HiOrange",
            "ACE_Chemlight_HiRed",
            "ACE_Chemlight_HiWhite",
            "ACE_Chemlight_HiYellow",
            "ACE_Chemlight_IR",
            "ACE_Chemlight_Orange",
            "Chemlight_red",
            "ACE_Chemlight_White",
            "Chemlight_yellow",
            "B_IR_Grenade",
            "ACE_HandFlare_Green",
            "ACE_HandFlare_Red",
            "ACE_HandFlare_White",
            "ACE_HandFlare_Yellow",
            "SmokeShellBlue",
            "SmokeShellGreen",
            "SmokeShellOrange",
            "SmokeShellPurple",
            "SmokeShellRed",
            "SmokeShellYellow",
            "HandGrenade",
            "SmokeShell",
            "ACE_M84",
            "MiniGrenade",

            //Underbarrel
            "1Rnd_HE_Grenade_shell",
            "UGL_FlareGreen_F",
            "UGL_FlareCIR_F",
            "UGL_FlareRed_F",
            "UGL_FlareYellow_F",
            "UGL_FlareWhite_F",
            "1Rnd_SmokeBlue_Grenade_shell",
            "1Rnd_SmokeGreen_Grenade_shell",
            "1Rnd_SmokeOrange_Grenade_shell",
            "1Rnd_SmokePurple_Grenade_shell",
            "1Rnd_SmokeRed_Grenade_shell",
            "1Rnd_Smoke_Grenade_shell",
            "1Rnd_SmokeYellow_Grenade_shell",
            "ACE_HuntIR_M203",

            //Explosives
            "APERSMineDispenser_Mag",
            "DemoCharge_Remote_Mag",
            "ATMine_Range_Mag",
            "SatchelCharge_Remote_Mag",
            "ClaymoreDirectionalMine_Remote_Mag",
            "APERSBoundingMine_Range_Mag",
            "SLAMDirectionalMine_Wire_Mag",
            "APERSTripMine_Wire_Mag",
            "ACE_FlareTripMine_Mag",
            "APERSMine_Range_Mag",

            //SMAW Spotting Round
            "CUP_SMAW_Spotting",

            // Cigs and Pops
            "murshun_cigs_matches",
            "murshun_cigs_lighter",
            "murshun_cigs_cigpack",
            "murshun_cigs_cig0",
            "immersion_pops_poppack",
            "immersion_pops_pop0",

            //Camera Tapes
            "Tape_F",

            //Other
            "ACE_SpareBarrel"
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
[_box,(_weapons + _backpacks + _items + _uniforms + _headgear + _vests + _othermagazines + _magazines + _attachments),true] call ace_arsenal_fnc_initBox;

[_box,["<img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa' /> Open Arsenal",{[(_this select 0), player,false] call ace_arsenal_fnc_openBox;}]] remoteExec ["addAction",0,true];
