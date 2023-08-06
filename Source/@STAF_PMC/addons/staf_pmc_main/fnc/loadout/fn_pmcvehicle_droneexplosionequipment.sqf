/*
			class TransportMagazines {
				mag_xx(SatchelCharge_Remote_Mag,4);
				mag_xx(DemoCharge_Remote_Mag,6);
				mag_xx(ClaymoreDirectionalMine_Remote_Mag,3);
				mag_xx(APERSBoundingMine_Range_Mag,3);
			};
			class TransportItems {
				item_xx(ACE_DefusalKit,2);
				item_xx(ACE_Clacker,2);
			};
			class TransportBackpacks {};
			class TransportWeapons {};
*/

_objs = _this select 0;

clearMagazineCargoGlobal _objs;
clearWeaponCargoGlobal _objs;
clearItemCargoGlobal _objs;
clearBackpackCargoGlobal _objs;

_objs addMagazineCargoGlobal ["SatchelCharge_Remote_Mag",4]; //Satchel
_objs addMagazineCargoGlobal ["DemoCharge_Remote_Mag",6]; //Charge
_objs addMagazineCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",3]; //Claymore
_objs addMagazineCargoGlobal ["APERSBoundingMine_Range_Mag",3]; //APERS


_objs addItemCargoGlobal ["ACE_DefusalKit",2]; //Defusekit
_objs addItemCargoGlobal ["ACE_Clacker",2]; //Clacker
