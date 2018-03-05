//Init
_source = _this select 0;
_condition = _this select 1;

_pos = getpos _source;

//lightpoint

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
