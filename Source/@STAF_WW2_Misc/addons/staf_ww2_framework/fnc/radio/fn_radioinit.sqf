params [
    ["_logic", ObjNull, [ObjNull]],
	["_objs", [], [[]]]
];

_condition = _logic getVariable ["STAF_Module_WW2_Music_Radio_Type",1];

switch (_condition) do {
    case 0:
    {
      {
      	[_x] call STAF_WW2_fnc_germanradio;
      } forEach _objs;
    };
    case 1:
    {
      {
      	[_x] call STAF_WW2_fnc_sovietradio;
      } forEach _objs;
    };
    case 2:
    {
      {
      	[_x] call STAF_WW2_fnc_britishradio;
      } forEach _objs;
    };
    case 3:
    {
      {
      	[_x] call STAF_WW2_fnc_usradio;
      } forEach _objs;
    };
    case 4:
    {
      {
      	[_x] call STAF_WW2_fnc_japradio;
      } forEach _objs;
    };
    default
    {
      {
      	[_x] call STAF_WW2_fnc_germanradio;
      } forEach _objs;
    };
};
