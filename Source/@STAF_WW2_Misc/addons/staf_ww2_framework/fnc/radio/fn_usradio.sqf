//Init of the box and arsenal
_radio = _this select 0;

while {Alive _radio} do {
  //Clear Variable
  _radio setVariable ["STAF_WW2_Music_Time", nil];

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
  ] call BIS_fnc_selectRandom;

  //Gets Time for the Song
  _checktime = switch (_song) do {
    case "STAF_US_Amapola": {_radio setVariable ["STAF_WW2_Music_Time", 203];};
    case "STAF_US_Boogie_Woogie_Bugle_Boy": {_radio setVariable ["STAF_WW2_Music_Time", 138];};
    case "STAF_US_Buttons_Bows": {_radio setVariable ["STAF_WW2_Music_Time", 118];};
    case "STAF_US_Chattanooga_Choo_Choo": {_radio setVariable ["STAF_WW2_Music_Time", 283];};
    case "STAF_US_Frenesi": {_radio setVariable ["STAF_WW2_Music_Time", 183];};
    case "STAF_US_Heard_that_song_before": {_radio setVariable ["STAF_WW2_Music_Time", 174];};
    case "STAF_US_Jingle_Jangle_Jingle": {_radio setVariable ["STAF_WW2_Music_Time", 201];};
    case "STAF_US_Kalamazoo": {_radio setVariable ["STAF_WW2_Music_Time", 463];};
    case "STAF_US_Manana": {_radio setVariable ["STAF_WW2_Music_Time", 267];};
    case "STAF_US_Moonlight_Cocktail": {_radio setVariable ["STAF_WW2_Music_Time", 201];};
    case "STAF_US_Nature_Boy": {_radio setVariable ["STAF_WW2_Music_Time", 201];};
    case "STAF_US_Never_smile_again": {_radio setVariable ["STAF_WW2_Music_Time", 191];};
    case "STAF_US_Only_Forever": {_radio setVariable ["STAF_WW2_Music_Time", 189];};
    case "STAF_US_Paper_doll": {_radio setVariable ["STAF_WW2_Music_Time", 185];};
    case "STAF_US_Rum_and_coca_cola": {_radio setVariable ["STAF_WW2_Music_Time", 186];};
    case "STAF_US_Sentimental_Journey": {_radio setVariable ["STAF_WW2_Music_Time", 213];};
    case "STAF_US_Sleepy_Lagoon": {_radio setVariable ["STAF_WW2_Music_Time", 179];};
    case "STAF_US_Stardust": {_radio setVariable ["STAF_WW2_Music_Time", 190];};
    case "STAF_US_Sunday_monday_or_always": {_radio setVariable ["STAF_WW2_Music_Time", 158];};
    case "STAF_US_Swinging_on_a_star": {_radio setVariable ["STAF_WW2_Music_Time", 151];};
    case "STAF_US_Take_the_a_Train": {_radio setVariable ["STAF_WW2_Music_Time", 194];};
    case "STAF_US_Tangerine": {_radio setVariable ["STAF_WW2_Music_Time", 191];};
    case "STAF_US_There_are_such_things": {_radio setVariable ["STAF_WW2_Music_Time", 215];};
    case "STAF_US_This_land_is_your_land": {_radio setVariable ["STAF_WW2_Music_Time", 138];};
    case "STAF_US_Till_the_end_of_time": {_radio setVariable ["STAF_WW2_Music_Time", 209];};
  };

  _time = _radio getVariable "STAF_WW2_Music_Time";

  //Play the Music
  _sound = [_radio,[_song, 100]] remoteExec ["say3D", 0, true];

  sleep (_time + 2);
};
