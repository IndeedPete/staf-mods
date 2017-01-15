// Vests
//class V_PlateCarrierL_CTRG;
class V_PlateCarrierH_CTRG;
class V_PlateCarrier2_rgr;
class IP_V_PlateCarrier2_khkEF;
class ItemInfo;
class VestItem;
class 6094A_1;
class 6094A_2;
class 6094A_3;
class 6094A_4;
class 6094A_5;
class 6094A_6;
class 6094A_7;
class 6094A_8;
class 6094A_9;
class 6094A_10;

class STAF_V_PlateCarrierL_Pete_Arid: V_PlateCarrierH_CTRG // V_PlateCarrierL_CTRG
{
	displayName = "STAF Pete's Plate Carrier Rig Mk.2 (Arid)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\vests_pete_Arid_co.paa"};
	model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
	picture = "\IP_EUROFORCE\men\img\icon_v_plate_carrier_1_khaki_ca.paa";
	
	class ItemInfo: ItemInfo
	{
		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	};
};
/*
class STAF_V_PlateCarrierH_Pete_Arid: V_PlateCarrierH_CTRG
{
	displayName = "STAF Pete's Plate Carrier Rig Mk.1 (Arid, Heavy)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\vests_pete_Arid_co.paa"};
};
*/
class STAF_V_PlateCarrierL_Pete_Lush: STAF_V_PlateCarrierL_Pete_Arid // V_PlateCarrierL_CTRG
{
	displayName = "STAF Pete's Plate Carrier Rig Mk.2 (Lush)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\vests_pete_lush_co.paa"};
	picture = "\IP_EUROFORCE\men\img\icon_v_plate_carrier_1_green_ca.paa";
};
/*
class STAF_V_PlateCarrierH_Pete_Lush: V_PlateCarrierH_CTRG
{
	displayName = "STAF Pete's Plate Carrier Rig Mk.1 (Lush, Heavy)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\vests_pete_lush_co.paa"};
};
*/

class STAF_V_PlateCarrierL_Pete_Winter: STAF_V_PlateCarrierL_Pete_Arid
{
	displayName = "STAF Pete's Plate Carrier Rig Mk.2 (Winter)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\vests_pete_Winter_co.paa"};
	picture = "\IP_EUROFORCE\men\img\icon_v_plate_carrier_1_grey_ca.paa";
};

class STAF_V_PlateCarrier2_Stroke_rgr: V_PlateCarrier2_rgr
{
	displayName = "STAF StrokeUnit's Carrier Rig (Green)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\vests_stroke_rgr_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo"};
	};
};

class STAF_V_PlateCarrier2_Stroke_khk: IP_V_PlateCarrier2_khkEF
{
	displayName = "STAF StrokeUnit's Carrier Rig (Khaki)";
	hiddenSelectionsTextures[] = {"\STAF_GEAR\txt\vests_stroke_khk_co.paa"};
};

class STAF_V_6094_1_Base_Black: 6094A_1
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [01] (Black)";
	//model = "\6094A\6094A\LBT_6094";
	//hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmFront","_9mmLeft","_9mmRight","_Admin1","_AntennaeLeft","_AntennaeRight","_Antennae2","_BeltKit1","_BeltKit2","_GrenadeRight","_HydrationPack","_LeftUtility1","_LeftUtility2","_MK141L","_MK141L2","_MK141R","_PTT","_PTT2","_PTT3","_PTT4","_PTT5","_PTT6","_RadioLeftSide","_RadioFrontLeft","_RadioFrontRight","_RadioRearLeft","_RightUtility1","_RightUtility2","_SmokeR","_SmokeL","_TripleAmmoFront","_TripleAmmoFront2"};
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply20";
		mass = 30;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmFront","_9mmLeft","_9mmRight","_Admin1","_AntennaeLeft","_AntennaeRight","_Antennae2","_BeltKit1","_BeltKit2","_GrenadeRight","_HydrationPack","_LeftUtility1","_LeftUtility2","_MK141L","_MK141L2","_MK141R","_PTT","_PTT2","_PTT3","_PTT4","_PTT5","_PTT6","_RadioLeftSide","_RadioFrontLeft","_RadioFrontRight","_RadioRearLeft","_RightUtility1","_RightUtility2","_SmokeR","_SmokeL","_TripleAmmoFront","_TripleAmmoFront2"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_2_Base_Black: 6094A_2
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [02] (Black)";
	//model = "\6094A\6094A\LBT_6094_2";
	//hiddenSelections[] = {"camo","camo1","camo2","camo4","camo5"};
	//hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa","\STAF_Gear\txt\call_sign_staf_co.paa"};
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply140";
		mass = 60;
		hiddenSelections[] = {"camo","camo1","camo2","camo4","camo5"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094_2";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_3_Base_Black: 6094A_3
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [03] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply100";
		mass = 40;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmLeft","_9mmRight","_Admin1","_AntennaeRight","_Antennae2","_GrenadeRight","_HydrationPack","_LeftUtility1","_LeftUtility2","_MK141L","_MK141L2","_PTT2","_PTT3","_PTT4","_PTT5","_PTT6","_RadioLeftSide","_RadioFrontRight","_RadioRearLeft","_RightUtility1","_SmokeR","_SmokeL","_TripleAmmoFront2"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_4_Base_Black: 6094A_4
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [04] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa","\STAF_Gear\txt\call_sign_staf_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply120";
		mass = 50;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmFront","_9mmRight","_Admin1","_AntennaeRight","_Antennae2","_GrenadeRight","_LeftUtility1","_LeftUtility2","_MK141L","_MK141L2","_PTT2","_PTT3","_PTT4","_PTT5","_PTT6","_RadioLeftSide","_RadioFrontRight","_RadioRearLeft","_SmokeR","_SmokeL","_TripleAmmoFront"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_5_Base_Black: 6094A_5
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [05] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply140";
		mass = 60;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmFront","_9mmRight","_AntennaeRight","_Antennae2","_GrenadeRight","_LeftUtility2","_MK141L2","_PTT2","_PTT3","_PTT","_PTT5","_PTT6","_RadioLeftSide","_RadioFrontRight","_RadioRearLeft","_SmokeR","_SmokeL","_TripleAmmoFront"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_6_Base_Black: 6094A_6
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [06] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply140";
		mass = 60;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmFront","_9mmRight","_AntennaeRight","_Antennae2","_GrenadeRight","_LeftUtility2","_MK141L","_PTT2","_PTT3","_PTT","_PTT4","_PTT6","_RadioFrontLeft","_RadioFrontRight","_RadioRearLeft","_SmokeR","_SmokeL","_TripleAmmoFront2"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_7_Base_Black: 6094A_7
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [07] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply140";
		mass = 60;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmFront","_9mmRight","_AntennaeRight","_Antennae2","_GrenadeRight","_LeftUtility2","_MK141L","_MK141R","_PTT2","_PTT3","_PTT","_PTT4","_PTT6","_RadioFrontLeft","_RadioFrontRight","_RadioRearLeft","_SmokeL","_TripleAmmoFront2"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_8_Base_Black: 6094A_8
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [08] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa","\STAF_Gear\txt\call_sign_staf_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply140";
		mass = 60;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_Admin1","_9mmFront","_9mmRight","_AntennaeRight","_Antennae2","_GrenadeRight","_LeftUtility2","_MK141L","_MK141R","_PTT2","_PTT3","_PTT","_PTT4","_RadioFrontLeft","_RadioRearLeft","_SmokeL","_SmokeR","_TripleAmmoFront2"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_9_Base_Black: 6094A_9
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [09] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa","\STAF_Gear\txt\call_sign_staf_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply120";
		mass = 50;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_Admin1","_9mmFront","_9mmRight","_AntennaeRight","_Antennae2","_GrenadeRight","_LeftUtility2","_HydrationPack","_MK141L","_MK141R","_PTT2","_PTT3","_PTT","_PTT4","_RadioFrontLeft","_RadioRearLeft","_SmokeL","_SmokeR","_TripleAmmoFront2"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_10_Base_Black: 6094A_10
{
	author = "Road Runner & IndeedPete";
	displayName = "STAF 6094 [10] (Black)";
	hiddenSelectionsTextures[] = {"\STAF_Gear\txt\6094_Black_co.paa","\STAF_Gear\txt\6094_gear_Black_co.paa","\STAF_Gear\txt\radio_pouch_Black_co.paa","\STAF_Gear\txt\comms_gear_Black_co.paa","\STAF_Gear\txt\molle_belt_Black_co.paa","\STAF_Gear\txt\call_sign_staf_co.paa"};
	picture = "\STAF_Gear\txt\ui\Icon_6094_black_ca.paa";
	scope = 0;
	
	class ItemInfo: VestItem
	{
		containerClass = "Supply100";
		mass = 40;
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","_9mmFront","_9mmLeft","_9mmRight","_Admin1","_AntennaeLeft","_Antennae2","_BeltKit1","_HydrationPack","_LeftUtility2","_MK141L","_MK141R","_PTT","_PTT2","_PTT3","_PTT4","_RadioFrontLeft","_RadioRearLeft","_RightUtility1","_SmokeR","_SmokeL","_TripleAmmoFront2"};
		scope = 0;
		showHolsteredPistol = 0;
		type = 701;
		uniformModel = "\6094A\6094A\LBT_6094";
		uniformType = "Default";
		
		class HitpointsProtectionInfo
		{
			class Abdomen
			{
				armor = 15;
				hitpointName = "HitAbdomen";
				passThrough = 0.4;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.4;
			};
			class Chest
			{
				armor = 15;
				HitpointName = "HitChest";
				passThrough = 0.4;
			};
			class Diaphragm
			{
				armor = 15;
				HitpointName = "HitDiaphragm";
				passThrough = 0.4;
			};			
		};
	};
};

class STAF_V_6094_1_Black: STAF_V_6094_1_Base_Black
{
	scope = 2;
};

class STAF_V_6094_2_Black: STAF_V_6094_2_Base_Black
{
	scope = 2;
};

class STAF_V_6094_3_Black: STAF_V_6094_3_Base_Black
{
	scope = 2;
};

class STAF_V_6094_4_Black: STAF_V_6094_4_Base_Black
{
	scope = 2;
};

class STAF_V_6094_5_Black: STAF_V_6094_5_Base_Black
{
	scope = 2;
};

class STAF_V_6094_6_Black: STAF_V_6094_6_Base_Black
{
	scope = 2;
};

class STAF_V_6094_7_Black: STAF_V_6094_7_Base_Black
{
	scope = 2;
};

class STAF_V_6094_8_Black: STAF_V_6094_8_Base_Black
{
	scope = 2;
};

class STAF_V_6094_9_Black: STAF_V_6094_9_Base_Black
{
	scope = 2;
};

class STAF_V_6094_10_Black: STAF_V_6094_10_Base_Black
{
	scope = 2;
};