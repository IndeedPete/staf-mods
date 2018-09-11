//Init of the box and arsenal
_box = _this select 0;

//Itemlists

_weapons = [
  "SWOP_DC15SAPistol",
  "SWOP_DC17Pistol",
  "swop_special_lightsaber_3",
  "swop_blue_lightsaber",
  "swop_blue_lance_lightsaber",
  "swop_green_lance_lightsaber",
  "swop_orange_lance_lightsaber",
  "swop_purple_lance_lightsaber",
  "swop_yellow_lance_lightsaber",
  "swop_green_lightsaber",
  "swop_orange_lightsaber",
  "swop_purple_lightsaber",
  "swop_white_lightsaber",
  "swop_yellow_lightsaber",
  "swop_ScoutPistol",
  "sw_rebelflame",
  "SWOP_CR2BlasterRifle",
  "SWOP_DC15",
  "SWOP_DC15_GRIP",
  "SWOP_DC15AGL",
  "SWOP_DC15ABlasterRifle",
  "SWOP_DC15ABlasterRifle_mod1",
  "SWOP_DC15ABlasterRifle_mod0",
  "SWOP_dc15xBlasterRifle",
  "SWOP_DC17M_AT",
  "SWOP_DC17M_rifle",
  "SWOP_DC17M_Sniper",
  "swop_RepShotgun",
  "SWOP_DTL20BlasterRifle",
  "SWOP_DTL20BlasterRifle_Scoped",
  "SWOP_e11",
  "SWOP_e11_GRIP",
  "SWOP_e11_Scoped",
  "swop_e11b",
  "e11_dt",
  "SWOP_E11SBlasterRifle",
  "SWOP_E11SBlasterRifle_Scoped",
  "RocketL_F",
  "RocketRPS6_F",
  "SWOP_Valken38XBlasterRifle",
  "SWOP_Valken38XAuto",
  "SWOP_WESTARM5_rifle",
  "SWOP_WESTARM5_GL"
];

_backpacks = [
  "SWOP_B_RCBackpack_B",
  "SWOP_B_RCcBackpack_B",
  "SWOP_B_RCbossBackpack_B",
  "SWOP_B_RCfixerBackpack_B",
  "SWOP_B_RCscorchBackpack_B",
  "SWOP_B_RCsevBackpack_B",
  "SWOP_B_RComegaBackpack_B",
  "SWOP_B_ARCCloneBackpack",
  "SWOP_B_ARCIICloneBackpack",
  "SWOP_B_CloneBackpack",
  "SWOP_B_CloneBackpack101",
  "SWOP_B_CloneBackpack41",
  "SWOP_B_CloneBackpackGeon",
  "SWOP_B_CloneBackpack_dem",
  "SWOP_B_CloneBackpack_med",
  "SWOP_B_CloneDVa",
  "SWOP_B_CloneJT12",
  "SWOP_B_CloneJT12_jump",
  "SWOP_FlameBclone"
];

_items = [
  "SWOP_ImpAdmBron",
  "SWOP_ImpCapBron",
  "SWOP_ClonetrooperAirborne1_F_CombatUniform",
  "SWOP_ClonetrooperAirborne2_F_CombatUniform",
  "SWOP_rangeARC",
  "SWOP_Clonetrooper_2ARF212_helmet",
  "SWOP_Clonetrooper_2ARF41_helmet",
  "SWOP_Clonetrooper_2ARF501_helmet",
  "SWOP_Clonetrooper_2ARFCG_helmet",
  "SWOP_Clonetrooper_ARF_helmet",
  "SWOP_Clonetrooper_Xiander_ARF_helmet",
  "SWOP_Clonetrooper_ARF212boil_helmet",
  "SWOP_Clonetrooper_ARF212gripper_helmet",
  "SWOP_Clonetrooper_ARF212hazard_helmet",
  "SWOP_Clonetrooper_ARF212switch_helmet",
  "SWOP_Clonetrooper_ARF212trapper_helmet",
  "SWOP_Clonetrooper_ARF212waxer_helmet",
  "SWOP_Clonetrooper_ARF212_helmet",
  "SWOP_Clonetrooper_ARF212geon_helmet",
  "SWOP_Clonetrooper_ARF41_helmet",
  "SWOP_Clonetrooper_ARF501blizz_helmet",
  "SWOP_Clonetrooper_ARF501boomer_helmet",
  "SWOP_Clonetrooper_ARF501_helmet",
  "SWOP_Clonetrooper_ARF91_helmet",
  "SWOP_Clonetrooper_ARFcamorecon_helmet",
  "SWOP_Clonetcadet_helmet",
  "SWOP_tankerfacemask",
  "SWOP_cosir1",
  "SWOP_cosir3",
  "SWOP_cosir2",
  "SWOP_cosir5",
  "SWOP_cosir4",
  "SWOP_cosir1f",
  "SWOP_cosir4f",
  "SWOP_cosir5f",
  "SWOP_cosir2f",
  "SWOP_cosir3f",
  "SWOP_cosir1a",
  "SWOP_cosir3a",
  "SWOP_cosir2a",
  "SWOP_cosir5a",
  "SWOP_cosir4a",
  "SWOP_Clonetrooper_ATRT_HGT_helmet",
  "SWOP_Clonetrooper_ATRT_HGT501_helmet",
  "SWOP_Clonetrooper_ATRT_HGTK_helmet",
  "SWOP_ClonetrooperRC_helmet",
  "SWOP_ClonetrooperRCc_helmet",
  "SWOP_ClonetrooperRCboss_helmet",
  "SWOP_ClonetrooperRCfixer_helmet",
  "SWOP_ClonetrooperRCscorch_helmet",
  "SWOP_ClonetrooperRCsev_helmet",
  "SWOP_ClonetrooperRCclimber_helmet",
  "SWOP_ClonetrooperRCion_helmet",
  "SWOP_ClonetrooperRComega_helmet",
  "SWOP_Clonetrooper_RC_F_CombatUniform",
  "SWOP_Clonetrooper_RCc_F_CombatUniform",
  "SWOP_Clonetrooper_RCboss_F_CombatUniform",
  "SWOP_Clonetrooper_RCfixer_F_CombatUniform",
  "SWOP_Clonetrooper_RCscorch_F_CombatUniform",
  "SWOP_Clonetrooper_RCsev_F_CombatUniform",
  "SWOP_Clonetrooper_RCclimber_F_CombatUniform",
  "SWOP_Clonetrooper_RCion_F_CombatUniform",
  "SWOP_Clonetrooper_RComegaN_F_CombatUniform",
  "SWOP_Clonetrooper_RComega_F_CombatUniform",
  "SWOP_CloneOf_B_F_CombatUniform",
  "SWOP_CloneOf_green_F_CombatUniform",
  "SWOP_CloneOf_grey_F_CombatUniform",
  "SWOP_CloneOf_med_F_CombatUniform",
  "SWOP_CloneOf_red_F_CombatUniform",
  "SWOP_Cloneofficer_capB",
  "SWOP_Cloneofficer_capgreen",
  "SWOP_Cloneofficer_capG",
  "SWOP_Cloneofficer_capM",
  "SWOP_Cloneofficer_capR",
  "SWOP_cosir1_P1",
  "SWOP_cosir2_P1",
  "SWOP_cosir4_P1",
  "SWOP_cosir3_P1",
  "SWOP_Clonetrooper_pilot_helmet",
  "SWOP_Clonetrooper_pilot_helmet501hawk",
  "SWOP_Clonetrooper_pilot_helmet501raven",
  "SWOP_Clonetrooper_pilot_helmet501",
  "SWOP_Clonetrooper_pilot_helmet74",
  "SWOP_range",
  "SWOP_CloneShadowtrooper_armor",
  "SWOP_CloneShadowtrooper_Sniper_armor",
  "SWOP_CloneShadowSniper_helmet",
  "SWOP_CloneShadowtrooper_Sniper_F_CombatUniform",
  "SWOP_CloneShadowtrooper_helmet",
  "SWOP_CloneShadowtrooper_F_CombatUniform",
  "SWOP_visor_w",
  "SWOP_visor_antenna",
  "SWOP_Clonetrooper_armor_air",
  "SWOP_Clonetrooper_212_1_armor_air",
  "SWOP_Clonetrooper_212_2_armor_air",
  "SWOP_Clonetrooper_212_armor_air",
  "SWOP_Clonetrooper_501_cadetarmor_air",
  "SWOP_Clonetrooper_501_corporalarmor_air",
  "SWOP_Clonetrooper_501_sgtarmor_air",
  "SWOP_Clonetrooper_501_srtrooparmor_air",
  "SWOP_Clonetrooper_501_trooparmor_air",
  "SWOP_Clonetrooper_501_armor_air",
  "SWOP_cloneHelmetairborne_helmet",
  "SWOP_cloneHelmetairborne2_helmet",
  "SWOP_Clonetrooper_armor_pauldronsARCmain",
  "SWOP_Clonetrooper_ECHO_armor",
  "SWOP_Clonetrooper_FIVES_armor",
  "SWOP_Clonetrooper_armor_cap_pauldronsARCmain",
  "SWOP_Clonetrooper_armor_lt_pauldronsARCmain",
  "SWOP_Clonetrooper_ARC_F_CombatUniform",
  "SWOP_Clonetrooper_ECHO_F_CombatUniform",
  "SWOP_Clonetrooper_FIVES_F_CombatUniform",
  "SWOP_Clonetrooper_ARCcap_F_CombatUniform",
  "SWOP_Clonetrooper_ARClt_F_CombatUniform",
  "SWOP_Clonetrooper_armor",
  "SWOP_Clonetrooper_101omega_armor",
  "SWOP_Clonetrooper_101roz_armor",
  "SWOP_Clonetrooper_101serg_armor",
  "SWOP_Clonetrooper_101med_armor",
  "SWOP_Clonetrooper_101_armor",
  "SWOP_Clonetrooper_104_armor",
  "SWOP_Clonetrooper_212cody_armor",
  "SWOP_Clonetrooper_212waxer_boil_armor",
  "SWOP_Clonetrooper_212med_armor",
  "SWOP_Clonetrooper_212_armor",
  "SWOP_Clonetrooper_212geon1_armor",
  "SWOP_Clonetrooper_212geon2_armor",
  "SWOP_Clonetrooper_332datus_armor",
  "SWOP_Clonetrooper_332korin_armor",
  "SWOP_Clonetrooper_332med_armor",
  "SWOP_Clonetrooper_332_armor",
  "SWOP_Clonetrooper_41gree_armor",
  "SWOP_Clonetrooper_41camo1_armor",
  "SWOP_Clonetrooper_41camo2_armor",
  "SWOP_Clonetrooper_41_armor",
  "SWOP_Clonetrooper_442med_armor",
  "SWOP_Clonetrooper_442_armor",
  "SWOP_Clonetrooper_501dogma_armor",
  "SWOP_Clonetrooper_501hardcase_armor",
  "SWOP_Clonetrooper_501jesse_armor",
  "SWOP_Clonetrooper_501kix_armor",
  "SWOP_Clonetrooper_501tup_armor",
  "SWOP_Clonetrooper_501med_armor",
  "SWOP_Clonetrooper_501_armor",
  "SWOP_Clonetrooper_612_armor",
  "SWOP_Clonetrooper_612com_armor",
  "SWOP_Clonetrooper_74jang_armor",
  "SWOP_Clonetrooper_74med_armor",
  "SWOP_Clonetrooper_74_armor",
  "SWOP_Clonetrooper_91_armor",
  "SWOP_Clonetrooper_9drak_armor",
  "SWOP_Clonetrooper_9wook_armor",
  "SWOP_Clonetrooper_9med_armor",
  "SWOP_Clonetrooper_9_armor",
  "SWOP_Clonetrooper_ARFcamo_armor",
  "SWOP_Clonetrooper_Bomb_armor",
  "SWOP_Clonetrooper_CGstyles_armor_grenade",
  "SWOP_Clonetrooper_CGmed_armor",
  "SWOP_Clonetrooper_CG_armor",
  "SWOP_Clonetrooper_jumper_armor",
  "SWOP_Clonetrooper_KS_armor",
  "SWOP_Clonetrooper_armor_antenna",
  "SWOP_Clonetrooper_armor_kama",
  "SWOP_Clonetrooper_101doom_armor_kama",
  "SWOP_Clonetrooper_101_armor_kama",
  "SWOP_Clonetrooper_104_armor_kama",
  "SWOP_Clonetrooper_212_armor_kama",
  "SWOP_Clonetrooper_212geon1_armor_kama",
  "SWOP_Clonetrooper_212geon2_armor_kama",
  "SWOP_Clonetrooper_332datus_armor_kama",
  "SWOP_Clonetrooper_332_armor_kama",
  "SWOP_Clonetrooper_41camo1_armor_kama",
  "SWOP_Clonetrooper_41camo2_armor_kama",
  "SWOP_Clonetrooper_442_armor_kama",
  "SWOP_Clonetrooper_501axio_armor_kama",
  "SWOP_Clonetrooper_501diamond_armor_kama",
  "SWOP_Clonetrooper_501_armor_kama",
  "SWOP_Clonetrooper_74finn_armor_kama",
  "SWOP_Clonetrooper_74rhino_armor_kama",
  "SWOP_Clonetrooper_74_armor_kama",
  "SWOP_Clonetrooper_91_armor_kama",
  "SWOP_Clonetrooper_9_armor_kama",
  "SWOP_Clonetrooper_CGfox_armor_kama",
  "SWOP_Clonetrooper_CGds_armor_kama",
  "SWOP_Clonetrooper_CG_armor_kama",
  "SWOP_Clonetrooper_KS_armor_kama",
  "SWOP_Clonetrooper_501_grey_armor_kama",
  "SWOP_Clonetrooper_armor_kama_antenna",
  "SWOP_Clonetrooper_armor_pauldrons2",
  "SWOP_Clonetrooper_104_armor_pauldrons2",
  "SWOP_Clonetrooper_212_armor_pauldrons2",
  "SWOP_Clonetrooper_41camo1_armor_pauldrons2",
  "SWOP_Clonetrooper_41camo2_armor_pauldrons2",
  "SWOP_Clonetrooper_501bobs_armor_pauldrons2",
  "SWOP_Clonetrooper_501_armor_pauldrons2",
  "SWOP_Clonetrooper_9_armor_pauldrons2",
  "SWOP_Clonetrooper_CG_armor_pauldrons2",
  "SWOP_Clonetrooper_332_armor_pauldrons2",
  "SWOP_Clonetrooper_armor_pauldrons",
  "SWOP_Clonetrooper_104_armor_pauldrons",
  "SWOP_Clonetrooper_212_armor_pauldrons",
  "SWOP_Clonetrooper_327bly_armor_pauldrons",
  "SWOP_Clonetrooper_327med_armor_pauldrons",
  "SWOP_Clonetrooper_327_armor_pauldrons",
  "SWOP_Clonetrooper_332_armor_pauldrons",
  "SWOP_Clonetrooper_41camo1_armor_pauldrons",
  "SWOP_Clonetrooper_41camo2_armor_pauldrons",
  "SWOP_Clonetrooper_501_armor_pauldrons",
  "SWOP_Clonetrooper_9_armor_pauldrons",
  "SWOP_Clonetrooper_CG_armor_pauldrons",
  "SWOP_Clonetrooper_armor_pauldronsARC",
  "SWOP_Clonetrooper_104_armor_pauldronsARC",
  "SWOP_Clonetrooper_212_armor_pauldronsARC",
  "SWOP_Clonetrooper_501_armor_pauldronsARC",
  "SWOP_Clonetrooper_CG_armor_pauldronsARC",
  "SWOP_Clonetrooper_332_armor_pauldronsARC",
  "SWOP_CloneBARCV2",
  "SWOP_CloneBARCV2fordo",
  "SWOP_CloneBARCV2104wolf",
  "SWOP_CloneBARCV2501",
  "SWOP_CloneBARCV274",
  "SWOP_CloneBARCV291",
  "SWOP_Clonetrooper_armor_grenade",
  "SWOP_Clonetrooper_101_armor_grenade",
  "SWOP_Clonetrooper_104_armor_grenade",
  "SWOP_Clonetrooper_212_armor_grenade",
  "SWOP_Clonetrooper_212geon1_armor_grenade",
  "SWOP_Clonetrooper_212geon2_armor_grenade",
  "SWOP_Clonetrooper_332_armor_grenade",
  "SWOP_Clonetrooper_41camo1_armor_grenade",
  "SWOP_Clonetrooper_41camo2_armor_grenade",
  "SWOP_Clonetrooper_41_armor_grenade",
  "SWOP_Clonetrooper_442_armor_grenade",
  "SWOP_Clonetrooper_501_armor_grenade",
  "SWOP_Clonetrooper_74_armor_grenade",
  "SWOP_Clonetrooper_91_armor_grenade",
  "SWOP_Clonetrooper_CG_armor_grenade",
  "SWOP_Clonetrooper_helmet",
  "SWOP_Clonetrooper_rainbow_helmet",
  "SWOP_Clonetrooper_scar_helmet",
  "SWOP_Clonetrooper_101ash_helmet",
  "SWOP_Clonetrooper_101avian_helmet",
  "SWOP_Clonetrooper_101doom_helmet",
  "SWOP_Clonetrooper_101roz_helmet",
  "SWOP_Clonetrooper_101serg_helmet",
  "SWOP_Clonetrooper_101slicer_helmet",
  "SWOP_Clonetrooper_101med_helmet",
  "SWOP_Clonetrooper_101_helmet",
  "SWOP_Clonetrooper_104eib_helmet",
  "SWOP_Clonetrooper_104ringo_helmet",
  "SWOP_Clonetrooper_104_helmet",
  "SWOP_Clonetrooper_212blowback_helmet",
  "SWOP_Clonetrooper_212boil_helmet",
  "SWOP_Clonetrooper_212cody_helmet",
  "SWOP_Clonetrooper_212fox_helmet",
  "SWOP_Clonetrooper_212grebliep_helmet",
  "SWOP_Clonetrooper_212hoax_helmet",
  "SWOP_Clonetrooper_212jetski_helmet",
  "SWOP_Clonetrooper_212legacy_helmet",
  "SWOP_Clonetrooper_212lovecraft_helmet",
  "SWOP_Clonetrooper_212merek_helmet",
  "SWOP_Clonetrooper_212oddshot_helmet",
  "SWOP_Clonetrooper_212raptor_helmet",
  "SWOP_Clonetrooper_212savior_helmet",
  "SWOP_Clonetrooper_212scarecrow_helmet",
  "SWOP_Clonetrooper_212shadow_helmet",
  "SWOP_Clonetrooper_212sharp_helmet",
  "SWOP_Clonetrooper_212six_helmet",
  "SWOP_Clonetrooper_212spike_helmet",
  "SWOP_Clonetrooper_212walrus_helmet",
  "SWOP_Clonetrooper_212warrior_helmet",
  "SWOP_Clonetrooper_212waxer_helmet",
  "SWOP_Clonetrooper_212_helmet",
  "SWOP_Clonetrooper_212geon1_helmet",
  "SWOP_Clonetrooper_212geon2_helmet",
  "SWOP_Clonetrooper_327bly_helmet",
  "SWOP_Clonetrooper_327_helmet",
  "SWOP_Clonetrooper_332barks_helmet",
  "SWOP_Clonetrooper_332cores_helmet",
  "SWOP_Clonetrooper_332datus_helmet",
  "SWOP_Clonetrooper_332korin_helmet",
  "SWOP_Clonetrooper_332_helmet",
  "SWOP_Clonetrooper_41gree_helmet",
  "SWOP_Clonetrooper_41camo1_helmet",
  "SWOP_Clonetrooper_41camo2_helmet",
  "SWOP_Clonetrooper_41camo_helmet",
  "SWOP_Clonetrooper_442_helmet",
  "SWOP_Clonetrooper_501angel_helmet",
  "SWOP_Clonetrooper_501appo_helmet",
  "SWOP_Clonetrooper_501athena_helmet",
  "SWOP_Clonetrooper_501bobs_helmet",
  "SWOP_Clonetrooper_501bondoer_helmet",
  "SWOP_Clonetrooper_501calo_helmet",
  "SWOP_Clonetrooper_501clutch_helmet",
  "SWOP_Clonetrooper_501crusader_helmet",
  "SWOP_Clonetrooper_501darkstar_helmet",
  "SWOP_Clonetrooper_501delta_helmet",
  "SWOP_Clonetrooper_501diamond_helmet",
  "SWOP_Clonetrooper_501dino_helmet",
  "SWOP_Clonetrooper_501dogma_helmet",
  "SWOP_Clonetrooper_ECHO_helmet",
  "SWOP_Clonetrooper_501_exphelmet",
  "SWOP_Clonetrooper_501fives_helmet",
  "SWOP_Clonetrooper_501grant_helmet",
  "SWOP_Clonetrooper_501hardcase_helmet",
  "SWOP_Clonetrooper_501hawk_helmet",
  "SWOP_Clonetrooper_501hobo_helmet",
  "SWOP_Clonetrooper_501jarkow_helmet",
  "SWOP_Clonetrooper_501jax_helmet",
  "SWOP_Clonetrooper_501jay_helmet",
  "SWOP_Clonetrooper_501jesse_helmet",
  "SWOP_Clonetrooper_Kaser_helmet",
  "SWOP_Clonetrooper_501kilo_helmet",
  "SWOP_Clonetrooper_501king_helmet",
  "SWOP_Clonetrooper_501Kitty_helmet",
  "SWOP_Clonetrooper_501kix_helmet",
  "SWOP_Clonetrooper_501maverick_helmet",
  "SWOP_Clonetrooper_501nexu_helmet",
  "SWOP_Clonetrooper_501revan_helmet",
  "SWOP_Clonetrooper_501_Rookhelmet",
  "SWOP_Clonetrooper_501ruthless_helmet",
  "SWOP_Clonetrooper_501sabre_helmet",
  "SWOP_Clonetrooper_501scar_helmet",
  "SWOP_Clonetrooper_501_seashelmet",
  "SWOP_Clonetrooper_501slayer_helmet",
  "SWOP_Clonetrooper_501sorensic_helmet",
  "SWOP_Clonetrooper_501spar_helmet",
  "SWOP_Clonetrooper_501sparrow_helmet",
  "SWOP_Clonetrooper_501spidzer_helmet",
  "SWOP_Clonetrooper_501strike_helmet",
  "SWOP_Clonetrooper_501strips_helmet",
  "SWOP_Clonetrooper_501talverd_helmet",
  "SWOP_Clonetrooper_501texan_helmet",
  "SWOP_Clonetrooper_501tup_helmet",
  "SWOP_Clonetrooper_501_vethelmet",
  "SWOP_Clonetrooper_501wraith_helmet",
  "SWOP_Clonetrooper_501zipper_helmet",
  "SWOP_Clonetrooper_501_helmet",
  "SWOP_Clonetrooper_74cad_helmet",
  "SWOP_Clonetrooper_74finn_helmet",
  "SWOP_Clonetrooper_74jang_helmet",
  "SWOP_Clonetrooper_74rhino_helmet",
  "SWOP_Clonetrooper_74sage_helmet",
  "SWOP_Clonetrooper_74scalpel_helmet",
  "SWOP_Clonetrooper_74steamer_helmet",
  "SWOP_Clonetrooper_74zero_helmet",
  "SWOP_Clonetrooper_74_helmet",
  "SWOP_Clonetrooper_91_helmet",
  "SWOP_Clonetrooper_9drak_helmet",
  "SWOP_Clonetrooper_9scar_helmet",
  "SWOP_Clonetrooper_9wook_helmet",
  "SWOP_Clonetrooper_9_helmet",
  "SWOP_Clonetrooper_Bomb_helmet",
  "SWOP_Clonetrooper_CGbigmouth_helmet",
  "SWOP_Clonetrooper_CGfox_helmet",
  "SWOP_Clonetrooper_CGgrey_helmet",
  "SWOP_Clonetrooper_CGsoot_helmet",
  "SWOP_Clonetrooper_CGstyles_helmet",
  "SWOP_Clonetrooper_CGthorn_helmet",
  "SWOP_Clonetrooper_CG_helmet",
  "SWOP_Clonetrooper_jumper_helmet",
  "SWOP_Clonetrooper_KS_helmet",
  "SWOP_Clones_HUD",
  "SWOP_Clonetrooper_Katarn_armor",
  "SWOP_Clonetrooper_P1_ARC_captain_armor",
  "SWOP_Clonetrooper_P1_ARC_lieutenant_armor",
  "SWOP_Clonetrooper_P1_armor",
  "SWOP_Clonetrooper_P1_212cody_armor",
  "SWOP_Clonetrooper_P1_212waxer_boil_armor",
  "SWOP_Clonetrooper_P1_212_armor",
  "SWOP_Clonetrooper_P1_41buzz_armor",
  "SWOP_Clonetrooper_P1_41draa_armor",
  "SWOP_Clonetrooper_P1_41gree_armor",
  "SWOP_Clonetrooper_P1_41_armor",
  "SWOP_Clonetrooper_P1_501echo_armor",
  "SWOP_Clonetrooper_P1_501_armor",
  "SWOP_Clonetrooper_P1_captain_armor",
  "SWOP_Clonetrooper_P1_commander_armor",
  "SWOP_Clonetrooper_P1_CGstone_armor",
  "SWOP_Clonetrooper_P1_CG1_armor",
  "SWOP_Clonetrooper_P1_CG2_armor",
  "SWOP_Clonetrooper_P1_CG3_armor",
  "SWOP_Clonetrooper_P1_lieutenant_armor",
  "SWOP_Clonetrooper_P1_sergeant_armor",
  "SWOP_Clonetrooper_CGP1_armor_kama",
  "SWOP_Clonetrooper_P1_501_armor_pauldrons2",
  "SWOP_Clonetrooper_P1_501_armor_officer",
  "SWOP_Clonetrooper_P1_CGthire_armor_officer",
  "SWOP_Clonetrooper_P1_41_armor_grenade",
  "SWOP_Clonetrooper_helmet_p1",
  "SWOP_Clonetrooper_helmet_p1_212_boil",
  "SWOP_Clonetrooper_helmet_p1_212_cody",
  "SWOP_Clonetrooper_helmet_p1_212_hoax",
  "SWOP_Clonetrooper_helmet_p1_212_waxer",
  "SWOP_Clonetrooper_helmet_p1_212",
  "SWOP_Clonetrooper_helmet_p1_41buzz",
  "SWOP_Clonetrooper_helmet_p1_41draa",
  "SWOP_Clonetrooper_helmet_p1_41gree",
  "SWOP_Clonetrooper_helmet_p1_41",
  "SWOP_Clonetrooper_helmet_p1_501_denal",
  "SWOP_Clonetrooper_helmet_p1_501_echo",
  "SWOP_Clonetrooper_helmet_p1_501_fives",
  "SWOP_Clonetrooper_helmet_p1_501_mixer",
  "SWOP_Clonetrooper_helmet_p1_501_rex",
  "SWOP_Clonetrooper_helmet_p1_501",
  "SWOP_Clonetrooper_helmet_p1_74rhino",
  "SWOP_Clonetrooper_helmet_p1_74sage",
  "SWOP_Clonetrooper_helmet_p1_74zero",
  "SWOP_Clonetrooper_helmet_p1_74",
  "SWOP_Clonetrooper_helmet_p1_captain",
  "SWOP_Clonetrooper_helmet_p1_commander",
  "SWOP_Clonetrooper_helmet_p1_CGstone",
  "SWOP_Clonetrooper_helmet_p1_CGthire",
  "SWOP_Clonetrooper_helmet_p1_CG1",
  "SWOP_Clonetrooper_helmet_p1_CG2",
  "SWOP_Clonetrooper_helmet_p1_CG3",
  "SWOP_Clonetrooper_helmet_p1_lieutenant",
  "SWOP_Clonetrooper_helmet_p1_sergeant",
  "SWOP_Clonetrooper_P1_F_CombatUniform",
  "SWOP_Clonetrooper_P1_212cody_F_CombatUniform",
  "SWOP_Clonetrooper_P1_212waxer_boil_F_CombatUniform",
  "SWOP_Clonetrooper_P1_212_F_CombatUniform",
  "SWOP_Clonetrooper_P1_41buzz_F_CombatUniform",
  "SWOP_Clonetrooper_P1_41draa_F_CombatUniform",
  "SWOP_Clonetrooper_P1_41gree_F_CombatUniform",
  "SWOP_Clonetrooper_P1_41_F_CombatUniform",
  "SWOP_Clonetrooper_P1_501echo_F_CombatUniform",
  "SWOP_Clonetrooper_P1_501fives_F_CombatUniform",
  "SWOP_Clonetrooper_P1_501rex_F_CombatUniform",
  "SWOP_Clonetrooper_P1_501_F_CombatUniform",
  "SWOP_Clonetrooper_P1_captain_F_CombatUniform",
  "SWOP_Clonetrooper_P1_commander_F_CombatUniform",
  "SWOP_Clonetrooper_P1_CGstone_F_CombatUniform",
  "SWOP_Clonetrooper_P1_CGthire_F_CombatUniform",
  "SWOP_Clonetrooper_P1_CG1_F_CombatUniform",
  "SWOP_Clonetrooper_P1_CG2_F_CombatUniform",
  "SWOP_Clonetrooper_P1_CG3_F_CombatUniform",
  "SWOP_Clonetrooper_P1_lieutenant_F_CombatUniform",
  "SWOP_Clonetrooper_P1_sergeant_F_CombatUniform",
  "SWOP_Clonetrooper_P2_501_armor_officer",
  "SWOP_Clonetrooper_P2_501_armorkama_officer",
  "SWOP_Clonetrooper_armor_ATRT",
  "SWOP_Clonetrooper_armor_recon",
  "SWOP_Clonetrooper_101_armor_recon",
  "SWOP_Clonetrooper_104_armor_recon",
  "SWOP_Clonetrooper_212_armor_recon",
  "SWOP_Clonetrooper_212geon1_armor_recon",
  "SWOP_Clonetrooper_212geon2_armor_recon",
  "SWOP_Clonetrooper_332_armor_recon",
  "SWOP_Clonetrooper_41camo1_armor_recon",
  "SWOP_Clonetrooper_41camo2_armor_recon",
  "SWOP_Clonetrooper_41_armor_recon",
  "SWOP_Clonetrooper_442_armor_recon",
  "SWOP_Clonetrooper_501_armor_recon",
  "SWOP_Clonetrooper_74_armor_recon",
  "SWOP_Clonetrooper_91_armor_recon",
  "SWOP_Clonetrooper_9_armor_recon",
  "SWOP_Clonetrooper_CGgrey_armor_recon",
  "SWOP_Clonetrooper_CG_armor_recon",
  "SWOP_Clonetrooper_armor_recon2",
  "SWOP_Clonetrooper_101_armor_recon2",
  "SWOP_Clonetrooper_41camo1_armor_recon2",
  "SWOP_Clonetrooper_41camo2_armor_recon2",
  "SWOP_Clonetrooper_501sparrow_armor_recon2",
  "SWOP_Clonetrooper_501_armor_recon2",
  "SWOP_Clonetrooper_74zero_armor_recon2",
  "SWOP_Clonetrooper_74_armor_recon2",
  "SWOP_Clonetrooper_91_armor_recon2",
  "SWOP_Clonetrooper_F_CombatUniform",
  "SWOP_Clonetrooper_101doom_F_CombatUniform",
  "SWOP_Clonetrooper_101omega_F_CombatUniform",
  "SWOP_Clonetrooper_101_F_CombatUniform",
  "SWOP_Clonetrooper_104_F_CombatUniform",
  "SWOP_Clonetrooper_212cody_F_CombatUniform",
  "SWOP_Clonetrooper_212waxer_boil_F_CombatUniform",
  "SWOP_Clonetrooper_212_F_CombatUniform",
  "SWOP_Clonetrooper_212geon1_F_CombatUniform",
  "SWOP_Clonetrooper_212geon2_F_CombatUniform",
  "SWOP_Clonetrooper_327bly_F_CombatUniform",
  "SWOP_Clonetrooper_327_F_CombatUniform",
  "SWOP_Clonetrooper_332_F_CombatUniform",
  "SWOP_Clonetrooper_41gree_F_CombatUniform",
  "SWOP_Clonetrooper_41camo1_F_CombatUniform",
  "SWOP_Clonetrooper_41camo2_F_CombatUniform",
  "SWOP_Clonetrooper_41_F_CombatUniform",
  "SWOP_Clonetrooper_442_F_CombatUniform",
  "SWOP_Clonetrooper_501bobs_F_CombatUniform",
  "SWOP_Clonetrooper_501cadet_F_CombatUniform",
  "SWOP_Clonetrooper_501corporal_F_CombatUniform",
  "SWOP_Clonetrooper_501diamond_F_CombatUniform",
  "SWOP_Clonetrooper_501dogma_F_CombatUniform",
  "SWOP_Clonetrooper_501hardcase_F_CombatUniform",
  "SWOP_Clonetrooper_501jesse_F_CombatUniform",
  "SWOP_Clonetrooper_501kix_F_CombatUniform",
  "SWOP_Clonetrooper_501sargeant_F_CombatUniform",
  "SWOP_Clonetrooper_501sparrow_F_CombatUniform",
  "SWOP_Clonetrooper_501srtrooper_F_CombatUniform",
  "SWOP_Clonetrooper_501trooper_F_F_CombatUniform",
  "SWOP_Clonetrooper_501tup_F_CombatUniform",
  "SWOP_Clonetrooper_501_F_CombatUniform",
  "SWOP_Clonetrooper_612_F_CombatUniform",
  "SWOP_Clonetrooper_612com_F_CombatUniform",
  "SWOP_Clonetrooper_74sage_F_CombatUniform",
  "SWOP_Clonetrooper_74scalpel_F_CombatUniform",
  "SWOP_Clonetrooper_74_F_CombatUniform",
  "SWOP_Clonetrooper_9drak_F_CombatUniform",
  "SWOP_Clonetrooper_9_F_CombatUniform",
  "SWOP_Clonetrooper_ARFcamo_F_CombatUniform",
  "SWOP_Clonetrooper_ATRTDriver_F_CombatUniform",
  "SWOP_Clonetrooper_Bomb_F_CombatUniform",
  "SWOP_Clonetrooper_CGfox_F_CombatUniform",
  "SWOP_Clonetrooper_CGgrey_F_CombatUniform",
  "SWOP_Clonetrooper_CGds_F_CombatUniform",
  "SWOP_Clonetrooper_CG_F_CombatUniform",
  "SWOP_Clonetrooper_jumper_F_CombatUniform",
  "SWOP_Clonetrooper_KS_F_CombatUniform",
  "SWOP_CommanderBacara_helmet",
  "SWOP_ImpGABron",
  "SWOP_jedi_vest_invisible",
  "SWOP_skywalker_jediorder_cape",
  "SWOP_Jedi_hero_F_CombatUniform",
  "SWOP_Jedi_hero2_F_CombatUniform",
  "SWOP_Jedi_mantle_F_CombatUniform",
  "SWOP_Jedi_mantle2_F_CombatUniform",
  "SWOP_jedi_padawan_F_CombatUniform",
  "SWOP_Jedi_pallium_F_CombatUniform",
  "SWOP_Jedi_temple_F_CombatUniform",
  "SWOP_Jedi_training_F_CombatUniform",
  "SWOP_ImpLton",
  "TFAR_anprc152",
  "ItemCompass",
  "ItemGPS",
  "ItemMap",
  "SWOP_NVChipClean",
  "SWOP_NVChip",
  "SWOP_NVChip2",
  "ToolKit",
  "ItemWatch"
];

_magazines = [
  "rflame_Mag",
  "SWOP_CR2_Blaster_Mag",
  "SWOP_DC15_Mag",
  "SWOP_DC15_UW_Mag",
  "SWOP_DC15ABlasterRifle_Mag",
  "SWOP_DC15ABlasterRifle_Full_Mag",
  "SWOP_DC15ABlasterRifle_Low_Mag",
  "SWOP_DC15_UW_Mag",
  "DCStun_Mag",
  "SWOP_dc15xBlasterRifle_Mag",
  "SWOP_DC17M_AT_Mag",
  "SWOP_DC17M_Mag",
  "SWOP_DC17M_UW_Mag",
  "SWOP_DC17M_Sniper_Mag",
  "swop_RepShotgun_Mag",
  "SWOP_DTL20BlasterRifle_Mag",
  "swop_e11b_Mag",
  "E11Stun_Mag",
  "SWOP_E11SBlasterRifle_Mag",
  "SWOP_Valken38XBlasterRifle_Mag",
  "SWOP_WESTARM5_Mag",
  "WestarM5grenade_Mag",
  "SWOP_DC15SAPistol_Mag",
  "SWOP_DC17Pistol_Mag",
  "SWOP_scoutPistol_Mag",
  "Rocket_F",
  "RocketRPS6_F","RocketRPS6HEATFF_Mag",
  "SW_PersonalShield_Mag",
  "SW_halfshield_Mag",
  "SW_SquadShield_Mag",
  "SW_SquadShield_magCARGA",
  "SWOP_bacta_G",
  "SWOP_BCCKtermimploder_G",
  "SWOP_BCCKstermDet_G",
  "swop_termDetDT_G",
  "SWOP_termDet_G",
  "SWOP_termDet_Gm",
  "SWOP_SCAR_DioxisGM",
  "SWOP_SCAR_EMP_GrenadeGM",
  "swop_EMP_Remote_Mag",
  "TermMine_Mag",
  "TermMineB_Mag",
  "TermMineC_Mag",
  "swop_mag_flashbang",
  "swop_mag_gimpact",
  "swop_mag_incendiary",
  "swop_SmokeShell",
  "SWOPthrowablectype",
  "SWOPthrowableExplosive",
  "B_IR_Grenade",
  "DemoCharge_Remote_Mag",
  "SmokeShellBlue",
  "SmokeShellGreen",
  "SmokeShellOrange",
  "SmokeShellPurple",
  "SmokeShellRed",
  "SmokeShellYellow",
  "SatchelCharge_Remote_Mag",
  "SmokeShell"
];

_ACE = [
  "ACE_VMM3",
  "ACE_fieldDressing",
  "ACE_packingBandage",
  "ACE_elasticBandage",
  "ACE_tourniquet",
  "ACE_morphine",
  "ACE_adenosine",
  "ACE_atropine",
  "ACE_epinephrine",
  "ACE_plasmaIV",
  "ACE_plasmaIV_500",
  "ACE_plasmaIV_250",
  "ACE_salineIV",
  "ACE_salineIV_500",
  "ACE_salineIV_250",
  "ACE_bloodIV",
  "ACE_bloodIV_500",
  "ACE_bloodIV_250",
  "ACE_quikclot",
  "ACE_personalAidKit",
  "ACE_surgicalKit",
  "ACE_bodyBag",
  "ACE_wirecutter",
  "ACE_Sandbag_empty",
  "ACE_SpraypaintBlack",
  "ACE_SpraypaintRed",
  "ACE_SpraypaintBlue",
  "ACE_SpraypaintGreen",
  "ACE_EntrenchingTool",
  "ACE_Tripod",
  "ACE_CableTie",
  "ACE_Chemlight_Shield",
  "ACE_Clacker",
  "ACE_M26_Clacker",
  "ACE_DefusalKit",
  "ACE_DeadManSwitch",
  "ACE_Flashlight_MX991",
  "ACE_Flashlight_KSF1",
  "ACE_Flashlight_XL50",
  "ACE_EarPlugs",
  "adv_aceSplint_splint"
];

_attachments = [];
{
    {
        _attachments pushBackUnique _x;
    } forEach ([_x] call CBA_fnc_compatibleItems);
} forEach _weapons;

//Adding Itemlists to the Arsenal
[_box,(_items + _backpacks + _magazines + _weapons + _ACE + _attachments),true] call ace_arsenal_fnc_initBox;

[_box,["<img image='\a3\ui_f\data\IGUI\Cfg\simpleTasks\types\box_ca.paa' /> Open Arsenal",{[(_this select 0), player,false] call ace_arsenal_fnc_openBox;}]] remoteExec ["addAction",0,true];
