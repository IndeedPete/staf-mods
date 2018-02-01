params [
	["_array", [], [[]]],
	"_uniqueElements", 
	"_clusteredArray"
];

if (count _array == 0) exitWith {
	"Input array is empty!" call BIS_fnc_error;
	[]
};

_uniqueElements = [];
_clusteredArray = [];

{
	_element = _x;
	if !(_element in _uniqueElements) then {
		_uniqueElements pushBack _element;
		_count = {_x == _element} count _array;
		_clusteredArray pushBack [_element, _count];
	};
} forEach _array;

_clusteredArray