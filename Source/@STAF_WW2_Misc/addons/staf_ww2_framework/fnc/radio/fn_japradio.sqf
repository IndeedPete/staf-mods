//Init of the box and arsenal
_radio = _this select 0;

while {Alive _radio} do {
  //Clear Variable
  _radio setVariable ["STAF_WW2_Music_Time", nil];

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
  ] call BIS_fnc_selectRandom;

  //Gets Time for the Song
  _checktime = switch (_song) do {
    case "STAF_Jap_Ano_Onekoete": {_radio setVariable ["STAF_WW2_Music_Time", 205];};
    case "STAF_Jap_Butterfly_of_Nagasaki": {_radio setVariable ["STAF_WW2_Music_Time", 218];};
    case "STAF_Jap_Cherry_Blossoms": {_radio setVariable ["STAF_WW2_Music_Time", 239];};
    case "STAF_Jap_China_Night": {_radio setVariable ["STAF_WW2_Music_Time", 211];};
    case "STAF_Jap_Getsu_getsu_ka_sui_moku_kin_kin": {_radio setVariable ["STAF_WW2_Music_Time", 174];};
    case "STAF_Jap_Kimi_Ga_Yo": {_radio setVariable ["STAF_WW2_Music_Time", 146];};
    case "STAF_Jap_Roei_no_Uta": {_radio setVariable ["STAF_WW2_Music_Time", 164];};
    case "STAF_Jap_Sado_Okesa": {_radio setVariable ["STAF_WW2_Music_Time", 433];};
    case "STAF_Jap_Sendo_Kawaiya": {_radio setVariable ["STAF_WW2_Music_Time", 209];};
    case "STAF_Jap_Wasurecha_Iya_Yo": {_radio setVariable ["STAF_WW2_Music_Time", 194];};
  };

  _time = _radio getVariable "STAF_WW2_Music_Time";

  //Play the Music
  _sound = [_radio,[_song, 100]] remoteExec ["say3D", 0, true];

  sleep (_time + 2);
};
