class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;

    class STAF_geiger_counter: ACE_ItemCore
    {
        scope = 2;
        displayName = "Geiger Counter";
        descriptionShort = "A device to measure radio active decay.";
        picture = "\staf_blacksun_framework\img\geiger_counter.paa";
				model = "\A3\Structures_F\Items\Tools\MultiMeter_F.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 1;
        };
	};
};
