class CfgPatches
{
	class STAF_F14
	{
		units[] = 
		{
			"STAF_FIR_F14D_Navy"
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FIR_F14D_F"};
		author = "STAF";
		authorUrl = "http://stafclan.com/index.php/BoardList/";
		version = 1.0;
		versionStr = "1.0";
		versionAr[] = {1,0};
	};
};

class CfgVehicles
{
	class FIR_F14D_Base;
	
	class STAF_FIR_F14D_Navy: FIR_F14D_Base
	{
		author = "Firewill";		
		displayName = "STAF F-14D Tomcat (Navy)";
		crew = "IP_B_Pilot_F_EF";
		faction = "IP_EUROFORCE";
		fir_f14d_custom_skin = 0;
		hiddenselectionstextures[] = {"\STAF_F14\txt\F14_body_Navy_co.paa","\STAF_F14\txt\F14_Fuse_Navy_Left_co.paa","\STAF_F14\txt\F14_Fuse_Navy_Right_co.paa","\STAF_F14\txt\F14_Wing_Navy_Left_co2.paa","\STAF_F14\txt\F14_Wing_Navy_Right_co.paa","\STAF_F14\txt\F14_Fueltank_Navy_co.paa"};
		magazines[] = {"FIR_AIM9L_1rnd_M","FIR_AIM9L_1rnd_M","FIR_AIM7_1rnd_M","FIR_AIM7_1rnd_M","FIR_AIM54_1rnd_M","FIR_AIM54_1rnd_M","FIR_AIM54_1rnd_M","FIR_AIM54_1rnd_M","FIR_Empty_1rnd_M","FIR_Empty_1rnd_M","FIR_Empty_1rnd_M","FIR_Empty_1rnd_M","FIR_Empty_1rnd_M","FIR_Empty_1rnd_M","FIR_Empty_1rnd_M","FIR_Empty_1rnd_M","FIR_M61A2_675rnd_M","FIR_240rnd_CMFlare_Chaff_Magazine"};
		model = "\FIR_F14\FIR_F14D";		
		weapons[] = {"FIR_MasterArm","FIR_M61A2","FIR_CMLauncher","FIR_AIM9L","FIR_AIM7","FIR_AIM54"};
		scope = 2;
		vehicleClass = "IP_Air_EF";
	};
};