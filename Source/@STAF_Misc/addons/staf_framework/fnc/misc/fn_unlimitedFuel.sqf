params [
	["_vehicle", ObjNull, [ObjNull]],
	["_text", "Heal me", [""]],
	["_condition", "true", [""]]
];

[_vehicle] spawn
{
	while {alive (_this select 0)} do
	{
		if ((fuel (_this select 0)) < 0.8) then
		{
			(_this select 0) setFuel 1;
		};
		sleep 120;
	};
};
