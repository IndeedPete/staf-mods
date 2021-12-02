params [
  ["_logic", ObjNull,[ObjNull]],
	["_vehicle", [], [[]]],
  ["_activated",true ,[true]]
];

_condition = _logic getVariable ["STAF_Module_Animation","None"];
_noweapon = ["Hostage_Sitting_1","Hostage_Sitting_2","Hostage_Sitting_3","Hostage_Sitting_4","Hostage_Sitting_5","Hostage_Sitting_6","Hostage_Kneeling","Idle_Standing_1","Idle_Standing_2","Idle_Standing_3","Idle_Standing_4","Idle_Crossed_Arms_5","Repairing_Wheel","Talking_1","Talking_2","Talking_Radio","Listen_Radio","Speech","Sit_Shocked_1","Sit_Shocked_2","Kneel_Afraid_1","Kneel_Afraid_2","Injured_Bed_1","Injured_Bed_2","Injured_Bed_3","Dead_Captured"];
_weaponornot = ["Injured_lyingarm_1","Injured_lyingchest_2","Injured_lyinghead_3","Injured_lyingleg_4","Injured_lying_5","Dead_Chair","Medic_CPR","Medic_Injection","Medic_Bandage","Medic_Pouder","Medic_Stitching"];
_weapon = ["Idle_Standing_Weapon_1","Idle_Standing_Weapon_2","Idle_Standing_Weapon_3","Typing_Combat_Bowed","Typing_Combat_Kneeling","Injured_Weapon_Arm","Injured_Weapon_Chest","Injured_Weapon_Head","Injured_Weapon_Leg","Injured_Weapon_Angry","Injured_Weapon_Coughing","Injured_Weapon_1","Injured_Weapon_2","Injured_Weapon_3","Injured_Weapon_4","Injured_Weapon_5","Injured_Weapon_6","Injured_Weapon_7","Injured_Weapon_7_180","Injured_Weapon_8","Injured_Pistol_1","Injured_Pistol_2"];

if (_condition in _noweapon) then {
  if (_condition isEqualTo "Hostage_Sitting_1") then{
    {
      [_x, "Acts_AidlPsitMstpSsurWnonDnon01"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];
    } forEach _vehicle;
  };
  if (_condition isEqualTo "Hostage_Sitting_2") then{
    {
      [_x, "Acts_AidlPsitMstpSsurWnonDnon02"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Hostage_Sitting_3") then{
    {
      [_x, "Acts_AidlPsitMstpSsurWnonDnon03"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Hostage_Sitting_4") then{
    {
      [_x, "Acts_AidlPsitMstpSsurWnonDnon04"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Hostage_Sitting_5") then{
    {
      [_x, "Acts_AidlPsitMstpSsurWnonDnon05"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Hostage_Kneeling") then{
    {
      [_x, "Acts_ExecutionVictim_Loop"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];
    } forEach _vehicle;
  };
  if (_condition isEqualTo "Idle_Standing_1") then{
    {
      [_x, "Acts_CivilIdle_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Idle_Standing_2") then{
    {
      [_x, "Acts_CivilIdle_2"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];
      removeallweapons _x;
      clearMagazineCargo _x;
    } forEach _vehicle;
  };
  if (_condition isEqualTo "Idle_Standing_3") then{
    {
      [_x, "Acts_CivilListening_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Idle_Standing_4") then{
    {
      [_x, "Acts_CivilListening_2"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Idle_Crossed_Arms_5") then{
    {
      [_x, "Acts_EpicSplit_in"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Talking_1") then{
    {
      [_x, "Acts_CivilTalking_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Talking_2") then{
    {
      [_x, "Acts_CivilTalking_2"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];
      removeallweapons _x;
      clearMagazineCargo _x;

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Talking_Radio") then{
    {
      [_x, "Acts_Kore_TalkingOverRadio_loop"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];
      removeallweapons _x;
      clearMagazineCargo _x;
    } forEach _vehicle;
  };
  if (_condition isEqualTo "Listen_Radio") then{
    {
      [_x, "Acts_listeningToRadio_Loop"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Speech") then{
    {
      [_x, "Acts_StandingSpeakingUnarmed"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Sit_Shocked_1") then{
    {
      [_x, "Acts_CivilShocked_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Sit_Shocked_2") then{
    {
      [_x, "Acts_CivilShocked_2"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Kneel_Afraid_1") then{
    {
      [_x, "Acts_CivilHiding_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Kneel_Afraid_2") then{
    {
      [_x, "Acts_CivilHiding_2"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Bed_1") then{
    {
      [_x, "Acts_LyingWounded_loop1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Bed_2") then{
    {
      [_x, "Acts_LyingWounded_loop2"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Bed_3") then{
    {
      [_x, "Acts_LyingWounded_loop3"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Dead_Captured") then{
    {
      [_x, "Acts_ExecutionVictim_KillTerminal"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];
      [_x, false] remoteExec ["enableSimulation", 0];

    } forEach _vehicle;
  };
};
if (_condition in _weaponornot) then {
  if (_condition isEqualTo "Injured_lyingarm_1") then{
    {
      [_x, "Acts_CivilInjuredArms_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_lyingchest_2") then{
    {
      [_x, "Acts_CivilInjuredChest_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_lyinghead_3") then{
    {
      [_x, "Acts_CivilInjuredHead_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_lyingleg_4") then{
    {
      [_x, "Acts_CivilInjuredLegs_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_lying_5") then{
    {
      [_x, "Acts_CivilInjuredGeneral_1"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Dead_Chair") then{
    {
      [_x, "Acts_Onchair_Dead"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];
      [_x, false] remoteExec ["enableSimulation", 0];

    } forEach _vehicle;
  };
};
if (_condition in _weapon) then {
  if (_condition isEqualTo "Idle_Standing_Weapon_1") then{
    {
      [_x, "Acts_millerCamp_A"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Idle_Standing_Weapon_2") then{
    {
      [_x, "Acts_millerCamp_C"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Idle_Standing_Weapon_3") then{
    {
      [_x, "acts_millerIdle"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Typing_Combat_Bowed") then{
    {
      [_x, "acts_millerDisarming_deskLoop"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Typing_Combat_Kneeling") then{
    {
      [_x, "acts_millerDisarming_deskCrouch_loop"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_Angry") then{
    {
      [_x, "Acts_InjuredAngryRifle01"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_Coughing") then{
    {
      [_x, "Acts_InjuredCoughRifle02"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_1") then{
    {
      [_x, "Acts_InjuredLookingRifle01"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_2") then{
    {
      [_x, "Acts_InjuredLookingRifle02"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_3") then{
    {
      [_x, "Acts_InjuredLookingRifle03"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_4") then{
    {
      [_x, "Acts_InjuredLookingRifle04"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_5") then{
    {
      [_x, "Acts_InjuredLookingRifle05"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_6") then{
    {
      [_x, "Acts_InjuredLyingRifle01"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_7") then{
    {
      [_x, "Acts_InjuredLyingRifle02"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_7_180") then{
    {
      [_x, "Acts_InjuredLyingRifle02_180"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Weapon_8") then{
    {
      [_x, "Acts_InjuredSpeakingRifle01"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Pistol_1") then{
    {
      [_x, "Acts_SittingWounded_breath"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
  if (_condition isEqualTo "Injured_Pistol_2") then{
    {
      [_x, "Acts_SittingWounded_loop"] remoteExec ["switchMove", 0, true];
      [_x, "ALL"] remoteExec ["disableAI", 0];
      [_x, "CARELESS"] remoteExec ["setBehaviour", 0];
      [_x, false] remoteExec ["allowdamage", 0];

    } forEach _vehicle;
  };
};
