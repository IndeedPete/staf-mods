/*
class TransportMagazines {
	mag_xx(SmokeShell,5);
};
class TransportItems {
	item_xx(ACE_EarPlugs,2);
	item_xx(kat_X_AED,1);
	item_xx(ACRE_PRC152,1);
	item_xx(ACE_CableTie,3);
	item_xx(ACE_EntrenchingTool,1);
	item_xx(ACE_wirecutter,1);
	item_xx(ACE_DefusalKit,1);
	item_xx(ACE_Clacker,1);
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

_objs addItemCargoGlobal ["ACE_EarPlugs",2];
_objs addItemCargoGlobal ["kat_X_AED",1];
_objs addItemCargoGlobal ["ACRE_PRC152",1];
_objs addItemCargoGlobal ["ACE_CableTie",3];
_objs addItemCargoGlobal ["ACE_EntrenchingTool",1];
_objs addItemCargoGlobal ["ACE_wirecutter",1];
_objs addItemCargoGlobal ["ACE_DefusalKit",1];
_objs addItemCargoGlobal ["ACE_Clacker",1];
_objs addItemCargoGlobal ["ACE_rope6",1];
_objs addItemCargoGlobal ["ACE_rope3",1];


_objs addMagazineCargoGlobal ["SmokeShell",5]; //Grenade White
