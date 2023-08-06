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
      "STAF_SOV_Bells_Ring_and_Jingle",
      "STAF_SOV_Bimbambula",
      "STAF_SOV_By_the_long_road",
      "STAF_SOV_Caravan",
      "STAF_SOV_Doll_Foxtrot",
      "STAF_SOV_Kalinka",
      "STAF_SOV_Modern_Times_Foxtrot",
      "STAF_SOV_Rumba",
      "STAF_SOV_The_Steamboat",
      "STAF_SOV_When_Yuba_plays_the_Rumba_on_the_Tuba_down_in_Cuba"
    ];
    _songtime = [
      189,
      165,
      177,
      159,
      171,
      271,
      160,
      189,
      157,
      176
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