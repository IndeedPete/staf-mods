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
      "STAF_GER_Adieu",
      "STAF_GER_Bei_Mir",
      "STAF_GER_Einmal",
      "STAF_GER_Frag_mich_nicht",
      "STAF_GER_Frau_in_meinen_Jahren",
      "STAF_GER_Jattendrai",
      "STAF_GER_Komm_Zuruck",
      "STAF_GER_Mondschein",
      "STAF_GER_Musik_Musik",
      "STAF_GER_Puszta",
      "STAF_GER_Schon"
    ];
    _songtime = [
      166,
      123,
      183,
      180,
      107,
      179,
      166,
      174,
      173,
      205,
      162
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