params ["_player"];

_zeusassigned = _player getVariable ["STAF_var_promoZeusModule", objNull];
if (!isNull _zeusassigned) then 
{
    deleteVehicle _zeusassigned; (group _zeusassigned) deleteGroupWhenEmpty true; 
};  