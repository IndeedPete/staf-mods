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

	class STAF_TestingKit: STAF_geiger_counter
	{
			displayName = "Infection Testing Kit";
			descriptionShort = "A kit to quickly test for viruses.";
			picture = "\staf_blacksun_framework\img\testingkit.paa";
			model = "\A3\Structures_F_EPA\Items\Medical\Antibiotic_F.p3d";
			class ItemInfo: CBA_MiscItem_ItemInfo
			{
					mass = 2;
			};
};
};
