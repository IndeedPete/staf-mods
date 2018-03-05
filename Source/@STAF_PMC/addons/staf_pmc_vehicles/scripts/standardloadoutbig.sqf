_veh = _this select 0;

// Items
_veh addItemCargo ["ACE_fieldDressing",50];
_veh addItemCargo ["ACE_elasticBandage",50];
_veh addItemCargo ["ACE_quikclot",50];
_veh addItemCargo ["ACE_packingBandage",50];
_veh addItemCargo ["ACE_SpraypaintBlack",10];
_veh addItemCargo ["ACE_SpraypaintRed",10];
_veh addItemCargo ["ACE_personalAidKit",50];
_veh addItemCargo ["ACE_epinephrine",20];
_veh addItemCargo ["ACE_adenosine",2];
_veh addItemCargo ["ACE_morphine",20];
_veh addItemCargo ["ACE_tourniquet",20];
_veh addItemCargo ["adv_aceSplint_splint",20];
_veh addItemCargo ["ACE_bloodIV",20];
_veh addItemCargo ["ACE_bloodIV_500",40];
_veh addItemCargo ["ACE_bloodIV_250",80];
_veh addItemCargo ["ACE_DefusalKit",5];
_veh addItemCargo ["ACE_EarPlugs",10];
_veh addItemCargo ["ACE_CableTie",20];
_veh addItemCargo ["ACE_bodyBag",10];
_veh addItemCargo ["adv_aceCPR_AED",3];
_veh addItemCargo ["ACE_wirecutter",2];
_veh addItemCargo ["TFAR_anprc152",5];

// Items
_veh addMagazineCargo ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 50];
_veh addMagazineCargo ["hlc_200rnd_556x45_M_SAW", 20];
_veh addMagazineCargo ["hlc_30rnd_556x45_EPR_G36", 50];
_veh addMagazineCargo ["30Rnd_65x39_caseless_mag", 50];
_veh addMagazineCargo ["20Rnd_762x51_Mag", 20];
_veh addMagazineCargo ["SmokeShell", 20];
_veh addMagazineCargo ["SmokeShellGreen", 10];
_veh addMagazineCargo ["SmokeShellRed", 10];
_veh addMagazineCargo ["HandGrenade", 30];

//weapons
_veh addWeaponCargo ["rhs_weap_M136", 7];

//Backpack
_veh addBackpackCargo ["B_AssaultPack_blk",3];

{
  if (typeof _x == "B_AssaultPack_blk") then {
    _x addItemCargo ["Toolkit",1];
  };
} forEach (everyBackpack _veh);
