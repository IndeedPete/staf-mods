_veh = _this select 0;

_MRAP = ["STAF_Blacksun_MRAP","STAF_Blacksun_MRAP_opf","STAF_Blacksun_MRAP_ind"];
_Truck = ["STAF_Blacksun_Truck","STAF_Blacksun_Truck_opf","STAF_Blacksun_Truck_ind"];
_Cover = ["STAF_Blacksun_Truck_Covered","STAF_Blacksun_Truck_Covered_opf","STAF_Blacksun_Truck_Covered_ind"];
_Ocra = ["STAF_Blacksun_Orca","STAF_Blacksun_Orca_opf","STAF_Blacksun_Orca_ind"];
_Quad = ["STAF_Blacksun_Quad","STAF_Blacksun_Quad_opf","STAF_Blacksun_Quad_ind"];
_Bird = ["STAF_Blacksun_Little_Bird","STAF_Blacksun_Little_Bird_opf","STAF_Blacksun_Little_Bird_ind"];
_SUV = ["STAF_Blacksun_SUV","STAF_Blacksun_SUV_opf","STAF_Blacksun_SUV_ind"];
_Offroad = ["STAF_Blacksun_Offroad","STAF_Blacksun_Offroad_opf","STAF_Blacksun_Offroad_ind"];
_RHIB = ["STAF_Blacksun_RHIB","STAF_Blacksun_RHIB_opf","STAF_Blacksun_RHIB_ind"];

if (typeOf _veh in _MRAP) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.5)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.2,0.2,0.2,0.5)'];
};

if (typeOf _veh in _Truck) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
};

if (typeOf _veh in _Cover) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
  _veh setObjectTexture [3,'#(argb,8,8,3)color(0.2,0.2,0.2,0.3)'];
};

if (typeOf _veh in _Ocra) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _Quad) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.5)'];
};

if (typeOf _veh in _Bird) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _SUV) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.3)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.5)'];
};

if (typeOf _veh in _Offroad) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.3)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.5)'];
};

if (typeOf _veh in _RHIB) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.2,0.2,0.2,0.5)'];
};
