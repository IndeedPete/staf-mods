/*
class TransportMagazines {};
class TransportItems {
	item_xx(ACE_salineIV,1);
	item_xx(ACE_salineIV_250,2);
	item_xx(ACE_salineIV_500,1);
	item_xx(ACE_splint,2);
	item_xx(ACE_tourniquet,2);
	item_xx(ACE_morphine,1);
	item_xx(ACE_packingBandage,4);
	item_xx(ACE_epinephrine,1);
	item_xx(ACE_EarPlugs,2);
	item_xx(ACE_quikclot,4);
	item_xx(ACE_elasticBandage,4);
	item_xx(ACE_fieldDressing,4);
	item_xx(kat_IV_16,1);
	item_xx(kat_aatKit,1);
};
class TransportBackpacks {};
class TransportWeapons {};
*/

_objs = _this select 0;

clearMagazineCargoGlobal _objs;
clearWeaponCargoGlobal _objs;
clearItemCargoGlobal _objs;
clearBackpackCargoGlobal _objs;

_objs addItemCargoGlobal ["ACE_salineIV",1];
_objs addItemCargoGlobal ["ACE_salineIV_250",2];
_objs addItemCargoGlobal ["ACE_salineIV_500",1];
_objs addItemCargoGlobal ["ACE_splint",2];
_objs addItemCargoGlobal ["ACE_tourniquet",2];
_objs addItemCargoGlobal ["ACE_morphine",1];
_objs addItemCargoGlobal ["ACE_packingBandage",4];
_objs addItemCargoGlobal ["ACE_epinephrine",1];
_objs addItemCargoGlobal ["ACE_EarPlugs",2];
_objs addItemCargoGlobal ["ACE_quikclot",4];
_objs addItemCargoGlobal ["ACE_elasticBandage",4];
_objs addItemCargoGlobal ["ACE_fieldDressing",4];
_objs addItemCargoGlobal ["kat_IV_16",1];
_objs addItemCargoGlobal ["kat_aatKit",1];
