// Weapons
class srifle_DMR_03_F;
class srifle_DMR_03_khaki_F;
class MMG_01_tan_F;	

class STAF_srifle_DMR_03_Danish_Woodland_F: srifle_DMR_03_F
{
	displayName = "STAF Michelsen's SIG 556 (Woodland)";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\DMR_03_01_Danish_Woodland_CO.paa","\STAF_GEAR\txt\DMR_03_02_Danish_Woodland_CO.paa"};
	picture = "\STAF_GEAR\img\gear_DMR_03_X_Danish_Woodland_CA.paa";
};

class STAF_srifle_DMR_03_Danish_Tan_F: srifle_DMR_03_khaki_F
{
	displayName = "STAF Michelsen's SIG 556 (Tan)";
	hiddenSelections[] = {"Camo1", "Camo2"};
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\DMR_03_01_Danish_Tan_CO.paa","\STAF_GEAR\txt\DMR_03_02_Danish_Tan_CO.paa"};
	picture = "\STAF_GEAR\img\gear_DMR_03_X_Danish_Tan_CA.paa";
};

class STAF_MMG_01_Tiger_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_Tiger_F";
	displayName = "STAF HK121 PEACEMAKER (Tiger)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_Tiger_CO.paa","\STAF_GEAR\txt\MMG_01_02_Tiger_CO.paa","\STAF_GEAR\txt\MMG_01_03_Tiger_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_Tiger_co.paa";
	
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_MCAM_Black_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_MCAM_Black_F";
	displayName = "STAF HK121 PEACEMAKER (MCAM Black)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_Tiger_CO.paa","\STAF_GEAR\txt\MMG_01_02_MCAM_Black_CO.paa","\STAF_GEAR\txt\MMG_01_03_MCAM_Black_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_MCAM_Black_co.paa";
	
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_Choc_Chip_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_Choc_Chip_F";
	displayName = "STAF HK121 PEACEMAKER (Chocolate Chip)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_Choc_Chip_CO.paa","\STAF_GEAR\txt\MMG_01_02_Choc_Chip_CO.paa","\STAF_GEAR\txt\MMG_01_03_Choc_Chip_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_Choc_Chip_co.paa";
	
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_snd";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_ATACS_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_ATACS_F";
	displayName = "STAF HK121 PEACEMAKER (ATACS)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\MMG_01_01_ATACS_CO.paa","\STAF_GEAR\txt\MMG_01_02_ATACS_CO.paa","\STAF_GEAR\txt\MMG_01_03_ATACS_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_ATACS_co.paa";
	
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};

class STAF_MMG_01_Splinter_Snow_F: MMG_01_tan_F
{
	baseWeapon = "STAF_MMG_01_Splinter_Snow_F";
	displayName = "STAF HK121 PEACEMAKER (Splinter Snow)";
	hiddenSelectionsTextures[] = {"\IP_EUROFORCE\weapons\txt\MMG_01_01_white_CO.paa","\STAF_GEAR\txt\MMG_01_02_Splinter_Snow_CO.paa","\STAF_GEAR\txt\MMG_01_03_Splinter_Snow_CO.paa"};
	picture = "\STAF_GEAR\img\gear_MMG_01_X_Splinter_Snow_co.paa";
	
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};