params [
	["_unit", player, [ObjNull]],
	["_baseRadio", "tf_rf7800str", [""]],
	["_addRadio", "", [""]]
];

// Give _unit radio at start
_unit linkItem _baseRadio;
if (_addRadio != "") then {
	_unit addItem _addRadio;
};

if !(isPlayer _unit) exitWith {};
_unit setVariable ["STAF_BaseRadio", _baseRadio];
_unit setVariable ["STAF_AdditionalRadio", _addRadio];

// If he drops the radio, re-add it.
_unit addEventHandler ["Put", {	
	params [
        "_unit",
        "_container",
        "_items"
    ];
	
	if !(local _unit) exitWith {};
	_baseRadio = _unit getVariable ["STAF_BaseRadio", ""];
	_addRadio = _unit getVariable ["STAF_AdditionalRadio", ""];

	// Check for Base Radio.
    if ((_baseRadio != "") && {(toLower _items) find _baseRadio >= 0}) then {
        // Re add it.
        _unit linkItem _baseRadio;
		
        // Remove dropped radio.
        _itemCargo = getItemCargo _container;
        clearItemCargoGlobal _container;
        {
            if ((toLower _x) find _baseRadio < 0) then {
                _container addItemCargoGlobal [_x, ((_itemCargo select 1) select _forEachIndex)];
            };
        } forEach (_itemCargo select 0);
    };
	
	// Check for Add Radio.
   if ((_addRadio != "") && {(toLower _items) find _addRadio >= 0}) then {
        // Re add it.
        _unit addItem _addRadio;
		
        // Remove dropped radio.
        _itemCargo = getItemCargo _container;
        clearItemCargoGlobal _container;
        {
            if ((toLower _x) find _addRadio < 0) then {
                _container addItemCargoGlobal [_x, ((_itemCargo select 1) select _forEachIndex)];
            };
        } forEach (_itemCargo select 0);
    };
}];

// If he uses arsenal and does not have radio when exiting arsenal, re-add it.
[missionNamespace, "arsenalClosed", {	
	if ((isNull player) OR {!(local player)}) exitWith {};
	_baseRadio = player getVariable ["STAF_BaseRadio", ""];
	_addRadio = player getVariable ["STAF_AdditionalRadio", ""];
	
	if ((_baseRadio != "") && {{(toLower _x) find _baseRadio >= 0} count (assignedItems player) == 0}) then {
		player linkItem _baseRadio;
	};
	
	if ((_addRadio != "") && {{(toLower _x) find _addRadio >= 0} count (items player) == 0}) then {
		player addItem _addRadio;
	};
}] call BIS_fnc_addScriptedEventHandler;

// Handle Pete's Default Loadout Action
[missionNamespace, "IP_DefaultLoadoutTaken", {	
	if ((isNull player) OR {!(local player)}) exitWith {};
	_baseRadio = player getVariable ["STAF_BaseRadio", ""];
	_addRadio = player getVariable ["STAF_AdditionalRadio", ""];
	
	if ((_baseRadio != "") && {{(toLower _x) find _baseRadio >= 0} count (assignedItems player) == 0}) then {
		player linkItem _baseRadio;
	};
	
	if ((_addRadio != "") && {{(toLower _x) find _addRadio >= 0} count (items player) == 0}) then {
		player addItem _addRadio;
	};
}] call BIS_fnc_addScriptedEventHandler;