/*
ROS Sandstorm V3.6 by RickOShay

You may use ROSsandstorm as long as this header text is not removed and all original files are kept in tact.
Full credit must be given in any mission or mod that uses this or any other associated script or asset
dependency.

FEATURES:
Storm random scheduler for Listen/Dedicated servers, variable storm density, fixed or random storm length,
variable colour and wind strength, variable visibility, indoor outdoor & in vehicle sound attenuation, works
well day and night, protective eyewear check and damage, script auto adjusts number of sandstorms based on
available time to 24h00, allowance for existing mission time acceleration and wind settings, random prob of
certain hats blowing off, storm warning weather report, limited fps impact, works in SP and MP.

For a single sandstorm run the next line in a trigger or similar method to guarantee sandstorm run time.
Make sure trigger triggers at same time on all machines.

null = [duration in secs] execvm "ROS\scripts\ROSsandstorm.sqf";
null = [150] execvm "ROS\scripts\ROSsandstorm.sqf";
Min length 150 seconds.
Recommended storm lengths are 150 + (55 x n) = (150,205,260,315,370,425,480 etc.)

NOTE: If running on Dedicated server and calling sandstorm via a trigger (i.e. not using the scheduler):
Make sure trigger has server only box checked. In trigger On activation field put:
[[150],"ROS\scripts\ROSsandstorm.sqf"] remoteexec ["BIS_fnc_execVM"];

For random storm scheduling - listen or dedicated server use the ROS_Sandstorm_Scheduler.sqf file.
See script header for usage.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The settings below will override any settings passed from scheduler if used to start sandstorms.
// Uncomment out the following lines to enable eyewear checks and or random chance of soft hats blowing off

//_eyewearCheck = true;
//_hatCheck = true;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Select Wind direction override //////////////////////////////////////////////////////////////////////////////
// Options are: "Current" or "Rand" or "X" value in compass range 0-360 in line below:
// ie: _SelectedWindDir = "Current"; _SelectedWindDir = "Rand"; _SelectedWindDir = "180";
// Uncomment out the following line to override:

//_SelectedWindDir = "Current";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////// *** DO NOT CHANGE ANYTHING BELOW THIS LINE *** DO NOT CHANGE ANYTHING BELOW THIS LINE *** ///////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
params ["_dur","_eyewearCheck","_hatCheck","_SelectedWindDir","_debug"];
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Run only once
if (isnil "SStormRunning") then {SStormRunning = false};
if (SStormRunning) exitWith {};

SStormRunning = true;
publicVariable "SStormRunning";
STAF_var_SandstormOn = true;
publicVariable "STAF_var_SandstormOn";

if (isnil "_dur") then {_dur = 150};
if (isnil "_SelectedWindDir") then {_SelectedWindDir = "Current";};
if (isnil "_debug") then {_debug = false}; // change to true for local testing
// Save current wind
_origwind = wind;
_origWindir = windDir;
_origWindX = wind select 0;
_origWindY = wind select 1;
_origWindSpeed = sqrt (_origWindX^2 + _origWindY^2);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_Wdir = windDir;

if (_SelectedWindDir == "Current") then {_Wdir = windDir};
if (_SelectedWindDir == "Rand") then {_Wdir = round (random 360)};
if (_SelectedWindDir != "Current" && _SelectedWindDir != "Rand") then {_Wdir = parseNumber _SelectedWindDir};
10 setWindDir _Wdir;
if (_debug) then {hint format ["WindX:%1 WindY:%2 Windspeed:%3 WindDir:%4",_origwindX, _origwindY,_origWindSpeed,_origWindir]};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Save current volume
_originalVolume = soundVolume;
_endtime = time + _dur;
if (_debug) then {hint format ["Endtime %1", _endtime]; sleep 3; hint "SS start"};

// Camshake
_shakepower = 1 + random 0.5;
_shakeduration = 1 + random 0.5;
_shakefreq = 3 + random 1;

// Add goggles and try to put into inventory - add default eyewear here
if (goggles player == "") then {
    if (player canAdd "G_Tactical_Clear") then {
        player addItem "G_Tactical_Clear";
        player unassignItem "G_Tactical_Clear";
    };
};

// Store and set time multiplier
_curtimemultiplier = timeMultiplier;
if (isServer) then {setTimeMultiplier 1};

// Remove ambient life
// enableEnvironment [false, false];

// Warning length = 11 secs
//playsound ["sswarning", true];

sleep 5;

// Start wind intro overlap ///////////////////////////////////////////////////////////////////////////
if (_debug) then {hint "Start Wind intro sound";};

playsound "sswindintro";
3 fadeSound _originalVolume;

sleep 10;

// Increase wind velocity
[_debug] spawn {
    params ["_debug"];
    for "_i" from 1 to 2 step 0.3 do {
        _wSpeed = [wind, _i] call BIS_fnc_vectorMultiply;
        setWind [_wSpeed select 0, _wSpeed select 1, true];
        sleep 3;
        _wSpeedms = sqrt (((wind select 0) ^ 2) + ((wind select 1) ^ 2));
        _wSpeedkmh = _wSpeedms * 3.6;
        if (_debug) then {hint format ["Wind speed increasing:\nm/s: %1\nkph: %2",_wSpeedms tofixed 2,_wSpeedkmh tofixed 2]};
    };
};

if (_debug) then {hint format ["WindX:%1 WindY:%2 Windspeed:%3",wind select 0, wind select 1, sqrt (((wind select 0)^2) + ((wind select 1)^2))]};

sleep 15;

// Start leaves
if (_debug) then {hint "Start leaves";};
_WindVectorX = wind select 0;
_WindVectorY = wind select 1;
_leaves_p  = "#particlesource" createVehicleLocal (getpos vehicle player);
_leaves_p attachto [vehicle player];
_leaves_p setParticleCircle [100, [0, 0, 0]];
_leaves_p setParticleParams [
["\A3\data_f\ParticleEffects\Hit_Leaves\Sticks", 1, 1, 1], "", "SpaceObject", 1, 27, [0,0,0], [_WindVectorX, _WindVectorY, 3], 2, 0.000001, 0.0, 0.1, [0.5 + random 0.5], [[0.68,0.68,0.68,1]], [1.5,1], 13, 13, "", "", vehicle player, 0, true ,1, [[0,0,0,0]]];
//setPartRand [lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity, angle, bounceOnSurf]:
_leaves_p setParticleRandom [0, [10, 10, 7], [4, 4, 5], 2, 0.1, [0, 0, 0, 0.5], 1, 1, 0, 1];
_leaves_p setDropInterval 0.035;

// Start Film grain
if (_debug) then {hint "Start filmgrain";};
_hndlFg = ppEffectCreate ["FilmGrain", 2050];
_hndlFg ppEffectEnable true;
_hndlFg ppEffectAdjust [0.08, 1.25, 2.05, 0.75, 1, 0];
_hndlFg ppEffectCommit 30;

sleep 5;

// chance of blowing soft hat off //
if (isnil "STAF_var_HatCheck") then {STAF_var_HatCheck = false};
if (_debug && STAF_var_HatCheck) then {hint "Start hat off";};
if (STAF_var_HatCheck) then {
    [player,_debug] call STAF_Scripts_fnc_ROShatblowsoff;
};

// Is player wearing eye protection? //
if (isnil "STAF_var_Eyewear") then {STAF_var_Eyewear = false};
if (STAF_var_Eyewear) then {
    [_endtime,_hndlFg,_debug] call STAF_Scripts_fnc_ROShurt;
};

// Inside building or vehicle check for sound attenuation and eyewear film grain adjust
if (_debug) then {hint "Inside building or vehicle start"};
[_endtime,_shakepower,_shakeduration,_shakefreq,_originalVolume,_hndlFg,_debug] spawn {
    params ["_endtime","_shakepower","_shakeduration","_shakefreq","_originalVolume","_hndlFg","_debug"];

    _doors = ["dvere","dvere1","dvere2","door_0","door_1","door_2","door_3","door_4","Door_1_rot","Door_2_rot","Door_3_rot","Door_4_rot","Door_5_rot","Door_6_rot","Door_7_rot","Door_8_rot","Door_9_rot","Door_10_rot","Door_11_rot","Door_12_rot","door_L","door_R","vrataL","vrataR"];

    _rooflessVehicles = ["uaz_open","Offroad_02","M1078A1R_SOV","M1084A1R_SOV","rhsusf_mrzr4","rhsusf_m998","LSV_01","LSV_01","Quadbike","LSV_02","Boat_Transport_01","Lifeboat","Boat_Transport_02","Boat_Civil_01","Boat_Armed_01","Scooter_Transport","MK19_TriPod","TOW_TriPod","M2StaticMG","Stinger_AA","M252_D","Static_AT","Static_AA","Mortar","HMG_01","2b14_82mm","Metis","Kornet","Igla","AGS30_TriPod","KORD","SPG9M","ZU23"];

    While {time < _endtime} do {

        vehisOpen = false;
        invehicle = false;
        inbuilding = false;
        doorclosed = "";
        nearestdoor = "";

        // Is player inside? Is door open/closed?
        _building = nearestObject [player, "HouseBase"];
        if ((count (_building buildingPos -1) >0) && ((typeof _building) find "ruins" == -1)) then {
            _building = nearestObject [player, "HouseBase"];
        } else {
            _building = objNull;
        };
        _relPos = _building worldToModel (getPosATL player);
        _boundBox = boundingBoxReal _building;
        _min = _boundBox select 0;
        _max = _boundBox select 1;
        _playerX = _relPos select 0;
        _playerY = _relPos select 1;
        _playerZ = _relPos select 2;
        _minX = _min select 0;
        _minY = _min select 1;
        _minZ = _min select 2;
        _maxX = _max select 0;
        _maxY = _max select 1;
        _maxZ = _max select 2;
        // Inside building
        if (_playerX > _minX && _playerX < _maxX && _playerY > _minY && _playerY < _maxY && _playerZ > _minZ && _playerZ < _maxZ && (getposATL player select 2) >0.1) then {
            inBuilding = true;
        } else {
            inBuilding = false;
        };
        // Is player in open or covered vehicle (some cases not included ie half tops, open door configs etc)
        if (vehicle player != player) then {
            for "_i" from 0 to (count _rooflessVehicles)-1 do {
                if (typeOf (vehicle player) find (_rooflessVehicles select _i) >=0) then {
                    vehisOpen = true;
                };
            };
        };
        /*if (_debug) then {
            if (vehicle player != player) then {
                if (vehisOpen) then {
                    hint "Player in open vehicle";
                } else {
                    hint "Player in closed vehicle";
                };
            };
            if (vehicle player == player) then {
                    hint "Player not in vehicle";
            };
            sleep 0.5;
        };*/
        if (vehicle player != player) then {
            if (!vehisOpen) then {
                // Covered vehicle - attenuate sound, reduce camshake and film grain and particles
                inVehicle = true;
                {if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (vehicle player nearObjects 10);
                addCamShake [(_shakepower/2), _shakeduration, _shakefreq];
                0.1 fadeSound 0.55;
                _hndlFg ppEffectAdjust [0.08, 1.25, -0.01, 0.75, 1, 0];
                _hndlFg ppEffectCommit 1;
                sleep 0.2;
            } else {
                // Open vehicle - slight attenuation, reduce camshake, normal film grain
                invehicle = false;
                addCamShake [(_shakepower/2), _shakeduration, _shakefreq];
                0.1 fadeSound 0.85;
                _hndlFg ppEffectAdjust [0.08, 1.25, -0.01, 0.75, 1, 0];
                _hndlFg ppEffectCommit 1;
                sleep 0.2;
            };
        };

        if (inBuilding) then {
            // In building - reduce particles
            {if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (player nearObjects 10);
            enableCamShake false;
            _hndlFg ppEffectAdjust [0.08, 1.25, 1.0, 0.75, 1, 0];
            _hndlFg ppEffectCommit 1;
            sleep 0.2;
            0.2 fadeSound 0.50;
            sleep 0.2;
            {if (_building animationPhase _x > 0.2) then {nearestdoor = _x}} forEach _doors;
            sleep 0.2;
            if (_building animationPhase nearestdoor < 0.2) then {
                doorclosed = true;
                0 fadeSound 0.40;
            } else {
                doorclosed = false;
                0 fadeSound 0.50;
            };
        };
        if (player == vehicle player && !inBuilding) then {
            // Player wearing eyewear adjust film grain
            if (goggles player != "") then {
                _hndlFg ppEffectAdjust [0.08, 1.25, 1.0, 0.75, 1, 0];
                _hndlFg ppEffectCommit 1;
            } else {
                _hndlFg ppEffectAdjust [0.08, 1.25, 2.05, 0.75, 1, 0];
                _hndlFg ppEffectCommit 1;
            };
            sleep 0.1;
            enableCamShake true;
            addCamShake [_shakepower, _shakeduration, _shakefreq];
            0.1 fadeSound _originalVolume;
        };
    sleep 0.5;
    }; // end while
}; // end spawn

// Start main Wind loop
if (_debug) then {hint "Start Wind loop"; sleep 0.5;};
[_endtime, _originalVolume, _debug] call STAF_Scripts_fnc_ROSwindloop;

// Start fog
if (_debug) then {hint "Start fog"};
70 setFog 0.25;

sleep 5;

// Add Color correction
if (_debug) then {hint "Start color correction";};
_hndl1 = ppEffectCreate ["colorCorrections", 1550];
_hndl1 ppEffectEnable true;
_hndl1 ppEffectAdjust [0.6, 1, 0, [0.8, 0.7, 0.5, 0.3], [0.8, 0.7, 0.5, 0.4], [0.8, 0.7, 0.5, 0.3]];
_hndl1 ppEffectCommit 15;

sleep 15;

// Add particle effect
if (_debug) then {hint "Start particles";};

_obj = vehicle player;
_density = 0.01;
_colorCoef = 1;
_alpha = 0.3;
_size = 30;
_pos = getPosASL _obj;
_wx = wind select 0;
_wy = wind select 1;
_vel = [_wx/2.5,_wy/2.5,0]; // heavier slower
_color = [1.0 * _colorCoef, 0.92 * _colorCoef, 0.82 * _colorCoef];

if (sunOrMoon < 0.5) then {
    _size = 100;
} else {
    _size = 20;
};
if (sunOrMoon < 0.5) then {
    _color = [0.5 * _colorCoef, 0.46 * _colorCoef, 0.41 * _colorCoef];
} else {
    _color = [1.0 * _colorCoef, 0.92 * _colorCoef, 0.82 * _colorCoef];
};
if (sunOrMoon < 0.5) then {
    _alpha = 0.5 + random 0.2;
} else {
    _alpha = 0.3 + random 0.4;
};
_rvel = (abs (wind select 0) + abs (wind select 1))/1.5;
_particles = "#particlesource" createVehicleLocal _pos;
_particles setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 8, 0], "", "Billboard", 1, 10, [0, 0, 0], _vel, _rvel, 1.275, 1, 1, [_size], [_color + [0], _color + [_alpha], _color + [0]], [1000], 1, 1, "", "", _obj];
_particles setParticleRandom [3, [100 + (random 8), 100 + (random 10), 20], [2, 2, 0], 1, 0, [0, 0, 0, 0.01], 0, 0];
_particles setParticleCircle [0.1, [0,0,0]];
_particles setDropInterval _density;

sleep 5;

// Modify Color correction and fog
if (_debug) then {hint "Start CC modify fog";};
_ccbright = 0.6;
_ccColbl = [0.8, 0.7, 0.5, 0.2 + random 0.6];
_ccColco = [0.6 + random 0.4, 0.7, 0.5, 0.2 + random 0.6];
_ccColde = [0.6  + random 0.4, 0.7 , 0.5, 0.3 + random 0.5];
_hndl1 = ppEffectCreate ["colorCorrections", 1550];
_hndl1 ppEffectEnable true;

While {(time <= _endtime) && (STAF_var_SandstormOn)} do {
    // Switch off particles if flying
    if (!(isTouchingGround vehicle player) or !(isTouchingGround player)) then {
        _particles setDropInterval 0;
    } else {
        _particles setDropInterval _density;
    };
    if (sunOrMoon < 0.5) then {
        _ccbright = 0.6;
        _ccColbl = [0.4, 0.35, 0.25, 0.2 + random 0.6];
        _ccColco = [0.3 + random 0.2, 0.35, 0.25, 0.2 + random 0.6];
        _ccColde = [0.3  + random 0.2, 0.35, 0.25, 0.3 + random 0.5];
    } else {
        _ccbright = 0.6;
        _ccColbl = [0.8, 0.7, 0.5, 0.2 + random 0.6];
        _ccColco = [0.6 + random 0.4, 0.7, 0.5, 0.2 + random 0.6];
        _ccColde = [0.6  + random 0.4, 0.7 , 0.5, 0.3 + random 0.5];
    };
    _hndl1 ppEffectAdjust [_ccbright, 1, 0, _ccColbl, _ccColco, _ccColde];
    _hndl1 ppEffectCommit 2 + (floor random 3);

    if (isServer) then {3 setFog (random 0.75);};
    sleep 4.5;
};

if (_debug) then {hint "Endtime !";sleep 2;};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// FADE OUT EFFECTS ////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (_debug) then {hint "Fade out Sandstorm"; sleep 1;};

// Fade color correction to normal
if (_debug) then {hint "Colour correction fade to normal"};
_hndl1 ppEffectAdjust [1, 1, 0,[ 0, 0, 0, 0],[ 1, 1, 1, 1],[ 0, 0, 0, 0]];
_hndl1 ppEffectCommit 60;

// Remove Fog
if (_debug) then {hint "Remove fog"};
//force fog to 0
setTimeMultiplier 2;
if (isServer) then {30 setFog 0};

// Switch on life
//if (_debug) then {hint "Environment on"};
//enableEnvironment [true, true];

sleep 10;

// Remove _particles
if (_debug) then {hint "Remove particles and fade wind"};
for "_i" from _density to 0 step -0.0001 do {
    _density = _density + _i;
    sleep 0.1;
};
deleteVehicle _particles;

// Remove leaves
if (_debug) then {hint "Remove leaves and camshake"};
deletevehicle _leaves_p;

// Remove Film grain
if (_debug) then {hint "Remove film grain"};
_hndlFg ppEffectEnable false;
ppEffectDestroy _hndlFg;

// Reduce wind
if (_debug) then {hint "Reduce wind"};
_WindVectorX = wind select 0;
_WindVectorY = wind select 1;
_factor = 1;
while {vectorMagnitude wind > vectorMagnitude _origwind} do {
    _factor = _factor + 0.5;
    setWind [(_WindVectorX/_factor), (_WindVectorY/_factor), true];
    sleep 4;
};

sleep 10;

// Remove camshake
inBuilding = false;
inVehicle = false;
doorclosed = "";
nearestdoor = "";
enableCamShake false;

sleep 15;

// reset original sound volume
if (_debug) then {hint "Reset original sound volume"};
5 fadeSound _originalVolume;

// Remove color correction
if (_debug) then {hint "Delete color correction"};
_hndl1 ppEffectEnable false;
ppEffectDestroy _hndl1;

// Reset time multiplier to mission init settings
if (_debug) then {hint "Time multiplier reset"};
if (isServer && _curtimemultiplier > 1) then {
    setTimeMultiplier _curtimemultiplier;
};

// Set wind to original wind setting
if (_debug) then {hint "Reset original wind direction and speed"};
5 setWindDir _origWindir;
sleep 5;
setWind [_origWindX, _origWindY, true];

// SS END - FADE out length ///////////////////////////////////////////////////////////////////////

_endtime = "";

SStormRunning = false;
publicVariable "SStormRunning";

if (_debug) then {hint "Sandstorm End"};
