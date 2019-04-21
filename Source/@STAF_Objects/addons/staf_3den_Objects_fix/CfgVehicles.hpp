class CfgVehicles
{
	class Static;
	class Portable_GCS_F: Static
	{
		class HitPoints
		{
			class Screen_01_damage;
			class Screen_02_damage;
			class Screen_03_damage;
		};
	};

	class Portable_GCS_Base_F: Portable_GCS_F {
		author = "Kydoimos";
		editorPreview = "\3den_Objects\data_f\editor_previews_f\Portable_GCS_Base_F.jpg";
		dlc = "3den_objects_mod";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Military";
		displayName = "$STR_GCS_F";
		icon = "iconObject_1x1";
		mapSize = 2;
		scope = 2;
		scopeCurator = 2;
		_generalMacro = "Portable_GCS_F";
		model = "\3den_objects\objects_f\gcs_f\portable_GCS_F.p3d";
		vehicleClass = "military";
		hiddenSelections[] = {"Camo_01","Camo_02","screen_01","screen_02","screen_03"};
		hiddenSelectionsMaterials[] = {"\3den_objects\objects_f\gcs_f\gcs_02.rvmat","\3den_objects\objects_f\gcs_f\gcs_01.rvmat","\3den_objects\objects_f\gcs_f\gcs_01_screen.rvmat","\3den_objects\objects_f\gcs_f\gcs_01_screen.rvmat","\3den_objects\objects_f\gcs_f\gcs_01_screen.rvmat"};
		hiddenSelectionsTextures[] = {"\3den_objects\objects_f\gcs_f\gcs_02_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"};
		class EventHandlers
		{
			hitPart = "_unit = (_this select 0) select 0; if ((_unit getHitPointDamage ""Screen_01_Damage"") >= 0) then {_unit setObjectTextureGlobal [2, ""\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa""]}; if ((_unit getHitPointDamage ""Screen_02_Damage"") >= 0) then {_unit setObjectTextureGlobal [3, ""\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa""]}; if ((_unit getHitPointDamage ""Screen_03_Damage"") >= 0) then {_unit setObjectTextureGlobal [4, ""\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa""]}";
		};
		class HitPoints: HitPoints
		{
			class Screen_01_damage: Screen_01_damage
			{
				armor = 0.1;
				material = -1;
				name = "Screen_01_damage";
				visual = "Screen_01_damage";
				passThrough = 0;
				explosionShielding = 0.4;
				radius = 0.25;
			};
			class Screen_02_damage: Screen_02_damage
			{
				armor = 0.1;
				material = -1;
				name = "Screen_02_damage";
				visual = "Screen_02_damage";
				passThrough = 0;
				explosionShielding = 0.1;
				radius = 0.25;
			};
			class Screen_03_damage: Screen_03_damage
			{
				armor = 0.1;
				material = -1;
				name = "Screen_03_damage";
				visual = "Screen_03_damage";
				passThrough = 0;
				explosionShielding = 0.1;
				radius = 0.25;
			};
		};
		class Damage
		{
			tex[] = {"3den_objects\objects_f\gcs_f\gcs_01_screen_transparent_ca.paa","3den_objects\objects_f\gcs_f\gcs_01_screen_damage_01_co.paa","3den_objects\objects_f\gcs_f\gcs_01_screen_damage_01_co.paa"};
			mat[] = {"3den_objects\objects_f\gcs_f\gcs_01_screen_transparent.rvmat","3den_objects\objects_f\gcs_f\gcs_01_screen_damage_01.rvmat","3den_objects\objects_f\gcs_f\gcs_01_screen_damage_01.rvmat"};
		};
	};

	class Portable_GCS_Base_CTRG_F: Portable_GCS_Base_F {
		editorPreview = "\3den_Objects\data_f\editor_previews_f\Portable_GCS_Base_CTRG_F.jpg";
		displayName = "$STR_GCS_CTRG_F";
		dlc = "3den_objects_mod";
		_generalMacro = "Portable_GCS_Base_CTRG_F";
		hiddenSelectionsTextures[] = {"\3den_objects\objects_f\gcs_f\gcs_02_CTRG_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_CTRG_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa","\3den_objects\objects_f\gcs_f\gcs_01_screen_co.paa"};
	};
};
