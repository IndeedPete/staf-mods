//Init
params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

_condition = _logic getVariable ["STAF_Module_PMC_Vehicle_Equipment_Type",-1];

{
  clearMagazineCargoGlobal _x;
  clearWeaponCargoGlobal _x;
  clearItemCargoGlobal _x;
  clearBackpackCargoGlobal _x;

  // Car
	if (_condition == 0) then {
    // Items
    _x addItemCargoGlobal ["ACE_fieldDressing",15];
    _x addItemCargoGlobal ["ACE_elasticBandage",15];
    _x addItemCargoGlobal ["ACE_quikclot",15];
    _x addItemCargoGlobal ["ACE_packingBandage",15];
    _x addItemCargoGlobal ["ACE_SpraypaintBlack",1];
    _x addItemCargoGlobal ["ACE_SpraypaintRed",1];
    _x addItemCargoGlobal ["ACE_personalAidKit",4];
    _x addItemCargoGlobal ["ACE_epinephrine",5];
    _x addItemCargoGlobal ["ACE_adenosine",5];
    _x addItemCargoGlobal ["ACE_morphine",5];
    _x addItemCargoGlobal ["ACE_tourniquet",4];
    _x addItemCargoGlobal ["adv_aceSplint_splint",8];
    _x addItemCargoGlobal ["ACE_bloodIV",4];
    _x addItemCargoGlobal ["ACE_bloodIV_500",8];
    _x addItemCargoGlobal ["ACE_bloodIV_250",15];
    _x addItemCargoGlobal ["ACE_DefusalKit",1];
    _x addItemCargoGlobal ["ACE_EarPlugs",2];
    _x addItemCargoGlobal ["ACE_CableTie",2];
    _x addItemCargoGlobal ["ACE_bodyBag",2];
    _x addItemCargoGlobal ["adv_aceCPR_AED",1];
    _x addItemCargoGlobal ["ACE_wirecutter",2];
    _x addItemCargoGlobal ["TFAR_anprc152",2];

    // Magazines
    _x addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
    _x addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
    _x addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
    _x addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
    _x addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
    _x addMagazineCargoGlobal ["SmokeShell", 4];
    _x addMagazineCargoGlobal ["SmokeShellGreen", 2];
    _x addMagazineCargoGlobal ["SmokeShellRed", 2];
    _x addMagazineCargoGlobal ["HandGrenade", 4];

    //weapons
    _x addWeaponCargoGlobal ["rhs_weap_M136", 2];

    //Backpack
    _x addBackpackCargoGlobal ["B_AssaultPack_blk",1];

    {
      if (typeof _x == "B_AssaultPack_blk") then {
        _x addItemCargoGlobal ["Toolkit",1];
      };
    } forEach (everyBackpack _x);
  };

  // Truck
  if (_condition == 1) then {
    // Items
    _x addItemCargoGlobal ["ACE_fieldDressing",50];
    _x addItemCargoGlobal ["ACE_elasticBandage",50];
    _x addItemCargoGlobal ["ACE_quikclot",50];
    _x addItemCargoGlobal ["ACE_packingBandage",50];
    _x addItemCargoGlobal ["ACE_SpraypaintBlack",10];
    _x addItemCargoGlobal ["ACE_SpraypaintRed",10];
    _x addItemCargoGlobal ["ACE_personalAidKit",50];
    _x addItemCargoGlobal ["ACE_epinephrine",20];
    _x addItemCargoGlobal ["ACE_adenosine",2];
    _x addItemCargoGlobal ["ACE_morphine",20];
    _x addItemCargoGlobal ["ACE_tourniquet",20];
    _x addItemCargoGlobal ["adv_aceSplint_splint",20];
    _x addItemCargoGlobal ["ACE_bloodIV",20];
    _x addItemCargoGlobal ["ACE_bloodIV_500",40];
    _x addItemCargoGlobal ["ACE_bloodIV_250",80];
    _x addItemCargoGlobal ["ACE_DefusalKit",5];
    _x addItemCargoGlobal ["ACE_EarPlugs",10];
    _x addItemCargoGlobal ["ACE_CableTie",20];
    _x addItemCargoGlobal ["ACE_bodyBag",10];
    _x addItemCargoGlobal ["adv_aceCPR_AED",3];
    _x addItemCargoGlobal ["ACE_wirecutter",2];
    _x addItemCargoGlobal ["TFAR_anprc152",5];

    // Magazines
    _x addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 50];
    _x addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 20];
    _x addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 50];
    _x addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 50];
    _x addMagazineCargoGlobal ["20Rnd_762x51_Mag", 20];
    _x addMagazineCargoGlobal ["SmokeShell", 20];
    _x addMagazineCargoGlobal ["SmokeShellGreen", 10];
    _x addMagazineCargoGlobal ["SmokeShellRed", 10];
    _x addMagazineCargoGlobal ["HandGrenade", 30];

    //weapons
    _x addWeaponCargoGlobal ["rhs_weap_M136", 7];

    //Backpack
    _x addBackpackCargoGlobal ["B_AssaultPack_blk",3];

    {
      if (typeof _x == "B_AssaultPack_blk") then {
        _x addItemCargoGlobal ["Toolkit",1];
      };
    } forEach (everyBackpack _x);
  };

  // Helicopter
  if (_condition == 2) then {
    // Items
    _x addItemCargoGlobal ["ACE_fieldDressing",15];
    _x addItemCargoGlobal ["ACE_elasticBandage",15];
    _x addItemCargoGlobal ["ACE_quikclot",15];
    _x addItemCargoGlobal ["ACE_packingBandage",15];
    _x addItemCargoGlobal ["ACE_personalAidKit",4];
    _x addItemCargoGlobal ["ACE_epinephrine",5];
    _x addItemCargoGlobal ["ACE_adenosine",5];
    _x addItemCargoGlobal ["ACE_morphine",5];
    _x addItemCargoGlobal ["ACE_tourniquet",4];
    _x addItemCargoGlobal ["adv_aceSplint_splint",8];
    _x addItemCargoGlobal ["ACE_bloodIV",4];
    _x addItemCargoGlobal ["ACE_bloodIV_500",8];
    _x addItemCargoGlobal ["ACE_bloodIV_250",15];
    _x addItemCargoGlobal ["ACE_DefusalKit",1];
    _x addItemCargoGlobal ["ACE_EarPlugs",2];
    _x addItemCargoGlobal ["ACE_CableTie",2];
    _x addItemCargoGlobal ["adv_aceCPR_AED",1];
    _x addItemCargoGlobal ["TFAR_anprc152",2];

    // Magazines
    _x addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
    _x addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
    _x addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
    _x addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
    _x addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
    _x addMagazineCargoGlobal ["SmokeShell", 4];
    _x addMagazineCargoGlobal ["SmokeShellGreen", 2];
    _x addMagazineCargoGlobal ["SmokeShellRed", 2];
    _x addMagazineCargoGlobal ["HandGrenade", 4];

    //Backpack
    _x addBackpackCargoGlobal ["B_AssaultPack_blk",1];

    {
      if (typeof _x == "B_AssaultPack_blk") then {
        _x addItemCargoGlobal ["Toolkit",1];
      };
    } forEach (everyBackpack _x);
  };

  // Drone
  if (_condition == 3) then {
    // Items
    _x addItemCargoGlobal ["ACE_fieldDressing",5];
    _x addItemCargoGlobal ["ACE_elasticBandage",5];
    _x addItemCargoGlobal ["ACE_quikclot",5];
    _x addItemCargoGlobal ["ACE_packingBandage",5];
    _x addItemCargoGlobal ["ACE_personalAidKit",1];
    _x addItemCargoGlobal ["ACE_epinephrine",2];
    _x addItemCargoGlobal ["ACE_adenosine",2];
    _x addItemCargoGlobal ["ACE_morphine",2];
    _x addItemCargoGlobal ["ACE_tourniquet",1];
    _x addItemCargoGlobal ["adv_aceSplint_splint",2];
    _x addItemCargoGlobal ["ACE_bloodIV_250",5];
    _x addItemCargoGlobal ["ACE_EarPlugs",2];
    _x addItemCargoGlobal ["ACE_CableTie",2];
    _x addItemCargoGlobal ["TFAR_anprc152",1];

    // Magazines
    _x addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 7];
    _x addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 7];
    _x addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 7];
    _x addMagazineCargoGlobal ["20Rnd_762x51_Mag", 4];
    _x addMagazineCargoGlobal ["SmokeShell", 2];
    _x addMagazineCargoGlobal ["HandGrenade", 2];
  };

  // Drone Medical
  if (_condition == 4) then {
    // Items
    _x addItemCargoGlobal ["ACE_fieldDressing",30];
    _x addItemCargoGlobal ["ACE_elasticBandage",30];
    _x addItemCargoGlobal ["ACE_quikclot",30];
    _x addItemCargoGlobal ["ACE_packingBandage",15];
    _x addItemCargoGlobal ["ACE_personalAidKit",1];
    _x addItemCargoGlobal ["ACE_epinephrine",5];
    _x addItemCargoGlobal ["ACE_adenosine",5];
    _x addItemCargoGlobal ["ACE_morphine",5];
    _x addItemCargoGlobal ["ACE_tourniquet",4];
    _x addItemCargoGlobal ["adv_aceSplint_splint",8];
    _x addItemCargoGlobal ["ACE_bloodIV",4];
    _x addItemCargoGlobal ["ACE_bloodIV_500",8];
    _x addItemCargoGlobal ["ACE_bloodIV_250",15];
    _x addItemCargoGlobal ["ACE_EarPlugs",2];
    _x addItemCargoGlobal ["ACE_bodyBag",2];
  };

  // Drone Ammo
  if (_condition == 5) then {
    // Magazines
    _x addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 30];
    _x addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 30];
    _x addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 30];
    _x addMagazineCargoGlobal ["20Rnd_762x51_Mag", 15];
    _x addMagazineCargoGlobal ["SmokeShell", 6];
    _x addMagazineCargoGlobal ["SmokeShellGreen", 4];
    _x addMagazineCargoGlobal ["SmokeShellRed", 4];
    _x addMagazineCargoGlobal ["HandGrenade", 8];
  };

  // Other Small
  if (_condition == 6) then {
    // Items
    _x addItemCargoGlobal ["ACE_fieldDressing",15];
    _x addItemCargoGlobal ["ACE_elasticBandage",15];
    _x addItemCargoGlobal ["ACE_quikclot",15];
    _x addItemCargoGlobal ["ACE_packingBandage",15];
    _x addItemCargoGlobal ["ACE_SpraypaintBlack",1];
    _x addItemCargoGlobal ["ACE_SpraypaintRed",1];
    _x addItemCargoGlobal ["ACE_personalAidKit",4];
    _x addItemCargoGlobal ["ACE_epinephrine",5];
    _x addItemCargoGlobal ["ACE_adenosine",5];
    _x addItemCargoGlobal ["ACE_morphine",5];
    _x addItemCargoGlobal ["ACE_tourniquet",4];
    _x addItemCargoGlobal ["adv_aceSplint_splint",8];
    _x addItemCargoGlobal ["ACE_bloodIV_500",8];
    _x addItemCargoGlobal ["ACE_bloodIV_250",15];
    _x addItemCargoGlobal ["ACE_DefusalKit",1];
    _x addItemCargoGlobal ["ACE_EarPlugs",2];
    _x addItemCargoGlobal ["ACE_CableTie",2];
    _x addItemCargoGlobal ["ACE_wirecutter",2];
    _x addItemCargoGlobal ["TFAR_anprc152",2];

    // Magazines
    _x addMagazineCargoGlobal ["KA_SCAR_L_30rnd_Mk262_SPR_mag", 15];
    _x addMagazineCargoGlobal ["hlc_200rnd_556x45_M_SAW", 5];
    _x addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36", 15];
    _x addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag", 15];
    _x addMagazineCargoGlobal ["20Rnd_762x51_Mag", 6];
    _x addMagazineCargoGlobal ["SmokeShell", 4];
    _x addMagazineCargoGlobal ["SmokeShellGreen", 2];
    _x addMagazineCargoGlobal ["SmokeShellRed", 2];
    _x addMagazineCargoGlobal ["HandGrenade", 4];
  };
} forEach _objs;
