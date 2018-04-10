_objs = _this select 0;

clearMagazineCargoGlobal _objs;
clearWeaponCargoGlobal _objs;
clearItemCargoGlobal _objs;
clearBackpackCargoGlobal _objs;

// Ground
if (typeOf _objs == "STAF_offroad") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_SpraypaintBlack",1];
  _objs addItemCargoGlobal ["ACE_SpraypaintRed",1];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["ACE_bodyBag",2];
  _objs addItemCargoGlobal ["adv_aceCPR_AED",1];
  _objs addItemCargoGlobal ["ACE_wirecutter",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];

  //weapons
  _objs addWeaponCargoGlobal ["rhs_weap_M136", 2];

  //Backpack
  _objs addBackpackCargoGlobal ["B_AssaultPack_blk",1];

  {
    if (typeof _objs == "B_AssaultPack_blk") then {
      _objs addItemCargoGlobal ["Toolkit",1];
    };
  } forEach (everyBackpack _objs);
};

if (typeOf _objs == "STAF_offroad_pickup") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_SpraypaintBlack",1];
  _objs addItemCargoGlobal ["ACE_SpraypaintRed",1];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["ACE_bodyBag",2];
  _objs addItemCargoGlobal ["adv_aceCPR_AED",1];
  _objs addItemCargoGlobal ["ACE_wirecutter",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];

  //weapons
  _objs addWeaponCargoGlobal ["rhs_weap_M136", 2];

  //Backpack
  _objs addBackpackCargoGlobal ["B_AssaultPack_blk",1];

  {
    if (typeof _objs == "B_AssaultPack_blk") then {
      _objs addItemCargoGlobal ["Toolkit",1];
    };
  } forEach (everyBackpack _objs);
};

if (typeOf _objs == "STAF_suv") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_SpraypaintBlack",1];
  _objs addItemCargoGlobal ["ACE_SpraypaintRed",1];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["ACE_bodyBag",2];
  _objs addItemCargoGlobal ["adv_aceCPR_AED",1];
  _objs addItemCargoGlobal ["ACE_wirecutter",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];

  //weapons
  _objs addWeaponCargoGlobal ["rhs_weap_M136", 2];

  //Backpack
  _objs addBackpackCargoGlobal ["B_AssaultPack_blk",1];

  {
    if (typeof _objs == "B_AssaultPack_blk") then {
      _objs addItemCargoGlobal ["Toolkit",1];
    };
  } forEach (everyBackpack _objs);
};

if (typeOf _objs == "STAF_truck_transport") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_SpraypaintBlack",1];
  _objs addItemCargoGlobal ["ACE_SpraypaintRed",1];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["ACE_bodyBag",2];
  _objs addItemCargoGlobal ["adv_aceCPR_AED",1];
  _objs addItemCargoGlobal ["ACE_wirecutter",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];

  //weapons
  _objs addWeaponCargoGlobal ["rhs_weap_M136", 2];

  //Backpack
  _objs addBackpackCargoGlobal ["B_AssaultPack_blk",1];

  {
    if (typeof _objs == "B_AssaultPack_blk") then {
      _objs addItemCargoGlobal ["Toolkit",1];
    };
  } forEach (everyBackpack _objs);
};

if (typeOf _objs == "STAF_truck_box") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_SpraypaintBlack",1];
  _objs addItemCargoGlobal ["ACE_SpraypaintRed",1];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["ACE_bodyBag",2];
  _objs addItemCargoGlobal ["adv_aceCPR_AED",1];
  _objs addItemCargoGlobal ["ACE_wirecutter",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];

  //weapons
  _objs addWeaponCargoGlobal ["rhs_weap_M136", 2];

  //Backpack
  _objs addBackpackCargoGlobal ["B_AssaultPack_blk",1];

  {
    if (typeof _objs == "B_AssaultPack_blk") then {
      _objs addItemCargoGlobal ["Toolkit",1];
    };
  } forEach (everyBackpack _objs);
};

if (typeOf _objs == "STAF_truck_covered") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_SpraypaintBlack",1];
  _objs addItemCargoGlobal ["ACE_SpraypaintRed",1];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["ACE_bodyBag",2];
  _objs addItemCargoGlobal ["adv_aceCPR_AED",1];
  _objs addItemCargoGlobal ["ACE_wirecutter",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];

  //weapons
  _objs addWeaponCargoGlobal ["rhs_weap_M136", 2];

  //Backpack
  _objs addBackpackCargoGlobal ["B_AssaultPack_blk",1];

  {
    if (typeof _objs == "B_AssaultPack_blk") then {
      _objs addItemCargoGlobal ["Toolkit",1];
    };
  } forEach (everyBackpack _objs);
};

// Helicopter
if (typeOf _objs == "STAF_md500") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["adv_aceCPR_AED",1];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];

  //Backpack
  _objs addBackpackCargoGlobal ["B_AssaultPack_blk",1];

  {
    if (typeof _objs == "B_AssaultPack_blk") then {
      _objs addItemCargoGlobal ["Toolkit",1];
    };
  } forEach (everyBackpack _objs);
};

// Drone
if (typeOf _objs == "STAF_hexacopter") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",5];
  _objs addItemCargoGlobal ["ACE_elasticBandage",5];
  _objs addItemCargoGlobal ["ACE_quikclot",5];
  _objs addItemCargoGlobal ["ACE_packingBandage",5];
  _objs addItemCargoGlobal ["ACE_personalAidKit",1];
  _objs addItemCargoGlobal ["ACE_epinephrine",2];
  _objs addItemCargoGlobal ["ACE_adenosine",2];
  _objs addItemCargoGlobal ["ACE_morphine",2];
  _objs addItemCargoGlobal ["ACE_tourniquet",1];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",2];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",5];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",1];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 7];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 7];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 7];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 4];
  _objs addMagazineCargoGlobal ["SmokeShell", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 2];
};

// Drone Medical
if (typeOf _objs == "STAF_hexacopter_medical") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",30];
  _objs addItemCargoGlobal ["ACE_elasticBandage",30];
  _objs addItemCargoGlobal ["ACE_quikclot",30];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_personalAidKit",1];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV",4];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_bodyBag",2];
};

// Drone Ammo
if (typeOf _objs == "STAF_hexacopter_ammo") then {
  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 30];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 30];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 30];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 15];
  _objs addMagazineCargoGlobal ["SmokeShell", 6];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 4];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 4];
  _objs addMagazineCargoGlobal ["HandGrenade", 8];
};

// Boats
if (typeOf _objs == "STAF_rubberboat") then {
  // Items
  _objs addItemCargoGlobal ["ACE_fieldDressing",15];
  _objs addItemCargoGlobal ["ACE_elasticBandage",15];
  _objs addItemCargoGlobal ["ACE_quikclot",15];
  _objs addItemCargoGlobal ["ACE_packingBandage",15];
  _objs addItemCargoGlobal ["ACE_SpraypaintBlack",1];
  _objs addItemCargoGlobal ["ACE_SpraypaintRed",1];
  _objs addItemCargoGlobal ["ACE_personalAidKit",4];
  _objs addItemCargoGlobal ["ACE_epinephrine",5];
  _objs addItemCargoGlobal ["ACE_adenosine",5];
  _objs addItemCargoGlobal ["ACE_morphine",5];
  _objs addItemCargoGlobal ["ACE_tourniquet",4];
  _objs addItemCargoGlobal ["adv_aceSplint_splint",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_500",8];
  _objs addItemCargoGlobal ["ACE_bloodIV_250",15];
  _objs addItemCargoGlobal ["ACE_DefusalKit",1];
  _objs addItemCargoGlobal ["ACE_EarPlugs",2];
  _objs addItemCargoGlobal ["ACE_CableTie",2];
  _objs addItemCargoGlobal ["ACE_wirecutter",2];
  _objs addItemCargoGlobal ["TFAR_anprc152",2];

  // Magazines
  _objs addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
  _objs addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
  _objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
  _objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
  _objs addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
  _objs addMagazineCargoGlobal ["SmokeShell", 4];
  _objs addMagazineCargoGlobal ["SmokeShellGreen", 2];
  _objs addMagazineCargoGlobal ["SmokeShellRed", 2];
  _objs addMagazineCargoGlobal ["HandGrenade", 4];
};
