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
      "STAF_US_Amapola",
      "STAF_US_Boogie_Woogie_Bugle_Boy",
      "STAF_US_Buttons_Bows",
      "STAF_US_Chattanooga_Choo_Choo",
      "STAF_US_Frenesi",
      "STAF_US_Heard_that_song_before",
      "STAF_US_Jingle_Jangle_Jingle",
      "STAF_US_Kalamazoo",
      "STAF_US_Manana",
      "STAF_US_Moonlight_Cocktail",
      "STAF_US_Nature_Boy",
      "STAF_US_Never_smile_again",
      "STAF_US_Only_Forever",
      "STAF_US_Paper_doll",
      "STAF_US_Rum_and_coca_cola",
      "STAF_US_Sentimental_Journey",
      "STAF_US_Sleepy_Lagoon",
      "STAF_US_Stardust",
      "STAF_US_Sunday_monday_or_always",
      "STAF_US_Swinging_on_a_star",
      "STAF_US_Take_the_a_Train",
      "STAF_US_Tangerine",
      "STAF_US_There_are_such_things",
      "STAF_US_This_land_is_your_land",
      "STAF_US_Till_the_end_of_time"
    ];
    _songtime = [
      203,
      138,
      118,
      283,
      183,
      174,
      201,
      463,
      267,
      201,
      201,
      191,
      189,
      185,
      186,
      213,
      179,
      190,
      158,
      151,
      194,
      191,
      215,
      138,
      209
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