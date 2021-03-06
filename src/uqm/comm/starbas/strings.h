//Copyright Paul Reiche, Fred Ford. 1992-2002
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef STARBAS_STRINGS_H
#define STARBAS_STRINGS_H

enum
{
	NULL_PHRASE,
	BEFORE_WE_GO_ON_1,
	BEFORE_WE_GO_ON_2,
	BEFORE_WE_GO_ON_3,
	BEFORE_WE_GO_ON_4,
	BEFORE_WE_GO_ON_5,
	BEFORE_WE_GO_ON_6,
	BEFORE_WE_GO_ON_7,
	NORMAL_HELLO_A0,
	NORMAL_HELLO_A1,
	NORMAL_HELLO_B0,
	NORMAL_HELLO_B1,
	NORMAL_HELLO_C0,
	NORMAL_HELLO_C1,
	NORMAL_HELLO_D0,
	NORMAL_HELLO_D1,
	NORMAL_HELLO_E0,
	NORMAL_HELLO_E1,
	NORMAL_HELLO_F0,
	NORMAL_HELLO_F1,
	NORMAL_HELLO_G0,
	NORMAL_HELLO_G1,
	NORMAL_HELLO_H0,
	NORMAL_HELLO_H1,
	RETURN_HELLO,
	NORMAL_HELLO_TAIL,
	NORMAL_GOODBYE_A0,
	NORMAL_GOODBYE_A1,
	NORMAL_GOODBYE_B0,
	NORMAL_GOODBYE_B1,
	NORMAL_GOODBYE_C0,
	NORMAL_GOODBYE_C1,
	NORMAL_GOODBYE_D0,
	NORMAL_GOODBYE_D1,
	NORMAL_GOODBYE_E0,
	NORMAL_GOODBYE_E1,
	NORMAL_GOODBYE_F0,
	NORMAL_GOODBYE_F1,
	NORMAL_GOODBYE_G0,
	NORMAL_GOODBYE_G1,
	NORMAL_GOODBYE_H0,
	NORMAL_GOODBYE_H1,
	LIGHT_LOAD_A0,
	LIGHT_LOAD_A1,
	LIGHT_LOAD_B0,
	LIGHT_LOAD_B1,
	LIGHT_LOAD_C0,
	LIGHT_LOAD_C1,
	LIGHT_LOAD_D0,
	LIGHT_LOAD_D1,
	LIGHT_LOAD_E0,
	LIGHT_LOAD_E1,
	LIGHT_LOAD_F0,
	LIGHT_LOAD_F1,
	LIGHT_LOAD_G0,
	LIGHT_LOAD_G1,
	MEDIUM_LOAD_A0,
	MEDIUM_LOAD_A1,
	MEDIUM_LOAD_B0,
	MEDIUM_LOAD_B1,
	MEDIUM_LOAD_C0,
	MEDIUM_LOAD_C1,
	MEDIUM_LOAD_D0,
	MEDIUM_LOAD_D1,
	MEDIUM_LOAD_E0,
	MEDIUM_LOAD_E1,
	MEDIUM_LOAD_F0,
	MEDIUM_LOAD_F1,
	MEDIUM_LOAD_G0,
	MEDIUM_LOAD_G1,
	HEAVY_LOAD_A0,
	HEAVY_LOAD_A1,
	HEAVY_LOAD_B0,
	HEAVY_LOAD_B1,
	HEAVY_LOAD_C0,
	HEAVY_LOAD_C1,
	HEAVY_LOAD_D0,
	HEAVY_LOAD_D1,
	HEAVY_LOAD_E0,
	HEAVY_LOAD_E1,
	HEAVY_LOAD_F0,
	HEAVY_LOAD_F1,
	HEAVY_LOAD_G0 ,
	HEAVY_LOAD_G1,
	STARBASE_IS_READY_A,
	STARBASE_IS_READY_B,
	STARBASE_IS_READY_C,
	WHAT_KIND_OF_INFO,
	WHICH_FUNCTION,
	WHICH_HISTORY,
	WHICH_MISSION,
	OK_NO_NEED_INFO,
	ABOUT_FUEL,
	ABOUT_MODULES,
	ABOUT_CREW0,
	ABOUT_CREW1,
	ABOUT_SHIPS,
	ABOUT_RU,
	ABOUT_MINERALS,
	ABOUT_LIFE,
	OK_ENOUGH_STARBASE,
	OK_ENOUGH_MISSION,
	GET_MINERALS,
	ABOUT_ALIENS,
	MUST_DEFEAT,
	DEFEAT_LIKE_SO,
	FIND_URQUAN,
	FIGHT_URQUAN,
	ALLY_LIKE_SO,
	STRONG_LIKE_SO,
	OK_ENOUGH_DEFEAT,
	WHICH_ALIEN,
	WHICH_WAR,
	WHICH_ANCIENT,
	OK_ENOUGH_HISTORY,
	WHICH_ALLIANCE,
	WHICH_HIERARCHY,
	ABOUT_OTHER,
	OK_ENOUGH_ALIENS,
	ABOUT_SHOFIXTI,
	ABOUT_YEHAT,
	ABOUT_ARILOU,
	ABOUT_CHENJESU,
	ABOUT_MMRNMHRM,
	ABOUT_SYREEN,
	OK_ENOUGH_ALLIANCE,
	ABOUT_URQUAN,
	ABOUT_MYCON,
	ABOUT_SPATHI,
	ABOUT_UMGAH,
	ABOUT_ANDROSYNTH,
	ABOUT_VUX,
	ABOUT_ILWRATH,
	OK_ENOUGH_HIERARCHY,
	ABOUT_PRECURSORS,
	ABOUT_OLD_RACES,
	ABOUT_ALIENS_ON_EARTH,
	OK_ENOUGH_ANCIENT,
	URQUAN_STARTED_WAR,
	WAR_WAS_LIKE_SO,
	LOST_WAR_BECAUSE,
	AFTER_WAR,
	OK_ENOUGH_WAR,
	STARBASE_BULLETIN_TAIL,
	BETWEEN_BULLETINS,
	STARBASE_BULLETIN_1,
	STARBASE_BULLETIN_2,
	STARBASE_BULLETIN_3,
	STARBASE_BULLETIN_4,
	STARBASE_BULLETIN_5,
	STARBASE_BULLETIN_6,
	STARBASE_BULLETIN_7,
	STARBASE_BULLETIN_8,
	STARBASE_BULLETIN_9,
	STARBASE_BULLETIN_10,
	STARBASE_BULLETIN_11,
	STARBASE_BULLETIN_12,
	STARBASE_BULLETIN_13,
	STARBASE_BULLETIN_14,
	STARBASE_BULLETIN_15,
	STARBASE_BULLETIN_16,
	STARBASE_BULLETIN_18,
	STARBASE_BULLETIN_19,
	STARBASE_BULLETIN_22,
	STARBASE_BULLETIN_27,
	STARBASE_BULLETIN_28,
	STARBASE_BULLETIN_29,
	STARBASE_BULLETIN_30,
	DEVICE_HEAD,
	BETWEEN_DEVICES,
	DEVICE_TAIL,
	ABOUT_PORTAL,
	ABOUT_TALKPET,
	ABOUT_BOMB,
	ABOUT_SUN,
	ABOUT_MAIDENS,
	ABOUT_SPHERE,
	ABOUT_HELIX,
	ABOUT_SPINDLE,
	ABOUT_ULTRON_0,
	ABOUT_ULTRON_1,
	ABOUT_ULTRON_2,
	ABOUT_ULTRON_3,
	ABOUT_UCASTER,
	ABOUT_BCASTER,
	ABOUT_SHIELD,
	ABOUT_EGGCASE_0,
	ABOUT_SHUTTLE,
	ABOUT_VUXBEAST0,
	ABOUT_VUXBEAST1,
	ABOUT_DESTRUCT,
	ABOUT_WARPPOD,
	ABOUT_ARTIFACT_2,
	ABOUT_ARTIFACT_3,
	LETS_SEE,
	GO_GET_MINERALS,
	IMPROVE_FLAGSHIP_WITH_RU,
	GOT_OK_FLAGSHIP,
	GO_ALLY_WITH_ALIENS,
	MADE_SOME_ALLIES,
	GET_SHIPS_BY_MINING_OR_ALLIANCE,
	GOT_OK_FLEET,
	BUY_COMBAT_SHIPS,
	GO_LEARN_ABOUT_URQUAN,
	MAKE_FLAGSHIP_AWESOME,
	KNOW_ABOUT_SAMATRA,
	GOT_AWESOME_FLAGSHIP,
	GOT_BOMB,
	FIND_WAY_TO_DESTROY_SAMATRA,
	MUST_INCREASE_BOMB_STRENGTH,
	MUST_ACQUIRE_AWESOME_FLEET,
	MUST_ELIMINATE_URQUAN_GUARDS,
	CHMMR_IMPROVED_BOMB,
	GOT_AWESOME_FLEET,
	GO_DESTROY_SAMATRA,
	GOOD_LUCK_AGAIN,
	IMPROVE_1,
	IMPROVE_2,
	NEED_THRUSTERS_1,
	NEED_THRUSTERS_2,
	NEED_TURN_1,
	NEED_TURN_2,
	NEED_GUNS_1,
	NEED_GUNS_2,
	NEED_CREW_1,
	NEED_CREW_2,
	NEED_FUEL_1,
	NEED_FUEL_2,
	NEED_STORAGE_1,
	NEED_LANDERS_2,
	NEED_LANDERS_1,
	NEED_DYNAMOS_1,
	NEED_DYNAMOS_2,
	NEED_POINT,

	have_minerals,
	goodbye_commander,
	repeat_bulletins,
	need_info,
	starbase_functions,
	history,
	our_mission,
	no_need_info,
	enough_starbase,
	enough_mission,
	tell_me_about_fuel0,
	tell_me_about_fuel1,
	tell_me_about_modules0,
	tell_me_about_modules1,
	tell_me_about_crew,
	tell_me_about_ships,
	tell_me_about_ru,
	tell_me_about_minerals,
	tell_me_about_life,
	where_get_minerals,
	what_about_aliens,
	what_about_urquan,
	how_defeat,
	how_find_urquan,
	how_fight_urquan,
	how_ally,
	enough_defeat,
	alien_races,
	the_war,
	ancient_history,
	enough_history,
	what_about_alliance,
	what_about_hierarchy,
	what_about_other,
	enough_aliens,
	shofixti,
	yehat,
	arilou,
	chenjesu,
	mmrnmhrm,
	syreen,
	enough_alliance,
	urquan,
	mycon,
	spathi,
	umgah,
	androsynth,
	vux,
	ilwrath,
	enough_hierarchy,
	precursors,
	old_races,
	aliens_on_earth,
	enough_ancient,
	what_started_war,
	what_was_war_like,
	why_lose_war,
	what_after_war,
	enough_war,
	new_devices,
	how_get_strong,
	what_do_now,
	YOUR_FLAGSHIP_PC,
	YOUR_FLAGSHIP_3DO0,
	YOUR_FLAGSHIP_3DO1,
	YOUR_FLAGSHIP_3DO2,
	SPACE,
};

#endif /* _STRINGS_H */
