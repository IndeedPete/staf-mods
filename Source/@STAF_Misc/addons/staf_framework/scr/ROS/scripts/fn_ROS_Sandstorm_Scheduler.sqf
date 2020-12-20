/*
Part of ROSSandstorm v3.6 by RickOShay
ROS_Sandstorm_Scheduler.sqf requires ROSsandstorm package v3.6 by RickOShay
You may use ROSsandstorm as long as this header text is not removed and all original files are kept in tact.
Full credit must be given in any mission or mod that uses this or any other associated script or asset dependency such as sound files etc.
------------------------------------------------------------------------------------------------------------------------------------------
DESCRIPTION:
This script randomly schedules sandstorms during an in-game 24 hour period - see ROSsandstorm for additional information.
------------------------------------------------------------------------------------------------------------------------------------------
FEATURES:
SandStorm random scheduler for Listen/Dedicated servers, variable storm density, fixed or random storm length, variable colour and wind strength, variable visibility, indoor outdoor & in vehicle sound attenuation, works well day and night, protective eyewear check and damage, script auto adjusts number of sandstorms based on available time to 24h00, allowance for existing mission time acceleration and wind settings, random prob of certain soft hats blowing off, storm warning weather report, limited fps impact, works in SP and MP.

Required number of sandstorms in 24 hours will be randomly placed ensuring endtime will not exceed 24h00 minus overhead.
Number of required storms maybe auto reduced based on the available time left from start to 24h00.
The script will auto restart with randomised settings at 24:00 if server not restarted.
------------------------------------------------------------------------------------------------------------------------------------------
USAGE:
Single storm at specified time: To run a single sandstorm at a specific time use ROSsandstorm.sqf - see script header for usage.

Random number of storms or random storm start time: Run the following line in the mission init.sqf file:
ie. [min number of storms, max number of storms, length of storm] execvm "ROS\ROS_Sandstorm_Scheduler.sqf";

NOTE:
Minimum length 150 secs. Recommended storm lengths are 150 + (55 x n) = (150,205,260,315,370,425,480,535 or 0 = random length)

Example 1: run 1 storm from current time to 24:00 with a length of 150 secs. ie. 100% chance of 1 storm occuring.
[1, 1, 150] execvm "ROS\scripts\ROS_Sandstorm_Scheduler.sqf";

Example 2: run from 0 to 1 storm from current time to 24:00 with length of 260 secs. ie. 50% chance of 0 storm or 50% 1 storm.
[0, 1, 260] execvm "ROS\scripts\ROS_Sandstorm_Scheduler.sqf";

Example 3: run from 0 to 4 storms from current time to 24:00 with random storm length (0) ie. 20% chance of 0,1,2,3,4 storms
[0, 4, 0] execvm "ROS\scripts\ROS_Sandstorm_Scheduler.sqf";
-----------------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
WEATHER REPORT:
Added a new addaction option for weather report to be placed on a laptop in game. Also useful for debugging.
NOTE: Weather report only works with the scheduler. Place the following in a laptop init field:

this addAction["<t color='#3399ff'>WEATHER REPORT</t>", {hint WeatherReport},[], 1, true, false,"","SSchedulerRunning && _this distance _target < 4"];

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
// For testing change next line to _debug = true; to hint num of storms and when storms will happen etc.
_debug = true;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/
// Select Wind direction ///////////////////////////////////////////////////////////////////////////////////////
// Options are: "Current" or "Rand" or "X" value in compass range 0-360 in line below:
// ie: _SelectedWindDir = "Current"; _SelectedWindDir = "Rand"; _SelectedWindDir = "180";
_SelectedWindDir = "Current";
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Change the following to true if you want eyewear check and or random chance of certain hats blowing off
_eyewearCheck = false;
_hatCheck = false;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*===================================== DON'T CHANGE LINES BELOW ======================================================================*/
if !(isServer) exitWith {};

SSchedulerRunning = true;
publicVariable "SSchedulerRunning";

if (isnil "SStormRunning") then {SStormRunning = false};

_minNumOfSandstorms = _this select 0;
_maxNumOfSandstorms = _this select 1;
_stormLength = _this select 2;

_spacing = 0;
SstormWarn = "";
_curStartTime = 0;
WeatherReport = "";
NumOfSandstorms = 0;
_stormStartTimes = [];
_SelectedLengths = [];
NumSandstormsLeft = 0;
_nextStormTimeDiff = 0;
_hrsLeftInDay = 24 - daytime;

WethDesc = "Sunny and clear.";
AmbTemp = "Temperature: Min 30 degrees Max 42 degrees.";

// How many storms to run
if (_minNumOfSandstorms == _maxNumOfSandstorms) then {
	NumOfSandstorms = _maxNumOfSandstorms;
} else {
	NumOfSandstorms =  round (random _maxNumOfSandstorms);
	if (NumOfSandstorms < _minNumOfSandstorms) then {NumOfSandstorms = _minNumOfSandstorms};
};

_stormInHrs = (1200 / 3600); // add 20 mins overhead to prevent sandstorm spanning the 24h00-00h00 period
_timeLeft = (_hrsLeftInDay - _stormInHrs);

// Minimum time per sandstorm is 1 sandstorm per 2 hours
if (_timeLeft < (2 * NumOfSandstorms)) then {NumOfSandstorms = round (_timeLeft/2)};
if (NumOfSandstorms == 1) then {_spacing =  random (_hrsLeftInDay - _stormInHrs)};
if (NumOfSandstorms >= 2) then {_spacing = ((_hrsLeftInDay - _stormInHrs) / NumOfSandstorms) * (0.6 + random 0.35)};

for "_i" from 1 to NumOfSandstorms do {
	_stormStartTimes pushback (parseNumber (dayTime + (_spacing * _i) tofixed 4));
};

sleep 1;

// Debug info
if (NumOfSandstorms > 0) then {
	_nextStormTimeDiff = ((_stormStartTimes select 0) - daytime) toFixed 3;
} else {
	_nextStormTimeDiff = 0;
};
if (_debug) then {Hint format ["There are %1 sandstorms\nstarting at these times:\n%2\nNext storm in: %3", NumOfSandstorms, _stormStartTimes, _nextStormTimeDiff]};

copyToClipboard _nextStormTimeDiff;
sleep 1;
if (_debug) then {hint "Next storm time difference copied to clipboard\nPaste into skiptime in debug console"};

sleep 1;

NumSandstormsLeft = NumOfSandstorms;

While {daytime <=24} do {
	_dt = parseNumber (daytime tofixed 4);

	// Roll over 24:00 - restart scheduler and randomize storm number and length
	if (daytime >= 23.9) exitWith {
		waitUntil {daytime <0.1};
		if (_debug) then {hint "New day new sandstorm schedule"};
		SstormRunning = false;
		publicVariable "SStormRunning";
		sleep 0.01;
		[_minNumOfSandstorms, _maxNumOfSandstorms, _stormLength] execvm "ROS\scripts\ROS_Sandstorm_Scheduler.sqf";
	};

	for "_i" from 0 to (NumOfSandstorms-1) do {
		_curStartTime = _stormStartTimes select _i;
		if (_dt >= _curStartTime && _dt < (_curStartTime + 0.01) && !SstormRunning) then {
			// Is length specified or random
			_stormLengths = [150,205,260,315,370,425,480];
			if (_stormLength == 0) then {
				_stormLength = selectRandom _stormLengths;
				if (_debug) then {hint format ["Storm length:%1",_stormLength]; sleep 4;};
			};

			NumSandstormsLeft = NumSandstormsLeft -1;

			[[_stormLength,_eyewearCheck,_hatCheck,_SelectedWindDir,_debug],"ROS\scripts\ROSsandstorm.sqf"] remoteexec ["BIS_fnc_execVM"];
		};
	}; // end for

	// Update weather report
	if (overcast <=0.3) then {WethDesc = "Clear skies";AmbTemp = "Temperature: Very hot\nMinimum 30 degrees\nMaximum 41 degrees"};
	if (overcast >0.3 && overcast <= 0.5) then {WethDesc = "Partly cloudy";AmbTemp = "Temperature: Hot\nMinimum 27 degrees\nMaximum 36 degrees"};
	if (overcast >0.5 && overcast <= 0.7) then {WethDesc = "Cloudy with 40% chance of rain";AmbTemp = "Temperature: Warm\nMinimum 24 degrees\nMaximum 31 degrees"};
	if (overcast >0.7 && overcast <=0.9) then {WethDesc = "Cloudy with 70% chance of rain";AmbTemp = "Temperature: Mild\nMinimum 22 degrees\nMaximum 27 degrees"};
	if (overcast >0.9) then {WethDesc = "100% cloud cover with 90% chance of rain";AmbTemp = "Temperature: Cool\nMinimum 15 degrees\nMaximum 25 degrees"};

	WindSpd = (sqrt (((wind select 0) ^ 2) + ((wind select 1) ^ 2)) * 3.6) tofixed 1 ;

	if (NumSandstormsLeft <= 0) then {
	Sstorm = "No sandstorm activity predicted\nfor the period " + (daytime tofixed 2) +" - 24.00 CET.";};
	if (NumSandstormsLeft == 1) then {
		Sstorm = "There is 1 sandstorm predicted\nfor the period " + (daytime tofixed 2) +" - 24.00 CET.";};
	if (NumSandstormsLeft > 1) then {
		Sstorm = "There are " + str NumSandstormsLeft + " sandstorms predicted\nfor the period " + (daytime tofixed 2) +" - 24.00 CET.";};
	if (SstormRunning) then {SstormWarn = "\n\n*** WARNING ***\nSandstorm imminent!\nFind cover!";} else {SstormWarn = "";};

	WeatherReport = format ["WEATHER REPORT\nfor the %1 operational area:\n\n%2\n%3\nWind Direction: %4 deg.\nWind Speed: %5 kph%7\n\n%6", worldName, WethDesc, AmbTemp, (windDir toFixed 0), WindSpd, Sstorm, SstormWarn];
	publicVariable "WeatherReport";

	sleep 0.1;
}; // end while


