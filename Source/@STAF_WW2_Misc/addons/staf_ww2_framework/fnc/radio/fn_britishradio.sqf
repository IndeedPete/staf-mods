//Init of the box and arsenal
_radio = _this select 0;

while {Alive _radio} do {
  //Clear Variable
  _radio setVariable ["STAF_WW2_Music_Time", nil];

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
  ] call BIS_fnc_selectRandom;

  //Gets Time for the Song
  _checktime = switch (_song) do {
    case "STAF_UK_After_The_Rain": {_radio setVariable ["STAF_WW2_Music_Time", 222];};
    case "STAF_UK_Always_in_my_heart": {_radio setVariable ["STAF_WW2_Music_Time", 152];};
    case "STAF_UK_Auf_Wiedersehn_sweetheart": {_radio setVariable ["STAF_WW2_Music_Time", 154];};
    case "STAF_UK_From_The_Time_You_Say_Goodbye": {_radio setVariable ["STAF_WW2_Music_Time", 162];};
    case "STAF_UK_London_Pride": {_radio setVariable ["STAF_WW2_Music_Time", 199];};
    case "STAF_UK_Run_Rabbit_Run": {_radio setVariable ["STAF_WW2_Music_Time", 166];};
    case "STAF_UK_Something_to_Remember_You_By": {_radio setVariable ["STAF_WW2_Music_Time", 201];};
    case "STAF_UK_Well_Meet_Again": {_radio setVariable ["STAF_WW2_Music_Time", 182];};
    case "STAF_UK_When_I_Grow_too_Old_to_Dream": {_radio setVariable ["STAF_WW2_Music_Time", 166];};
    case "STAF_UK_White_Cliffs_Of_Dover": {_radio setVariable ["STAF_WW2_Music_Time", 193];};
    case "STAF_UK_Wish_me_luck_as_you_wave_me_goodbye": {_radio setVariable ["STAF_WW2_Music_Time", 158];};
    case "STAF_UK_Youll_Never_Know": {_radio setVariable ["STAF_WW2_Music_Time", 210];};
  };

  _time = _radio getVariable "STAF_WW2_Music_Time";

  //Play the Music
  _sound = [_radio,[_song, 100]] remoteExec ["say3D", 0, true];

  sleep (_time + 2);
};
