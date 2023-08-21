class Extended_Init_EventHandlers {
  class STAF_contractor {
    class STAF_contractor_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_at {
    class STAF_contractor_at_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_aa {
    class STAF_contractor_aa_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_mg {
    class STAF_contractor_mg_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_medic {
    class STAF_contractor_medic_init_eh {
      init = "(_this select 0) setvariable [""ace_isMedic"", 2]; (_this select 0) setUnitTrait [""Doctor"", true]; [(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_marksman {
    class STAF_contractor_marksman_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_engineer {
    class STAF_contractor_engineer_init_eh {
      init = "(_this select 0) setvariable [""ace_isEOD"", 1]; (_this select 0) setvariable [""ACE_isEngineer"", 2]; (_this select 0) setUnitTrait [""Engineer"", true]; [(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_bodyguard {
    class STAF_contractor_bodyguard_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_heli_pilot {
    class STAF_contractor_heli_pilot_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_diver {
    class STAF_contractor_diver_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
  class STAF_contractor_crew {
    class STAF_contractor_crew_init_eh {
      init = "[(_this select 0)] call STAF_PMC_fnc_random_gear;";
    };
  };
};
