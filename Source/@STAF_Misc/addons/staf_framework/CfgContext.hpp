class zen_context_menu_actions {
  class STAF_VCOM_Contextclass {
    displayName = "STAF VCOM";
    icon="\a3\ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
    //condition = "_objects findIf {alive _x && {_x isKindOf 'CAManBase'} && {!isPlayer _x}} != -1";
    priority = 35;

    class STAF_DisableVCOM_Contextclass {
        displayName = "Disable VCOM on Group";
        statement = "{_x call STAF_fnc_disable_vcom_context} foreach _groups";
        condition = "!(_objects getVariable [""Vcm_Disable"",false])";
        icon="\a3\ui_f\data\GUI\Cfg\CommunicationMenu\defend_ca.paa";
    };
    class STAF_EnableableVCOM_Contextclass {
        displayName = "Enable VCOM on Group";
        statement = "{_x call STAF_fnc_enable_vcom_context} foreach _groups";
        condition = "_objects getVariable [""Vcm_Disable"",false]";
        icon="\a3\ui_f\data\GUI\Cfg\CommunicationMenu\seize_ca.paa";
    };
  };

  class STAF_AI_Contextclass {
    displayName = "STAF AI";
    icon="\a3\ui_f\data\GUI\Cfg\CommunicationMenu\call_ca.paa";
    priority = 34;

    class STAF_StationaryAI_Contextclass {
        displayName = "Make Unit Stationary";
        statement = "{_x call STAF_fnc_stationary_ai_context} foreach _objects";
        condition = "!(_objects getVariable [""STAF_AI_Stationary"",false])";
        icon="\a3\ui_f\data\GUI\Cfg\CommunicationMenu\defend_ca.paa";
    };
    class STAF_UnStationaryAI_Contextclass {
        displayName = "Make Unit not Stationary";
        statement = "{_x call STAF_fnc_unstationary_ai_context} foreach _objects";
        condition = "_objects getVariable [""STAF_AI_Stationary"",false]";
        icon="\a3\ui_f\data\GUI\Cfg\CommunicationMenu\seize_ca.paa";
    };
    class STAF_StationaryGroup_Contextclass {
        displayName = "Make Group Stationary";
        statement = "{_x call STAF_fnc_stationary_group_context} foreach _groups";
        condition = "!(_objects getVariable [""STAF_AI_Stationary"",false])";
        icon="\a3\ui_f\data\GUI\Cfg\CommunicationMenu\defend_ca.paa";
    };
    class STAF_UnStationaryGroup_Contextclass {
        displayName = "Make Group not Stationary";
        statement = "{_x call STAF_fnc_unstationary_group_context} foreach _groups";
        condition = "_objects getVariable [""STAF_AI_Stationary"",false]";
        icon="\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\interact_ca.paa";
    };
  };
};
