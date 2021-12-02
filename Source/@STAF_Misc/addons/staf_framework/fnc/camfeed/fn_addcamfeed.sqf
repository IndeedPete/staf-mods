cursorTarget setObjectTexture [0, "#(argb,512,512,1)r2t(uavrtt,1)"];

/* create camera and stream to render surface */
cam = "camera" camCreate [0,0,0];
cam cameraEffect ["Internal", "Back", "uavrtt"];

/* attach cam to gunner cam position */
cam attachTo [uav, [0,0,0], "PiP0_pos"];

/* make it zoom in a little */
cam camSetFov 0.1;

/* switch cam to thermal */
"uavrtt" setPiPEffect [2];

/* adjust cam orientation */
addMissionEventHandler ["Draw3D", {
    _dir = 
        (uav selectionPosition "PiP0_pos") 
            vectorFromTo 
        (uav selectionPosition "PiP0_dir");
    cam setVectorDirAndUp [
        _dir, 
        _dir vectorCrossProduct [-(_dir select 1), _dir select 0, 0]
    ];
}];