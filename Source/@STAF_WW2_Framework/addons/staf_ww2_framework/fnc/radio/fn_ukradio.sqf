//Init of the box and arsenal
_radio = _this select 0;

[_radio] spawn {
  params ["_radio"];
  
  _turnon = [_radio,["STAF_turnOnRadio", 3]] remoteExec ["say3D", 0, true];
  sleep 3;
  _radio setVariable ["STAF_WW2_isTurnedOn", true];
};

_radio setVariable ["STAF_WW2_Old_Song", "STAF_Song_Empty"];
if (_radio getVariable ["STAF_WW2_alreadyOn",false]) exitWith {};

[_radio] spawn {
  params ["_radio"];

  waitUntil {sleep 0.2; _radio getVariable ["STAF_WW2_isTurnedOn", false]};

  while {_radio getVariable ["STAF_WW2_RadioisOn",true]} do {
    //Clear Variable
    _radio setVariable ["STAF_WW2_Music_Time", nil];
    _radio setVariable ["STAF_WW2_alreadyOn", true];

    //Song Pick
    _song = [
      "STAF_UK_After_The_Rain",
      "STAF_UK_Always_in_my_heart",
      "STAF_UK_Auf_Wiedersehn_sweetheart",
      "STAF_UK_From_The_Time_You_Say_Goodbye",
      "STAF_UK_London_Pride",
      "STAF_UK_Run_Rabbit_Run",
      "STAF_UK_Something_to_Remember_You_By",
      "STAF_UK_Well_Meet_Again",
      "STAF_UK_When_I_Grow_too_Old_to_Dream",
      "STAF_UK_White_Cliffs_Of_Dover",
      "STAF_UK_Wish_me_luck_as_you_wave_me_goodbye",
      "STAF_UK_Youll_Never_Know"
    ];
    _songtime = [
      222,
      152,
      154,
      162,
      199,
      166,
      201,
      182,
      166,
      193,
      158,
      210
    ];

    _rndsong = _song call BIS_fnc_selectRandom;
    while {_rndsong == (_radio getVariable ["STAF_WW2_Old_Song", "STAF_WW2_Empty_Song"])} do {
    _rndsong = _song call BIS_fnc_selectRandom;
    };
    _songold = _radio setVariable ["STAF_WW2_Old_Song", _rndsong];

    // Get song legth
    _gettimeIndex = _song find _rndsong;
    _gettime = _songtime select _gettimeIndex;

    //Play the Music
    _sound = [_radio,[_rndsong, 100]] remoteExec ["say3D", 0, true];

    //Wait till song is over
    sleep (_gettime);

    _sound = [_radio,["STAF_staticRadio", 20]] remoteExec ["say3D", 0, true];

    sleep (4);
  };
};