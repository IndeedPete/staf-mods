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
      "STAF_FR_A_Paris",
      "STAF_FR_Boum",
      "STAF_FR_Cette_Chanson_Est_Pour_Vous",
      "STAF_FR_Etrangere_au_Paradis",
      "STAF_FR_Jai_Deux_Amours",
      "STAF_FR_Je_suis_comme_je_suis",
      "STAF_FR_La_Derniere_Bergere",
      "STAF_FR_La_Mer",
      "STAF_FR_La_Vie_En_Rose",
      "STAF_FR_Les_Feuilles_Mortes",
      "STAF_FR_Ne_Me_Quitte_Pas",
      "STAF_FR_Non_Je_ne_regrette_rien",
      "STAF_FR_Paris_Sera_Toujours_Paris",
      "STAF_FR_Parlez-Moi_Damour",
      "STAF_FR_Seule_ce_soir",
      "STAF_FR_Si_Jetais_Blanche",
      "STAF_FR_Si_tu_netais_pas_la",
      "STAF_FR_Sous_le_ciel_de_Paris",
      "STAF_FR_Toi_Et_Moi",
      "STAF_FR_Un_Baiser",
      "STAF_FR_Vous_Etes_Jolie"
    ];
    _songtime = [
      184,
      157,
      188,
      151,
      196,
      178,
      186,
      252,
      193,
      197,
      251,
      142,
      197,
      182,
      203,
      167,
      209,
      178,
      179,
      202,
      140
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