class ACE_Medical_Treatment_Actions  {
    class CheckPulse;
    class Morphine;

    class TestInfection: CheckPulse {
      displayName = "Test for Infection";
      displayNameProgress = "Testing...";
      category = "examine";
      treatmentLocations = 0;
      allowSelfTreatment = 1;
      allowedSelections[] = {"leftarm", "rightarm", "leftleg", "rightleg"};
      medicRequired = 0;
      treatmentTime = 10;
      items[] = {"STAF_TestingKit"};
      callbackSuccess = "STAF_Horror_fnc_infectiontest";
      consumeItem = 0;
      litter[] = {};
    };

    class AntiVirusPills: Morphine {
      displayName = "Use Pills";
      displayNameProgress = "Using Pills...";
      category = "medication";
      treatmentLocations = 0;
      allowSelfTreatment = 1;
      allowedSelections[] = {"Head"};
      medicRequired = 0;
      treatmentTime = 3;
      items[] = {"STAF_Item_AntiVirus_Pills"};
      callbackSuccess = "STAF_Horror_fnc_infectionpill";
      consumeItem = 1;
      litter[] = {};
    };

    class AntiVirusCure: Morphine {
      displayName = "Inject Anti-Virus";
      displayNameProgress = "Injecting Anti-Virus...";
      category = "medication";
      treatmentLocations = 0;
      allowSelfTreatment = 1;
      allowedSelections[] = {"leftarm", "rightarm", "leftleg", "rightleg"};
      medicRequired = 0;
      treatmentTime = 3;
      items[] = {"STAF_Item_AntiVirus_Injector"};
      callbackSuccess = "STAF_Horror_fnc_infectioninjection";
      consumeItem = 1;
      litter[] = { {"All", "", {"ACE_MedicalLitter_morphine"}} };
    };
};
