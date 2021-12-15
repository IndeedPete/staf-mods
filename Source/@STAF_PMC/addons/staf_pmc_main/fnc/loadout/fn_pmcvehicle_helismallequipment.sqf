_objs = _this select 0;

clearMagazineCargoGlobal _objs;
clearWeaponCargoGlobal _objs;
clearItemCargoGlobal _objs;
clearBackpackCargoGlobal _objs;

_objs addItemCargoGlobal ["ACE_salineIV",2];
_objs addItemCargoGlobal ["ACE_salineIV_250",4];
_objs addItemCargoGlobal ["ACE_salineIV_500",3];
_objs addItemCargoGlobal ["adv_aceSplint_splint",4];
_objs addItemCargoGlobal ["ACE_tourniquet",4];
_objs addItemCargoGlobal ["ACE_morphine",2];
_objs addItemCargoGlobal ["ACE_packingBandage",10];
_objs addItemCargoGlobal ["ACE_epinephrine",2];
_objs addItemCargoGlobal ["ACE_EarPlugs",2];
_objs addItemCargoGlobal ["ACE_quikclot",10];
_objs addItemCargoGlobal ["ACE_elasticBandage",10];
_objs addItemCargoGlobal ["ACE_fieldDressing",10];
_objs addItemCargoGlobal ["adv_aceCPR_AED",1];
_objs addItemCargoGlobal ["ACE_adenosine",2];
_objs addItemCargoGlobal ["ACE_bodyBag",2];
_objs addItemCargoGlobal ["TFAR_anprc152",1];
_objs addItemCargoGlobal ["ACE_CableTie",3];
_objs addItemCargoGlobal ["ACE_Flashlight_XL50",1];
_objs addItemCargoGlobal ["ACE_EntrenchingTool",1];
_objs addItemCargoGlobal ["ACE_wirecutter",1];
_objs addItemCargoGlobal ["ACE_DefusalKit",1];
_objs addItemCargoGlobal ["ACE_Clacker",1];
_objs addItemCargoGlobal ["ACE_UAVBattery",2];
_objs addItemCargoGlobal ["kat_X_AED",1];
_objs addItemCargoGlobal ["kat_guedel",1];
_objs addItemCargoGlobal ["kat_larynx",1];
_objs addItemCargoGlobal ["kat_Pulseoximeter",1];
_objs addItemCargoGlobal ["kat_stethoscope",1];

_objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag",7]; //G36 MLI
_objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36",7]; //G36
_objs addMagazineCargoGlobal ["hlc_30Rnd_9x19_B_MP5",4]; //MP5
_objs addMagazineCargoGlobal ["20Rnd_762x51_Mag",3]; //M14
_objs addMagazineCargoGlobal ["hlc_200rnd_556x45_B_SAW",4]; //M249
_objs addMagazineCargoGlobal ["150Rnd_762x54_Box",4]; //Negev
_objs addMagazineCargoGlobal ["CUP_30Rnd_556x45_PMAG_QP",7]; //SCAR
_objs addMagazineCargoGlobal ["30Rnd_762x39_AK12_Mag_F",7]; //AK12
_objs addMagazineCargoGlobal ["CUP_17Rnd_9x19_glock17",2]; //Glock
_objs addMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",5]; //Under Grenade
_objs addMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",5]; //Under Grenade White
_objs addMagazineCargoGlobal ["B_IR_Grenade",3]; //Grenade IR
_objs addMagazineCargoGlobal ["HandGrenade",5]; //Grenade
_objs addMagazineCargoGlobal ["SmokeShell",5]; //Grenade White
_objs addMagazineCargoGlobal ["ACE_SpareBarrel",2]; //SpareBarrel
_objs addMagazineCargoGlobal ["CUP_SMAW_HEAA_M",2]; //SMAW Missile

/*_objs addBackpackCargoGlobal ["B_AssaultPack_blk",1]; //Mechanic Bagback
{
	_x addItemCargoGlobal ["ToolKit", 1];
} forEach (everyBackpack _objs);*/
