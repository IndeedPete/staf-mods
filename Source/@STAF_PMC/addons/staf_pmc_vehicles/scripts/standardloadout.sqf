_veh = _this select 0;

// Items
_veh addItemCargo ["ACE_fieldDressing",8];
_veh addItemCargo ["ACE_elasticBandage",8];
_veh addItemCargo ["ACE_quikclot",8];
_veh addItemCargo ["ACE_packingBandage",8];
_veh addItemCargo ["ACE_SpraypaintBlack",1];
_veh addItemCargo ["ACE_SpraypaintRed",1];
_veh addItemCargo ["ACE_personalAidKit",2];
_veh addItemCargo ["ACE_epinephrine",2];
_veh addItemCargo ["ACE_adenosine",2];
_veh addItemCargo ["ACE_morphine",2];
_veh addItemCargo ["ACE_tourniquet",4];
_veh addItemCargo ["adv_aceSplint_splint",4];
_veh addItemCargo ["ACE_bloodIV",2];
_veh addItemCargo ["ACE_bloodIV_500",4];
_veh addItemCargo ["ACE_bloodIV_250",8];
_veh addItemCargo ["ACE_DefusalKit",1];
_veh addItemCargo ["ACE_EarPlugs",2];
_veh addItemCargo ["ACE_CableTie",2];
_veh addItemCargo ["ACE_bodyBag",2];
_veh addItemCargo ["adv_aceCPR_AED",1];
_veh addItemCargo ["ACE_wirecutter",2];
_veh addItemCargo ["TFAR_anprc152",2];

// Items
_veh addMagazineCargo ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 12];
_veh addMagazineCargo ["hlc_200rnd_556x45_M_SAW", 5];
_veh addMagazineCargo ["KA_17Rnd_9x19_Mag", 4];
_veh addMagazineCargo ["20Rnd_762x51_Mag", 6];
_veh addMagazineCargo ["SmokeShell", 4];
_veh addMagazineCargo ["SmokeShellGreen", 2];
_veh addMagazineCargo ["SmokeShellRed", 2];
_veh addMagazineCargo ["HandGrenade", 4];

//weapons
_veh addWeaponCargo ["rhs_weap_M136", 2];

//Backpack
_veh addBackpackCargo ["B_AssaultPack_blk",1];

{
  if (typeof _x == "B_AssaultPack_blk") then {
    _x addItemCargo ["Toolkit",1];
  };
} forEach (everyBackpack _veh);
