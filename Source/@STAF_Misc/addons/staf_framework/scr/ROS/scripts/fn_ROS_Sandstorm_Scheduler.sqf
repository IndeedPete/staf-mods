/*
ROS_Sandstorm_Scheduler.sqf v4.5 requires ROS_Sandstorm package by RickOShay

LEGAL STUFF AND USAGE
You may use ROS_Sandstorm as long as this header text is not removed and all original files are kept intact and NOT EDITED and the folder
structure is retained. Full credit must be given in any mission or mod that uses this or any other associated script or asset dependency.
If you wish to modify this script the original scripts must be archived in your mission folder and you must state this and any other
script has been redacted (edited) at the top of the script file and full credit must be given in all derivative work.
------------------------------------------------------------------------------------------------------------------------------------------
DESCRIPTION:
This script randomly schedules sandstorms during an in-game 24 hour period (game time)
------------------------------------------------------------------------------------------------------------------------------------------
FEATURES:
Sandstorm random scheduler for Listen/Dedicated servers, variable storm density, fixed or random storm length, variable colour and wind
strength, variable visibility, indoor outdoor & in vehicle sound attenuation, wind affects small and medium sized objects - works well
day and night, protective eyewear check and damage, script auto adjusts number of sandstorms based on available time to 24h00, allowance
for existing mission time acceleration and wind settings, random prob of certain hats blowing off, storm warning weather report, limited
fps impact, works in SP and MP.

Required number of sandstorms in 24 hours will be randomly placed ensuring endtime will not exceed 24h00 minus overhead. Number of required
storms maybe auto reduced based on the available time left from start to 24h00. The script will auto restart with existing settings at 24:00
if server not restarted at midnight.

INSTALLATION AND MISSION SETTINGS:
1) Copy the ROS_sandstorm folder from the zip file into your mission folder.
2) Add the sound classes from the supplied example description.ext to your mission description.ext.
3) Check your missions weather settings - sandstorms don't appear if it's raining or there is a high probability of rain.
You need to disable rain or set overcast to a maximum of 49% in the Eden editor to guarantee that the sandstorm will appear.

TO RUN A SANDSTORM AT A SPECIFIED TIME
----------------------------------------
Use ROS_sandstorm.sqf (not the random scheduler - this file) - see ROS_Sandstorm script header for usage.

FOR 1 OR MORE SANDSTORMS AT RANDOM TIMES
----------------------------------------
Random number of storms or random storm start time: Run the following line in the mission init.sqf file where:
ie. [min number of storms, max number of storms, length of storm] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_ROS_Sandstorm_Scheduler.sqf";

NOTE:
Minimum length 150 secs. Recommended storm lengths are 150 + (55 x n) = (150,205,260,315,370,425,480,535,590,645 etc or 0 = random length)

Example 1: run 1 storm from current time to 24:00 with a length of 150 secs. ie. 100% chance of 1 storm occuring.
[1, 1, 150] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_ROS_Sandstorm_Scheduler.sqf";

Example 2: run from 0 to 1 storm between current game time to 24:00 with length of 260 secs. ie. 50% chance of no storm or 50% of 1 storm.
[0, 1, 260] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_ROS_Sandstorm_Scheduler.sqf";

Example 3: run from 0 to 4 storms from current time to 24:00 with random storm length (0) ie. 20% chance of 0,1,2,3,4 storms
[0, 4, 0] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_ROS_Sandstorm_Scheduler.sqf";
-----------------------------------------------------------------------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
WEATHER REPORT:
Place this on a laptop in game. Also useful for debugging.
NOTE: Weather report only works with the ROS Sandstorm Scheduler.
Place the following in a laptop init field:

this addAction["<t color='#3399ff'>WEATHER REPORT</t>", {hint WeatherReport},[], 1, true, false,"","WeatherReport != '' && _this distance _target < 4"];

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*
/* NB !! WIND DIRECTION AND MISSION WEATHER SETTINGS:
Check your missions weather settings.
In the Eden editor - mission wind must be set to >0 strength and wind manual override must be off.
Sandstorms don't appear if it is raining or there is a high prob of rain.
You also need to either disable rain or set overcast to a maximum of 49%
Also set Fog to a value > 0.

This will guarantee that sandstorms will run at the specified or scheduled time.
Failing to seet the above weather settings in your mission may result in the sandstorm not running at the specified time.

By default the wind direction will be randomised if the value below is 0. If you want a specific wind direction then you can specify it here.
Direction values are in compass range 1-360 in line below: ie: _SelectedWindDir = 160;
*/

_SelectedWindDir = 0; // 0 == random dir

/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
EYEWEAR and HATCHECK
Change the following to true if you want eyewear check and eye damage and or random chance of certain light weight hats blowing off*/

_eyewearCheck = false;
_hatCheck = false;

/*////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
For testing change the next line to _debug = true; to hint storm start times, storm events etc. The first skiptime is shown in the hint
and auto copied to the clipboard so you can immediately paste it into debug console: i.e. skiptime 'Ctrl v - paste' followed by Local exec.*/

_debug = false; // change to false to switch debug hints off.

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////// DON'T CHANGE LINES BELOW //////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

params ["_minNumOfSandstorms", "_maxNumOfSandstorms", "_stormLength"];

if !(isServer) exitWith {};

// wait for x secs from mission start before starting the scheduler
waitUntil {time > 15};

ROS_SS_schedulerRunning = true;
publicVariable "ROS_SS_schedulerRunning";

if (isnil "ROS_SS_Running") then {ROS_SS_Running = false};

_spacing = 0;
_SstormWarn = "";
_curStartTime = 0;
_numOfSandstorms = 0;
_stormStartTimes = [];
_numSandstormsLeft = 0;
_nextStormTimeDiff = 0;
_SelectedLengths = [];
_hrsLeftInDay = 24 - daytime;
_WethDesc = "Sunny and clear.";
_AmbTemp = "Temperature: Min 30 degrees Max 42 degrees.";
WeatherReport = "";

if (isnil "_SelectedWindDir" or _SelectedWindDir == 0) then {_SelectedWindDir = 1 + (random 359)};

// How many storms to run
if (_minNumOfSandstorms == _maxNumOfSandstorms) then {
	_numOfSandstorms = _maxNumOfSandstorms;
} else {
	_numOfSandstorms =  round (random _maxNumOfSandstorms);
	if (_numOfSandstorms < _minNumOfSandstorms) then {_numOfSandstorms = _minNumOfSandstorms};
};

_stormInHrs = (1200 / 3600); // add 20 min overhead to prevent sandstorm spanning the 24h00-00h00 period
_timeLeft = (_hrsLeftInDay - _stormInHrs);

// Minimum interval time per sandstorm
if (_timeLeft < (2 * _numOfSandstorms)) then {_numOfSandstorms = round (_timeLeft/2)};
if (_numOfSandstorms == 1) then {_spacing =  random (_hrsLeftInDay - _stormInHrs)};
if (_numOfSandstorms >= 2) then {_spacing = ((_hrsLeftInDay - _stormInHrs) / _numOfSandstorms) * (0.6 + random 0.35)};

for "_i" from 1 to _numOfSandstorms do {
	_stormStartTimes pushback (parseNumber (dayTime + (_spacing * _i) tofixed 4));
};

sleep 1;

// Debug info
if (_numOfSandstorms > 0) then {
	_nextStormTimeDiff = ((_stormStartTimes select 0) - daytime) toFixed 3;
} else {
	_nextStormTimeDiff = 0;
};

if (_debug) then {
	[format ["There are %1 sandstorms\nstarting at these times:\n%2\nNext storm in: %3\n\nSkiptime copied to clipboard.", _numOfSandstorms, _stormStartTimes, _nextStormTimeDiff]] remoteExec ["hint"];
	//copyToClipboard _nextStormTimeDiff;
};

copyToClipboard _nextStormTimeDiff;

sleep 1;

_numSandstormsLeft = _numOfSandstorms;

While {daytime <=24 && ROS_SS_schedulerRunning} do {
	_dt = parseNumber (daytime tofixed 4);

	// Roll over 24:00 - restart scheduler and randomize storm number and length
	if (daytime >= 23.9) exitWith {
		waitUntil {daytime <0.1};
		if (_debug) then {hint "New day -> new sandstorm schedule"};
		ROS_SS_Running = false;
		publicVariable "ROS_SS_Running";
		sleep 0.01;
		[_minNumOfSandstorms, _maxNumOfSandstorms, _stormLength] execvm "\STAF_FRAMEWORK\scr\ROS\scripts\fn_ROS_Sandstorm_Scheduler.sqf";
	};

	for "_i" from 0 to (_numOfSandstorms-1) do {
		_curStartTime = _stormStartTimes select _i;
		if (_dt >= _curStartTime && _dt < (_curStartTime + 0.01) && !ROS_SS_Running) then {
			// Is length specified or random
			_stormLengths = [150,205,260,315,370,425,480,480,535,590,645];
			if (_stormLength == 0) then {
				_stormLength = selectRandom _stormLengths;
				if (_debug) then {hint format ["Storm length:%1",_stormLength]; sleep 4;};
			};

			_numSandstormsLeft = _numSandstormsLeft -1;

			[[_stormLength, _eyewearCheck, _hatCheck, _SelectedWindDir, _debug],"\STAF_FRAMEWORK\scr\ROS\scripts\fn_ROS_Sandstorm.sqf"] remoteexec ["BIS_fnc_execVM"];
		};
	}; // end for

	// Update weather report
	if (overcast <=0.3) then {_WethDesc = "Clear skies";_AmbTemp = "Temperature: Very hot\nMinimum 30 degrees\nMaximum 41 degrees"};
	if (overcast >0.3 && overcast <= 0.5) then {_WethDesc = "Partly cloudy";_AmbTemp = "Temperature: Hot\nMinimum 27 degrees\nMaximum 36 degrees"};
	if (overcast >0.5 && overcast <= 0.7) then {_WethDesc = "Cloudy with 50% chance of rain";_AmbTemp = "Temperature: Warm\nMinimum 24 degrees\nMaximum 31 degrees"};
	if (overcast >0.7 && overcast <=0.9) then {_WethDesc = "Cloudy with 70% chance of rain";_AmbTemp = "Temperature: Mild\nMinimum 22 degrees\nMaximum 27 degrees"};
	if (overcast >0.9) then {_WethDesc = "100% cloud cover with 90% chance of rain";_AmbTemp = "Temperature: Cool\nMinimum 15 degrees\nMaximum 25 degrees"};

	WindSpd = (sqrt (((wind select 0) ^ 2) + ((wind select 1) ^ 2)) * 3.6) tofixed 1 ;

	if (_numSandstormsLeft <= 0) then {
	Sstorm = "No sandstorm activity predicted\nfor the period " + (daytime tofixed 2) +" - 24.00 CET.";};
	if (_numSandstormsLeft == 1) then {
		Sstorm = "There is 1 sandstorm predicted\nfor the period " + (daytime tofixed 2) +" - 24.00 CET.";};
	if (_numSandstormsLeft > 1) then {
		Sstorm = "There are " + str _numSandstormsLeft + " sandstorms predicted\nfor the period " + (daytime tofixed 2) +" - 24.00 CET.";};
	if (ROS_SS_Running) then {_SstormWarn = "\n\n*** WARNING ***\nSandstorm imminent!\nFind cover!";} else {_SstormWarn = "";};

	WeatherReport = format ["WEATHER REPORT\nfor the %1 operational area:\n\n%2\n%3\nWind Direction: %4 deg.\nWind Speed: %5 kph%7\n\n%6", worldName, _WethDesc, _AmbTemp, (windDir toFixed 0), WindSpd, Sstorm, _SstormWarn];
	publicVariable "WeatherReport";

	sleep 1;
}; // end while


