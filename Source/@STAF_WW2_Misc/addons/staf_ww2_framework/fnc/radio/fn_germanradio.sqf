//Init of the box and arsenal
_radio = _this select 0;

while {Alive _radio} do {
  //Clear Variable
  _radio setVariable ["STAF_WW2_Music_Time", nil];

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
  ] call BIS_fnc_selectRandom;

  //Gets Time for the Song
  _checktime = switch (_song) do {
    case "STAF_GER_Adieu": {_radio setVariable ["STAF_WW2_Music_Time", 167];};
    case "STAF_GER_Bei_Mir": {_radio setVariable ["STAF_WW2_Music_Time", 124];};
    case "STAF_GER_Einmal": {_radio setVariable ["STAF_WW2_Music_Time", 184];};
    case "STAF_GER_Frag_mich_nicht": {_radio setVariable ["STAF_WW2_Music_Time", 181];};
    case "STAF_GER_Frau_in_meinen_Jahren": {_radio setVariable ["STAF_WW2_Music_Time", 107];};
    case "STAF_GER_Jattendrai": {_radio setVariable ["STAF_WW2_Music_Time", 179];};
    case "STAF_GER_Komm_Zuruck": {_radio setVariable ["STAF_WW2_Music_Time", 166];};
    case "STAF_GER_Mondschein": {_radio setVariable ["STAF_WW2_Music_Time", 174];};
    case "STAF_GER_Musik_Musik": {_radio setVariable ["STAF_WW2_Music_Time", 173];};
    case "STAF_GER_Puszta": {_radio setVariable ["STAF_WW2_Music_Time", 205];};
    case "STAF_GER_Schon": {_radio setVariable ["STAF_WW2_Music_Time", 163];};
  };

  _time = _radio getVariable "STAF_WW2_Music_Time";

  //Play the Music
  _sound = [_radio,[_song, 100]] remoteExec ["say3D", 0, true];
  //_sound = [_radio,[_song, 100]] remoteExec ["say3D", 2, true];
  //_sound = _radio say3D [_song, 100];

  sleep (_time + 2);
};
