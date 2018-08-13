//Init
_source = _this select 0;
_source_light_bulb = ["plp_bo_LightBulbBlue_Stc","plp_bo_LightBulbGreen_Stc","plp_bo_LightBulbOrange_Stc","plp_bo_LightBulbRed_Stc","plp_bo_LightBulbWhite_Stc","plp_bo_LightBulbYellow_Stc"];
_condition = _this select 1;

_pos = getpos _source;
_pos_plp_light_bulb = [(getpos _source select 0),(getpos _source select 1),(getpos _source select 2)+1.85];

//lightpoint

if (_source in _source_light_bulb) then {
  switch (_condition) do {
      case "0": {
        _light = "#lightpoint" createVehicleLocal _pos_plp_light_bulb;
        _light setLightBrightness 0.2;
        _light setLightAmbient[0.89,0.99,0.98];
        _light setLightColor[0.89,0.99,0.98];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "1": {
        _light = "#lightpoint" createVehicleLocal _pos_plp_light_bulb;
        _light setLightBrightness 0.7;
        _light setLightAmbient[0.89,0.99,0.98];
        _light setLightColor[0.89,0.99,0.98];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "2": {
        _light = "#lightpoint" createVehicleLocal _pos_plp_light_bulb;
        _light setLightBrightness 0.3;
        _light setLightAmbient[0.96,0.64,0.1];
        _light setLightColor[0.96,0.64,0.1];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "3": {
        _light = "#lightpoint" createVehicleLocal _pos_plp_light_bulb;
        _light setLightBrightness 0.7;
        _light setLightAmbient[0.96,0.64,0.1];
        _light setLightColor[0.96,0.64,0.1];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "4": {
        _light = "#lightpoint" createVehicleLocal _pos_plp_light_bulb;
        _light setLightBrightness 0.3;
        _light setLightAmbient[0.92,0.034,0];
        _light setLightColor[0.92,0.034,0];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "5": {
        _light = "#lightpoint" createVehicleLocal _pos_plp_light_bulb;
        _light setLightBrightness 0.7;
        _light setLightAmbient[0.92,0.034,0];
        _light setLightColor[0.92,0.034,0];
        _light lightAttachObject [_source, [0,0,0]];
      };
  };
} else {
  switch (_condition) do {
      case "0": {
        _light = "#lightpoint" createVehicleLocal _pos;
        _light setLightBrightness 0.2;
        _light setLightAmbient[0.89,0.99,0.98];
        _light setLightColor[0.89,0.99,0.98];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "1": {
        _light = "#lightpoint" createVehicleLocal _pos;
        _light setLightBrightness 0.7;
        _light setLightAmbient[0.89,0.99,0.98];
        _light setLightColor[0.89,0.99,0.98];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "2": {
        _light = "#lightpoint" createVehicleLocal _pos;
        _light setLightBrightness 0.3;
        _light setLightAmbient[0.96,0.64,0.1];
        _light setLightColor[0.96,0.64,0.1];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "3": {
        _light = "#lightpoint" createVehicleLocal _pos;
        _light setLightBrightness 0.7;
        _light setLightAmbient[0.96,0.64,0.1];
        _light setLightColor[0.96,0.64,0.1];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "4": {
        _light = "#lightpoint" createVehicleLocal _pos;
        _light setLightBrightness 0.3;
        _light setLightAmbient[0.92,0.034,0];
        _light setLightColor[0.92,0.034,0];
        _light lightAttachObject [_source, [0,0,0]];
      };

      case "5": {
        _light = "#lightpoint" createVehicleLocal _pos;
        _light setLightBrightness 0.7;
        _light setLightAmbient[0.92,0.034,0];
        _light setLightColor[0.92,0.034,0];
        _light lightAttachObject [_source, [0,0,0]];
      };
  };
};
