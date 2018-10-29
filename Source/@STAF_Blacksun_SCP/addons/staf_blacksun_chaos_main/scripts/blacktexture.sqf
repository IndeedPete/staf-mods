_veh = _this select 0;

_MRAP = ["STAF_Blacksun_Chaos_MRAP_Armed","STAF_Blacksun_Chaos_MRAP_FFV","STAF_Blacksun_Chaos_MRAP","STAF_Blacksun_Chaos_MRAP_Armed_opf","STAF_Blacksun_Chaos_MRAP_FFV_opf","STAF_Blacksun_Chaos_MRAP_opf","STAF_Blacksun_Chaos_MRAP_Armed_ind","STAF_Blacksun_Chaos_MRAP_FFV_ind","STAF_Blacksun_Chaos_MRAP_ind"];
_Truck = ["STAF_Blacksun_Chaos_Truck","STAF_Blacksun_Chaos_Truck_Covered","STAF_Blacksun_Chaos_Truck_opf","STAF_Blacksun_Chaos_Truck_Covered_opf","STAF_Blacksun_Chaos_Truck_ind","STAF_Blacksun_Chaos_Truck_Covered_ind"];
_Mi8 = ["STAF_Blacksun_Chaos_Mi8","STAF_Blacksun_Chaos_Mi8_opf","STAF_Blacksun_Chaos_Mi8_ind"];
_Mi24 = ["STAF_Blacksun_Chaos_Mi24","STAF_Blacksun_Chaos_Mi24_opf","STAF_Blacksun_Chaos_Mi24_ind"];
_IFV = ["STAF_Blacksun_Chaos_IFV_Armed","STAF_Blacksun_Chaos_IFV","STAF_Blacksun_Chaos_IFV_Armed_opf","STAF_Blacksun_Chaos_IFV_opf","STAF_Blacksun_Chaos_IFV_Armed_ind","STAF_Blacksun_Chaos_IFV_ind"];
_RHIB = ["STAF_Blacksun_Chaos_RHIB","STAF_Blacksun_Chaos_RHIB_opf","STAF_Blacksun_Chaos_RHIB_ind"];

if (typeOf _veh in _MRAP) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [3,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [4,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _Truck) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
  _veh setObjectTexture [3,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
};

if (typeOf _veh in _Mi8) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _Mi24) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _IFV) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _RHIB) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
};
