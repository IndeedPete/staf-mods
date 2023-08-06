//Init of the box and arsenal
params ["_box"];

// Includes

#include "fn_ww2gerArsenal_backpacks.sqf"
#include "fn_ww2gerArsenal_headgear.sqf"
#include "fn_ww2gerArsenal_items.sqf"
#include "fn_ww2gerArsenal_othermagazines.sqf"
#include "fn_ww2gerArsenal_uniforms.sqf"
#include "fn_ww2gerArsenal_vests.sqf"
#include "fn_ww2gerArsenal_weapons.sqf"

_magazines = [];
{
    {
        _magazines pushBackUnique _x;
    } forEach ([_x] call CBA_fnc_compatibleMagazines);
} forEach _weapons;

_attachments = [];
{
    {
        _attachments pushBackUnique _x;
    } forEach ([_x] call CBA_fnc_compatibleItems);
} forEach _weapons;

//Adding Itemlists to the Arsenal
[_box,(_weapons + _backpacks + _items + _uniforms + _headgear + _vests + _othermagazines + _magazines + _attachments),true] call ace_arsenal_fnc_initBox;

[
  [_box],
  {
    params ["_box"];
    
    _actionId = _box addaction [
      "<img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa' /> Open Arsenal",
      {
        params ["_target", "_caller"];
        [
          _target,
          _caller,
          false
        ] call ace_arsenal_fnc_openBox;
      },
      nil,
      25,
      true,
      false,
      ""
    ];
    _box setVariable ["STAF_var_ww2gerarsenal_actionId", _actionId, true];
  }
] remoteExec ["spawn", 0, true];

_box setVariable ["STAF_var_ww2gerarsenal", true, true];