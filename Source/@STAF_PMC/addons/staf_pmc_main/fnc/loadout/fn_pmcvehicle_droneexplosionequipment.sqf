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
