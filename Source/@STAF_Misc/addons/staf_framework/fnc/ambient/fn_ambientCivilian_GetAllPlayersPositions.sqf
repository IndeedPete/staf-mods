private ["_playerPositions"];

_playerPositions = [];

if (isMultiplayer) then {
	{
		if (isPlayer _x) then {
			_playerPositions pushBack (position vehicle _x);
		};
	} foreach (playableUnits);
}
else {
	if (player == player) then {
		_playerPositions = [position vehicle player];
	};
};

// testing
//_playerPositions = [p1, p2];

_playerPositions
