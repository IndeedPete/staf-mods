// I HATE ARMA CONFIGS!
class EventHandlers;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgVehicles {
  class Air;
  class Heli_Transport_01_base_F;
  class C_man_pilot_F;
	class C_IDAP_Man_AidWorker_01_F;
	class Civilian_F;
	class C_Van_01_box_F;
	class C_Van_01_box_white_F;
	class C_Offroad_01_F;
	class O_Heli_Light_02_F;
	class O_Heli_Light_02_unarmed_F;
	class B_Heli_Transport_03_unarmed_F;
	class B_Heli_Transport_01_F;
	class O_Heli_Transport_04_medevac_F;
	class I_Heli_light_03_unarmed_F;

  class Helicopter: Air
  {
    class HitPoints;
    class Turrets;
  };

  class Helicopter_Base_F: Helicopter
  {
    class HitPoints: HitPoints
    {
      class HitHull;
      class HitFuel;
      class HitEngine;
      class HitAvionics;
      class HitHRotor;
      class HitVRotor;
      class HitTransmission;
    };
    class Turrets: Turrets
    {
      class MainTurret;
    };
    class AnimationSources;
    class EventHandlers;
    class ViewPilot;
    class ViewOptics;
  };

	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret: MainTurret
			{
				class ViewGunner;
			};
		};
		class Components;
	};

	class Heli_Transport_04_IDAP_base_F: Helicopter_Base_H
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 17.93;
		_generalMacro = "Heli_Transport_04_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "$STR_A3_CfgVehicles_Heli_Transport_04_base_F0";
		class Library
		{
			libTextDesc = "$STR_A3_TARU_DESC_F0";
		};
		model = "\A3\Air_F_Heli\Heli_Transport_04\Heli_Transport_04_F.p3d";
		DLC = "Heli";
		overviewPicture = "\A3\Data_F_Heli\Images\dlcbrowser_heli_02_ca.paa";
		editorSubcategory = "EdSubcat_Helicopters";
		icon = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Map_Heli_Transport_04_CA.paa";
		picture = "\A3\Air_F_Heli\Heli_Transport_04\Data\UI\Heli_Transport_04_CA.paa";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		transportSoldier = 0;
		armor = 40;
		cost = 700000;
		threat[] = {0.8,0.1,0.6};
		enableSweep = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		getInRadius = 2;
		cargoDoors[] = {};
		driverInAction = "pilot_Heli_Transport_04";
		driverAction = "pilot_Heli_Transport_04";
		cargoAction[] = {};
		driverLeftHandAnimName = "Stick_collective_1";
		driverRightHandAnimName = "Stick_control_1";
		driverLeftLegAnimName = "Pedals_left_2";
		driverRightLegAnimName = "Pedals_right_2";
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2"};
		enableManualFire = 0;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		simulation = "helicopterrtd";
		class RotorLibHelicopterProperties
		{
			RTDconfig = "A3\Air_F_Heli\Heli_Transport_04\RTD_Heli_Transport_04.xml";
			autoHoverCorrection[] = {4,0,0};
			defaultCollective = 0.49;
			maxHorizontalStabilizerLeftStress = 8000;
			maxHorizontalStabilizerRightStress = 8000;
			maxVerticalStabilizerStress = 4000;
			stressDamagePerSec = 0.01;
			horizontalWingsAngleCollMin = 0;
			horizontalWingsAngleCollMax = 0;
			maxTorque = 12000;
			maxMainRotorStress = 225000;
			maxTailRotorStress = 225000;
			retreatBladeStallWarningSpeed = 83;
		};
		maxSpeed = 250;
		fuelCapacity = 2500;
		fuelConsumptionRate = 0.138;
		liftForceCoef = 1.3;
		bodyFrictionCoef = 2.8;
		memoryPointSupply = "Supply_pos";
		memoryPointsGetInCargo = "Cargo_pos";
		memoryPointsGetInCargoDir = "Cargo_dir";
		memoryPointsGetInDriver = "Driver_pos";
		memoryPointsGetInDriverDir = "Driver_dir";
		driveOnComponent[] = {"Wheel_1","Wheel_2","Wheel_3"};
		maxFordingDepth = 1.4;
		memoryPointCM[] = {"Flare_launcher_1_pos","Flare_launcher_2_pos"};
		memoryPointCMDir[] = {"Flare_launcher_1_dir","Flare_launcher_2_dir"};
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		radarTargetSize = 1.2;
		visualTargetSize = 1.2;
		irTargetSize = 1.2;
		lockDetectionSystem = "8 + 4";
		incomingMissileDetectionSystem = "8 + 16";
		mainBladeCenter = "Rotors_center";
		mainBladeRadius = 8;
		tailBladeCenter = "Rotors_center";
		tailBladeRadius = 8;
		tailBladeVertical = 0;
		selectionHRotorMove = "Rotor_2_blur";
		selectionHRotorStill = "Rotor_2_static";
		selectionVRotorMove = "Rotor_1_blur";
		selectionVRotorStill = "Rotor_1_static";
		supplyRadius = -1;
		selectionDamage = "DamT_1";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		attenuationEffectType = "HeliAttenuation";
		emptySound[] = {"",0,1};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_default_int_3",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.33,"soundGeneralCollision2",0.33,"soundGeneralCollision3",0.33};
		soundLandCrashes[] = {"emptySound",0};
		soundBuildingCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundArmorCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundWoodCrash[] = {"soundGeneralCollision1",1,"soundGeneralCollision2",1,"soundGeneralCollision3",1};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",1.0,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",1.0,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",1.0,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_1",1.0,1,100};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_water_ext_2",1.0,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundDammage[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_crash_default_int_1",10.0,1};
		soundGetIn[] = {"A3\Sounds_F\air\noises\heli_get_in2",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\air\noises\heli_get_out2",0.7943282,1,20};
		soundEngineOnInt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_int_start",0.39810717,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_ext_start",0.7943282,1.0,600};
		soundEngineOffInt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_int_stop",0.39810717,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_ext_stop",0.7943282,1.0,600};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",0.39810717,1.0};
		rotorDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_int_2",1.0,1.0};
		rotorDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_rotor_ext_2",2.5118864,1.0,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		tailDamageInt[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0};
		tailDamageOut[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_tail",1.0,1.0,300};
		tailDamage[] = {"tailDamageInt","tailDamageOut"};
		landingSoundInt0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int1",1.0,1.0,100};
		landingSoundInt1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_large_int2",1.0,1.0,100};
		landingSoundInt[] = {"landingSoundInt0",0.5,"landingSoundInt1",0.5};
		landingSoundOut0[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext1",1.7782794,1.0,100};
		landingSoundOut1[] = {"A3\Sounds_F\vehicles\air\noises\landing_wheels_ext2",1.7782794,1.0,100};
		landingSoundOut[] = {"landingSoundOut0",0.5,"landingSoundOut1",0.5};
		slingCargoAttach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",1.0,1.0};
		slingCargoAttach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",1.7782794,1.0,200};
		slingCargoAttach[] = {"slingCargoAttach0","slingCargoAttach1"};
		slingCargoDetach0[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",1.0,1.0};
		slingCargoDetach1[] = {"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",1.7782794,1.0,200};
		slingCargoDetach[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoDetachAir0[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",1.0,1.0};
		slingCargoDetachAir1[] = {"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",1.0,1.0,300};
		slingCargoDetachAir[] = {"slingCargoDetach0","slingCargoDetach1"};
		slingCargoRopeBreak0[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",1.0,1.0};
		slingCargoRopeBreak1[] = {"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",1.0,1.0,200};
		slingCargoRopeBreak[] = {"slingCargoDetach0","slingCargoDetach1"};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_ext_engine",0.8912509,1.0,800};
				frequency = "rotorSpeed";
				volume = "4*camPos*((rotorSpeed-0.55))";
			};
			class RotorExt
			{
				sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_ext_rotor_normal",1.2589254,1.0,2000};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorSwistExt
			{
				sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_04\rotor_swist",0.70794576,1,400};
				frequency = 1;
				volume = "(camPos*(rotorThrust factor [0.6, 1]))";
				cone[] = {1.0,1.4,1.0,0};
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_int_engine",1.0,1.0};
				frequency = "rotorSpeed";
				volume = "3*(1-camPos)*(rotorSpeed-0.55)";
			};
			class RotorInt
			{
				sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_int_rotor_normal",1.0,1.0};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.22387211,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1.0,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.2589254,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.2589254,1.0,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.56234133,1.0,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c",1.0,1.0,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",0.70794576,1.0,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[40,70])";
			};
		};
		class SoundsExt
		{
			class SoundEvents{};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_ext_engine",0.8912509,1.0,800};
					frequency = "rotorSpeed";
					volume = "4*camPos*((rotorSpeed-0.55))";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_ext_rotor_normal",1.2589254,1.0,2000};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
					cone[] = {1.6,3.14,1.6,0.95};
				};
				class RotorSwistExt
				{
					sound[] = {"A3\Sounds_F_HELI\vehicles\air\Heli_Transport_04\rotor_swist",0.70794576,1,400};
					frequency = 1;
					volume = "(camPos*(rotorThrust factor [0.6, 1]))";
					cone[] = {1.0,1.4,1.0,0};
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_int_engine",1.0,1.0};
					frequency = "rotorSpeed";
					volume = "3*(1-camPos)*(rotorSpeed-0.55)";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F_Heli\vehicles\air\Heli_Transport_04\Heli_Transport_04_int_rotor_normal",1.0,1.0};
					frequency = "rotorSpeed * (1-rotorThrust/5)";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1.0,1.0,150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
				};
				class damageAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
				};
				class damageAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor",0.22387211,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
				};
				class rotorLowAlarmInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1.0};
					frequency = 1;
					volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class rotorLowAlarmExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1.0,20};
					frequency = 1;
					volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
				};
				class scrubLandInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
					frequency = 1;
					volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubLandExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1.0,1.0,100};
					frequency = 1;
					volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
				};
				class scrubBuildingExt
				{
					sound[] = {"A3\Sounds_F\dummysound",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
				};
				class scrubTreeInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1.0,1.0,100};
					frequency = 1;
					volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
				};
				class scrubTreeExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * ((scrubTree) factor [0, 0.01])";
				};
				class RainExt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
					frequency = 1;
					volume = "camPos * (rain - rotorSpeed/2) * 2";
				};
				class RainInt
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
					frequency = 1;
					volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
				};
				class SlingLoadDownExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.0,1.0,500};
					frequency = 1;
					volume = "camPos*(slingLoadActive factor [0,1])";
				};
				class SlingLoadDownInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
				};
				class SlingLoadUpInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1.0,1.0,500};
					frequency = 1;
					volume = "(1-camPos)*(slingLoadActive factor [0,1])";
				};
				class WindInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.56234133,1.0,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
				};
				class GStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c",1.0,1.0,50};
					frequency = 1;
					volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
				};
				class SpeedStress
				{
					sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",0.70794576,1.0,50};
					frequency = 1;
					volume = "(1-camPos)*(speed factor[40,70])";
				};
			};
		};
		maximumLoad = 4000;
		unitInfoTypeRTD = "RscUnitInfoAirRTDFullDigital";
		class MFD{};
		class AnimationSources: AnimationSources
		{
			class Door_1_source
			{
				source = "door";
				initPhase = 0;
				animPeriod = 1;
				sound = "ServoRampSound";
				soundPosition = "Door_1_axis";
			};
			class Door_2_source: Door_1_source
			{
				soundPosition = "Door_2_axis";
			};
			class Door_3_source: Door_1_source
			{
				soundPosition = "Door_3_axis";
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "Door_1_axis";
				priority = 11;
				radius = 2;
				onlyForPlayer = 1;
				condition = "((this getVariable ['bis_disabled_Door_1',1]) isEqualTo 0) && {((this animationPhase 'Door_1_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_1_source', 1])";
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR";
				displayName = "$STR_DN_OUT_C_DOOR";
				priority = 11;
				condition = "((this getVariable ['bis_disabled_Door_1',1]) isEqualTo 0) && {((this animationPhase 'Door_1_rot') >= 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_1_source', 0])";
			};
			class OpenDoor_2: OpenDoor_1
			{
				position = "Door_2_axis";
				condition = "((this getVariable ['bis_disabled_Door_2',1]) isEqualTo 0) && {((this animationPhase 'Door_2_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_2_source', 1])";
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = "Door_2_axis";
				condition = "((this getVariable ['bis_disabled_Door_2',1]) isEqualTo 0) && {((this animationPhase 'Door_2_rot') >= 0.5) &&  (alive this)}";
				statement = "(this animateDoor ['Door_2_source', 0])";
			};
			class OpenDoor_3: OpenDoor_1
			{
				position = "Door_3_axis";
				condition = "((this getVariable ['bis_disabled_Door_3',1]) isEqualTo 0) && {((this animationPhase 'Door_3_rot') < 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_3_source', 1])";
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = "Door_3_axis";
				condition = "((this getVariable ['bis_disabled_Door_3',1]) isEqualTo 0) && {((this animationPhase 'Door_3_rot') >= 0.5) && (alive this)}";
				statement = "(this animateDoor ['Door_3_source', 0])";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Data_f\Glass_veh.rvmat","A3\Data_f\Glass_veh_damage.rvmat","A3\Data_f\Glass_veh_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_glass.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_glass_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_glass_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_exterier_01.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_exterier_01_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_exterier_01_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_exterier_02.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_exterier_02_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_exterier_02_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Int01.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Int01_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Int01_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Int02.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Int02_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Int02_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_adds.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_adds_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_adds_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_base.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_base_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_base_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_board.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_board_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_int_board_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_destruct.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_damage.rvmat","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_fuel_destruct.rvmat"};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 999;
				name = "hull_hit";
				visual = "DamT_1";
				radius = 0.65;
				minimalHit = 0.01;
				explosionShielding = 1.5;
				depends = "Total";
			};
			class HitFuel: HitFuel
			{
				armor = 1.5;
				name = "fuel_hit";
				visual = "";
				radius = 0.85;
				minimalHit = 0.1;
			};
			class HitEngine1
			{
				armor = 2;
				radius = 0.35;
				explosionShielding = 2;
				name = "engine_1_hit";
				convexComponent = "engine_1_hit";
				minimalHit = 0.1;
				visual = "motor";
				passThrough = 1;
				material = 51;
			};
			class HitEngine2: HitEngine1
			{
				name = "engine_2_hit";
				convexComponent = "engine_2_hit";
			};
			class HitEngine: HitEngine
			{
				armor = 999;
				radius = 0.05;
				minimalHit = 1;
				name = "engine_hit";
				depends = "0.5 * (HitEngine1 + HitEngine2)";
			};
			class HitHRotor: HitHRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 2.0;
			};
			class HitVRotor: HitVRotor
			{
				armor = 2.6;
				radius = 0.4;
				minimalHit = 0.1;
				explosionShielding = 2.0;
			};
			class HitTransmission: HitTransmission
			{
				armor = 1.5;
				material = -1;
				name = "transmission";
				passThrough = 0.8;
			};
			delete HitGlass1;
			delete HitGlass2;
			delete HitGlass3;
			delete HitGlass4;
			delete HitGlass5;
			delete HitGlass6;
			delete HitLGlass;
			delete HitRGlass;
			class Glass_1_hitpoint
			{
				name = "Glass_1_hit";
				visual = "Glass_1";
				armorComponent = "Glass_1";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_2_hitpoint
			{
				name = "Glass_2_hit";
				visual = "Glass_2";
				armorComponent = "Glass_2";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_3_hitpoint
			{
				name = "Glass_3_hit";
				visual = "Glass_3";
				armorComponent = "Glass_3";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_4_hitpoint
			{
				name = "Glass_4_hit";
				visual = "Glass_4";
				armorComponent = "Glass_4";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_5_hitpoint
			{
				name = "Glass_5_hit";
				visual = "Glass_5";
				armorComponent = "Glass_5";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_6_hitpoint
			{
				name = "Glass_6_hit";
				visual = "Glass_6";
				armorComponent = "Glass_6";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_7_hitpoint
			{
				name = "Glass_7_hit";
				visual = "Glass_7";
				armorComponent = "Glass_7";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_8_hitpoint
			{
				name = "Glass_8_hit";
				visual = "Glass_8";
				armorComponent = "Glass_8";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_9_hitpoint
			{
				name = "Glass_9_hit";
				visual = "Glass_9";
				armorComponent = "Glass_9";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_10_hitpoint
			{
				name = "Glass_10_hit";
				visual = "Glass_10";
				armorComponent = "Glass_10";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_11_hitpoint
			{
				name = "Glass_11_hit";
				visual = "Glass_11";
				armorComponent = "Glass_11";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_12_hitpoint
			{
				name = "Glass_12_hit";
				visual = "Glass_12";
				armorComponent = "Glass_12";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_13_hitpoint
			{
				name = "Glass_13_hit";
				visual = "Glass_13";
				armorComponent = "Glass_13";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_14_hitpoint
			{
				name = "Glass_14_hit";
				visual = "Glass_14";
				armorComponent = "Glass_14";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_15_hitpoint
			{
				name = "Glass_15_hit";
				visual = "Glass_15";
				armorComponent = "Glass_15";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_16_hitpoint
			{
				name = "Glass_16_hit";
				visual = "Glass_16";
				armorComponent = "Glass_16";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_17_hitpoint
			{
				name = "Glass_17_hit";
				visual = "Glass_17";
				armorComponent = "Glass_17";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_18_hitpoint
			{
				name = "Glass_18_hit";
				visual = "Glass_18";
				armorComponent = "Glass_18";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_19_hitpoint
			{
				name = "Glass_19_hit";
				visual = "Glass_19";
				armorComponent = "Glass_19";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
			class Glass_20_hitpoint
			{
				name = "Glass_20_hit";
				visual = "Glass_20";
				armorComponent = "Glass_20";
				armor = 2;
				passThrough = 0;
				material = -1;
				radius = 0.1;
				class DestructionEffects{};
			};
		};
		dustEffect = "HeliDustBig";
		class Exhausts
		{
			class Exhaust_1
			{
				position = "Exhaust_1_pos";
				direction = "Exhaust_1_dir";
				effect = "ExhaustsEffectHeliBig";
			};
			class Exhaust_2
			{
				position = "Exhaust_2_pos";
				direction = "Exhaust_2_dir";
				effect = "ExhaustsEffectHeliBig";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = -3;
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction = "pilot_Heli_Transport_04";
				gunnerCompartments = "Compartment1";
				proxyIndex = 1;
				isCopilot = 1;
				hideWeaponsGunner = 1;
				memoryPointsGetInGunner = "Codriver_pos";
				memoryPointsGetInGunnerDir = "Codriver_dir";
				gunnerLeftHandAnimName = "Stick_collective_2";
				gunnerRightHandAnimName = "Stick_control_2";
				gunnerLeftLegAnimName = "Pedals_left_2";
				gunnerRightLegAnimName = "Pedals_right_2";
				body = "Optics_1_rot";
				gun = "Optics_1_muzzle_rot";
				animationSourceBody = "Optics_1_source";
				animationSourceGun = "Optics_1_muzzle_source";
				stabilizedInAxes = 3;
				gunBeg = "Copilot_view_dir";
				gunEnd = "Copilot_view_pos";
				memoryPointGun = "Copilot_view_pos";
				memoryPointGunnerOptics = "Copilot_view_dir";
				gunnerName = "$STR_A3_COPILOT";
				minElev = -40;
				maxElev = 20;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				usePip = 1;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				weapons[] = {"FakeHorn"};
				soundServo[] = {"",0.01,1.0,30};
				magazines[] = {};
				inGunnerMayFire = 1;
				gunnerOpticsEffect[] = {};
				gunnerOpticsModel = "";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftPilot{};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightPilot{};
				};
				class ViewGunner: ViewPilot
				{
					initAngleX = -16;
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {0,1};
						opticsDisplayName = "W";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "M";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
			class LoadmasterTurret: MainTurret
			{
				gunnerAction = "passenger_apc_generic02";
				gunnerCompartments = "Compartment1";
				gunnerType = "C_IDAP_Pilot_01_F";
				proxyIndex = 2;
				isCopilot = 0;
				hideWeaponsGunner = 1;
				memoryPointsGetInGunner = "Loadmaster_pos";
				memoryPointsGetInGunnerDir = "Loadmaster_dir";
				gunnerName = "$STR_A3_CfgVehicles_Heli_Transport_04_base_F_Turrets_LoadmasterTurret0";
				body = "Optics_1_rot";
				gun = "Optics_1_muzzle_rot";
				class ViewGunner: ViewGunner
				{
					initFov = 0.9;
					minFov = 0.25;
					maxFov = 1.25;
					initAngleX = -15;
					minAngleX = -60;
					maxAngleX = 50;
					initAngleY = 0;
					minAngleY = -120;
					maxAngleY = 150;
					minMoveX = -0.1;
					maxMoveX = 0.1;
					minMoveY = -0.1;
					maxMoveY = 0.1;
					minMoveZ = 0.0;
					maxMoveZ = 0.2;
				};
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 5;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 3;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
		numberPhysicalWheels = 3;
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), "", [], false] call bis_fnc_initVehicle;};";
		};
		class TextureSources
		{
			class Opfor
			{
				displayName = "$STR_A3_TEXTURESOURCES_OPFOR0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};
				factions[] = {"OPF_F"};
			};
			class Black
			{
				displayName = "$STR_A3_TEXTURESOURCES_BLACK0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_Black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_Black_co.paa"};
				factions[] = {"OPF_F"};
			};
		};
		textureList[] = {"Opfor",1};
	};

  class RobJ_Rescue1: O_Heli_Light_02_unarmed_F
	{
    scope = 1;
	};
	class NAVY_HURON_UK_1: B_Heli_Transport_03_unarmed_F
	{
    scope = 0;
	};
	class ROBJ_IDAP_HURON_1: B_Heli_Transport_03_unarmed_F
	{
    scope = 1;
	};
	class NAVY_GHOSTHAWK_1: Heli_Transport_01_base_F
	{
    scope = 1;
	};
	class ROBJ_IDAP_HELLCAT_1: I_Heli_light_03_unarmed_F
	{
    scope = 1;
	};
	class ROBJ_IDAP_ORCA_1: O_Heli_Light_02_unarmed_F
	{
    scope = 1;
	};
	class ROBJ_IDAP_TARU_1: O_Heli_Transport_04_medevac_F
	{
		scope = 1;
	};
	class RobJ_Rescue_Van1: C_Van_01_box_white_F
	{
		scope = 1;
	};
	class RobJ_Police_Offroad_01: C_Offroad_01_F
	{
		scope = 1;
	};
	class RobJ_Rescue_F: C_man_pilot_F
	{
		scope = 1;
	};
	class RobJ_Police_Officer: C_man_pilot_F
	{
		scope = 1;
	};
	class RobJ_IDAP_Pilot: C_IDAP_Man_AidWorker_01_F
	{
		scope = 0;
	};
	class RobJ_IDAP_Doctor: C_IDAP_Man_AidWorker_01_F
	{
		scope = 1;
	};


	// Helicopter
  class STAF_RobJ_Rescue1: RobJ_Rescue1
	{
		displayName = "Ka-60 Kasatka (Rescue)";
    scope = 2;
		faction = "CIV_F";
		crew = "STAF_RobJ_Rescue_F";
		typicalCargo[] = {"STAF_RobJ_Rescue_F","STAF_RobJ_Rescue_F"};
		editorPreview = "staf_other_additions_robj\eden\STAF_RobJ_Rescue1.jpg";
	};
	class STAF_ROBJ_IDAP_HURON_1: ROBJ_IDAP_HURON_1
	{
		displayName = "CH-67I Chinook";
    scope = 2;
	  faction = "CIV_IDAP_F";
		crew = "C_IDAP_Pilot_01_F";
		typicalCargo[] = {"C_IDAP_Pilot_01_F","C_IDAP_Pilot_01_F"};
		editorPreview = "staf_other_additions_robj\eden\STAF_ROBJ_IDAP_HURON_1.jpg";
	};
	class STAF_ROBJ_IDAP_HELLCAT_1: ROBJ_IDAP_HELLCAT_1
	{
		displayName = "AW159 Wildcat";
    scope = 2;
		faction = "CIV_IDAP_F";
		crew = "C_IDAP_Pilot_01_F";
		typicalCargo[] = {"C_IDAP_Pilot_01_F","C_IDAP_Pilot_01_F"};
		editorPreview = "staf_other_additions_robj\eden\STAF_ROBJ_IDAP_HELLCAT_1.jpg";
	};
	class STAF_ROBJ_IDAP_ORCA_1: ROBJ_IDAP_ORCA_1
	{
		displayName = "Ka-60 Kasatka";
    scope = 2;
		faction = "CIV_IDAP_F";
		crew = "C_IDAP_Pilot_01_F";
		typicalCargo[] = {"C_IDAP_Pilot_01_F","C_IDAP_Pilot_01_F"};
		editorPreview = "staf_other_additions_robj\eden\STAF_ROBJ_IDAP_ORCA_1.jpg";
	};
	class STAF_ROBJ_IDAP_TARU_1: Heli_Transport_04_IDAP_base_F
	{
    author = "RobJ2210";
  	displayName = "Mi-290 Taru";
		scope = 2;
		side = 3;
		faction = "CIV_IDAP_F";
		crew = "C_IDAP_Pilot_01_F";
		typicalCargo[] = {"C_IDAP_Pilot_01_F","C_IDAP_Pilot_01_F"};
		editorPreview = "staf_other_additions_robj\eden\STAF_ROBJ_IDAP_TARU_1.jpg";
		vehicleClass = "Air";
		hiddenSelectionsTextures[] = {"\ROBJ_RESCUE_PACK\data\Taru1.paa","\ROBJ_RESCUE_PACK\data\Taru4.paa","\ROBJ_RESCUE_PACK\data\tarupod1.paa","\ROBJ_RESCUE_PACK\data\tarupod2.paa"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_MediKit
			{
				name = "MediKit";
				count = 5;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
	};

	// Cars
	class STAF_RobJ_Rescue_Van1: RobJ_Rescue_Van1
	{
    scope = 2;
		faction = "CIV_F";
		crew = "C_IDAP_Man_Paramedic_01_F";
		typicalCargo[] = {"C_IDAP_Man_Paramedic_01_F"};
		editorPreview = "staf_other_additions_robj\eden\STAF_RobJ_Rescue_Van1.jpg";
	};
	class STAF_RobJ_Police_Offroad_01: RobJ_Police_Offroad_01
	{
    scope = 2;
		faction = "CIV_F";
		crew = "STAF_RobJ_Police_Officer";
  	displayName = "Offroad (Police)";
		editorPreview = "staf_other_additions_robj\eden\STAF_RobJ_Police_Offroad_01.jpg";
	};

  // Men
	class STAF_RobJ_Rescue_F: RobJ_Rescue_F
	{
		scope = 2;
		faction = "CIV_F";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"Chemlight_Red","Chemlight_Red"};
		respawnMagazines[] = {"Chemlight_Red","Chemlight_Red"};
		editorPreview = "staf_other_additions_robj\eden\STAF_RobJ_Rescue_F.jpg";
	};
	class STAF_RobJ_Police_Officer: RobJ_Police_Officer
	{
    displayName = "Offroad (Police)";
		scope = 2;
		faction = "CIV_F";
		editorPreview = "staf_other_additions_robj\eden\STAF_RobJ_Police_Officer.jpg";
	};
	class STAF_RobJ_IDAP_Doctor: RobJ_IDAP_Doctor
	{
		scope = 2;
		faction = "CIV_IDAP_F";
		editorPreview = "staf_other_additions_robj\eden\STAF_RobJ_IDAP_Doctor.jpg";
	};
};
