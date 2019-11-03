class EventHandlers;
class CBA_Extended_EventHandlers_base;

class CfgVehicles {
  class B_Pilot_F;
  class pook_EF2K_Pilot_GER: B_Pilot_F {
    scope = 1;
    scopeCurator = 1;
	 };

  class CUP_B_GER_HPilot;

  class STAF_CUP_B_Ger_Army_soldier_Jetpilot: CUP_B_GER_HPilot {
      uniformClass = "SP_0000_Standard_FieldUniform_Tan";
      displayName = "Fighter Pilot";
      editorSubcategory = "CFP_EdSubcat_Personnel_Camo_Tropen";
      editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_soldier_Jetpilot.jpg";
      backpack = "B_Parachute";
      faction = "CUP_B_GER";
      weapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      respawnWeapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      linkedItems[] = {"CUP_V_B_GER_Tactical_Trop", "H_PilotHelmetFighter_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      respawnLinkedItems[] = {"CUP_V_B_GER_Tactical_Trop", "H_PilotHelmetFighter_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
      respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot: CUP_B_GER_HPilot {
      editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MFleck";
      faction = "CFP_B_DEARMY_WDL";
    };
  class STAF_CUP_B_Ger_Army_Fleck_soldier_Jetpilot: CUP_B_GER_HPilot {
      uniformClass = "SP_0000_Standard_FieldUniform_Green";
      displayName = "Fighter Pilot";
      editorSubcategory = "CFP_EdSubcat_Personnel_Camo_MFleck";
      editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_CUP_B_Ger_Army_Fleck_soldier_Jetpilot.jpg";
      backpack = "B_Parachute";
      faction = "CFP_B_DEARMY_WDL";
      weapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      respawnWeapons[] = {"CUP_hgun_glock17_flashlight", "Throw", "Put"};
      linkedItems[] = {"CUP_V_B_GER_Tactical_Fleck", "H_PilotHelmetFighter_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      respawnLinkedItems[] = {"CUP_V_B_GER_Tactical_Fleck", "H_PilotHelmetFighter_I", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "CUP_NVG_PVS15_black"};
      magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
      respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell"};
    };

  // Changes to Original CUP/CFP Vehicles ______________________________________

  //CH53
  class CUP_CH53E_Base;
  class CUP_CH53E_VIV_Base;
  class CUP_B_CH53E_GER_OCimport_02;
  class CUP_B_CH53E_VIV_GER_OCimport_02;

  class CUP_B_CH53E_GER: CUP_CH53E_Base {
    scope = 1;
    scopeCurator = 1;
    };
  class CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_01: CUP_B_CH53E_GER_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_CH53E_VIV_GER: CUP_CH53E_VIV_Base {
    scope = 1;
    scopeCurator = 1;
    };
  class CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_VIV_01: CUP_B_CH53E_VIV_GER_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };

  class STAF_CUP_B_CH53E_GER: CUP_B_CH53E_GER {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_01: CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_01 {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_CH53E_VIV_GER: CUP_B_CH53E_VIV_GER {
		crew = "STAF_CUP_B_Ger_Army_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot","STAF_CUP_B_Ger_Army_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_VIV_01: CFP_B_DEARMY_WDL_CH_53G_Super_Stallion_VIV_01 {
		crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
		typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot","STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    scope = 2;
    scopeCurator = 2;
    };

  //Little Bird
  class B_Heli_Light_01_F;
  class Heli_Light_01_armed_base_F;

  class MH6_Littlebird_BW_Tropen: B_Heli_Light_01_F	{
    scope = 1;
    scopeCurator = 1;
    };
	class MH6_Littlebird_BW_Fleck: B_Heli_Light_01_F	{
    scope = 1;
    scopeCurator = 1;
    };
	class AH6_Littlebird_BW_Tropen: Heli_Light_01_armed_base_F	{
    scope = 1;
    scopeCurator = 1;
    };
	class AH6_Littlebird_BW_Fleck: Heli_Light_01_armed_base_F	{
    scope = 1;
    scopeCurator = 1;
    };

  //Wildcat
  class AW159_Bewaffnet;
  class AW159_Transport_BW;

  class AW159_BW_Black: AW159_Bewaffnet {
    scope = 1;
    scopeCurator = 1;
	 };
	class AW159_BW_Trop: AW159_Bewaffnet {
    scope = 1;
    scopeCurator = 1;
    };
	class AW159_BW_Fleck: AW159_Bewaffnet {
    scope = 1;
    scopeCurator = 1;
    };
  class AW159_BW_Black_Unbewaffnet: AW159_Transport_BW {
    scope = 1;
    scopeCurator = 1;
	 };
	class AW159_BW_Trop_Unbewaffnet: AW159_Transport_BW {
    scope = 1;
    scopeCurator = 1;
    };
	class AW159_BW_Fleck_Unbewaffnet: AW159_Transport_BW {
    scope = 1;
    scopeCurator = 1;
    };

 	class STAF_AW159_BW_Trop: AW159_BW_Trop {
 		displayName = "Wildcat (Armed)";
   	crew = "CUP_B_GER_HPilot";
   	typicalCargo[] = {"CUP_B_GER_HPilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Trop.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
  	};
 	class STAF_AW159_BW_Fleck: AW159_BW_Fleck {
 		displayName = "Wildcat (Armed)";
   	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
   	typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
 	  };
 	class STAF_AW159_BW_Trop_Unbewaffnet: AW159_BW_Trop_Unbewaffnet {
 		displayName = "Wildcat (Unarmed)";
   	crew = "CUP_B_GER_HPilot";
   	typicalCargo[] = {"CUP_B_GER_HPilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Trop_Unbewaffnet.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
 	  };
 	class STAF_AW159_BW_Fleck_Unbewaffnet: AW159_BW_Fleck_Unbewaffnet {
 		displayName = "Wildcat (Unarmed)";
   	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
   	typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_AW159_BW_Fleck_Unbewaffnet.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
 	  };

  //Merlin
  class I_Heli_Transport_02_F;

  class NH_90_Black: I_Heli_Transport_02_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class NH_90_Trop: I_Heli_Transport_02_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class NH_90_Fleck: I_Heli_Transport_02_F {
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_NH_90_Trop: NH_90_Trop {
    displayName = "NH-90";
    crew = "CUP_B_GER_HPilot";
    typicalCargo[] = {"CUP_B_GER_HPilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_NH_90_Trop.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_NH_90_Fleck: NH_90_Fleck {
		displayName = "NH-90";
  	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot";
  	typicalCargo[] = {"STAF_CUP_B_Ger_Army_Fleck_soldier_Pilot"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_NH_90_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };

  //Drone
  class B_UAV_02_dynamicLoadout_F;

  class BW_Euro_Hawk: B_UAV_02_dynamicLoadout_F	{
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_BW_Euro_Hawk: BW_Euro_Hawk	{
  	faction = "CUP_B_GER";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_Euro_Hawk.jpg";
    scope = 2;
    scopeCurator = 2;
  	};
  class STAF_BW_Euro_Hawk_Fleck: BW_Euro_Hawk	{
		faction = "CFP_B_DEARMY_WDL";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_Euro_Hawk_Fleck.jpg";
    scope = 2;
    scopeCurator = 2;
	  };

  //Eurofighter
  class pook_EF2000;
  class pook_EF2000_BAF;
  class B_Ejection_Seat_Plane_Fighter_01_F;

  class pook_EF2000_BLUFOR: pook_EF2000	{
   scope = 1;
   scopeCurator = 1;
   };
  class pook_EF2000_INDFOR: pook_EF2000_BLUFOR	{
   scope = 2;
   scopeCurator = 2;
    };
	class pook_EF2000_OPFOR: pook_EF2000_BLUFOR {
    scope = 1;
    scopeCurator = 1;
	 };
 	class pook_EF2K_EJECT_SEAT_BLUFOR: B_Ejection_Seat_Plane_Fighter_01_F {
    scope = 1;
    scopeCurator = 1;
 	 };
 	class pook_EF2K_EJECT_SEAT_OPFOR: pook_EF2K_EJECT_SEAT_BLUFOR {
    scope = 1;
    scopeCurator = 1;
 	  };
 	class pook_EF2K_EJECT_SEAT_INDFOR: pook_EF2K_EJECT_SEAT_BLUFOR {
    scope = 1;
    scopeCurator = 1;
 	  };
  class pook_EF2000_GER: pook_EF2000_BAF {
    scope = 1;
    scopeCurator = 1;
 	  };
  class pook_EF2000_CDF: pook_EF2000_GER {
   scope = 2;
   scopeCurator = 2;
    };

  class STAF_BW_EF2000: pook_EF2000_GER {
    displayName = "EF-2000";
    crew = "STAF_CUP_B_Ger_Army_soldier_Jetpilot";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_EF2000.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_EF2000_Fleck: pook_EF2000_GER {
		displayName = "EF-2000";
  	crew = "STAF_CUP_B_Ger_Army_Fleck_soldier_Jetpilot";
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_EF2000_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };

  //Fennek
  class I_MRAP_03_F_OCimport_02;
  class MRAP_03_base_F ;
  class MRAP_03_hmg_base_F ;
  class MRAP_03_gmg_base_F ;

  class CFP_B_DEARMY_Fennek_01: I_MRAP_03_F_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };
  class CFP_B_DEARMY_WDL_Fennek_01: I_MRAP_03_F_OCimport_02 {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_FENNEK_GER_Des: MRAP_03_base_F {
    scope = 1;
    scopeCurator = 1;
    };
  class CUP_B_FENNEK_GER_Wdl: MRAP_03_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_F : MRAP_03_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_hmg_F : MRAP_03_hmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_gmg_F : MRAP_03_gmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_F_DES : MRAP_03_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_hmg_F_DES : MRAP_03_hmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };
	class KGB_B_MRAP_03_gmg_F_DES : MRAP_03_gmg_base_F {
    scope = 1;
    scopeCurator = 1;
    };

  class STAF_KGB_B_MRAP_03_F : MRAP_03_base_F	{
    displayName = "Fennek";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_F.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_03_ext_co.paa", "nato_strider\data\turret_03_co.paa"
		    };
    faction = "CFP_B_DEARMY_WDL";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_hmg_F : MRAP_03_hmg_base_F {
    displayName = "Fennek (HMG)";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_hmg_F.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_03_ext_co.paa", "nato_strider\data\turret_03_co.paa"
		    };
    faction = "CFP_B_DEARMY_WDL";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_gmg_F : MRAP_03_gmg_base_F {
    displayName = "Fennek (GMG)";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_gmg_F.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_03_ext_co.paa", "nato_strider\data\turret_03_co.paa"
		    };
    faction = "CFP_B_DEARMY_WDL";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_F_DES : MRAP_03_base_F {
    displayName = "Fennek";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_F_DES.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_02_ext_co.paa", "nato_strider\data\turret_02_co.paa"
		    };
    faction = "CUP_B_GER";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_hmg_F_DES : MRAP_03_hmg_base_F {
    displayName = "Fennek (HMG)";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_hmg_F_DES.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_02_ext_co.paa", "nato_strider\data\turret_02_co.paa"
		    };
    faction = "CUP_B_GER";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_KGB_B_MRAP_03_gmg_F_DES : MRAP_03_gmg_base_F {
    displayName = "Fennek (GMG)";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_KGB_B_MRAP_03_gmg_F_DES.jpg";
		hiddenSelectionsTextures[] = {
				"nato_strider\data\mrap_02_ext_co.paa", "nato_strider\data\turret_02_co.paa"
		    };
    faction = "CUP_B_GER";
		vehicleClass = "Armored";
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };

  //Truck
  class O_Truck_03_transport_F;
  class O_Truck_03_covered_F;
  class O_Truck_03_repair_F;
  class O_Truck_03_ammo_F;
  class O_Truck_03_fuel_F;
  class O_Truck_03_medical_F;
  class O_Truck_03_device_F;

  class BW_LKW_Transport_offen_Tropen : O_Truck_03_transport_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Transport_Tropen: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Geraet_Tropen: O_Truck_03_device_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Munition_Tropen: O_Truck_03_ammo_F {
    scope = 1;
    scopeCurator = 1;
    };
  class BW_LKW_Reparatur_Tropen: O_Truck_03_repair_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Treibstoff_Tropen: O_Truck_03_fuel_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Medic_Tropen: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };
  class BW_LKW_Transport_offen_fleck : O_Truck_03_transport_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Transport_Fleck: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Geraet_Fleck: O_Truck_03_device_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Munition_Fleck: O_Truck_03_ammo_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Reparatur_Fleck: O_Truck_03_repair_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Treibstoff_Fleck: O_Truck_03_fuel_F {
    scope = 1;
    scopeCurator = 1;
	 };
	class BW_LKW_Medic_Fleck: O_Truck_03_covered_F {
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_BW_LKW_Transport_offen_Tropen : BW_LKW_Transport_offen_Tropen {
    displayName = "Truck Transport (Open)";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_offen_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Transport_Tropen: BW_LKW_Transport_Tropen {
    displayName = "Truck Transport";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Geraet_Tropen: BW_LKW_Geraet_Tropen {
    displayName = "Truck Device";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Geraet_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Munition_Tropen: O_Truck_03_ammo_F {
    displayName = "Truck Ammo";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Munition_Tropen.jpg";
    faction = "CUP_B_GER";
		textureList[] = {};
		ace_cargo_space = 50;
    vehicleClass = "Support";
    side = 1;
    scope = 2;
    scopeCurator = 2;
		transportSoldier = 1;
		transportAmmo = 30000;
		supplyRadius = 15;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_cargo_trop_co.paa"};
    };
  class STAF_BW_LKW_Reparatur_Tropen: BW_LKW_Reparatur_Tropen {
    displayName = "Truck Repair";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Reparatur_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Treibstoff_Tropen: BW_LKW_Treibstoff_Tropen {
    displayName = "Truck Fuel";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Treibstoff_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Medic_Tropen: BW_LKW_Medic_Tropen {
    displayName = "Truck Medical";
    crew = "CUP_B_GER_BW_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Medic_Tropen.jpg";
    faction = "CUP_B_GER";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Transport_offen_fleck : BW_LKW_Transport_offen_fleck {
    displayName = "Truck Transport (Open)";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_offen_fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Transport_Fleck: BW_LKW_Transport_Fleck {
    displayName = "Truck Transport";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Transport_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Geraet_Fleck: BW_LKW_Geraet_Fleck {
    displayName = "Truck Device";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Geraet_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Munition_Fleck: O_Truck_03_ammo_F {
    displayName = "Truck Ammo";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Munition_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
		textureList[] = {};
		ace_cargo_space = 50;
    vehicleClass = "Support";
    side = 1;
    scope = 2;
    scopeCurator = 2;
		transportSoldier = 1;
		transportAmmo = 30000;
		supplyRadius = 15;
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa", "Bw_Retex_Pack_vehicles\textures\truck_03_cargo_co.paa"};
    };
  class STAF_BW_LKW_Reparatur_Fleck: BW_LKW_Reparatur_Fleck {
    displayName = "Truck Repair";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Reparatur_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Treibstoff_Fleck: BW_LKW_Treibstoff_Fleck {
    displayName = "Truck Fuel";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Treibstoff_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BW_LKW_Medic_Fleck: BW_LKW_Medic_Fleck {
    displayName = "Truck Medical";
    crew = "CUP_B_GER_BW_Fleck_Soldier";
    typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_BW_LKW_Medic_Fleck.jpg";
    faction = "CFP_B_DEARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };

  //Dingo
  class CUP_B_Dingo_CZ_Wdl;
  class CUP_B_Dingo_CZ_Des;
  class CUP_B_Dingo_GL_CZ_Wdl;
  class CUP_B_Dingo_GL_CZ_Des;

  class CUP_B_Dingo_GER_Des: CUP_B_Dingo_CZ_Des {
    scope = 1;
    scopeCurator = 1;
	 };
  class CUP_B_Dingo_GER_Wdl: CUP_B_Dingo_CZ_Wdl {
    scope = 1;
    scopeCurator = 1;
	 };
  class CUP_B_Dingo_GL_GER_Des: CUP_B_Dingo_GL_CZ_Des {
    scope = 1;
    scopeCurator = 1;
	 };
  class CUP_B_Dingo_GL_GER_Wdl: CUP_B_Dingo_GL_CZ_Wdl {
    scope = 1;
    scopeCurator = 1;
	 };

  class STAF_CUP_B_Dingo_GER_Des: CUP_B_Dingo_GER_Des {
		crew = "CUP_B_GER_BW_Soldier";
		typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_Dingo_GER_Wdl: CUP_B_Dingo_GER_Wdl {
		crew = "CUP_B_GER_BW_Fleck_Soldier";
		typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_Dingo_GL_GER_Des: CUP_B_Dingo_GL_GER_Des {
		crew = "CUP_B_GER_BW_Soldier";
		typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_CUP_B_Dingo_GL_GER_Wdl: CUP_B_Dingo_GL_GER_Wdl {
		crew = "CUP_B_GER_BW_Fleck_Soldier";
		typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    scope = 2;
    scopeCurator = 2;
    };

  //Wiesel
  class I_LT_01_AA_F;
  class I_LT_01_AT_F;
  class I_LT_01_cannon_F;
  class I_LT_01_scout_F;

  class STAF_B_Wiesel_AA: I_LT_01_AA_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "CUP_B_GER_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_AA: I_LT_01_AA_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "CUP_B_GER_Fleck_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Fleck_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };
  class STAF_B_Wiesel_AT: I_LT_01_AT_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AT.jpg";
   crew = "CUP_B_GER_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_AT: I_LT_01_AT_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_Fleck_AT.jpg";
   crew = "CUP_B_GER_Fleck_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Fleck_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };
  class STAF_B_Wiesel_cannon: I_LT_01_cannon_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_cannon.jpg";
   crew = "CUP_B_GER_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_cannon: I_LT_01_cannon_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_Fleck_cannon.jpg";
   crew = "CUP_B_GER_Fleck_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Fleck_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };
  class STAF_B_Wiesel_scout: I_LT_01_scout_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_scout.jpg";
   crew = "CUP_B_GER_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Crew"};
   textureList[] = {"Indep_Olive",1};
   side = 1;

     class EventHandlers: Eventhandlers {
       class STAF {
         init = "(_this select 0) setObjectTexture [0,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)']; (_this select 0) setObjectTexture [1,'#(argb,8,8,3)color(0.678,0.643,0.482,0.2)'];";
         class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
       };
     };
    };
  class STAF_B_Wiesel_Fleck_scout: I_LT_01_scout_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_Fleck_scout.jpg";
   crew = "CUP_B_GER_Fleck_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Fleck_Crew"};
   hiddenSelectionsTextures[] = {"a3\armor_f_tank\lt_01\data\lt_01_main_olive_co.paa","a3\armor_f_tank\lt_01\data\lt_01_at_olive_co.paa","a3\armor_f\data\camonet_aaf_digi_green_co.paa","a3\armor_f\data\cage_olive_co.paa"};
   side = 1;
    };

  //Bardelas
  class B_APC_Tracked_01_AA_F;
  class B_T_APC_Tracked_01_AA_F;

  class STAF_Bardelas: B_APC_Tracked_01_AA_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "CUP_B_GER_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Crew","CUP_B_GER_Crew"};
   textureList[] = {"Sand",1};
    };
  class STAF_Bardelas_Fleck: B_T_APC_Tracked_01_AA_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_B_Wiesel_AA.jpg";
   crew = "CUP_B_GER_Fleck_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Fleck_Crew","CUP_B_GER_Fleck_Crew"};
   textureList[] = {"Sand",1};
    };

  //Sholef
  class B_MBT_01_arty_F;
  class B_T_MBT_01_arty_F;

  class STAF_Sholef: B_MBT_01_arty_F {
   author = "Moony";
   faction = "CUP_B_GER";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_Sholef.jpg";
   crew = "CUP_B_GER_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Crew","CUP_B_GER_Crew"};
   textureList[] = {"Sand",1};
    };
  class STAF_Sholef_Fleck: B_T_MBT_01_arty_F {
   author = "Moony";
   faction = "CFP_B_DEARMY_WDL";
   editorPreview = "\staf_cup_additions_germanarmy\eden\STAF_Sholef_Fleck.jpg";
   crew = "CUP_B_GER_Fleck_TankCommander";
   typicalCargo[] = {"CUP_B_GER_Fleck_Crew","CUP_B_GER_Fleck_Crew"};
   textureList[] = {"Sand",1};
    };

  //Static
  class CFP_O_RUARMY_Podnos_2B14_DES_01;

  class STAF_Podnos_2B14: CFP_O_RUARMY_Podnos_2B14_DES_01 {
		crew = "CUP_B_GER_BW_Soldier";
    faction = "CUP_B_GER";
		typicalCargo[] = {"CUP_B_GER_BW_Soldier"};
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_Podnos_2B14_Fleck: CFP_O_RUARMY_Podnos_2B14_DES_01 {
		crew = "CUP_B_GER_BW_Fleck_Soldier";
    faction = "CFP_B_DEARMY_WDL";
		typicalCargo[] = {"CUP_B_GER_BW_Fleck_Soldier"};
    side = 1;
    scope = 2;
    scopeCurator = 2;
    };
};
