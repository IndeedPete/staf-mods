class Extended_PreInit_EventHandlers {
    STAF_PreInit = call compile preprocessFileLineNumbers "\staf_framework\XEH_preInit.sqf";
};

class Extended_PostInit_EventHandlers {
    STAF_postInit = call compile preprocessFileLineNumbers "\staf_framework\XEH_postInit.sqf";
};