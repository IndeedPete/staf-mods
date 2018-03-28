params [
  ["_logic", ObjNull,[ObjNull]],
	["_vehicle", [], [[]]],
  ["_activated",true ,[true]]
];

_condition = _logic getVariable ["STAF_Module_Animation","None"];
_noweapon = ["Hostage_Sitting_1","Hostage_Sitting_2","Hostage_Sitting_3","Hostage_Sitting_4","Hostage_Sitting_5","Hostage_Sitting_6","Hostage_Kneeling","Idle_Standing_1","Idle_Standing_2","Idle_Standing_3","Idle_Standing_4","Idle_Crossed_Arms_5","Repairing_Wheel","Talking_1","Talking_2","Talking_Radio","Listen_Radio","Speech","Sit_Shocked_1","Sit_Shocked_2","Kneel_Afraid_1","Kneel_Afraid_2","Injured_Bed_1","Injured_Bed_2","Injured_Bed_3","Dead_Captured"];
_weaponornot = ["Injured_lyingarm_1","Injured_lyingchest_2","Injured_lyinghead_3","Injured_lyingleg_4","Injured_lying_5","Dead_Chair","Medic_CPR","Medic_Injection","Medic_Bandage","Medic_Pouder","Medic_Stitching"];
_weapon = ["Idle_Standing_Weapon_1","Idle_Standing_Weapon_2","Idle_Standing_Weapon_3","Typing_Combat_Bowed","Typing_Combat_Kneeling","Injured_Weapon_Arm","Injured_Weapon_Chest","Injured_Weapon_Head","Injured_Weapon_Leg","Injured_Weapon_Angry","Injured_Weapon_Coughing","Injured_Weapon_1","Injured_Weapon_2","Injured_Weapon_3","Injured_Weapon_4","Injured_Weapon_5","Injured_Weapon_6","Injured_Weapon_7","Injured_Weapon_7_180","Injured_Weapon_8","Injured_Pistol_1","Injured_Pistol_2"];

if (isServer) then {
  if (_condition in _noweapon) then {
    if (_condition isEqualTo "Hostage_Sitting_1") then{
      {
        _x switchMove "Acts_AidlPsitMstpSsurWnonDnon01";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Hostage_Sitting_2") then{
      {
        _x switchMove "Acts_AidlPsitMstpSsurWnonDnon02";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Hostage_Sitting_3") then{
      {
        _x switchMove "Acts_AidlPsitMstpSsurWnonDnon03";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Hostage_Sitting_4") then{
      {
        _x switchMove "Acts_AidlPsitMstpSsurWnonDnon04";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Hostage_Sitting_5") then{
      {
        _x switchMove "Acts_AidlPsitMstpSsurWnonDnon05";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Hostage_Kneeling") then{
      {
        _x switchMove "Acts_ExecutionVictim_Loop";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Idle_Standing_1") then{
      {
        _x switchMove "Acts_CivilIdle_1";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Idle_Standing_2") then{
      {
        _x switchMove "Acts_CivilIdle_2";
        removeallweapons _x;
        clearMagazineCargo _x;
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Idle_Standing_3") then{
      {
        _x switchMove "Acts_CivilListening_1";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Idle_Standing_4") then{
      {
        _x switchMove "Acts_CivilListening_2";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Idle_Crossed_Arms_5") then{
      {
        _x switchMove "Acts_EpicSplit_in";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Talking_1") then{
      {
        _x switchMove "Acts_CivilTalking_1";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Talking_2") then{
      {
        _x switchMove "Acts_CivilTalking_2";
        removeallweapons _x;
        clearMagazineCargo _x;

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Talking_Radio") then{
      {
        _x switchMove "Acts_Kore_TalkingOverRadio_loop";
        removeallweapons _x;
        clearMagazineCargo _x;
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Listen_Radio") then{
      {
        _x switchMove "Acts_listeningToRadio_Loop";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Speech") then{
      {
        _x switchMove "Acts_StandingSpeakingUnarmed";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Sit_Shocked_1") then{
      {
        _x switchMove "Acts_CivilShocked_1";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Sit_Shocked_2") then{
      {
        _x switchMove "Acts_CivilShocked_2";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Kneel_Afraid_1") then{
      {
        _x switchMove "Acts_CivilHiding_1";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Kneel_Afraid_2") then{
      {
        _x switchMove "Acts_CivilHiding_2";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Bed_1") then{
      {
        _x switchMove "Acts_LyingWounded_loop1";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Bed_2") then{
      {
        _x switchMove "Acts_LyingWounded_loop2";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Bed_3") then{
      {
        _x switchMove "Acts_LyingWounded_loop3";

      } forEach _vehicle;
    };
    if (_condition isEqualTo "Dead_Captured") then{
      {
        _x switchMove "Acts_ExecutionVictim_KillTerminal";

      } forEach _vehicle;
    };
  };
  if (_condition in _weaponornot) then {
    if (_condition isEqualTo "Injured_lyingarm_1") then{
      {
        _x switchMove "Acts_CivilInjuredArms_1";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_lyingchest_2") then{
      {
        _x switchMove "Acts_CivilInjuredChest_1";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_lyinghead_3") then{
      {
        _x switchMove "Acts_CivilInjuredHead_1";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_lyingleg_4") then{
      {
        _x switchMove "Acts_CivilInjuredLegs_1";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_lying_5") then{
      {
        _x switchMove "Acts_CivilInjuredGeneral_1";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Dead_Chair") then{
      {
        _x switchMove "Acts_Onchair_Dead";
      } forEach _vehicle;
    };
  };
  if (_condition in _weapon) then {
    if (_condition isEqualTo "Idle_Standing_Weapon_1") then{
      {
        _x switchMove "Acts_millerCamp_A";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Idle_Standing_Weapon_2") then{
      {
        _x switchMove "Acts_millerCamp_C";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Idle_Standing_Weapon_3") then{
      {
        _x switchMove "acts_millerIdle";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Typing_Combat_Bowed") then{
      {
        _x switchMove "acts_millerDisarming_deskLoop";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Typing_Combat_Kneeling") then{
      {
        _x switchMove "acts_millerDisarming_deskCrouch_loop";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_Angry") then{
      {
        _x switchMove "Acts_InjuredAngryRifle01";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_Coughing") then{
      {
        _x switchMove "Acts_InjuredCoughRifle02";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_1") then{
      {
        _x switchMove "Acts_InjuredLookingRifle01";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_2") then{
      {
        _x switchMove "Acts_InjuredLookingRifle02";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_3") then{
      {
        _x switchMove "Acts_InjuredLookingRifle03";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_4") then{
      {
        _x switchMove "Acts_InjuredLookingRifle04";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_5") then{
      {
        _x switchMove "Acts_InjuredLookingRifle05";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_6") then{
      {
        _x switchMove "Acts_InjuredLyingRifle01";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_7") then{
      {
        _x switchMove "Acts_InjuredLyingRifle02";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_7_180") then{
      {
        _x switchMove "Acts_InjuredLyingRifle02_180";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Weapon_8") then{
      {
        _x switchMove "Acts_InjuredSpeakingRifle01";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Pistol_1") then{
      {
        _x switchMove "Acts_SittingWounded_breath";
      } forEach _vehicle;
    };
    if (_condition isEqualTo "Injured_Pistol_2") then{
      {
        _x switchMove "Acts_SittingWounded_loop";
      } forEach _vehicle;
    };
  };
  {
    _x allowdamage false;
    _x disableAI "ALL";
    _x enableAI "ANIM";
    _x setBehaviour "CARELESS";
  } forEach _vehicle;
};
