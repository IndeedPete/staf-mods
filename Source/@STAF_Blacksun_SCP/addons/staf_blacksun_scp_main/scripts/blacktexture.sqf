_veh = _this select 0;

_mrap = ["STAF_Blacksun_MTF_MRAP","STAF_Blacksun_MTF_MRAP_opf","STAF_Blacksun_MTF_MRAP_ind","STAF_Blacksun_MTF_CBRN_MRAP","STAF_Blacksun_MTF_CBRN_MRAP_opf","STAF_Blacksun_MTF_CBRN_MRAP_ind"];
_truck = ["STAF_Blacksun_MTF_Truck","STAF_Blacksun_MTF_Truck_opf","STAF_Blacksun_MTF_Truck_ind","STAF_Blacksun_MTF_CBRN_Truck","STAF_Blacksun_MTF_CBRN_Truck_opf","STAF_Blacksun_MTF_CBRN_Truck_ind"];
_truck_cover = ["STAF_Blacksun_MTF_Truck_Covered","STAF_Blacksun_MTF_Truck_Covered_opf","STAF_Blacksun_MTF_Truck_Covered_ind","STAF_Blacksun_MTF_CBRN_Truck_Covered","STAF_Blacksun_MTF_CBRN_Truck_Covered_opf","STAF_Blacksun_MTF_CBRN_Truck_Covered_ind"];
_quad = ["STAF_Blacksun_MTF_Quad","STAF_Blacksun_MTF_Quad_opf","STAF_Blacksun_MTF_Quad_ind","STAF_Blacksun_MTF_CBRN_Quad","STAF_Blacksun_MTF_CBRN_Quad_opf","STAF_Blacksun_MTF_CBRN_Quad_ind"];
_orca = ["STAF_Blacksun_MTF_Orca","STAF_Blacksun_MTF_Orca_opf","STAF_Blacksun_MTF_Orca_ind","STAF_Blacksun_MTF_CBRN_Orca","STAF_Blacksun_MTF_CBRN_Orca_opf","STAF_Blacksun_MTF_CBRN_Orca_ind"];
_taru = ["STAF_Blacksun_MTF_Taru","STAF_Blacksun_MTF_Taru_opf","STAF_Blacksun_MTF_Taru_ind","STAF_Blacksun_MTF_CBRN_Taru","STAF_Blacksun_MTF_CBRN_Taru_opf","STAF_Blacksun_MTF_CBRN_Taru_ind"];
_merlin = ["STAF_Blacksun_MTF_Merlin","STAF_Blacksun_MTF_Merlin_opf","STAF_Blacksun_MTF_Merlin_ind","STAF_Blacksun_MTF_CBRN_Merlin","STAF_Blacksun_MTF_CBRN_Merlin_opf","STAF_Blacksun_MTF_CBRN_Merlin_ind"];
_rhib = ["STAF_Blacksun_MTF_RHIB","STAF_Blacksun_MTF_RHIB_opf","STAF_Blacksun_MTF_RHIB_ind","STAF_Blacksun_MTF_CBRN_RHIB","STAF_Blacksun_MTF_CBRN_RHIB_opf","STAF_Blacksun_MTF_CBRN_RHIB_ind"];
_rubber = ["STAF_Blacksun_MTF_Rubber","STAF_Blacksun_MTF_Rubber_opf","STAF_Blacksun_MTF_Rubber_ind","STAF_Blacksun_MTF_CBRN_Rubber","STAF_Blacksun_MTF_CBRN_Rubber_opf","STAF_Blacksun_MTF_CBRN_Rubber_ind"];

if (typeOf _veh in _mrap) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _truck) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _truck_cover) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [3,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _quad) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _orca) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _taru) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _merlin) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [2,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _rhib) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
  _veh setObjectTexture [1,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};

if (typeOf _veh in _rubber) then {
  _veh setObjectTexture [0,'#(argb,8,8,3)color(0.11,0.11,0.11,0.5)'];
};
