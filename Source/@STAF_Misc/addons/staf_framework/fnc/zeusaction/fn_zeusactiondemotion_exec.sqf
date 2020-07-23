params ["_player"];

_zeusassigned = _player getVariable ["STAF_var_promoZeusModule", objNull];
    if (!isNull _zeusassigned) then {(group _zeusassigned) deleteGroupWhenEmpty true; deleteVehicle _zeusassigned};  