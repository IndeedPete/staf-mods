params ["_unit"];

_unit setVariable ["STAF_var_gf_breath",true];

_unit addEventHandler [
	"Respawn", 
	{
		params ["_unitrespawn", "_corpse"];
		_unitrespawn setVariable ["STAF_var_gf_breath",false];
	}
];	


_Headgear_List = [
	"H_RacingHelmet_1_F",
	"H_RacingHelmet_2_F",
	"H_RacingHelmet_3_F",	
	"H_RacingHelmet_4_F",
	"H_RacingHelmet_1_black_F",
	"H_RacingHelmet_1_blue_F",
	"H_RacingHelmet_1_green_F",
	"H_RacingHelmet_1_red_F",
	"H_RacingHelmet_1_white_F",
	"H_RacingHelmet_1_yellow_F",
	"H_RacingHelmet_1_orange_F",

	"H_CrewHelmetHeli_B",
	"H_CrewHelmetHeli_I",
	"H_CrewHelmetHeli_O",

	"H_PilotHelmetFighter_B",
	"H_PilotHelmetFighter_O",
	"H_PilotHelmetFighter_I",

	"H_HelmetO_ViperSP_hex_F",
	"H_HelmetO_ViperSP_ghex_F"		
];


	while {true} do {

	private _Fatigue = getFatigue _unit;
	private _Dammage = getDammage _unit;
	private _Speed = speed  _unit;

	if (!((headgear _unit) in _Headgear_List)) then {

		if ((alive _unit) && (!(underwater _unit) or ((getPosASLW _unit select 2) > -1.5)) && (_Speed < 20) && diag_fps > 15) then {	

			_Sleep_Fatigue = _Fatigue * 3;
			_Sleep = (3 + random 2) - _Sleep_Fatigue;

			sleep _Sleep;

			_unit setRandomLip true;

			_Breath = "#particlesource" createVehicle [0,0,0];

			_Breath setParticleParams [
				["A3\Data_F\ParticleEffects\Universal\Universal",16,12,13,0],
				"",
				"Billboard",
				0.1,
				1,
				[0,0,0],
				[0,0.2,0.4],	
				1,1.275,1,0.2,
				[0,0.2,0],
				[[1,1,1,random 0.02],
				[1,1,1,0.01],
				[1,1,1,0]],
				[1000],
				1,
				0.04,
				"",
				"",
				_breath
			];

			_Breath setParticleRandom [
				_Fatigue - random 0.5,
				[0,0,0],
				[0.25,0.25,0.25],
				0,0.5,
				[0,0,0,0.1],
				0,
				0,
				2
			];

			_Breath setDropInterval 0.001;

			_Breath attachto [_unit,[0,0.16,-0.12], "neck"];

			if ((_Speed > 5) or (_Dammage > 0.75) or (_Fatigue > 0.5)) then {
				sleep 0.25;
			} else {
				sleep 0.5;
			};

			_unit setRandomLip false;
			deletevehicle _Breath;		
		};	
	} else {
		sleep 5;
	};		
};