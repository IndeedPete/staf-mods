if !(isServer) exitWith {};

params [
	["_veh", ObjNull, [ObjNull]],
	["_template", "", [""]],
	["_parentCfg", missionConfigFile, [configFile]],
	"_cfg"
];

if (_template == "") then {
	_oldTemplate = _veh getVariable ["IP_LoadoutTemplate", "vehicleDefault"]; // Compatibility to old prefix.
	_template = _veh getVariable ["STAF_LoadoutTemplate", _oldTemplate];
};

_cfg = _parentCfg >> "CfgVehicleLoadouts" >> _template;
if (isClass _cfg) then {
	private "_whs";
	_backpackCargo = getArray(_cfg >> "backpackCargo");
	_itemCargo = getArray(_cfg >> "itemCargo");
	_magazineCargo = getArray(_cfg >> "magazineCargo");
	_weaponCargo = getArray(_cfg >> "weaponCargo");
	_attachments = "true" configClasses _cfg;
	_whs = [];
	
	clearBackpackCargoGlobal _veh;
	clearItemCargoGlobal _veh;
	clearMagazineCargoGlobal _veh;
	clearWeaponCargoGlobal _veh;
	
	{_veh addBackpackCargoGlobal _x} forEach _backpackCargo;
	{_veh addItemCargoGlobal _x} forEach _itemCargo;
	{_veh addMagazineCargoGlobal _x} forEach _magazineCargo;
	{_veh addWeaponCargoGlobal _x} forEach _weaponCargo;
	
	{
		_attachTo = getArray(_x >> "attachTo");
		_className = getText(_x >> "className");
		_vectorDirAndUp = getArray(_x >> "vectorDirAndUp");
		
		_object = _className createVehicle (getPos _veh);
		_wh = nearestObject [_object, "GroundWeaponHolder"];
		_wh attachTo [_veh, _attachTo];
		_wh setVectorDirAndUp _vectorDirAndUp;
		_whs pushBack _wh;
	} forEach _attachments;
	
	_veh setVariable ["STAF_WeaponHolders", _whs];
};

_veh addEventHandler ["Killed", {
	if !(isServer) exitWith {};
	_whs = _veh getVariable ["STAF_WeaponHolders", []];
	
	{
		deleteVehicle _x;
	} forEach _whs;
}];