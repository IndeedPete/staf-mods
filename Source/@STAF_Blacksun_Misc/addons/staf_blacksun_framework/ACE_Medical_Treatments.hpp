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
      callbackSuccess = "STAF_Horror_fnc_testforinfection";
      callbackFailure = "";
      callbackProgress = "";
      animationPatient = "";
      animationCaller = ""; // TODO
      itemConsumed = 0;
      litter[] = {};
    };

    class AntiVirusCure: fieldDressing {
      displayName = "Inject Anti-Virus";
      displayNameProgress = "Injecting Anti-Virus...";
      allowedSelections[] = {"hand_l", "hand_r", "leg_l", "leg_r"};
      category = "medication";
      items[] = {"RyanZombiesAntiVirusCure_Item"};
      treatmentTime = 3;
      callbackSuccess = "STAF_Horror_fnc_useantiviruscure";
      animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
      litter[] = { {"All", "", {"ACE_MedicalLitter_morphine"}} };
    };

    class AntiVirusPills: fieldDressing {
      displayName = "Use Pills";
      displayNameProgress = "Using Pills...";
      allowedSelections[] = {"head"};
      category = "medication";
      items[] = {"RyanZombiesAntiVirusTemporary_Item"};
      treatmentTime = 3;
      callbackSuccess = "STAF_Horror_fnc_useantiviruspills";
      animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";
      litter[] = {};
    };
  };
};
