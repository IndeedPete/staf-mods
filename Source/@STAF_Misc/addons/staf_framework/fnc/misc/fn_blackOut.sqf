if (isNil "BIS_fnc_blackIn_fading") then {BIS_fnc_blackIn_fading = false};
if (isNil "BIS_fnc_blackIn_completed") then {BIS_fnc_blackIn_completed = false};
if (isNil "BIS_fnc_blackOut_fading") then {BIS_fnc_blackOut_fading = false};
if (isNil "BIS_fnc_blackOut_completed") then {BIS_fnc_blackOut_completed = false};

if (missionNamespace getVariable ["BIS_fnc_blackOut_disabled",false]) exitWith
{
	BIS_fnc_blackOut_fading = true;
	BIS_fnc_blackOut_completed = true;
	BIS_fnc_blackOut_ids = [];
};

private ["_id","_smooth","_fadeSpeed","_sound","_rsc"];

_id        = [_this,0,"",[""]] call bis_fnc_param;
_smooth    = [_this,1,true,[true]] call bis_fnc_param;
_fadeSpeed = [_this,2,2,[123]] call bis_fnc_param;
_sound     = [_this,3,false,[true]] call bis_fnc_param;

_id        = toLower _id;
_rsc       = "BIS_fnc_blackOut" call BIS_fnc_rscLayer;

if (isNil "BIS_fnc_blackOut_ids") then
{
	BIS_fnc_blackOut_ids = [];
};

if (_id in BIS_fnc_blackOut_ids) exitWith
{
	["[BlackScreen][%1]: '%2' is already active.",round time,_id] call bis_fnc_error;
};

//store the id to to pool of ids
BIS_fnc_blackOut_ids set [count BIS_fnc_blackOut_ids,_id];

//do the fade out
[_id,_smooth,_fadeSpeed,_rsc,_sound] spawn
{
	//surpress the debuglog output
	private["_fnc_log_disable"];_fnc_log_disable = true;

	private["_id","_smooth","_fadeSpeed","_rsc","_sound"];

	_id 	   = _this select 0;
	_smooth    = _this select 1;
	_fadeSpeed = _this select 2;
	_rsc	   = _this select 3;
	_sound	   = _this select 4;

	if (count BIS_fnc_blackOut_ids == 1) then
	{
		if !(_smooth) then
		{
			_rsc cutText ["","BLACK FADED",10e10];

			//fade sound volume to 0%
			if ((soundVolume > 0) && !_sound) then
			{
				0 fadeSound 0;
			};
			if (missionNamespace getVariable ["IP_EnableEnvironment", true]) then {enableEnvironment false};

			BIS_fnc_blackOut_fading = false;
			BIS_fnc_blackOut_completed = true;
			BIS_fnc_blackIn_fading = false;
			BIS_fnc_blackIn_completed = false;

			["[BlackScreen][%1]: '%2' instantly shown!",round time,_id] call bis_fnc_logFormat;
		}
		else
		{
			["[BlackScreen][%1]: '%2' is starting...",round time,_id] call bis_fnc_logFormat;

			_rsc cutText ["","BLACK OUT",_fadeSpeed];

			if ((soundVolume > 0)  && !_sound) then
			{
				_fadeSpeed fadeSound 0;
			};

			BIS_fnc_blackOut_fading = true;
			BIS_fnc_blackOut_completed = false;
			BIS_fnc_blackIn_fading = false;
			BIS_fnc_blackIn_completed = false;

			sleep _fadeSpeed;

			if (missionNamespace getVariable ["IP_EnableEnvironment", true]) then {enableEnvironment false};
			enableRadio false;
			enableSentences false;

			if (BIS_fnc_blackOut_fading) then
			{
				BIS_fnc_blackOut_fading = false;
				BIS_fnc_blackOut_completed = true;
				BIS_fnc_blackIn_fading = false;
				BIS_fnc_blackIn_completed = false;
			};

			["[BlackScreen][%1]: '%2' is fully shown.",round time,_id] call bis_fnc_logFormat;
		};
	}
	else
	{
		["[BlackScreen][%1]: '%2' registered!",round time,_id] call bis_fnc_logFormat;
	};
};