/*
			class TransportMagazines {
				mag_xx(30Rnd_65x39_caseless_mag,14);
				mag_xx(hlc_30rnd_556x45_EPR_G36,14);
				mag_xx(hlc_30Rnd_9x19_B_MP5,8);
				mag_xx(20Rnd_762x51_Mag,6);
				mag_xx(hlc_200rnd_556x45_B_SAW,8);
				mag_xx(150Rnd_762x54_Box,8);
				mag_xx(CUP_30Rnd_556x45_PMAG_QP,14);
				mag_xx(hlc_30Rnd_556x45_B_AUG,8);
				mag_xx(30Rnd_762x39_AK12_Mag_F,14);
				mag_xx(hlc_5rnd_300WM_FMJ_AWM,2);
				mag_xx(CUP_17Rnd_9x19_glock17,4);
				mag_xx(1Rnd_HE_Grenade_shell,10);
				mag_xx(1Rnd_Smoke_Grenade_shell,10);
				mag_xx(B_IR_Grenade,6);
				mag_xx(HandGrenade,10);
				mag_xx(SmokeShell,10);
				mag_xx(ACE_SpareBarrel,2);
				mag_xx(CUP_SMAW_HEAA_M,4);
			};
			class TransportItems {
				item_xx(ACE_salineIV,4);
				item_xx(ACE_salineIV_250,8);
				item_xx(ACE_salineIV_500,6);
				item_xx(ACE_splint,8);
				item_xx(ACE_tourniquet,8);
				item_xx(ACE_morphine,4);
				item_xx(ACE_packingBandage,20);
				item_xx(ACE_epinephrine,4);
				item_xx(ACE_EarPlugs,2);
				item_xx(ACE_quikclot,20);
				item_xx(ACE_elasticBandage,20);
				item_xx(ACE_fieldDressing,20);
				item_xx(ACE_adenosine,4);
				item_xx(ACE_bodyBag,2);
				item_xx(ACRE_PRC152,2);
				item_xx(ACE_CableTie,6);
				item_xx(ACE_Flashlight_XL50,1);
				item_xx(ACE_EntrenchingTool,1);
				item_xx(ACE_wirecutter,1);
				item_xx(ACE_DefusalKit,1);
				item_xx(ACE_Clacker,1);
				item_xx(ACE_UAVBattery,2);
				item_xx(ACE_rope6,1);
				item_xx(ACE_rope3,1);
				item_xx(kat_X_AED,1);
				item_xx(kat_guedel,1);
				item_xx(kat_larynx,1);
				item_xx(kat_Pulseoximeter,1);
				item_xx(kat_stethoscope,1);
				item_xx(kat_IV_16,10);
				item_xx(kat_aatKit,1);
				item_xx(kat_amiodarone,2);
				item_xx(kat_CarbonateItem,2);
				item_xx(kat_EACA,2);
				item_xx(kat_etomidate,2);
				item_xx(kat_fentanyl,2);
				item_xx(kat_flumazenil,2);
				item_xx(kat_ketamine,2);
				item_xx(kat_lidocaine,2);
				item_xx(kat_lorazepam,2);
				item_xx(kat_naloxone,2);
				item_xx(kat_nalbuphine,2);
				item_xx(kat_nitroglycerin,2);
				item_xx(kat_norepinephrine,2);
				item_xx(kat_phenylephrine,2);
				item_xx(kat_TXA,2);
			};
			class TransportBackpacks {};
			class TransportWeapons {
				weap_xx(CUP_launch_M136,2);
				weap_xx(CUP_launch_Igla,2);
			};
*/

_objs = _this select 0;

clearMagazineCargoGlobal _objs;
clearWeaponCargoGlobal _objs;
clearItemCargoGlobal _objs;
clearBackpackCargoGlobal _objs;

_objs addItemCargoGlobal ["ACE_salineIV",4];
_objs addItemCargoGlobal ["ACE_salineIV_250",8];
_objs addItemCargoGlobal ["ACE_salineIV_500",6];
_objs addItemCargoGlobal ["ACE_splint",8];
_objs addItemCargoGlobal ["ACE_tourniquet",8];
_objs addItemCargoGlobal ["ACE_morphine",4];
_objs addItemCargoGlobal ["ACE_packingBandage",20];
_objs addItemCargoGlobal ["ACE_epinephrine",4];
_objs addItemCargoGlobal ["ACE_EarPlugs",2];
_objs addItemCargoGlobal ["ACE_quikclot",20];
_objs addItemCargoGlobal ["ACE_elasticBandage",20];
_objs addItemCargoGlobal ["ACE_fieldDressing",20];
_objs addItemCargoGlobal ["ACE_adenosine",4];
_objs addItemCargoGlobal ["ACE_bodyBag",2];
_objs addItemCargoGlobal ["ACRE_PRC152",2];
_objs addItemCargoGlobal ["ACE_CableTie",6];
_objs addItemCargoGlobal ["ACE_Flashlight_XL50",1];
_objs addItemCargoGlobal ["ACE_EntrenchingTool",1];
_objs addItemCargoGlobal ["ACE_wirecutter",1];
_objs addItemCargoGlobal ["ACE_DefusalKit",1];
_objs addItemCargoGlobal ["ACE_Clacker",1];
_objs addItemCargoGlobal ["ACE_UAVBattery",2];
_objs addItemCargoGlobal ["ACE_rope6",1];
_objs addItemCargoGlobal ["ACE_rope3",1];
_objs addItemCargoGlobal ["kat_X_AED",1];
_objs addItemCargoGlobal ["kat_guedel",1];
_objs addItemCargoGlobal ["kat_larynx",1];
_objs addItemCargoGlobal ["kat_Pulseoximeter",1];
_objs addItemCargoGlobal ["kat_stethoscope",1];
_objs addItemCargoGlobal ["kat_IV_16",10];
_objs addItemCargoGlobal ["kat_aatKit",1];
_objs addItemCargoGlobal ["kat_amiodarone",2];
_objs addItemCargoGlobal ["kat_CarbonateItem",2];
_objs addItemCargoGlobal ["kat_EACA",2];
_objs addItemCargoGlobal ["kat_etomidate",2];
_objs addItemCargoGlobal ["kat_fentanyl",2];
_objs addItemCargoGlobal ["kat_flumazenil",2];
_objs addItemCargoGlobal ["kat_ketamine",2];
_objs addItemCargoGlobal ["kat_lidocaine",2];
_objs addItemCargoGlobal ["kat_lorazepam",2];
_objs addItemCargoGlobal ["kat_naloxone",2];
_objs addItemCargoGlobal ["kat_nalbuphine",2];
_objs addItemCargoGlobal ["kat_nitroglycerin",2];
_objs addItemCargoGlobal ["kat_norepinephrine",2];
_objs addItemCargoGlobal ["kat_phenylephrine",2];
_objs addItemCargoGlobal ["kat_TXA",2];

_objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag",14]; //G36 MLI
_objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36",14]; //G36
_objs addMagazineCargoGlobal ["hlc_30Rnd_9x19_B_MP5",8]; //MP5
_objs addMagazineCargoGlobal ["20Rnd_762x51_Mag",6]; //M14
_objs addMagazineCargoGlobal ["hlc_200rnd_556x45_B_SAW",8]; //M249
_objs addMagazineCargoGlobal ["150Rnd_762x54_Box",8]; //Negev
_objs addMagazineCargoGlobal ["CUP_30Rnd_556x45_PMAG_QP",14]; //SCAR
_objs addMagazineCargoGlobal ["hlc_30Rnd_556x45_B_AUG", 8]; // AUG
_objs addMagazineCargoGlobal ["30Rnd_762x39_AK12_Mag_F",14]; //AK12
_objs addMagazineCargoGlobal ["hlc_5rnd_300WM_FMJ_AWM",2]; //T-5000
_objs addMagazineCargoGlobal ["CUP_17Rnd_9x19_glock17",4]; //Glock
_objs addMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",10]; //Under Grenade
_objs addMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",10]; //Under Grenade White
_objs addMagazineCargoGlobal ["B_IR_Grenade",6]; //Grenade IR
_objs addMagazineCargoGlobal ["HandGrenade",10]; //Grenade
_objs addMagazineCargoGlobal ["SmokeShell",10]; //Grenade White
_objs addMagazineCargoGlobal ["ACE_SpareBarrel",2]; //SpareBarrel
_objs addMagazineCargoGlobal ["CUP_SMAW_HEAA_M",4]; //SMAW Missile

_objs addWeaponCargoGlobal ["CUP_launch_M136",2]; //M136 Launcher
_objs addWeaponCargoGlobal ["CUP_launch_Igla",2]; //M136 Launcher

/*_objs addBackpackCargoGlobal ["B_AssaultPack_blk",1]; //Mechanic Bagback
{
	_x addItemCargoGlobal ["ToolKit", 1];
} forEach (everyBackpack _objs);*/