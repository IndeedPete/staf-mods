class ACE_Medical_Actions {
  class Advanced {
    class FieldDressing;

    class TestInfection: fieldDressing {
      displayName = "Test for Infection";
      displayNameProgress = "Testing...";
      category = "examine";
      treatmentLocations[] = {"All"};
      allowedSelections[] = {"All"};
      requiredMedic = 1;
      treatmentTime = 10;
      items[] = {"STAF_TestingKit"};
      callbackSuccess = "STAF_Horror_fnc_infectiontest";
      callbackFailure = "";
      callbackProgress = "";
      animationPatient = "";
      animationCaller = ""; // TODO
      itemConsumed = 0;
      litter[] = {};
    };

    class AntiVirusPills: fieldDressing {
      displayName = "Use Pills";
      displayNameProgress = "Using Pills...";
      allowedSelections[] = {"head"};
      category = "medication";
      items[] = {"STAF_Item_AntiVirus_Pills"};
      treatmentTime = 3;
      callbackSuccess = "STAF_Horror_fnc_infectionpill";
      animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
      litter[] = {};
    };

    class AntiVirusCure: fieldDressing {
      displayName = "Inject Anti-Virus";
      displayNameProgress = "Injecting Anti-Virus...";
      allowedSelections[] = {"hand_l", "hand_r", "leg_l", "leg_r"};
      category = "medication";
      items[] = {"STAF_Item_AntiVirus_Injector"};
      treatmentTime = 3;
      callbackSuccess = "STAF_Horror_fnc_infectioninjection";
      animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
      litter[] = { {"All", "", {"ACE_MedicalLitter_morphine"}} };
    };
  };
};
