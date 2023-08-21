//Init of the box and arsenal
params ["_box"];

//Picture on arsenal
if (isServer) then {
  if ((typeOf _box) isEqualTo "Portable_GCS_Base_CTRG_F") then {
    [_box,[2,"\staf_framework\img\terminaldown.paa"]] remoteExec ["setObjectTexture",0,true];
    [_box,[3,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
  if ((typeOf _box) isEqualTo "Portable_GCS_Base_F") then {
    [_box,[2,"\staf_framework\img\terminaldown.paa"]] remoteExec ["setObjectTexture",0,true];
    [_box,[3,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
  if ((typeOf _box) isEqualTo "Land_Laptop_unfolded_F") then {
    [_box,[0,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
  if ((typeOf _box) isEqualTo "Land_Laptop_device_F") then {
    [_box,[0,"\staf_framework\img\terminalup.paa"]] remoteExec ["setObjectTexture",0,true];
  };
};

// Includes

#include "fn_bsArsenal_backpacks.sqf"
#include "fn_bsArsenal_headgear.sqf"
#include "fn_bsArsenal_items.sqf"
#include "fn_bsArsenal_othermagazines.sqf"
#include "fn_bsArsenal_uniforms.sqf"
#include "fn_bsArsenal_vests.sqf"
#include "fn_bsArsenal_weapons.sqf"

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
    _box setVariable ["STAF_var_bsarsenal_actionId", _actionId, true];
  }
] remoteExec ["spawn", 0, true];

_box setVariable ["STAF_var_bsarsenal", true, true];