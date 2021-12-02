/*
ROS SANDSTORM version 4.5 by RickOShay
--------------------------------------
LEGAL STUFF AND USAGE
---------------------
You may use ROS Sandstorm as long as this header text is not removed and all original files are kept intact
and NOT EDITED and the folder structure is retained. Full credit must be given in any mission or mod that
uses this or any other associated script or asset dependency. If you wish to modify this script the original
scripts must be archived in your mission folder and you must state this and any other script has been redacted
(edited) at the top of the script file and full credit must be given in all derivative work.

GENERAL FEATURES:
-----------------
Storm random scheduler for Listen/Dedicated servers, variable storm density, fixed or random storm length,
variable colour and wind strength, variable visibility, indoor outdoor & in vehicle sound attenuation, wind
affects small and medium sized objects - works day and night, protective eyewear check and damage, the scheduler
script auto adjusts number of sandstorms based on available time to 24h00, allowance for existing mission time acceleration and wind settings, random prob of certain hats blowing off. Variable enemy response based on visibility. Periodic dust devils that can effect small vehicles and men.
The weather report is only available if the scheduler is used. Limited fps impact, works in SP and MP.

METHOD:
-------
There are two ways to start a sandstorm - either by using the ROS_Sandstorm_Scheduler (randomiser) or by
calling ROS_Sandstorm directly via a trigger or similar method at a specific mission time.

A) TO RUN A SANDSTORM AT A SPECIFIC TIME VIA TRIGGER OR SIMILAR METHOD
----------------------------------------------------------------------
Make sure the trigger fires at the same time on all machines i.e. trigger condition true etc.

    Dedicated server - calling the sandstorm via a trigger: (Server only checked):
    ------------------------------------------------------------------------------
    Use the following line in trigger On Act field:
    [[150],"\STAF_FRAMEWORK\scr\ROS\scripts\fn_\ROS_Sandstorm.sqf"] remoteexec ["BIS_fnc_execVM",0];

    where 150 = the storm length. Actual length will last an additional ~80 sec due to storm fadeout overhead.
    Recommended storm lengths are 150 + (55 x n) = (150,205,260,315,370,425,480,535,590,645 or 0 = random length)

    Listen server or Single Player:
    -------------------------------
    Use the following line in On Act field: (Server only must NOT be checked)
    nul = [duration in secs] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_\ROS_Sandstorm.sqf";
    nul = [150] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_\ROS_Sandstorm.sqf";

B) TO RUN A RANDOM NUMBER OF SANDSTORMS AT RANDOM TIMES DURING A MISSION
------------------------------------------------------------------------
For random storms and/or random timing - Listen / Dedicated server use the
ROS_Sandstorm_Scheduler.sqf file and see script header for usage.

INSTALLATION
------------
1) Delete all previous ROS Sandstorm version scripts - sound files and folders.
2) Copy the ROS_Sandstorm folder from the zip file into your mission folder.
3) Add the sound classes from the supplied description.ext to your mission description.ext file.

MISSION SETTINGS - Weather NB!
------------------------------
See below.

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
To test this script set the next line to _debug = true; this will hint storm start times, storm events etc. and
copy the skiptime to the next storm. In the debug console you can skiptime and paste the value and then exec the
skiptime to fast forward to the next random time. Switch off _debug by changing var to false below.*/

//_debug = false;

/*All settings below override settings in ROS_Sandstorm_Scheduler if used to start ROS_Sandstorm.
Change false to true to enable eyewear checks and or random chance of soft hats blowing off */

//_eyewearCheck = false;
//_hatCheck = false;

/*Can wind blow small objects around? (Small: cups, cans, bottles). (Medium: plastic and metal chairs and tables).
Laptops and the tables they stand on are excluded by default and will not be affected by wind.*/
_affectsSmallObjs = true;
_affectsMediumObjs = true;

/* NB !! WIND DIRECTION AND MISSION WEATHER SETTINGS:
-----------------------------------------------------
Check your missions weather settings.
In the Eden editor - mission wind must be set to >0 strength and wind manual override must be off.
Sandstorms don't appear if it is raining or there is a high prob of rain.
You also need to either disable rain or set overcast to a maximum of 49%
Also set Fog to a value > 0.

This will guarantee that sandstorms will run at the specified or scheduled time.
Failing to seet the above weather settings in your mission may result in the sandstorm not running at the specified time.

Valid Wind direction override values below are as follows: 1-360 or 0 for random wind direction.
ie: _WindDirOverride = 160;*/

//_WindDirOverride = 0; // 0 = random

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////// *** DO NOT CHANGE ANYTHING BELOW THIS LINE *** DO NOT CHANGE ANYTHING BELOW THIS LINE *** ///////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (isnil "ROS_SS_schedulerRunning") then {ROS_SS_schedulerRunning = false;};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
params ["_dur","_eyewearCheck","_hatCheck","_SelectedWindDir","_debug"];

/*if (_SelectedWindDir == 0) then {
    if (_WindDirOverride == 0) then {
        _SelectedWindDir = 1+ (random 358);
    } else {
        _SelectedWindDir = _WindDirOverride;
    };
};*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (isnil "ROS_SS_Running") then {ROS_SS_Running = false};
// Prevent more than one storm (storm called directly and scheduler running?)
if (ROS_SS_Running) exitWith {};

ROS_SS_Running = true;
publicVariable "ROS_SS_Running";

STAF_var_SandstormOn = true;
publicVariable "STAF_var_SandstormOn";

SS_dust_devil_part = objNull;

if (isnil "_dur") then {_dur = 150};
if (isnil "_debug") then {_debug = false};
if (_dur == 0) then {round(random [300,900,2700])};
// Save current wind
_origwind = wind;
_origWindir = windDir;
_origWindX = wind select 0;
_origWindY = wind select 1;
_origWindSpeed = (vectorMagnitude wind);
if (isServer) then {5 setWindDir _SelectedWindDir};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
_endtime = time + _dur; // time until end of main loop excl fadeout time (~60s)
SS_fadeout = false;
_mst = [daytime] call BIS_fnc_timeToString;
_met = [(daytime + ((_dur + 60)/3600))] call BIS_fnc_timeToString;
_ssdur = [_dur+60] call BIS_fnc_secondsToString;
if (_debug) then {hint format ["SS Start: %1\nSS End: %2\nSS Dur: %3", _mst, _met, _ssdur]; sleep 3;};

SS_vehisOpen = false;
SS_inVehicle = false;
SS_inBuilding = false;
SS_doorClosed = false;
SS_nearestDoor = "";
SS_soRunning = false;
SS_moRunning = false;

// Camshake
_shakepower = 0.5 + random 0.5;
_shakeduration = 3 + random 0.5;
_shakefreq = 5 + random 1;

// Add goggles and try to put into inventory - add default eyewear here
/*if (goggles player == "") then {
    if (player canAdd "G_Tactical_Clear") then {
        player addItem "G_Tactical_Clear";
        player unassignItem "G_Tactical_Clear";
    };
};*/

// Store and set time multiplier it is reset to the mission default at the end of this script
_orig_timemultiplier = timeMultiplier;
setTimeMultiplier 1;

// Remove ambient life
// enableEnvironment [false, false];

// Critical fix for overcast value < 0 & wind = [0,0,0] & windDir == 0; Bug in Arma 3 weather system.
if (overcast < 0) then {
    hint "Overcast <0 bug - forced overcast change";
    if (isServer && fog <=0) then {[0, 0.1] remoteExec ["setFog"];};
    0 setWindForce 1;
    forceWeatherChange;
    skipTime -24;
    86400 setOvercast 0.1;
    [0, 0] remoteexec ["setRain", 0];
    forceWeatherChange;
    999999 setRain 0;
    if (isServer) then {setwind [1,1,true]};
    skipTime 24;
    waitUntil {overcast >0};
};

// Stop sandstorm - if overcast >= 60% or rain >0 - See weather note in header.
if (overcast >= 0.6 or rain >0) exitWith {
    if (_debug) then {hint "Overcast mission setting is too high (>50%)!\nSandstorm aborted!"};
    sleep 60;
    ROS_SS_Running = false;
};

sleep 5;

// Warning length = 11 secs
_randWarning = selectRandom ["sswarning1","sswarning2","sswarning3"];
playsound [_randWarning, true];

sleep 5;

// Start wind intro sound overlap ///////////////////////////////////////////////////////////////////////////
//if (_debug) then {hint "Wind intro sound";};
//playsound "sswindintro";
//3 fadeSound 1;

sleep 10;

// Increase wind velocity
[_debug] spawn {
    params ["_debug"];
    _curWSpeedkmh = (vectorMagnitude wind) * 3.6;
    _targetWindSpeed = 60; // approximate
    _wsLimit = (_targetWindSpeed-_curWSpeedkmh);
    //if (_debug) then {hint format ["WindX:%1 WindY:%2 Windspeed:%3",wind select 0, wind select 1, vectorMagnitude wind]};
    _rate = 1.15;
    if (isServer) then {
        while {(vectorMagnitude wind)*3.6 < _wsLimit} do {
            _wx = wind select 0;
            _wy = wind select 1;
            _wSpeed = [_wx, _wy, 0] vectorMultiply _rate;
            setWind [(_wSpeed select 0), (_wSpeed select 1), true];
            sleep 2;
        };
    };
    _curWSpeedkmh = (vectorMagnitude wind) * 3.6;
    if (_debug) then {hint format ["Wind speed increased to:\nKPH: %1\n DIR: %2",_curWSpeedkmh tofixed 2, windDir tofixed 1]; sleep 1;};
};

sleep 15;

// Start Film grain
if (_debug) then {hint "Start filmgrain"; sleep 1;};
_hndlFg = ppEffectCreate ["FilmGrain", 2000];
_hndlFg ppEffectEnable true;
_hndlFg ppEffectAdjust [0.08, 1.25, 2.05, 0.75, 1, 0];
_hndlFg ppEffectCommit 120;

// Inside building or vehicle check for sound attenuation and eyewear, adjust film grain
if (_debug) then {hint "Inside building or vehicle start"; sleep 0.5;};
[_endtime,_shakepower,_shakeduration,_shakefreq,_hndlFg,_debug] spawn {
    params ["_endtime","_shakepower","_shakeduration","_shakefreq","_hndlFg","_debug"];

    _doors = ["dvere","dvere1","dvere2","door_0","door_1","door_2","door_3","door_4","Door_1_rot","Door_2_rot","Door_3_rot","Door_4_rot","Door_5_rot","Door_6_rot","Door_7_rot","Door_8_rot","Door_9_rot","Door_10_rot","Door_11_rot","Door_12_rot","door_L","door_R","vrataL","vrataR"];

    _rooflessVehicles = ["uaz_open","Offroad_02","M1078A1R_SOV","M1084A1R_SOV","rhsusf_mrzr4","rhsusf_m998","LSV_01","LSV_01","Quadbike","LSV_02","Boat_Transport_01","Lifeboat","Boat_Transport_02","Boat_Civil_01","Boat_Armed_01","Scooter_Transport","MK19_TriPod","TOW_TriPod","M2StaticMG","Stinger_AA","M252_D","Static_AT","Static_AA","Mortar","HMG_01","2b14_82mm","Metis","Kornet","Igla","AGS30_TriPod","KORD","SPG9M","ZU23"];

    While {ROS_SS_Running} do {

        SS_vehisOpen = false;
        SS_inVehicle = false;
        SS_inBuilding = false;
        SS_doorclosed = false;
        SS_nearestdoor = "";

        // Is player inside a building and is door open/closed?
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
            SS_inBuilding = true;
        } else {
            SS_inBuilding = false;
        };

        // Is player in open or covered vehicle (some cases not included ie half tops, open door configs etc)
        if (vehicle player != player) then {
            for "_i" from 0 to (count _rooflessVehicles)-1 do {
                if (typeOf (vehicle player) find (_rooflessVehicles select _i) >=0) then {
                    SS_vehisOpen = true;
                };
            };
        };

        if (vehicle player != player) then {
            SS_inVehicle = true;
            if (!SS_vehisOpen) then {
                // Covered vehicle - attenuate sound, reduce camshake, film grain and reduce particles
                {if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (position (vehicle player) nearObjects 30);
                addCamShake [(_shakepower/2), _shakeduration, _shakefreq];
                1 fadeSound 0.50;
                if (!SS_fadeout) then {
                    _hndlFg ppEffectAdjust [0.08, 1.25, -0.01, 0.75, 1, 0];
                    _hndlFg ppEffectCommit 1;
                };
            } else {
                // Open vehicle - slight attenuation, reduce camshake, normal film grain
                addCamShake [(_shakepower/2), _shakeduration, _shakefreq];
                if (soundVolume != 0.65) then {1 fadeSound 0.65};
                if (!SS_fadeout) then {
                    _hndlFg ppEffectAdjust [0.08, 1.25, -0.01, 0.75, 1, 0];
                    _hndlFg ppEffectCommit 1;
                };
            };
        };

        if (SS_inBuilding) then {
            if (soundVolume != 0.5) then {0 fadeSound 0.5};
            enableCamShake false;
            if (!SS_fadeout) then {
                _hndlFg ppEffectAdjust [0.08, 1.25, 1.0, 0.75, 1, 0];
                _hndlFg ppEffectCommit 1;
            };
            // Is nearest door open -> attentuate sound by RickOShay (must give credit if used independently)
            _allDoors = ["dvere","dvere1","dvere2","vrataL","vrataR","door_0","door_1","door_2","door_3","door_4","door_L","door_R","door_1a_move","door_2a_move","door_7a_move","door_8a_move","door_1_rot","door_2_rot","door_3_rot","door_4_rot","door_5_rot","door_6_rot","door_7_rot","door_8_rot","door_9_rot","door_10_rot","door_11_rot","door_12_rot","door_13_rot","door_14_rot","door_15_rot","door_16_rot","door_17_rot","door_18_rot","door_19_rot","door_20_rot","door_21_rot","door_22_rot"];
            _bAnims = [];
            // Create array of building anims
            {_bAnims pushBack (tolower _x)} foreach (animationNames _building);
            _bDoors = _allDoors arrayIntersect _bAnims;
            _numDoors = getNumber (configFile >> "CFGVehicles" >> typeOf _building >> "numberOfDoors");
            _doorPositions = [];
            if (_numdoors >0) then {
                for "_i" from 1 to _numdoors do {
                    _doorPositions pushBack (_building selectionPosition (format ["Door_%1_trigger", _i]));
                };
                _pos = _building worldToModel position player;
                _vpos = getPosATL player select 2;
                _pos = [_pos select 0, _pos select 1, _vpos];
                _nearestdoorPos = [_doorPositions, _pos] call BIS_fnc_nearestPosition;

                _index = _doorPositions find _nearestdoorPos;
                // if door closed reduce volume
                if (_building animationphase (_bDoors select _index) ==0) then {
                    SS_doorclosed = true;
                    if (soundVolume != 0.35) then {0.1 fadeSound 0.35};
                };
            };
            // Delete particles
            if (SS_inBuilding) then {{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (player nearObjects 50)};
        };
        // Outside and not in vehicle set normal volume
        if (player == vehicle player && !SS_inBuilding) then {
            // Player wearing eyewear adjust film grain
            if (goggles player != "") then {
                if (!SS_fadeout) then {
                    _hndlFg ppEffectAdjust [0.08, 1.25, 1.0, 0.75, 1, 0];
                    _hndlFg ppEffectCommit 1;
                };
            } else {
                if (!SS_fadeout) then {
                    _hndlFg ppEffectAdjust [0.08, 1.25, 2.05, 0.75, 1, 0];
                    _hndlFg ppEffectCommit 1;
                };
            };
            if (!SS_fadeout) then {
                enableCamShake true;
                addCamShake [_shakepower, _shakeduration, _shakefreq];
            };
            if (soundVolume != 1) then {0.2 fadeSound 1};
        };
    sleep 0.2;
    }; // end while

}; // end spawn Inside building or vehicle check for sound attenuation and eyewear, adjust film grain

// Move small and medium objects
[_endtime, _affectsSmallObjs, _affectsMediumObjs] spawn {

    params ["_endtime", "_affectsSmallObjs", "_affectsMediumObjs"];
    _objTypes = ["Land_Tableware_01_cup_F","Land_CerealsBox_F","Land_MarketShelter_F","Land_Aut_zast","Land_cargo_addon02_V2_F","Land_cargo_addon02_V1_F","Land_ClothShelter_02_F","Land_ClothShelter_01_F","Land_CampingChair_V1_F","Land_Chair_EP1","Land_TablePlastic_01_F","Land_RattanTable_01_F","FoldTable","Land_TableSmall_01_F","Land_ChairPlastic_F","Land_BottlePlastic_V2_F","Land_WaterBottle_01_full_F","Land_BottlePlastic_V1_F","Land_BottlePlastic_V2_F","Land_Ketchup_01_F","Land_Mustard_01_F","SmallTable","Land_WaterBottle_01_empty_F","Land_WaterBottle_01_compressed_F","Land_Can_Dented_F","Land_Can_V2_F","Land_Can_V3_F","Land_Can_Rusty_F","Land_Can_V1_F","Can_small","Land_CampingChair_V2_white_F","Land_CampingChair_V2_F","Land_ChairWood_F","Land_CampingTable_white_F"];

    _sfxSO = "";
    _sfxMO = "";
    _suitableObjs = [];
    _smallObjects = [];
    _mediumObjects = [];
    SS_soRunning = false;
    SS_moRunning = false;

    while {(time <= _endtime) && (STAF_var_SandstormOn)} do {
        if (_affectsSmallObjs or _affectsMediumObjs) then {
            _nearPobjects = nearestObjects [vehicle player, [], 35];
            {if (typeof _x in _objTypes && simulationEnabled _x) then {_suitableObjs pushBackUnique _x}} foreach _nearPobjects;
        };

        sleep 0.3;

        if (_affectsSmallObjs) then {
            // Small objects - 100% chance
            {if (boundingBox _x select 2 <= 0.2) then {_smallObjects pushBackUnique _x}} forEach _suitableObjs;
            _smallObjects = _smallObjects call BIS_fnc_arrayShuffle;

            if (count _smallObjects > 0 && (time <= _endtime) && (STAF_var_SandstormOn)) then {
                if (!SS_soRunning) then {
                    [_smallObjects, _endtime, _sfxSO] spawn {
                        params ["_smallObjects", "_endtime", "_sfxSO"];

                        _sndTincans = ["tincan1","tincan2","tincan3","tincan4","tincan5","tincan6","tincan7"];
                        {
                            _objToMove = _x;
                            _buildings = [];
                            _buildings = (nearestObjects [_objToMove, ["House", "Building"], 10]) select {((boundingBoxReal _x select 1) select 1)>3};
                            _vFactor = 3 + random 4;
                            // Don't move objects <10m from buildings
                            if (local _objToMove && count _buildings==0) then {
                                _vx = (_vFactor * (sin windDir))+ random 0.11;
                                _vy = (_vFactor * (cos windDir))+ random 0.1;
                                _vz = _vFactor /3;
                                _objToMove setvelocity [_vx,_vy,_vz];
                                if ((str _objToMove find "can") > -1) then { _sfxSO = selectRandom _sndTincans;};
                                if (_sfxSO != "" && random 1 <0.67) then {[_objToMove, _sfxSO] remoteExec ["say3D",0]};
                                sleep 1 + random 1.5;
                            };
                            if (time >= _endtime) exitWith {};
                        } foreach _smallObjects;
                    };

                    SS_soRunning = true;
                };
            };
        }; // end small objs

        sleep 15;

        // Medium objects
        if (_affectsMediumObjs) then {
            _pos = [];
            _dir = 0;
            {if (boundingBox _x select 2 > 0.2 && boundingBox _x select 2 < 2) then {
                _mediumObjects pushBack _x;
                {if (isnil {_x getVariable (str _x +"pos")}) then {_pos = getPosATL _x; _dir = getdir _x; _x setVariable [(str _x +"pos"), _pos,true]; _x setVariable [(str _x +"dir"), _dir,true]}} forEach _mediumObjects;
            }} forEach _suitableObjs;

            sleep 0.3;

            _mediumObjects = _mediumObjects call BIS_fnc_arrayShuffle;

            if (count _mediumObjects > 0 && (time <= _endtime) && (STAF_var_SandstormOn)) then {
                if (!SS_moRunning) then {
                    SS_moRunning = true;
                    [_mediumObjects, _endtime] spawn {
                        params ["_mediumObjects", "_endtime"];

                        _sndMetalChairs = ["metalchair1","metalchair2","metalchair3"];
                        _sndPlasticChairs = ["plasticchair1","plasticchair2"];
                        _sfxMO= "";
                        {
                            _objToMove = selectRandom _mediumObjects;
                            _buildings = [];
                            _buildings = (nearestObjects [_objToMove, ["House", "Building"], 12]) select {((boundingBoxReal _x select 1) select 1)>3};
                            _vFactor = 3 + random 2.2;
                            // Don't move objects close to buildings
                            if (local _objToMove && count _buildings==0) then {
                                // Add action to flip upright and reset after / during storm
                                if (!(_objToMove getVariable ["objmoved",false])) then {
                                    _objToMove addAction ["<t color='#FFAB00'>Reset</t>", {
                                    params ["_target", "_caller", "_actionId"];
                                    _target setpos [(getpos _target) select 0,(getpos _target) select 1,0.2];
                                    _target setVectorUp surfaceNormal position _target;
                                    _target setPosATL (_target getVariable (str _target +"pos"));
                                    _target setDir (_target getVariable (str _target +"dir"));
                                    _target removeAction _actionId;
                                    _target setVariable ["objmoved",false,true];
                                    }, [], 9, true, true, "", "player distance _target < 4"];
                                    _objToMove setVariable ["objmoved",true,true];
                                };
                                if (isplayer (nearestObject [_objToMove,"man"]) && (nearestObject [_objToMove,"man"]) distance _objToMove > 4 && (nearestObject [_objToMove,"man"]) distance _objToMove < 40) then {
                                    if ((str _objToMove find "chairplastic") >= 0) then {_sfxMO = selectRandom _sndPlasticChairs};
                                    if ((str _objToMove find "campingchair") >= 0) then {_sfxMO = selectRandom _sndMetalChairs};
                                    _xrnd = (vectorUp _objToMove select 0) + random 0.5;
                                    _yrnd = (vectorUp _objToMove select 1) + random 0.5;
                                    _zrnd = (vectorUp _objToMove select 2) + random 0.4;
                                    _objToMove setVectorUp [_xrnd,_yrnd,_zrnd];
                                    _vx = _vFactor * (sin windDir) + random 0.11;
                                    _vy = _vFactor * (cos windDir) + random 0.1;
                                    _vz = _vFactor /2.8;
                                    _objToMove setvelocity [_vx,_vy,_vz];
                                    sleep 0.5;
                                    if (_sfxMO != "" && isServer) then {[_objToMove, _sfxMO] remoteExec ["say3D",0]};
                                    sleep 2 + random 1;
                                };
                            };
                            if (time >= _endtime) exitWith {};
                        } foreach _mediumObjects;
                    };
                };
            };
        };// end medium objs

        sleep 10;
        SS_soRunning = false;
        SS_moRunning = false;
    }; // end while
    SS_soRunning = false;
    SS_moRunning = false;
}; // end spawn Move small and medium objects

sleep 2;

// Start leaves
SS_leaves_Fnc = {
    SS_leaves_density = (0.2 + random 0.2);
    _WindVectorX = (wind select 0)/5;
    _WindVectorY = (wind select 1)/5;
    _leaves_pos = (vehicle player) getPos [30, (180+windDir)];
    SS_leaves_p  = "#particlesource" createVehicleLocal _leaves_pos;
    SS_leaves_p setParticleParams [
    ["\A3\data_f\ParticleEffects\Hit_Leaves\Sticks", 1, 1, 1], "", "SpaceObject", 1, 10, [0,0,0], [_WindVectorX, _WindVectorY, 7], 2, 0.000001, 0.0, 0.4, [0.5 + random 0.8], [[0.68,0.68,0.68,1]], [1.5,1], 13, 13, "", "", (vehicle player), 0, true , 1, [[0,0,0,0]]];
    //setPartRand [lifeTime, position, moveVelocity, rotationVelocity, size, color, randomDirectionPeriod, randomDirectionIntensity, angle, bounceOnSurf]:
    SS_leaves_p setParticleRandom [0, [30, 30, 8], [1, 1, 2], 1.5, (0.1+random 0.2), [0, 0, 0, 0.5], 1, 1, 0, 1];
    SS_leaves_p setDropInterval SS_leaves_density;
};

if (_debug) then {hint "Start leaves"; sleep 1;};
[] spawn SS_leaves_Fnc;

// Chance of blowing soft hat off //
if (isnil "_hatCheck") then {_hatCheck = false};
if (_debug && _hatCheck) then {hint "Start hats off";};
if (_hatCheck) then {
    [player,_debug] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_\ROShatblowsoff.sqf";
};

sleep 1;

// Is player wearing eye protection? //
if (isnil "_eyewearCheck") then {_eyewearCheck = false};
if (_eyewearCheck) then {
    [_endtime,_hndlFg,_debug] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_\ROShurt.sqf";
};

sleep 1;

// Play random sounds when near houses
[_endtime, _debug] spawn {
    params ["_endtime", "_debug"];

    _townsounds = ["creak","door1","door2","gate1","metalroof1","metalroof2","shutter1","shutter2","shutter3","shutter4","shutter5"];

    While {(time <= _endtime) && (STAF_var_SandstormOn)} do {
        _building = nearestObject [vehicle player, "HouseBase"];
        if (count (_building buildingPos -1) ==0) then {
            _building = objNull;
        };
        _cursound = selectRandom _townsounds;
        if (!isnull _building && _building distance (vehicle player) < 20) then {
            playsound _cursound;
        };

        sleep 4 + random 4;
    };
};

// ~28 secs to this point - wind intro 32 secs - 4 sec overlap before main wind loop

// Start main Wind sound loop
[_endtime, _debug] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_\ROSwindloop.sqf";

sleep 4;

// Add color correction
if (_debug) then {hint "Start color correction"; sleep 1;};
_colcor1 = ppEffectCreate ["colorCorrections", 1550];
_colcor1 ppEffectEnable true;
// brightness, contrast, offset, [Blend rgb a=factor (0 orig col, 1 blend col)] [Coloriz rgb a=satur (0 orig col, 1 B&W x col)] [Desat weights r g b 0]
_colcor1 ppEffectAdjust [0.9 + (overcast/5), 1, 0, [0.25, 0.15, 0.12, 0.1+random 0.3], [0.75 + random 0.05, 0.65 + random 0.05, 0.5 + random 0.05, 0.4 + random 0.1], [0.65, 0.65, 0.65, 0]];
_colcor1 ppEffectCommit 10;

// Start FOG
[_debug] spawn {
    params ["_debug"];
    if (_debug) then {hint "Start Fog"; sleep 1;};
    _vertPos = (getposASL (vehicle player) select 2)+30;
    //if (isServer) then {[25, [0.20, 0.05, _vertPos]] remoteExec ["setfog"]};
    if (isServer) then {[40, 0.5] remoteExec ["setFog",0]};
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// INTRO PARTICLES //////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Dust devil
SS_dustdevil_Fnc = {
    params ["_endtime", "_debug"];

    if (!(isTouchingGround vehicle player) or (typeOf vehicle player iskindof "plane" or typeOf vehicle player iskindof "helicopter")) exitWith {};

    [_endtime, _debug] spawn {
        params ["_endtime", "_debug"];

        _counter = 0; counter = _counter;
        _lifetime = 3;
        _pos0 = [0,0,0];
        _pos1 = [0,0,0];

        //create dust devil
        if (_counter == 0) then {
            if (!isnull SS_dust_devil_part) then {deleteVehicle SS_dust_devil_part};
            sleep 4;
            _pos0 = [(vehicle player), 5, 50, 5, 0, 30, 0] call BIS_fnc_findSafePos;
            sleep 1;
            SS_dust_devil_part = "#particlesource" createVehicleLocal _pos0;
        };

        _sfac = 2+random 2;
        _size = [1, 1*_sfac, 2*_sfac];
        _rubbing = (random 0.3);
        _lifetime = _sfac;

        while {time <= (_endtime +50) && alive SS_dust_devil_part} do {
            _pos1 = SS_dust_devil_part getPos [0.5, (winddir + random 20)];
            _lifetime;
            SS_dust_devil_part setParticleCircle [0, [0, 0, 0]];
            SS_dust_devil_part setParticleRandom [ _lifetime,  [0.3, 0.3, 1],  [0.1, 0.1, 0], 0,  0.3,  [0, 0, 0, 0.2],  0,  0];
            SS_dust_devil_part setParticleParams [
            ["\A3\data_f\cl_basic",
            1,
            0,
            1],
            "",
            "Billboard",
            1,
            _lifetime,
            [0,0,0], // relpos
            [0, 0, 9], // vel
            500, // rotvel
            12, // weight
            7.9, // vol
            _rubbing,  // rubbing
            _size, // size
            [[0,0,0,0.2], [0.4,0.25,0.15,0.15], [0.5,0.5,0.5,0]], // col
            [0.08],
            1,
            0,
            "",
            "",
            _pos1];

            SS_dust_devil_part setDropInterval (0.005 - (random 0.001));

            SS_dust_devil_part setposatl _pos1;
            _counter = _counter + 0.1;

            // Kill dustdevil if near building
            _building = nearestObject [SS_dust_devil_part, "HouseBase"];
            if (0 boundingBoxReal _building select 2 > 3.5 && _building distance SS_dust_devil_part < (0 boundingBoxReal _building select 2)) then { _counter = 10};

            // Lift objects off the ground
            if (alive SS_dust_devil_part) then {
                _veh = nearestObject [SS_dust_devil_part, "car"];
                if (!isnull _veh && (0 boundingboxreal _veh select 2) <9 && _veh distance SS_dust_devil_part < 4.5) then {
                    _vvel = velocity _veh;
                    _veh setVelocity [_vvel select 0, _vvel select 1, 10];
                };
                _man = nearestObject [SS_dust_devil_part, "man"];
                if (!isnull _man && _man distance SS_dust_devil_part < 2) then {
                    _mvel = velocity _man;
                    _man setVelocity [_mvel select 0, _mvel select 1, 15];
                };
            };

            // Kill and recreate dustdevil
            if (_counter >= 10 && time < (_endtime +50)) then {
                deleteVehicle SS_dust_devil_part;
                _counter = 0;
                sleep 10 + random 5;
                _sfac = 3 + random 3;
                _size = [1, 1*_sfac, 2*_sfac];
                _rubbing = (random 0.3);
                _lifetime = _sfac;
                [_endtime, _debug] spawn SS_dustdevil_Fnc;
                if (_debug) then {hint "DustDevil spawned"};
            };

            // Kill dustdevil at end
            if (time > (_endtime +50)) exitWith {
                SS_dust_devil_part setDropInterval 0.01;
                sleep 5;
                SS_dust_devil_part setDropInterval 1;
                sleep 3;
                deleteVehicle SS_dust_devil_part;
            };
            sleep 0.25;
        }; // end while
    }; // end spawn
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// INTRO ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

if (_debug) then {hint "Start INTRO particles"; sleep 1;};
SS_dust_particles = "#particlesource" createVehicleLocal (getpos vehicle player);
SS_dust_particles attachto [vehicle player];
// Pcircle: Radius, velocity
SS_dust_particles setParticleCircle [30, [0, 0, 0]];
// lifeTime, pos, Vel, rotVel, size, color, randDirPeriod, randDirIntens, {angle}, bounceOnSurf
SS_dust_particles setParticleRandom [5, [0.25, 0.25, 0], [1, 1, 0], 1, 1, [0, 0, 0, 0.1], 0, 0.01];

// Add INTRO particle loop - 20 secs -> alpha 0.5
_future = time+20;
SS_P_alpha = 0;
while {(time < _future) && (STAF_var_SandstormOn)} do {
    _wx = wind select 0;
    _wy = wind select 1;
    _vel = [_wx/(1+random 1), _wy/(1+random 1), 0];
    _rvel = 1 + random 1;

    if (!alive SS_dust_particles) then {
        SS_dust_particles = "#particlesource" createVehicleLocal (getpos vehicle player);
        SS_dust_particles attachto [vehicle player];
        SS_dust_particles setParticleCircle [30, [0, 0, 0]];
        // lifeTime, pos, Vel, rotVel, size, color, randDirPeriod, randDirInten, angle, bounceOnSurf
        SS_dust_particles setParticleRandom [5, [0.25, 0.25, 0], [1, 1, 0], 1, 1, [0, 0, 0, 0.1], 0, 0.01];
    };
    SS_dust_particles setParticleParams
    [["a3\data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 8, 0],
    "", "Billboard",
    1, //timerPeriod
    10, // lifetime
    [0, 0, 0],
    _vel, // vel
    _rvel, //rotvel
    1.275, //weight
    1, //volume
    0.01, //rubbing
    [10, 15, 20], //size
    [[0.2, 0.15, 0.1, SS_P_alpha], [0.8, 0.7, 0.5, SS_P_alpha], [0.9, 0.9, 0.9, 0]], //col
    [1], //anim speed
    1, //randomDirectionPeriod
    0, //randomDirectionIntensity
    "",
    "",
    vehicle player]; //obj
    SS_dust_density = selectRandom [0.08,0.07,0.06,0.05,0.04,0.03];
    SS_dust_particles setDropInterval SS_dust_density;

    sleep 1;
    if (daytime > 19.5 or daytime < 4.5) then {
        // Night
        SS_P_alpha = SS_P_alpha + 0.01;
    } else {
        // Day
        SS_P_alpha = SS_P_alpha + 0.025;
    };
};

sleep 1;

// Adjust Fog during main loop and set visibility rating
SS_LowVis = false;
[_endtime, _debug] spawn {
    params ["_endtime", "_debug"];
    while {(time <= _endtime) && (STAF_var_SandstormOn)} do {
        _loopTime = 8;
        _fogLvl = fog;
        // Fog adjust
        if (isServer) then {
            if (_fogLvl > 0.9) then {
                _fogLvl = 0.4;
                [4, _fogLvl] remoteExec ["setFog"];
                sleep 4;
                SS_LowVis = false;
            } else {
                _fogLvl = _fogLvl + random 0.2;
                [4, _fogLvl] remoteExec ["setFog"];
            };
            // Adjust visibility - used for captive setting
            if (_fogLvl >0.6 && SS_P_alpha >0.6) then {SS_LowVis = true;};
        };
        if (_debug) then {hint format ["FOG %1", fog]};
        sleep _loopTime;
    };
};

// Lobotomize AI during main loop
_eSkill = 0;
_wSkill = 0;
_iskill = 0;
_eSkill = [];
_wSkill = [];
_iSkill = 0;
_eUnits = [];
_wUnits = [];
_iUnits = [];
_eUnits = (allunits select {side _x == EAST && _x distance player <500})-allPlayers;
_wUnits = (allunits select {side _x == WEST && _x distance player <500})-allPlayers;
_iUnits = (allunits select {side _x == resistance && _x distance player <500})-allPlayers;
{_eSkill pushBack (skill _x)} foreach _eUnits;
{_wSkill pushBack (skill _x)} foreach _wUnits;
{_iSkill pushBack (skill _x)} foreach _iUnits;
if (count _eUnits >0) then {_eSkill = _eSkill call Bis_fnc_arithmeticmean};
if (count _wUnits >0) then {_wSkill = _wSkill call Bis_fnc_arithmeticmean};
if (count _iUnits >0) then {_iSkill = _iSkill call Bis_fnc_arithmeticmean};
{_x setSkill 0} forEach (_wUnits + _eUnits + _iUnits);

// Spawn Dust devil
[_endtime, _debug] spawn SS_dustdevil_Fnc;
if (_debug) then {hint "DustDevil spawned"};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// MAIN PARTICLE CC LOOP ///////////////////////////////////////////////////////////////////////////////////////////////////////

// Modify Color correction and particles after intro
While {(time <= _endtime) && (STAF_var_SandstormOn)} do {
    // brightness, contrast, offset, [Blend rgb a=factor (0 orig col, 1 blend col)] [Coloriz rgb a=satur (0 orig col, 1 B&W x col)] [Desat weights r g b 0]
    _colcor1 ppEffectAdjust [0.9 + (overcast/10), 1, 0, [0.2, 0.15, 0.11, 0.2+random 0.2], [0.75 + random 0.05, 0.65 + random 0.05, 0.45 + random 0.05, 0.4 + random 0.3], [0.7, 0.7, 0.7, 0]];
    _colcor1 ppEffectCommit 2 + (floor random 2);

    _wx = wind select 0;
    _wy = wind select 1;
    _vel = [_wx/(1+random 1), _wy/(1+random 1), 0];
    _rvel = 1 + random 1;
    if (daytime > 19.5 or daytime < 4.5) then {
        // Night
        SS_P_alpha = selectRandom [0.4,0.3,0.2];
    } else {
        // Day
        SS_P_alpha = selectRandom [0.9,0.8,0.7,0.6];
    };

    if (!alive SS_dust_particles) then {
        SS_dust_particles = "#particlesource" createVehicleLocal (getpos vehicle player);
        SS_dust_particles attachto [vehicle player];
        SS_dust_particles setParticleCircle [40, [0, 0, 0]];
        // lifeTime, pos, Vel, rotVel, size, color, randDirPeriod, randDirInten, angle, bounceOnSurf
        SS_dust_particles setParticleRandom [1, [1, 1, 0], [1, 1, 0], 1.5, 1, [0, 0, 0, 0.1], 0, 0.01];
    };
    SS_dust_particles attachto [vehicle player];
    SS_dust_particles setParticleParams [["a3\data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 8, 0], "", "Billboard",
    1, //timerPeriod
    10, // lifetime
    [0, 0, 0],
    _vel, // vel
    _rvel, //rotvel
    1.275, //weight
    1, //volume
    0.01, //rubbing
    [10, 15, 20], //size
    [[0.2, 0.15, 0.1, SS_P_alpha], [0.8, 0.7, 0.45, SS_P_alpha], [0.82, 0.82, 0.82, 0]], //col
    [1], //anim speed
    1, //randomDirectionPeriod
    0, //randomDirectionIntensity
    "",
    "",
    vehicle player]; //obj
    SS_dust_density = selectRandom [0.07,0.06,0.05,0.04,0.03];
    SS_dust_particles setDropInterval SS_dust_density;

    _rndAdjust = random 1;
    // Delete particles if time > 20 secs from endtime
    if (_rndAdjust <0.15 && time < (_endtime-20)) then {
        deleteVehicle SS_dust_particles;
        if (_debug) then {hint "Particle deletion"};
    };

    // Stop enemy firing in low visibility - see fog vis loop above
    if (SS_LowVis) then {
        //if (_debug) then {hint "Captive"};
        {if !(captive _x && local _x) then {_x setCaptive true}} foreach units group player;
    } else {
        //if (_debug) then {hint "Not Captive"};
        {if (captive _x && local _x) then {_x setCaptive false}} foreach units group player;
    };
    sleep 1;
}; // end while

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// FADE OUT EFFECTS ~ 60 seconds ///////////////////////////////////////////////////////////////////////////////////////////////
if (_debug) then {hint "End Time - Fade out Sandstorm"; sleep 1;};

SS_fadeout = true;
_fadeEnd = time;
SS_leaves_density = 0.1;
SS_LowVis = false;

//{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (position (vehicle player) nearObjects 100);

// Reset captive state
[_debug] spawn {
    params ["_debug"];
    sleep 5;
    if (_debug) then {hint "Reset Captive state"};
    {if (local _x && captive _x) then {_x setCaptive false; sleep 0.5;}} foreach units group player;
};

// Remove Fog
if (_debug) then {hint "Remove fog"; sleep 1;};
if (isServer) then {[45, 0] remoteExec ["setFog"]};

// Fade color correction to normal
if (_debug) then {hint "Fade Color correction to normal"; sleep 1;};
// ppadj bright,contrast,offset,[col blend, col, col desat]
_colcor1 ppEffectAdjust [1, 1, 0,[ 0, 0, 0, 0],[ 1, 1, 1, 1],[ 0, 0, 0, 0]];
_colcor1 ppEffectCommit 80;

// Reduce wind
if (_debug) then {hint "Reduce wind"};
[_origwind] spawn {
    params ["_origwind"];
    _WindVectorX = wind select 0;
    _WindVectorY = wind select 1;
    _factor = 1;
    if (isServer) then {
        while {vectorMagnitude wind > vectorMagnitude _origwind} do {
            _factor = _factor + 0.2;
            setWind [(_WindVectorX/_factor), (_WindVectorY/_factor), true];
            sleep 0.6;
        };
    };
};

// Remove camshake
enableCamShake false;
resetCamShake;

sleep 12;

// Reset averaged skills per side
if (count _eUnits >0) then {{_x setskill _eSkill} foreach _eUnits};
if (count _wUnits >0) then {{_x setskill _wSkill} foreach _wUnits};
if (count _iUnits >0) then {{_x setskill _iSkill} foreach _iUnits};

sleep 40;

// Remove all particles
if (_debug) then {hint "Remove dust and leaf particles"};
{if (typeOf _x == "#particlesource") then {deleteVehicle _x}} forEach (position (vehicle player) nearObjects 100);

deleteVehicle SS_dust_particles;
deleteVehicle SS_dust_devil_part;
deletevehicle SS_leaves_p;

sleep 5;

// Switch on life
//if (_debug) then {hint "Environment on"};
//enableEnvironment [true, true];

// Fade film grain
if (_debug) then {hint "Remove film grain"};
_hndlFg ppEffectAdjust [0.005, 1.25, 2.01, 0.75, 1.0, 0];
_hndlFg ppEffectCommit 20;

sleep 20;

// Destroy film grain
_hndlFg ppEffectEnable false;
ppEffectDestroy _hndlFg;

// Remove color correction
//if (_debug) then {hint "Delete color correction"};
//_colcor1 ppEffectEnable false;
//ppEffectDestroy _colcor1;

// Reset sound volume
if (_debug) then {hint "Reset sound volume"};
5 fadeSound 1;

// Set wind to original wind setting
if (_debug) then {hint "Reset original wind direction and speed"};
if (isServer) then {5 setWindDir _origWindir};

sleep 5;

if (isServer) then {setWind [_origWindX, _origWindY, true]};

// Reset time multiplier to mission init settings
if (_debug) then {hint "Time multiplier reset"};
if (_orig_timemultiplier != 1) then {
    setTimeMultiplier _orig_timemultiplier;
};

ROS_SS_Running = false;
publicVariable "ROS_SS_Running";

STAF_var_SandstormOn = false;
publicVariable "STAF_var_SandstormOn";

SS_inBuilding = false;
SS_inVehicle = false;
SS_fadeout = false;
SS_doorclosed = "";
SS_nearestdoor = "";

if (_debug) then {hint format ["Sandstorm End - Fadeout time: %1", time - _fadeEnd]};

//// SS END ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////