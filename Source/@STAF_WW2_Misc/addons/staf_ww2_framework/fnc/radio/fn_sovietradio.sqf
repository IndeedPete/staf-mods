//Init of the box and arsenal
_radio = _this select 0;

while {Alive _radio} do {
  //Clear Variable
  _radio setVariable ["STAF_WW2_Music_Time", nil];

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
  ] call BIS_fnc_selectRandom;

  //Gets Time for the Song
  _checktime = switch (_song) do {
    case "STAF_SOV_Bells_Ring_and_Jingle": {_radio setVariable ["STAF_WW2_Music_Time", 189];};
    case "STAF_SOV_Bimbambula": {_radio setVariable ["STAF_WW2_Music_Time", 165];};
    case "STAF_SOV_By_the_long_road": {_radio setVariable ["STAF_WW2_Music_Time", 177];};
    case "STAF_SOV_Caravan": {_radio setVariable ["STAF_WW2_Music_Time", 159];};
    case "STAF_SOV_Doll_Foxtrot": {_radio setVariable ["STAF_WW2_Music_Time", 171];};
    case "STAF_SOV_Kalinka": {_radio setVariable ["STAF_WW2_Music_Time", 271];};
    case "STAF_SOV_Modern_Times_Foxtrot": {_radio setVariable ["STAF_WW2_Music_Time", 160];};
    case "STAF_SOV_Rumba": {_radio setVariable ["STAF_WW2_Music_Time", 189];};
    case "STAF_SOV_The_Steamboat": {_radio setVariable ["STAF_WW2_Music_Time", 157];};
    case "STAF_SOV_When_Yuba_plays_the_Rumba_on_the_Tuba_down_in_Cuba": {_radio setVariable ["STAF_WW2_Music_Time", 176];};
  };

  _time = _radio getVariable "STAF_WW2_Music_Time";

  //Play the Music
  _sound = [_radio,[_song, 100]] remoteExec ["say3D", 0, true];

  sleep (_time + 2);
};
