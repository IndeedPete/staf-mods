class EventHandlers;
class CfgVehicles {
  //Eurofighter
  class pook_EF2000_BLUFOR;

	class pook_EF2000_BAF: pook_EF2000_BLUFOR {
    scope = 1;
    scopeCurator = 1;
	 };
  class pook_EF2000_INS: pook_EF2000_BAF {
     scope = 2;
     scopeCurator = 2;
   };

  class STAF_BAF_EF2000: pook_EF2000_BAF {
    displayName = "EF-2000";
    crew = "CUP_B_BAF_Soldier_FighterPilot_DDPM";
    editorPreview = "\staf_cup_additions_britisharmy\eden\STAF_BAF_EF2000.jpg";
    faction = "CUP_B_GB";
    scope = 2;
    scopeCurator = 2;
    };
  class STAF_BAF_EF2000_WDL: pook_EF2000_BAF {
		displayName = "EF-2000";
  	crew = "CUP_B_BAF_Soldier_FighterPilot_DPM";
    editorPreview = "\staf_cup_additions_britisharmy\eden\STAF_BAF_EF2000_WDL.jpg";
    faction = "CFP_B_GBARMY_WDL";
    scope = 2;
    scopeCurator = 2;
    };
};
