private ["_building"];
private ["_count"];

_building = _this select 0;

_count = 0;
while { format ["%1", _building buildingPos _count] != "[0,0,0]" } do {
	_count = _count + 1;
};

_count
