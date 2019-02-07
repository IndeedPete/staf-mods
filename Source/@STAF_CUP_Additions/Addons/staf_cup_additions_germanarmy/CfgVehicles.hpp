class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgVehicles {
  class B_Pilot_F;
  class pook_EF2K_Pilot_GER: B_Pilot_F {
    scope = 1;
    scopeCurator = 1;
	 };

  class CUP_B_Ger_soldier_AAA;
  class CUP_B_Ger_soldier_AA;
  class CUP_B_Ger_soldier_Ammo;
  class CUP_B_Ger_soldier_AAT;
  class CUP_B_Ger_soldier_AT;
  class CUP_B_Ger_soldier_Engineer;
  class CUP_B_Ger_soldier_GL;
  class CUP_B_Ger_soldier_MG;
  class CUP_B_Ger_soldier_MG3;
  class CUP_B_GER_Medic;
  class CFP_B_DEARMY_Pilot_DES_01;
  class CUP_B_Ger_soldier;
  class CUP_B_Ger_soldier_Scout;
  class CUP_B_Ger_soldier_Sniper;
  class CUP_B_Ger_soldier_TL;

  class STAF_CUP_B_Ger_Army_soldier_AA: CUP_B_Ger_soldier_AA {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_AA.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_launch_FIM92Stinger", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_launch_FIM92Stinger", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_Stinger_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Ammo: CUP_B_Ger_soldier_Ammo {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "BW_Backpack_Carryall_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Ammo.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_AAT: CUP_B_Ger_soldier_AAT {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_Kitbag_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_AAT.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_AT: CUP_B_Ger_soldier_AT {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CUP_B_GER_Backpack_ATAssist";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_AT.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_launch_MAAWS_Scope", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_launch_MAAWS_Scope", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Engineer: CUP_B_Ger_soldier_Engineer {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_Kitbag_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Engineer.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_GL: CUP_B_Ger_soldier_GL {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_Kitbag_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_GL.jpg";
        weapons[] = {CUP_arifle_AG36, "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {CUP_arifle_AG36, "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareGreen_F","UGL_FlareGreen_F"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareGreen_F","UGL_FlareGreen_F"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_MG: CUP_B_Ger_soldier_MG {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_Kitbag_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_MG.jpg";
        weapons[] = {"CUP_arifle_MG36_holo", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_MG36_holo", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_MG3: CUP_B_Ger_soldier_MG3 {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_Kitbag_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_MG3.jpg";
        weapons[] = {"CUP_lmg_MG3_rail", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_MG3_rail", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Medic: CUP_B_GER_Medic {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_Kitbag_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Medic.jpg";
        weapons[] = {"CUP_arifle_G36C", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36C", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Pilot: CFP_B_DEARMY_Pilot_DES_01 {
      editorSubcategory = "EdSubcat_Personnel";
      weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
      respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
      magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
      respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
    };
  class STAF_CUP_B_Ger_Army_soldier: CUP_B_Ger_soldier {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_Kitbag_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Jetpilot: STAF_CUP_B_Ger_Army_soldier {
      uniformClass = "SP_0000_Standard_FieldUniform_Tan";
      displayName = "Fighter Pilot";
      editorSubcategory = "EdSubcat_Personnel";
      editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Jetpilot.jpg";
      backpack = "B_Parachute";
      faction = "CUP_B_GER";
      weapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      respawnWeapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      linkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot", "H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      respawnLinkedItems[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot", "H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
      respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

      headgearList[] = {"H_PilotHelmetFighter_B",1};
      vestList[] = {"CUP_V_BAF_Osprey_Mk2_DDPM_Pilot",1};
  		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Crew: CUP_B_Ger_soldier_Engineer {
        displayName = "Crewman";
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Crew.jpg";
        weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"SP_Tactical1_Tan", "SP_CVCHelmet_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"SP_Tactical1_Tan", "SP_CVCHelmet_Tan", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"SP_CVCHelmet_Tan",1};
        vestList[] = {"SP_Tactical1_Tan",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Scout: CUP_B_Ger_soldier_Scout {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_AssaultPack_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Scout.jpg";
        weapons[] = {"CUP_arifle_G36C_holo_snds", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36C_holo_snds", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_Sniper: CUP_B_Ger_soldier_Sniper {
        uniformClass = "U_B_FullGhillie_ard";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        weapons[] = {"CUP_srifle_G22_wdl_SBPMII","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Sniper.jpg";
        linkedItems[] = {"CFP_LBT6094_operator_AOR1", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_LBT6094_operator_AOR1", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        vestList[] = {"CFP_LBT6094_operator_AOR1",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_soldier_TL: CUP_B_Ger_soldier_TL {
        uniformClass = "CFP_U_Crye_Tropentarn_SS";
        backpack = "CFP_AssaultPack_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CUP_B_GER";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_TL.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Tropentarn", "CFP_OPS2017_Helmet_Tropentarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Tropentarn",1};
        vestList[] = {"CFP_PlateCarrier1_Tropentarn",0.5,"CFP_PlateCarrier2_Tropentarn",0.5};

    		ALiVE_orbatCreator_loadout[] = {};
    };

  class CUP_B_Ger_Fleck_soldier_AAA;
  class CUP_B_Ger_Fleck_soldier_AA;
  class CUP_B_Ger_Fleck_soldier_Ammo;
  class CUP_B_Ger_Fleck_soldier_AAT;
  class CUP_B_Ger_Fleck_soldier_AT;
  class CUP_B_Ger_Fleck_soldier_Engineer;
  class CUP_B_Ger_Fleck_soldier_GL;
  class CUP_B_Ger_Fleck_soldier_MG;
  class CUP_B_Ger_Fleck_soldier_MG3;
  class CUP_B_GER_Fleck_Medic;
  class CFP_B_DEARMY_WDL_Pilot_01;
  class CUP_B_Ger_Fleck_soldier;
  class CUP_B_Ger_Fleck_soldier_Scout;
  class CUP_B_Ger_Fleck_soldier_Sniper;
  class CUP_B_Ger_Fleck_soldier_TL;

  class STAF_CUP_B_Ger_Army_Fleck_soldier_AA: CUP_B_Ger_Fleck_soldier_AA {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_AA.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_launch_FIM92Stinger", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_launch_FIM92Stinger", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_Stinger_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Ammo: CUP_B_Ger_Fleck_soldier_Ammo {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "BW_Backpack_Carryall_Tropentarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Ammo.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_AAT: CUP_B_Ger_Fleck_soldier_AAT {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_Kitbag_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_AAT.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_AT: CUP_B_Ger_Fleck_soldier_AT {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CUP_B_GER_Pack_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_AT.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_launch_MAAWS_Scope", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_launch_MAAWS_Scope", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEAT_M","CUP_MAAWS_HEDP_M"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Engineer: CUP_B_Ger_Fleck_soldier_Engineer {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_Kitbag_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Engineer.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_GL: CUP_B_Ger_Fleck_soldier_GL {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_Kitbag_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_GL.jpg";
        weapons[] = {CUP_arifle_AG36, "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {CUP_arifle_AG36, "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareGreen_F","UGL_FlareGreen_F"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","UGL_FlareWhite_F","UGL_FlareWhite_F","UGL_FlareRed_F","UGL_FlareRed_F","UGL_FlareGreen_F","UGL_FlareGreen_F"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_MG: CUP_B_Ger_Fleck_soldier_MG {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_Kitbag_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_MG.jpg";
        weapons[] = {"CUP_arifle_MG36_holo", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_MG36_holo", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_100Rnd_556x45_BetaCMag","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_MG3: CUP_B_Ger_Fleck_soldier_MG3 {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_Kitbag_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_MG3.jpg";
        weapons[] = {"CUP_lmg_MG3_rail", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_MG3_rail", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_120Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Medic: CUP_B_GER_Fleck_Medic {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_Kitbag_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Medic.jpg";
        weapons[] = {"CUP_arifle_G36C", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36C", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot: CFP_B_DEARMY_WDL_Pilot_01 {
      uniformClass = "SP_0000_Standard_FieldUniform_Green";
      editorSubcategory = "EdSubcat_Personnel";
      weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
      respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
      magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
      respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier: CUP_B_Ger_Fleck_soldier {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_Kitbag_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Jetpilot: STAF_CUP_B_Ger_Army_Fleck_soldier {
      uniformClass = "SP_0000_Standard_FieldUniform_Green";
      displayName = "Fighter Pilot";
      editorSubcategory = "EdSubcat_Personnel";
      editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Jetpilot.jpg";
      backpack = "B_Parachute";
      faction = "CFP_B_DEARMY_WDL";
      weapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      respawnWeapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      linkedItems[] = {"CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot", "H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      respawnLinkedItems[] = {"CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot", "H_PilotHelmetFighter_B", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
      respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

      headgearList[] = {"H_PilotHelmetFighter_B",1};
      vestList[] = {"CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot",1};
  		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Crew: CUP_B_Ger_Fleck_soldier_Engineer {
        displayName = "Crewman";
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Crew.jpg";
        weapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_MP5A5", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_Tactical1_Flecktarn", "SP_CVCHelmet_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_Tactical1_Flecktarn", "SP_CVCHelmet_Green", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_30Rnd_9x19_MP5","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"SP_CVCHelmet_Green",1};
        vestList[] = {"CFP_Tactical1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Scout: CUP_B_Ger_Fleck_soldier_Scout {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_AssaultPack_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Scout.jpg";
        weapons[] = {"CUP_arifle_G36C_holo_snds", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36C_holo_snds", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Sniper: CUP_B_Ger_Fleck_soldier_Sniper {
        uniformClass = "U_B_FullGhillie_lsh";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Sniper.jpg";
        weapons[] = {"CUP_srifle_G22_des_SBPMII","CUP_hgun_glock17_flashlight","CUP_Vector21Nite"};
        linkedItems[] = {"CFP_LBT6094_operator_AOR1", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_LBT6094_operator_AOR1", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_5Rnd_762x67_G22","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        vestList[] = {"CFP_LBT6094_operator_AOR1",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_TL: CUP_B_Ger_Fleck_soldier_TL {
        uniformClass = "CFP_U_Crye_Flecktarn";
        backpack = "CFP_AssaultPack_Flecktarn";
        Items[] = {"FirstAidKit"};
        faction = "CFP_B_DEARMY_WDL";
        editorSubcategory = "EdSubcat_Personnel";
        editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_TL.jpg";
        weapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_G36A", "CUP_hgun_glock17_flashlight", "Throw", "Put"};
        linkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        respawnLinkedItems[] = {"CFP_PlateCarrier1_Flecktarn", "CFP_OPS2017_Helmet_Flecktarn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
        magazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
        respawnMagazines[] = {"CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_30Rnd_556x45_G36","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};

        headgearList[] = {"CFP_OPS2017_Helmet_Flecktarn",1};
        vestList[] = {"CFP_PlateCarrier1_Flecktarn",1};

    		ALiVE_orbatCreator_loadout[] = {};
    };

  // Changes to Original CUP/CFP Vehicles ______________________________________

  //CH53
  class CUP_CH53E_Base;
  class CUP_CH53E_VIV_Base;
  class CUP_B_CH53E_GER_OCimport_02;
  class CUP_B_CH53E_VIV_GER_OCimport_02;

  class CUP_B_CH53E_GER: CUP_CH53E_Base {
    scope = 1;
    scopeCurator = 1;
    };
  class CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_01: CUP_B_CH53E_GER_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_CH53E_VIV_GER: CUP_CH53E_VIV_Base {
    scope = 1;
    scopeCurator = 1;
    };
  class CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_VIV_01: CUP_B_CH53E_VIV_GER_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };

  class STAF_CUP_B_CH53E_GER: CUP_B_CH53E_GER {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_01: CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_01 {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_CH53E_VIV_GER: CUP_B_CH53E_VIV_GER {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_VIV_01: CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_VIV_01 {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };

  //UH-1D
  class CUP_UH1H_base;
  class CUP_UH1H_slick_base;
  class CUP_UH1H_armed_base;
  class CUP_UH1H_gunship_base;

  class CUP_B_UH1D_GER_KSK_Des: CUP_UH1H_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_UH1D_GER_KSK: CUP_UH1H_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_UH1D_slick_GER_KSK_Des: CUP_UH1H_slick_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_UH1D_slick_GER_KSK: CUP_UH1H_slick_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_UH1D_armed_GER_KSK_Des: CUP_UH1H_armed_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_UH1D_armed_GER_KSK: CUP_UH1H_armed_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_UH1D_gunship_GER_KSK_Des: CUP_UH1H_gunship_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_UH1D_gunship_GER_KSK: CUP_UH1H_gunship_base {
    scope = 1;
    scopeCurator = 1;
    };

  class STAF_CUP_B_UH1D_GER_KSK_Des: CUP_B_UH1D_GER_KSK_Des {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_UH1D_GER_KSK: CUP_B_UH1D_GER_KSK {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_UH1D_slick_GER_KSK_Des: CUP_B_UH1D_slick_GER_KSK_Des {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_UH1D_slick_GER_KSK: CUP_B_UH1D_slick_GER_KSK {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_UH1D_armed_GER_KSK_Des: CUP_B_UH1D_armed_GER_KSK_Des {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_UH1D_armed_GER_KSK: CUP_B_UH1D_armed_GER_KSK {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_UH1D_gunship_GER_KSK_Des: CUP_B_UH1D_gunship_GER_KSK_Des {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_UH1D_gunship_GER_KSK: CUP_B_UH1D_gunship_GER_KSK {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };

  //Little Bird
  class B_Heli_Light_01_F;
  class Heli_Light_01_armed_base_F;

  class MH6_Littlebird_BW_Tropen: B_Heli_Light_01_F	{
    scope = 1;
    scopeCurator = 1;
    };
	class MH6_Littlebird_BW_Fleck: B_Heli_Light_01_F	{
    scope = 1;
    scopeCurator = 1;
    };
	class AH6_Littlebird_BW_Tropen: Heli_Light_01_armed_base_F	{
    scope = 1;
    scopeCurator = 1;
    };
	class AH6_Littlebird_BW_Fleck: Heli_Light_01_armed_base_F	{
    scope = 1;
    scopeCurator = 1;
    };

  //Wildcat
  class AW159_Bewaffnet;
  class AW159_Transport_BW;

  class AW159_BW_Black: AW159_Bewaffnet {
    scope = 1;
    scopeCurator = 1;
	 };
	class AW159_BW_Trop: AW159_Bewaffnet {
    scope = 1;
    scopeCurator = 1;
    };
	class AW159_BW_Fleck: AW159_Bewaffnet {
    scope = 1;
    scopeCurator = 1;
    };
  class AW159_BW_Black_Unbewaffnet: AW159_Transport_BW {
    scope = 1;
    scopeCurator = 1;
	 };
	class AW159_BW_Trop_Unbewaffnet: AW159_Transport_BW {
    scope = 1;
    scopeCurator = 1;
    };
	class AW159_BW_Fleck_Unbewaffnet: AW159_Transport_BW {
    scope = 1;
    scopeCurator = 1;
    };

 	class STAF_AW159_BW_Trop: AW159_BW_Trop {
 		displayName = "Wildcat (Armed)";
   	crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
   	typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Trop.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
  	};
 	class STAF_AW159_BW_Fleck: AW159_BW_Fleck {
 		displayName = "Wildcat (Armed)";
   	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
   	typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
 	  };
 	class STAF_AW159_BW_Trop_Unbewaffnet: AW159_BW_Trop_Unbewaffnet {
 		displayName = "Wildcat (Unarmed)";
   	crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
   	typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Trop_Unbewaffnet.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
 	  };
 	class STAF_AW159_BW_Fleck_Unbewaffnet: AW159_BW_Fleck_Unbewaffnet {
 		displayName = "Wildcat (Unarmed)";
   	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
   	typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Fleck_Unbewaffnet.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
 	  };

  //Merlin
  class I_Heli_Transport_02_F;

  class NH_90_Black: I_Heli_Transport_02_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class NH_90_Trop: I_Heli_Transport_02_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class NH_90_Fleck: I_Heli_Transport_02_F {
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_NH_90_Trop: NH_90_Trop {
    displayName = "NH-90";
    crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_NH_90_Trop.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_NH_90_Fleck: NH_90_Fleck {
		displayName = "NH-90";
  	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
  	typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_NH_90_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };

  //Drone
  class B_UAV_02_dynamicLoadout_F;

  class BW_Euro_Hawk: B_UAV_02_dynamicLoadout_F	{
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_BW_Euro_Hawk: BW_Euro_Hawk	{
  	faction = "CUP_B_GER";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_Euro_Hawk.jpg";
    scope = 2;
    scopeCurator = 2;
  	};
  class STAF_BW_Euro_Hawk_Fleck: BW_Euro_Hawk	{
		faction = "CFP_B_DEARMY_WDL";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_Euro_Hawk_Fleck.jpg";
    scope = 2;
    scopeCurator = 2;
	  };

  //Eurofighter
  class pook_EF2000;
  class pook_EF2000_BAF;
  class B_Ejection_Seat_Plane_Fighter_01_F;

  class pook_EF2000_BLUFOR: pook_EF2000	{
   scope = 1;
   scopeCurator = 1;
   };
  class pook_EF2000_INDFOR: pook_EF2000_BLUFOR	{
   scope = 2;
   scopeCurator = 2;
    };
	class pook_EF2000_OPFOR: pook_EF2000_BLUFOR {
    scope = 1;
    scopeCurator = 1;
	 };
 	class pook_EF2K_EJECT_SEAT_BLUFOR: B_Ejection_Seat_Plane_Fighter_01_F {
    scope = 1;
    scopeCurator = 1;
 	 };
 	class pook_EF2K_EJECT_SEAT_OPFOR: pook_EF2K_EJECT_SEAT_BLUFOR {
    scope = 1;
    scopeCurator = 1;
 	  };
 	class pook_EF2K_EJECT_SEAT_INDFOR: pook_EF2K_EJECT_SEAT_BLUFOR {
    scope = 1;
    scopeCurator = 1;
 	  };
  class pook_EF2000_GER: pook_EF2000_BAF {
    scope = 1;
    scopeCurator = 1;
 	  };
  class pook_EF2000_CDF: pook_EF2000_GER {
   scope = 2;
   scopeCurator = 2;
    };


  class STAF_BW_EF2000: pook_EF2000_GER {
    displayName = "EF-2000";
    crew = "STAF_CUP_B_Ger_Army_soldier_Jetpilot";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_EF2000.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_EF2000_Fleck: pook_EF2000_GER {
		displayName = "EF-2000";
  	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Jetpilot";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_EF2000_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };

  //Truck
  class O_Truck_03_transport_F;
  class O_Truck_03_covered_F;
  class O_Truck_03_repair_F;
  class O_Truck_03_ammo_F;
  class O_Truck_03_fuel_F;
  class O_Truck_03_medical_F;
  class O_Truck_03_device_F;

  class BW_LKW_Transport_offen_Tropen : O_Truck_03_transport_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Transport_Tropen: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Geraet_Tropen: O_Truck_03_device_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Munition_Tropen: O_Truck_03_ammo_F {
    scope = 1;
    scopeCurator = 1;
    };
  class BW_LKW_Reparatur_Tropen: O_Truck_03_repair_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Treibstoff_Tropen: O_Truck_03_fuel_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Medic_Tropen: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Transport_offen_fleck : O_Truck_03_transport_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Transport_Fleck: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Geraet_Fleck: O_Truck_03_device_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Munition_Fleck: O_Truck_03_ammo_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Reparatur_Fleck: O_Truck_03_repair_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Treibstoff_Fleck: O_Truck_03_fuel_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Medic_Fleck: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_BW_LKW_Transport_offen_Tropen : BW_LKW_Transport_offen_Tropen {
    displayName = "Truck Transport (Open)";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_offen_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Transport_Tropen: BW_LKW_Transport_Tropen {
    displayName = "Truck Transport";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Geraet_Tropen: BW_LKW_Geraet_Tropen {
    displayName = "Truck Device";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Geraet_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Munition_Tropen: O_Truck_03_ammo_F {
    displayName = "Truck Ammo";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Munition_Tropen.jpg";
    faction = "CUP_B_GER";
		textureList[] = {};
		ace_cargo_space = 50;
    vehicleClass = "Support";
    side = 1;
    scope = 2;
    scopeCurator = 2;
		transportSoldier = 1;
		transportAmmo = 30000;
		supplyRadius = 15;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_cargo_trop_co.paa"};
    };
  class STAF_BW_LKW_Reparatur_Tropen: BW_LKW_Reparatur_Tropen {
    displayName = "Truck Repair";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Reparatur_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Treibstoff_Tropen: BW_LKW_Treibstoff_Tropen {
    displayName = "Truck Fuel";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Treibstoff_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Medic_Tropen: BW_LKW_Medic_Tropen {
    displayName = "Truck Medical";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Medic_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Transport_offen_fleck : BW_LKW_Transport_offen_fleck {
    displayName = "Truck Transport (Open)";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_offen_fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Transport_Fleck: BW_LKW_Transport_Fleck {
    displayName = "Truck Transport";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Geraet_Fleck: BW_LKW_Geraet_Fleck {
    displayName = "Truck Device";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Geraet_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Munition_Fleck: O_Truck_03_ammo_F {
    displayName = "Truck Ammo";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Munition_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
		textureList[] = {};
		ace_cargo_space = 50;
    vehicleClass = "Support";
    side = 1;
    scope = 2;
    scopeCurator = 2;
		transportSoldier = 1;
		transportAmmo = 30000;
		supplyRadius = 15;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_cargo_co.paa"};
    };
  class STAF_BW_LKW_Reparatur_Fleck: BW_LKW_Reparatur_Fleck {
    displayName = "Truck Repair";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Reparatur_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Treibstoff_Fleck: BW_LKW_Treibstoff_Fleck {
    displayName = "Truck Fuel";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Treibstoff_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Medic_Fleck: BW_LKW_Medic_Fleck {
    displayName = "Truck Medical";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Medic_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };

  //Dingo
  class CUP_B_Dingo_CZ_Wdl;
  class CUP_B_Dingo_CZ_Des;
  class CUP_B_Dingo_GL_CZ_Wdl;
  class CUP_B_Dingo_GL_CZ_Des;

  class CUP_B_Dingo_GER_Des: CUP_B_Dingo_CZ_Des {
    scope = 1;
    scopeCurator = 1;
	 };
  class CUP_B_Dingo_GER_Wdl: CUP_B_Dingo_CZ_Wdl {
    scope = 1;
    scopeCurator = 1;
	 };
  class CUP_B_Dingo_GL_GER_Des: CUP_B_Dingo_GL_CZ_Des {
    scope = 1;
    scopeCurator = 1;
	 };
  class CUP_B_Dingo_GL_GER_Wdl: CUP_B_Dingo_GL_CZ_Wdl {
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_CUP_B_Dingo_GER_Des: CUP_B_Dingo_GER_Des {
		crew = "STAF_CUP_B_Ger_Army_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_Dingo_GER_Wdl: CUP_B_Dingo_GER_Wdl {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_Dingo_GL_GER_Des: CUP_B_Dingo_GL_GER_Des {
		crew = "STAF_CUP_B_Ger_Army_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_Dingo_GL_GER_Wdl: CUP_B_Dingo_GL_GER_Wdl {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    scope = 2;
    scopeCurator = 2;
    };

  //Fennek
  class I_MRAP_03_F_OCimport_02;
  class MRAP_03_base_F ;
  class MRAP_03_hmg_base_F ;
  class MRAP_03_gmg_base_F ;

  class CFP_B_DEARMY_Fennek_01: I_MRAP_03_F_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };
  class CFP_B_DEARMY_WDL_Fennek_01: I_MRAP_03_F_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_F : MRAP_03_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_hmg_F : MRAP_03_hmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_gmg_F : MRAP_03_gmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_F_DES : MRAP_03_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_hmg_F_DES : MRAP_03_hmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_gmg_F_DES : MRAP_03_gmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };

  class STAF_KGB_B_MRAP_03_F : MRAP_03_base_F	{
    displayName = "Fennek";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_F.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_03_ext_co.paa", "nato_strider\data\turret_03_co.paa"
		    };
    faction = "CFP_B_DEARMY_WDL";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_hmg_F : MRAP_03_hmg_base_F {
    displayName = "Fennek (HMG)";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_hmg_F.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_03_ext_co.paa", "nato_strider\data\turret_03_co.paa"
		    };
    faction = "CFP_B_DEARMY_WDL";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_gmg_F : MRAP_03_gmg_base_F {
    displayName = "Fennek (GMG)";
    crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_gmg_F.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_03_ext_co.paa", "nato_strider\data\turret_03_co.paa"
		    };
    faction = "CFP_B_DEARMY_WDL";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_F_DES : MRAP_03_base_F {
    displayName = "Fennek";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_F_DES.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_02_ext_co.paa", "nato_strider\data\turret_02_co.paa"
		    };
    faction = "CUP_B_GER";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_hmg_F_DES : MRAP_03_hmg_base_F {
    displayName = "Fennek (HMG)";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_hmg_F_DES.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_02_ext_co.paa", "nato_strider\data\turret_02_co.paa"
		    };
    faction = "CUP_B_GER";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_gmg_F_DES : MRAP_03_gmg_base_F {
    displayName = "Fennek (GMG)";
    crew = "STAF_CUP_B_Ger_Army_soldier";
    typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_gmg_F_DES.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_02_ext_co.paa", "nato_strider\data\turret_02_co.paa"
		    };
    faction = "CUP_B_GER";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };

  //Leopard
  class CUP_Leopard2_Base;
  class I_MBT_03_cannon_F;

  class STAF_Leopard_Base_F: I_MBT_03_cannon_F {
		scope = 1;
		scopeCurator = 1;
		class EventHandlers;
		textureList[] = {"STAF",1};
		class TextureSources
		{
			class STAF_Flecktarn
			{
				displayName = "Flecktarn";
				author = "CapryCorn";
				textures[] = {"staf_cup_additions_germanarmy\txt\FLK_mbt_03_ext01_co.paa","staf_cup_additions_germanarmy\txt\FLK_mbt_03_ext02_co.paa","staf_cup_additions_germanarmy\txt\FLK_mbt_03_rcws_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
			};
			class STAF_Wuestentarn
			{
				displayName = "Tropentarn";
				author = "CapryCorn";
				textures[] = {"staf_cup_additions_germanarmy\txt\WST_mbt_03_ext01_co.paa","staf_cup_additions_germanarmy\txt\WST_mbt_03_ext02_co.paa","staf_cup_additions_germanarmy\txt\WST_mbt_03_rcws_co.paa","staf_cup_additions_germanarmy\txt\camonet_desert_CO.paa"};
			};
		};
	 };

  class CUP_B_Leopard2A6_GER: CUP_Leopard2_Base {
    scope = 1;
    scopeCurator = 1;
    };
  class STAF_B_Leopard: STAF_Leopard_Base_F {
   author = "CapryCorn";
   scope = 2;
   scopeCurator = 2;
   forceInGarage = 1;
   side = 1;
   faction = "CUP_B_GER";
   displayName = "Leopard 2SG";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Leopard.jpg";
   crew = "STAF_CUP_B_Ger_Army_soldier_Crew";
   hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
   hiddenSelectionsTextures[] = {"staf_cup_additions_germanarmy\txt\WST_mbt_03_ext01_co.paa","staf_cup_additions_germanarmy\txt\WST_mbt_03_ext02_co.paa","staf_cup_additions_germanarmy\txt\WST_mbt_03_rcws_co.paa","staf_cup_additions_germanarmy\txt\camonet_desert_CO.paa"};
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Crew","STAF_CUP_B_Ger_Army_soldier_Crew","STAF_CUP_B_Ger_Army_soldier_Crew"};
    };
  class STAF_B_Leopard_Fleck: STAF_Leopard_Base_F {
  	author = "CapryCorn";
  	scope = 2;
  	scopeCurator = 2;
  	forceInGarage = 1;
  	side = 1;
  	faction = "CFP_B_DEARMY_WDL";
  	displayName = "Leopard 2SG";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Leopard_Fleck.jpg";
  	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Crew";
  	hiddenSelections[] = {"Camo1","Camo2","Camo3","CamoNet"};
  	hiddenSelectionsTextures[] = {"staf_cup_additions_germanarmy\txt\FLK_mbt_03_ext01_co.paa","staf_cup_additions_germanarmy\txt\FLK_mbt_03_ext02_co.paa","staf_cup_additions_germanarmy\txt\FLK_mbt_03_rcws_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
  	typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Crew","STAF_CUP_B_Ger_Army_Fleck_soldier_Crew","STAF_CUP_B_Ger_Army_Fleck_soldier_Crew"};
    };

  //Wiesel
  class I_LT_01_AA_F;
  class I_LT_01_AT_F;
  class I_LT_01_cannon_F;
  class I_LT_01_scout_F;

  class STAF_B_Wiesel_AA: I_LT_01_AA_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "STAF_CUP_B_Ger_Army_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_AA: I_LT_01_AA_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };
  class STAF_B_Wiesel_AT: I_LT_01_AT_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AT.jpg";
   crew = "STAF_CUP_B_Ger_Army_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_AT: I_LT_01_AT_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_Fleck_AT.jpg";
   crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };
  class STAF_B_Wiesel_cannon: I_LT_01_cannon_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_cannon.jpg";
   crew = "STAF_CUP_B_Ger_Army_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_cannon: I_LT_01_cannon_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_Fleck_cannon.jpg";
   crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };
  class STAF_B_Wiesel_scout: I_LT_01_scout_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_scout.jpg";
   crew = "STAF_CUP_B_Ger_Army_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_scout: I_LT_01_scout_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_Fleck_scout.jpg";
   crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };

  //Bardelas
  class B_APC_Tracked_01_AA_F;
  class B_T_APC_Tracked_01_AA_F;

  class STAF_Bardelas: B_APC_Tracked_01_AA_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "STAF_CUP_B_Ger_Army_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Crew","STAF_CUP_B_Ger_Army_soldier_Crew"};
   textureList[] = {"Sand",1};
    };
  class STAF_Bardelas_Fleck: B_T_APC_Tracked_01_AA_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Crew","STAF_CUP_B_Ger_Army_Fleck_soldier_Crew"};
   textureList[] = {"Sand",1};
    };

  //Sholef
  class B_MBT_01_arty_F;
  class B_T_MBT_01_arty_F;

  class STAF_Sholef: B_MBT_01_arty_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_Sholef.jpg";
   crew = "STAF_CUP_B_Ger_Army_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Crew","STAF_CUP_B_Ger_Army_soldier_Crew"};
   textureList[] = {"Sand",1};
    };
  class STAF_Sholef_Fleck: B_T_MBT_01_arty_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_Sholef_Fleck.jpg";
   crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Crew";
   typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Crew","STAF_CUP_B_Ger_Army_Fleck_soldier_Crew"};
   textureList[] = {"Sand",1};
    };

  //Static
  class CUP_M2StaticMG_base;
  class CUP_M2StaticMG_MiniTripod_base;
  class CFP_O_RUARMY_Podnos_2B14_DES_01;

  class CUP_B_M2StaticMG_GER: CUP_M2StaticMG_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_M2StaticMG_GER_Fleck: CUP_M2StaticMG_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_M2StaticMG_MiniTripod_GER: CUP_M2StaticMG_MiniTripod_base {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_M2StaticMG_MiniTripod_GER_Fleck: CUP_M2StaticMG_MiniTripod_base {
    scope = 1;
    scopeCurator = 1;
    };

  class STAF_CUP_B_M2StaticMG_GER: CUP_B_M2StaticMG_GER {
		crew = "STAF_CUP_B_Ger_Army_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_M2StaticMG_GER_Fleck: CUP_B_M2StaticMG_GER_Fleck {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_M2StaticMG_MiniTripod_GER: CUP_B_M2StaticMG_MiniTripod_GER {
		crew = "STAF_CUP_B_Ger_Army_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_M2StaticMG_MiniTripod_GER_Fleck: CUP_B_M2StaticMG_MiniTripod_GER_Fleck {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_Podnos_2B14: CFP_O_RUARMY_Podnos_2B14_DES_01 {
		crew = "STAF_CUP_B_Ger_Army_soldier";
    faction = "CUP_B_GER";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier"};
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_Podnos_2B14_Fleck: CFP_O_RUARMY_Podnos_2B14_DES_01 {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier";
    faction = "CFP_B_DEARMY_WDL";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier"};
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
};
