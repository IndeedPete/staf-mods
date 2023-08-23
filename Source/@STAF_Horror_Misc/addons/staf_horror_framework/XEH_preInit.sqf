[
    "STAF_Horror_Infection_Init", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "CHECKBOX", // setting type
    ["Enable Infection","Player can get infected when bitten by a Zombie"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["STAF Settings", "STAF Horror"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    false, // data for this setting: [min, max, default, number of shown trailing decimals]
    2, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "STAF_Horror_Infection_Rate", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["Infection Rate","Defines how fast the infection kills a unit (Use Numbers 0 - 1)"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["STAF Settings", "STAF Horror"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    "0.02", // data for this setting: [min, max, default, number of shown trailing decimals]
    2, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "STAF_Horror_Infection_Chance", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["Infection Chance","Defines the Chance a Unit is infected when bitten (Use Numbers 0 - 1)"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["STAF Settings", "STAF Horror"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    "0.65", // data for this setting: [min, max, default, number of shown trailing decimals]
    2, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;

[
    "STAF_Horror_AntiVirusPills_Duration", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["Duration of Anti-Virus Pills","Defines the duration how long Anti-Virus Pills stop infection progress (in Seconds)"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["STAF Settings", "STAF Horror"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    "600", // data for this setting: [min, max, default, number of shown trailing decimals]
    2, // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
    {} // function that will be executed once on mission start and every time the setting is changed.
] call CBA_fnc_addSetting;
