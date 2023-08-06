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
      "STAF_Jap_Ano_Onekoete",
      "STAF_Jap_Butterfly_of_Nagasaki",
      "STAF_Jap_Cherry_Blossoms",
      "STAF_Jap_China_Night",
      "STAF_Jap_Getsu_getsu_ka_sui_moku_kin_kin",
      "STAF_Jap_Kimi_Ga_Yo",
      "STAF_Jap_Roei_no_Uta",
      "STAF_Jap_Sado_Okesa",
      "STAF_Jap_Sendo_Kawaiya",
      "STAF_Jap_Wasurecha_Iya_Yo"
    ];
    _songtime = [
      205,
      218,
      239,
      211,
      174,
      146,
      164,
      433,
      209,
      194
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