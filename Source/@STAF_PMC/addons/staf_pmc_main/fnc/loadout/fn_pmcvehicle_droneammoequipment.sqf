/*
			class TransportMagazines {
				mag_xx(30Rnd_65x39_caseless_mag,15);
				mag_xx(hlc_30rnd_556x45_EPR_G36,15);
				mag_xx(hlc_30Rnd_9x19_B_MP5,5);
				mag_xx(20Rnd_762x51_Mag,5);
				mag_xx(hlc_200rnd_556x45_B_SAW,10);
				mag_xx(150Rnd_762x54_Box,10);
				mag_xx(CUP_30Rnd_556x45_PMAG_QP,15);
				mag_xx(hlc_30Rnd_556x45_B_AUG, 15);
				mag_xx(30Rnd_762x39_AK12_Mag_F,15);
				mag_xx(hlc_5rnd_300WM_FMJ_AWM,5);
				mag_xx(CUP_17Rnd_9x19_glock17,5);
				mag_xx(1Rnd_HE_Grenade_shell,5);
				mag_xx(ACE_HuntIR_M203,2);
				mag_xx(1Rnd_Smoke_Grenade_shell,5);
				mag_xx(B_IR_Grenade,5);
				mag_xx(HandGrenade,10);
				mag_xx(SmokeShell,10);
				mag_xx(ACE_SpareBarrel,2);
				mag_xx(CUP_SMAW_HEAA_M,4);
			};
			class TransportItems {
				item_xx(ACE_rope6,1);
				item_xx(ACE_rope3,1);
			};
			class TransportBackpacks {};
			class TransportWeapons {};
*/

_objs = _this select 0;

clearMagazineCargoGlobal _objs;
clearWeaponCargoGlobal _objs;
clearItemCargoGlobal _objs;
clearBackpackCargoGlobal _objs;

_objs addMagazineCargoGlobal ["30Rnd_65x39_caseless_mag",15]; //G36 MLI
_objs addMagazineCargoGlobal ["hlc_30rnd_556x45_EPR_G36",15]; //G36
_objs addMagazineCargoGlobal ["hlc_30Rnd_9x19_B_MP5",5]; //MP5
_objs addMagazineCargoGlobal ["20Rnd_762x51_Mag",5]; //M14
_objs addMagazineCargoGlobal ["hlc_200rnd_556x45_B_SAW",10]; //M249
_objs addMagazineCargoGlobal ["150Rnd_762x54_Box",10]; //Negev
_objs addMagazineCargoGlobal ["CUP_30Rnd_556x45_PMAG_QP",15]; //SCAR
_objs addMagazineCargoGlobal ["hlc_30Rnd_556x45_B_AUG", 15]; // AUG
_objs addMagazineCargoGlobal ["30Rnd_762x39_AK12_Mag_F",15]; //AK12
_objs addMagazineCargoGlobal ["hlc_5rnd_300WM_FMJ_AWM",5]; //T-5000
_objs addMagazineCargoGlobal ["CUP_17Rnd_9x19_glock17",5]; //Glock
_objs addMagazineCargoGlobal ["1Rnd_HE_Grenade_shell",5]; //Under Grenade
_objs addMagazineCargoGlobal ["ACE_HuntIR_M203",2]; //Under HuntIR
_objs addMagazineCargoGlobal ["1Rnd_Smoke_Grenade_shell",5]; //Under Grenade White
_objs addMagazineCargoGlobal ["B_IR_Grenade",5]; //Grenade IR
_objs addMagazineCargoGlobal ["HandGrenade",10]; //Grenade
_objs addMagazineCargoGlobal ["SmokeShell",10]; //Grenade White
_objs addMagazineCargoGlobal ["ACE_SpareBarrel",2]; //SpareBarrel
_objs addMagazineCargoGlobal ["CUP_SMAW_HEAA_M",4]; //SMAW Missiles
_objs addItemCargoGlobal ["ACE_rope6",1];
_objs addItemCargoGlobal ["ACE_rope3",1];
