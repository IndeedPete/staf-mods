/*
Name: snowFall
Author: IndeedPete and Moony
Purpose: Creates light snow fall around unit. Also checks if unit is inside a vehicle or building.
----------
Parameters:
player - OBJECT (OPTIONAL): Unit to simulate snow around. - MyUnit - DEFAULT: Player
_condition - CODE (OPTIONAL): While condition that is being checked in addition to (alive player). - {SomeVariable > 0} - DEFAULT: {true}

Returns:
Script handle.
*/

// Exits for the Server
if (!hasInterface) exitWith {};

private ["_condition", "_handle"];
_condition = [_this, 0, {true}, [{}]] call BIS_fnc_param;

_handle = [_condition] spawn {
		_condition = _this select 0;

	// Starts While loop that goes as long as the condition is met and the player is alive
	while {(alive player) && (call _condition)} do {
		_obj = vehicle player;
		/*_pos = if (_obj == player) then {
			(getposASL _obj)
		} else {
			_res = getposASL _obj;
			_res set [2, ((_res select 2) + 2)];
			_res
		};*/
		_pos = getposASL _obj;


		// Checks what strenght is chosen
		_switchcase = missionNamespace getVariable "STAF_case_Snow";
		switch (_switchcase) do {

			case "init":
			{
				player setVariable ["STAF_Snow_light", ObjNull];
				player setVariable ["STAF_Snow_medium", ObjNull];
				player setVariable ["STAF_Snow_heavy", ObjNull];
				player setVariable ["STAF_Snow_blizzard", ObjNull];
			};

			case "off":
			{
				deleteVehicle (player getVariable "STAF_Snow_light");
				deleteVehicle (player getVariable "STAF_Snow_medium");
				deleteVehicle (player getVariable "STAF_Snow_heavy");
				deleteVehicle (player getVariable "STAF_Snow_blizzard");
			};

			case "light":
			{
				deleteVehicle (player getVariable "STAF_Snow_medium");
				deleteVehicle (player getVariable "STAF_Snow_heavy");
				deleteVehicle (player getVariable "STAF_Snow_blizzard");

				if (!(player call STAF_fnc_inHouse)) then {
					if (isNull(player getVariable ["STAF_Snow_light", ObjNull])) then {
						_snow_light = "#particleSource" createVehicleLocal (getPos _obj);
						_snow_light setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1,0,1,0],"","Billboard",1,8,[0,0,0],[0,0,0],10,1,0,1,[0.12,0.12],[[1,1,1,0.5],[1,1,1,0.5]],[0,1],0.25,1,"","", _obj];
						_snow_light setParticleRandom [0, [22, 22, 15], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
						_snow_light setParticleCircle [0.0, [0, 0, 0]];
						_snow_light setDropInterval 0.005;
						player setVariable ["STAF_Snow_light", _snow_light];
					};
				} else {
					if (!isNull(player getVariable ["STAF_Snow_light", ObjNull])) then {
						deleteVehicle (player getVariable "STAF_Snow_light");
						player setVariable ["STAF_Snow_light", ObjNull];
					};
				};
			};

			case "medium":
			{
				deleteVehicle (player getVariable "STAF_Snow_light");
				deleteVehicle (player getVariable "STAF_Snow_heavy");
				deleteVehicle (player getVariable "STAF_Snow_blizzard");

				if (!(player call STAF_fnc_inHouse)) then {
					if (isNull(player getVariable ["STAF_Snow_medium", ObjNull])) then {
						_snow_medium = "#particleSource" createVehicleLocal (getPos _obj);
						_snow_medium setParticleParams [["\A3\data_f\ParticleEffects\Universal\smoke.p3d", 1,0,1,0],"","Billboard",1,8,[0,0,0],[0,0,0],10,1,0,1,[0.12,0.12],[[1,1,1,0.5],[1,1,1,0.5]],[0,1],0.25,1,"","", _obj];
						_snow_medium setParticleRandom [0, [22, 22, 15], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];
						_snow_medium setParticleCircle [0.0, [0, 0, 0]];
						_snow_medium setDropInterval 0.0005;
						player setVariable ["STAF_Snow_medium", _snow_medium];
					};
				} else {
					if (!isNull(player getVariable ["STAF_Snow_medium", ObjNull])) then {
						deleteVehicle (player getVariable "STAF_Snow_medium");
						player setVariable ["STAF_Snow_medium", ObjNull];
					};
				};
			};

			case "heavy":
			{
				deleteVehicle (player getVariable "STAF_Snow_light");
				deleteVehicle (player getVariable "STAF_Snow_medium");
				deleteVehicle (player getVariable "STAF_Snow_blizzard");

				if (!(player call STAF_fnc_inHouse)) then {
					if (isNull(player getVariable ["STAF_Snow_heavy", ObjNull])) then {
						_snow = "#particleSource" createVehicleLocal (getPos _obj);
						_snow setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,8,[0,0,0],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,.35],[1,1,1,0.45]],[1000],0, 0,"","",_obj];
						_snow setParticleCircle [0,[0,0,0]];
						_snow setParticleRandom [0, [22, 22, 15], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
						_snow setDropInterval 0.0003;
						player setVariable ["STAF_Snow_heavy", _snow];
					};
				} else {
					if (!isNull(player getVariable ["STAF_Snow_heavy", ObjNull])) then {
						deleteVehicle (player getVariable "STAF_Snow_heavy");
						player setVariable ["STAF_Snow_heavy", ObjNull];
					};
				};
			};

			case "blizzard":
			{
				deleteVehicle (player getVariable "STAF_Snow_light");
				deleteVehicle (player getVariable "STAF_Snow_medium");
				deleteVehicle (player getVariable "STAF_Snow_heavy");

				if (!(player call STAF_fnc_inHouse)) then {
					if (isNull(player getVariable ["STAF_Snow_blizzard", ObjNull])) then {
						_snow = "#particleSource" createVehicleLocal (getPos _obj);
						_snow setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d",16,13,6,0],"","Billboard",1,8,[0,0,0],[0,0,0],(0),1.59,1,1.5,[3],[[1,1,1,1],[1,1,1,0.90]],[1000],0, 0,"","",_obj];
						_snow setParticleCircle [0,[0,0,0]];
						_snow setParticleRandom [0, [22, 22, 15], [0, 0, 0], 0, .5, [0,0,0,0.03], 0, 0];
						_snow setDropInterval 0.00003;
						player setVariable ["STAF_Snow_blizzard", _snow];
					};
				} else {
					if (!isNull(player getVariable ["STAF_Snow_blizzard", ObjNull])) then {
						deleteVehicle (player getVariable "STAF_Snow_blizzard");
						player setVariable ["STAF_Snow_blizzard", ObjNull];
					};
				};
			};
		};
	sleep 0.05;
	};

	// When the Condition is set to 0 or the player dies everything will be set to 0
	deleteVehicle (player getVariable "STAF_Snow_light");
	deleteVehicle (player getVariable "STAF_Snow_medium");
	deleteVehicle (player getVariable "STAF_Snow_heavy");
	deleteVehicle (player getVariable "STAF_Snow_blizzard");
	player setVariable ["STAF_Snow_light", ObjNull];
	player setVariable ["STAF_Snow_medium", ObjNull];
	player setVariable ["STAF_Snow_heavy", ObjNull];
	player setVariable ["STAF_Snow_blizzard", ObjNull];
};

_handle
