params ["_string","_replace","_replaceWith"]; 


private _pos = (_string find _replace); 

if (_pos isEqualTo -1) exitWith { 
	_string; 
}; 

if (_pos isEqualTo 0) exitWith { 
	[_replaceWith,((_string splitString _replace) joinString _replaceWith)] joinString ""; 
};

(_string splitString _replace) joinString _replaceWith;