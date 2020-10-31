class CfgGlasses
{
	class G_Bandanna_blk;
	class G_Balaclava_blk;

	class STAF_G_Bandanna_Punisher: G_Bandanna_blk
	{
		displayName = "STAF Bandana (Punisher)";
		hiddenSelectionsTextures[] = {"\staf_pmc_headgear\txt\headgear_bandmask_punisher_co.paa"};
	};

	// Veils	
	
	class rhssaf_veil_Green: G_Balaclava_blk
	{
		displayname = "Veil Mask (Green)";
	};
	class STAF_veil_black: rhssaf_veil_Green
	{
	  displayName = "Veil Mask (Black)";
	  hiddenSelectionsTextures[] = {"\staf_pmc_headgear\txt\staf_veil_black_co.paa"};
	};
	class STAF_veil_tan: rhssaf_veil_Green
	{
	  displayName = "Veil Mask (Tan)";
	  hiddenSelectionsTextures[] = {"\staf_pmc_headgear\txt\staf_veil_tan_co.paa"};
	};
	class STAF_veil_white: rhssaf_veil_Green
	{
	  displayName = "Veil Mask (White)";
	  hiddenSelectionsTextures[] = {"\staf_pmc_headgear\txt\staf_veil_white_co.paa"};
	};
};
