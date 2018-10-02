#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

class CfgVehicles {
	class Item_Base_F;

	class STAF_Item_geiger_counter: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Geiger Counter";
        author = "Moony";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(STAF_geiger_counter,1);
        };
	};
};
