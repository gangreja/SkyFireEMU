/*
 * Copyright (C) 2005-2011 MaNGOS <http://www.getmangos.com/>
 *
 * Copyright (C) 2008-2011 Trinity <http://www.trinitycore.org/>
 *
 * Copyright (C) 2010-2011 Project SkyFire <http://www.projectskyfire.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

/// \addtogroup u2w
/// @{
/// \file

#ifndef _OPCODES_H
#define _OPCODES_H

#include "Common.h"

// Note: this include need for be sure have full definition of class WorldSession
//       if this class definition not complete then VS for x64 release use different size for
//       struct OpcodeHandler in this header and Opcode.cpp and get totally wrong data from
//       table opcodeTable in source when Opcode.h included but WorldSession.h not included
#include "WorldSession.h"

#define OPCODE_NOT_FOUND 0x10000

/// List of Opcodes
enum Opcodes
{
    CMSG_ACCEPT_LEVEL_GRANT,
    CMSG_ACCEPT_TRADE,
    CMSG_ACTIVATETAXI,
    CMSG_ACTIVATETAXIEXPRESS,
    CMSG_ACTIVE_PVP_CHEAT,
    CMSG_ADD_FRIEND,
    CMSG_ADD_IGNORE,
    CMSG_ADD_PVP_MEDAL_CHEAT,
    CMSG_ADD_VOICE_IGNORE,
    CMSG_ALTER_APPEARANCE,
    CMSG_AREATRIGGER,
    CMSG_AREA_SPIRIT_HEALER_QUERY,
    CMSG_AREA_SPIRIT_HEALER_QUEUE,
    CMSG_ARENA_TEAM_ACCEPT,
    CMSG_ARENA_TEAM_CREATE,
    CMSG_ARENA_TEAM_DECLINE,
    CMSG_ARENA_TEAM_DISBAND,
    CMSG_ARENA_TEAM_INVITE,
    CMSG_ARENA_TEAM_LEADER,
    CMSG_ARENA_TEAM_LEAVE,
    CMSG_ARENA_TEAM_QUERY,
    CMSG_ARENA_TEAM_REMOVE,
    CMSG_ARENA_TEAM_ROSTER,
    CMSG_ATTACKSTOP,
    CMSG_ATTACKSWING,
    CMSG_AUCTION_LIST_BIDDER_ITEMS,
    CMSG_AUCTION_LIST_ITEMS,
    CMSG_AUCTION_LIST_OWNER_ITEMS,
    CMSG_AUCTION_LIST_PENDING_SALES,
    CMSG_AUCTION_PLACE_BID,
    CMSG_AUCTION_REMOVE_ITEM,
    CMSG_AUCTION_SELL_ITEM,
    CMSG_AUTH_SESSION,
    CMSG_AUTOBANK_ITEM,
    CMSG_AUTOEQUIP_GROUND_ITEM,
    CMSG_AUTOEQUIP_ITEM,
    CMSG_AUTOEQUIP_ITEM_SLOT,
    CMSG_AUTOSTORE_BAG_ITEM,
    CMSG_AUTOSTORE_BANK_ITEM,
    CMSG_AUTOSTORE_GROUND_ITEM,
    CMSG_AUTOSTORE_LOOT_ITEM,
    CMSG_AUTO_DECLINE_GUILD_INVITES,
    CMSG_BANKER_ACTIVATE,
    CMSG_BATTLEFIELD_JOIN,
    CMSG_BATTLEFIELD_LIST,
    CMSG_BATTLEFIELD_MGR_ENTRY_INVITE_RESPONSE,
    CMSG_BATTLEFIELD_MGR_EXIT_REQUEST,
    CMSG_BATTLEFIELD_MGR_QUEUE_INVITE_RESPONSE,
    CMSG_BATTLEFIELD_MGR_QUEUE_REQUEST,
    CMSG_BATTLEFIELD_PORT,
    CMSG_BATTLEFIELD_REQUEST_SCORE_DATA,
    CMSG_BATTLEFIELD_STATUS,
    CMSG_BATTLEGROUND_PLAYER_POSITIONS,
    CMSG_BATTLEMASTER_HELLO,
    CMSG_BATTLEMASTER_JOIN,
    CMSG_BATTLEMASTER_JOIN_ARENA,
    CMSG_BATTLEMASTER_JOIN_RATED,
    CMSG_BEGIN_TRADE,
    CMSG_BINDER_ACTIVATE,
    CMSG_BOT_DETECTED,
    CMSG_BOT_DETECTED2,
    CMSG_BUG,
    CMSG_BUSY_TRADE,
    CMSG_BUYBACK_ITEM,
    CMSG_BUY_BANK_SLOT,
    CMSG_BUY_ITEM,
    CMSG_BUY_LOTTERY_TICKET_OBSOLETE,
    CMSG_CALENDAR_ADD_EVENT,
    CMSG_CALENDAR_ARENA_TEAM,
    CMSG_CALENDAR_COMPLAIN,
    CMSG_CALENDAR_CONTEXT_EVENT_SIGNUP,
    CMSG_CALENDAR_COPY_EVENT,
    CMSG_CALENDAR_EVENT_INVITE,
    CMSG_CALENDAR_EVENT_MODERATOR_STATUS,
    CMSG_CALENDAR_EVENT_REMOVE_INVITE,
    CMSG_CALENDAR_EVENT_RSVP,
    CMSG_CALENDAR_EVENT_STATUS,
    CMSG_CALENDAR_GET_CALENDAR,
    CMSG_CALENDAR_GET_EVENT,
    CMSG_CALENDAR_GET_NUM_PENDING,
    CMSG_CALENDAR_GUILD_FILTER,
    CMSG_CALENDAR_REMOVE_EVENT,
    CMSG_CALENDAR_UPDATE_EVENT,
    CMSG_CANCEL_AURA,
    CMSG_CANCEL_AUTO_REPEAT_SPELL,
    CMSG_CANCEL_CAST,
    CMSG_CANCEL_CHANNELLING,
    CMSG_CANCEL_GROWTH_AURA,
    CMSG_CANCEL_MOUNT_AURA,
    CMSG_CANCEL_TEMP_ENCHANTMENT,
    CMSG_CANCEL_TRADE,
    CMSG_CAST_SPELL,
    CMSG_CHANGE_PERSONAL_ARENA_RATING,
    CMSG_CHANGE_SEATS_ON_CONTROLLED_VEHICLE,
    CMSG_CHANNEL_ANNOUNCEMENTS,
    CMSG_CHANNEL_BAN,
    CMSG_CHANNEL_DISPLAY_LIST,
    CMSG_CHANNEL_INVITE,
    CMSG_CHANNEL_KICK,
    CMSG_CHANNEL_LIST,
    CMSG_CHANNEL_MODERATE,
    CMSG_CHANNEL_MODERATOR,
    CMSG_CHANNEL_MUTE,
    CMSG_CHANNEL_OWNER,
    CMSG_CHANNEL_PASSWORD,
    CMSG_CHANNEL_ROSTER_INFO,
    CMSG_CHANNEL_SET_OWNER,
    CMSG_CHANNEL_SILENCE_ALL,
    CMSG_CHANNEL_SILENCE_VOICE,
    CMSG_CHANNEL_UNBAN,
    CMSG_CHANNEL_UNMODERATOR,
    CMSG_CHANNEL_UNMUTE,
    CMSG_CHANNEL_UNSILENCE_ALL,
    CMSG_CHANNEL_UNSILENCE_VOICE,
    CMSG_CHANNEL_VOICE_OFF,
    CMSG_CHANNEL_VOICE_ON,
    CMSG_CHARACTER_POINT_CHEAT,
    CMSG_CHAR_CREATE,
    CMSG_CHAR_CUSTOMIZE,
    CMSG_CHAR_DELETE,
    CMSG_CHAR_ENUM,
    CMSG_CHAR_FACTION_CHANGE,
    CMSG_CHAR_RACE_CHANGE,
    CMSG_CHAR_RENAME,
    CMSG_CHAT_FILTERED,
    CMSG_CHAT_IGNORED,
    CMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY,
    CMSG_CHEAT_PLAYER_LOGIN,
    CMSG_CHEAT_PLAYER_LOOKUP,
    CMSG_CHEAT_SET_ARENA_CURRENCY,
    CMSG_CHEAT_SET_HONOR_CURRENCY,
    CMSG_CHECK_LOGIN_CRITERIA,
    CMSG_CLEAR_CHANNEL_WATCH,
    CMSG_CLEAR_EXPLORATION,
    CMSG_CLEAR_SERVER_BUCK_DATA,
    CMSG_CLEAR_TRADE_ITEM,
    CMSG_COMMENTATOR_ENABLE,
    CMSG_COMMENTATOR_ENTER_INSTANCE,
    CMSG_COMMENTATOR_EXIT_INSTANCE,
    CMSG_COMMENTATOR_GET_MAP_INFO,
    CMSG_COMMENTATOR_GET_PLAYER_INFO,
    CMSG_COMMENTATOR_INSTANCE_COMMAND,
    CMSG_COMMENTATOR_SKIRMISH_QUEUE_COMMAND,
    CMSG_COMMENTATOR_START_WARGAME,
    CMSG_COMPLAIN,
    CMSG_COMPLETE_ACHIEVEMENT_CHEAT,
    CMSG_COMPLETE_CINEMATIC,
    CMSG_COMPLETE_MOVIE,
    CMSG_CONTACT_LIST,
    CMSG_CORPSE_MAP_POSITION_QUERY,
    CMSG_CREATURE_QUERY,
    CMSG_DANCE_QUERY,
    CMSG_DEBUG_ACTIONS_START,
    CMSG_DEBUG_ACTIONS_STOP,
    CMSG_DEBUG_LIST_TARGETS,
    CMSG_DECHARGE,
    CMSG_DECLINE_CHANNEL_INVITE,
    CMSG_DELETE_DANCE,
    CMSG_DEL_FRIEND,
    CMSG_DEL_IGNORE,
    CMSG_DEL_PVP_MEDAL_CHEAT,
    CMSG_DEL_VOICE_IGNORE,
    CMSG_DESTROYITEM,
    CMSG_DESTROY_ITEMS,
    CMSG_DISMISS_CONTROLLED_VEHICLE,
    CMSG_DISMISS_CRITTER,
    CMSG_DUEL_ACCEPTED,
    CMSG_DUEL_CANCELLED,
    CMSG_DUMP_OBJECTS,
    CMSG_EJECT_PASSENGER,
    CMSG_EMOTE,
    CMSG_ENABLETAXI,
    CMSG_ENABLE_DAMAGE_LOG,
    CMSG_EQUIPMENT_SET_DELETE,
    CMSG_EQUIPMENT_SET_SAVE,
    CMSG_EQUIPMENT_SET_USE,
    CMSG_EXPIRE_RAID_INSTANCE,
    CMSG_FAR_SIGHT,
    CMSG_FLOOD_GRACE_CHEAT,
    CMSG_FORCE_FLIGHT_BACK_SPEED_CHANGE_ACK,
    CMSG_FORCE_FLIGHT_SPEED_CHANGE_ACK,
    CMSG_FORCE_MOVE_ROOT_ACK,
    CMSG_FORCE_MOVE_UNROOT_ACK,
    CMSG_FORCE_PITCH_RATE_CHANGE_ACK,
    CMSG_FORCE_RUN_BACK_SPEED_CHANGE_ACK,
    CMSG_FORCE_RUN_SPEED_CHANGE_ACK,
    CMSG_FORCE_SAY_CHEAT,
    CMSG_FORCE_SWIM_BACK_SPEED_CHANGE_ACK,
    CMSG_FORCE_SWIM_SPEED_CHANGE_ACK,
    CMSG_FORCE_TURN_RATE_CHANGE_ACK,
    CMSG_FORCE_UNK1_SPEED_CHANGE_ACK,
    CMSG_FORCE_UNK2_SPEED_CHANGE_ACK,
    CMSG_FORCE_WALK_SPEED_CHANGE_ACK,
    CMSG_GAMEOBJECT_QUERY,
    CMSG_GAMEOBJ_REPORT_USE,
    CMSG_GAMEOBJ_USE,
    CMSG_GAMESPEED_SET,
    CMSG_GAMETIME_SET,
    CMSG_GETDEATHBINDZONE,
    CMSG_GET_CHANNEL_MEMBER_COUNT,
    CMSG_GET_MAIL_LIST,
    CMSG_GET_MIRRORIMAGE_DATA,
    CMSG_GHOST,
    CMSG_GMRESPONSE_RESOLVE,
    CMSG_GMSURVEY_SUBMIT,
    CMSG_GMTICKETSYSTEM_TOGGLE,
    CMSG_GMTICKET_CREATE,
    CMSG_GMTICKET_DELETETICKET,
    CMSG_GMTICKET_GETTICKET,
    CMSG_GMTICKET_SYSTEMSTATUS,
    CMSG_GMTICKET_UPDATETEXT,
    CMSG_GM_CHARACTER_RESTORE,
    CMSG_GM_CHARACTER_SAVE,
    CMSG_GM_CREATE_ITEM_TARGET,
    CMSG_GM_DESTROY_ONLINE_CORPSE,
    CMSG_GM_INVIS,
    CMSG_GM_NUKE,
    CMSG_GM_NUKE_ACCOUNT,
    CMSG_GM_REPORT_LAG,
    CMSG_GM_SET_SECURITY_GROUP,
    CMSG_GM_SHOW_COMPLAINTS,
    CMSG_GM_TEACH,
    CMSG_GM_UNSQUELCH,
    CMSG_GM_UNTEACH,
    CMSG_GM_UPDATE_TICKET_STATUS,
    CMSG_GM_WHISPER,
    CMSG_GOSSIP_HELLO,
    CMSG_GOSSIP_SELECT_OPTION,
    CMSG_GRANT_LEVEL,
    CMSG_GROUP_ACCEPT,
    CMSG_GROUP_ASSISTANT_LEADER,
    CMSG_GROUP_CANCEL,
    CMSG_GROUP_CHANGE_SUB_GROUP,
    CMSG_GROUP_DECLINE,
    CMSG_GROUP_DISBAND,
    CMSG_GROUP_INVITE,
    CMSG_GROUP_RAID_CONVERT,
    CMSG_GROUP_SET_LEADER,
    CMSG_GROUP_SET_ROLES,
    CMSG_GROUP_SWAP_SUB_GROUP,
    CMSG_GROUP_UNINVITE,
    CMSG_GROUP_UNINVITE_GUID,
    CMSG_GUILD_ACCEPT,
    CMSG_GUILD_ADD_RANK,
    CMSG_GUILD_BANKER_ACTIVATE,
    CMSG_GUILD_BANK_BUY_TAB,
    CMSG_GUILD_BANK_DEPOSIT_MONEY,
    CMSG_GUILD_BANK_NOTE,
    CMSG_GUILD_BANK_QUERY_TAB,
    CMSG_GUILD_BANK_SWAP_ITEMS,
    CMSG_GUILD_BANK_UPDATE_TAB,
    CMSG_GUILD_BANK_WITHDRAW_MONEY,
    CMSG_GUILD_CREATE,
    CMSG_GUILD_DECLINE,
    CMSG_GUILD_DEL_RANK,
    CMSG_GUILD_DEMOTE,
    CMSG_GUILD_DISBAND,
    CMSG_GUILD_INFO,
    CMSG_GUILD_INFO_TEXT,
    CMSG_GUILD_INVITE,
    CMSG_GUILD_LEADER,
    CMSG_GUILD_LEAVE,
    CMSG_GUILD_MOTD,
    CMSG_GUILD_PROMOTE,
    CMSG_GUILD_QUERY,
    CMSG_GUILD_RANK,
    CMSG_GUILD_REMOVE,
    CMSG_GUILD_ROSTER,
    CMSG_GUILD_SET_NOTE,
    CMSG_GUILD_SWITCH_RANK,
    CMSG_HEARTH_AND_RESURRECT,
    CMSG_IGNORE_DIMINISHING_RETURNS_CHEAT,
    CMSG_IGNORE_KNOCKBACK_CHEAT,
    CMSG_IGNORE_REQUIREMENTS_CHEAT,
    CMSG_IGNORE_TRADE,
    CMSG_INITIATE_TRADE,
    CMSG_INSPECT,
    CMSG_INSPECT_HONOR_STATS,
    CMSG_INSTANCE_LOCK_WARNING_RESPONSE,
    CMSG_ITEM_NAME_QUERY,
    CMSG_ITEM_REFUND,
    CMSG_ITEM_REFUND_INFO,
    CMSG_ITEM_TEXT_QUERY,
    CMSG_JOIN_CHANNEL,
    CMSG_KEEP_ALIVE,
    CMSG_LEARN_DANCE_MOVE,
    CMSG_LEARN_PREVIEW_TALENTS,
    CMSG_LEARN_PREVIEW_TALENTS_PET,
    CMSG_LEARN_TALENT,
    CMSG_LEAVE_BATTLEFIELD,
    CMSG_LEAVE_CHANNEL,
    CMSG_LFD_PARTY_LOCK_INFO_REQUEST,
    CMSG_LFD_PLAYER_LOCK_INFO_REQUEST,
    CMSG_LFG_JOIN,
    CMSG_LFG_LEAVE,
    CMSG_LFG_PROPOSAL_RESULT,
    CMSG_LFG_SET_BOOT_VOTE,
    CMSG_LFG_SET_NEEDS,
    CMSG_LFG_SET_ROLES,
    CMSG_LFG_SET_ROLES_2,
    CMSG_LFG_TELEPORT,
    CMSG_LIST_INVENTORY,
    CMSG_LOAD_DANCES,
    CMSG_LOGOUT_CANCEL,
    CMSG_LOGOUT_REQUEST,
    CMSG_LOOT,
    CMSG_LOOT_MASTER_GIVE,
    CMSG_LOOT_METHOD,
    CMSG_LOOT_MONEY,
    CMSG_LOOT_RELEASE,
    CMSG_LOOT_ROLL,
    CMSG_LOTTERY_QUERY_OBSOLETE,
    CMSG_LUA_USAGE,
    CMSG_MAELSTROM_GM_SENT_MAIL,
    CMSG_MAELSTROM_INVALIDATE_CACHE,
    CMSG_MAELSTROM_RENAME_GUILD,
    CMSG_MAIL_CREATE_TEXT_ITEM,
    CMSG_MAIL_DELETE,
    CMSG_MAIL_MARK_AS_READ,
    CMSG_MAIL_RETURN_TO_SENDER,
    CMSG_MAIL_TAKE_ITEM,
    CMSG_MAIL_TAKE_MONEY,
    CMSG_MEETINGSTONE_CHEAT,
    CMSG_MEETINGSTONE_INFO,
    CMSG_MESSAGECHAT_AFK,
    CMSG_MESSAGECHAT_BATTLEGROUND,
    CMSG_MESSAGECHAT_BATTLEGROUND_LEADER,
    CMSG_MESSAGECHAT_CHANNEL,
    CMSG_MESSAGECHAT_DND,
    CMSG_MESSAGECHAT_EMOTE,
    CMSG_MESSAGECHAT_GUILD,
    CMSG_MESSAGECHAT_OFFICER,
    CMSG_MESSAGECHAT_PARTY,
    CMSG_MESSAGECHAT_PARTY_LEADER,
    CMSG_MESSAGECHAT_RAID,
    CMSG_MESSAGECHAT_RAID_LEADER,
    CMSG_MESSAGECHAT_RAID_WARNING,
    CMSG_MESSAGECHAT_SAY,
    CMSG_MESSAGECHAT_WHISPER,
    CMSG_MESSAGECHAT_YELL,
    CMSG_MINIGAME_MOVE,
    CMSG_MOUNTSPECIAL_ANIM,
    CMSG_MOVE_CHNG_TRANSPORT,
    CMSG_MOVE_FALL_RESET,
    CMSG_MOVE_FEATHER_FALL_ACK,
    CMSG_MOVE_FLIGHT_ACK,
    CMSG_MOVE_HOVER_ACK,
    CMSG_MOVE_KNOCK_BACK_ACK,
    CMSG_MOVE_NOT_ACTIVE_MOVER,
    CMSG_MOVE_SET_CAN_FLY_ACK,
    CMSG_MOVE_SET_FLY,
    CMSG_MOVE_SET_RAW_POSITION,
    CMSG_MOVE_SET_RUN_SPEED,
    CMSG_MOVE_SPLINE_DONE,
    CMSG_MOVE_START_SWIM_CHEAT,
    CMSG_MOVE_STOP_SWIM_CHEAT,
    CMSG_MOVE_TIME_SKIPPED,
    CMSG_MOVE_WATER_WALK_ACK,
    CMSG_NAME_QUERY,
    CMSG_NEW_SPELL_SLOT,
    CMSG_NEXT_CINEMATIC_CAMERA,
    CMSG_NO_SPELL_VARIANCE,
    CMSG_NPC_TEXT_QUERY,
    CMSG_OFFER_PETITION,
    CMSG_OPENING_CINEMATIC,
    CMSG_OPEN_ITEM,
    CMSG_OPT_OUT_OF_LOOT,
    CMSG_PAGE_TEXT_QUERY,
    CMSG_PARTY_SILENCE,
    CMSG_PARTY_UNSILENCE,
    CMSG_PETITION_BUY,
    CMSG_PETITION_QUERY,
    CMSG_PETITION_SHOWLIST,
    CMSG_PETITION_SHOW_SIGNATURES,
    CMSG_PETITION_SIGN,
    CMSG_PET_ABANDON,
    CMSG_PET_ACTION,
    CMSG_PET_CANCEL_AURA,
    CMSG_PET_CAST_SPELL,
    CMSG_PET_LEARN_TALENT,
    CMSG_PET_NAME_QUERY,
    CMSG_PET_RENAME,
    CMSG_PET_SET_ACTION,
    CMSG_PET_SPELL_AUTOCAST,
    CMSG_PET_STOP_ATTACK,
    CMSG_PET_UNLEARN,
    CMSG_PET_UNLEARN_TALENTS,
    CMSG_PING,
    CMSG_PLAYED_TIME,
    CMSG_PLAYER_AI_CHEAT,
    CMSG_PLAYER_DIFFICULTY_CHANGE,
    CMSG_PLAYER_LOGIN,
    CMSG_PLAYER_LOGOUT,
    CMSG_PLAYER_VEHICLE_ENTER,
    CMSG_PLAY_DANCE,
    CMSG_PUSHQUESTTOPARTY,
    CMSG_QUERY_GUILD_MAX_XP,
    CMSG_QUERY_GUILD_REWARDS,
    CMSG_QUERY_GUILD_XP,
    CMSG_QUERY_INSPECT_ACHIEVEMENTS,
    CMSG_QUERY_QUESTS_COMPLETED,
    CMSG_QUERY_SERVER_BUCK_DATA,
    CMSG_QUERY_TIME,
    CMSG_QUERY_VEHICLE_STATUS,
    CMSG_QUESTGIVER_ACCEPT_QUEST,
    CMSG_QUESTGIVER_CANCEL,
    CMSG_QUESTGIVER_CHOOSE_REWARD,
    CMSG_QUESTGIVER_COMPLETE_QUEST,
    CMSG_QUESTGIVER_HELLO,
    CMSG_QUESTGIVER_QUERY_QUEST,
    CMSG_QUESTGIVER_QUEST_AUTOLAUNCH,
    CMSG_QUESTGIVER_REQUEST_REWARD,
    CMSG_QUESTGIVER_STATUS_MULTIPLE_QUERY,
    CMSG_QUESTGIVER_STATUS_QUERY,
    CMSG_QUESTLOG_REMOVE_QUEST,
    CMSG_QUESTLOG_SWAP_QUEST,
    CMSG_QUEST_CONFIRM_ACCEPT,
    CMSG_QUEST_POI_QUERY,
    CMSG_QUEST_QUERY,
    CMSG_READY_FOR_ACCOUNT_DATA_TIMES,
    CMSG_READ_ITEM,
    CMSG_REALM_SPLIT,
    CMSG_RECLAIM_CORPSE,
    CMSG_REDIRECTION_AUTH_PROOF,
    CMSG_REDIRECTION_FAILED,
    CMSG_REDIRECT_AUTH_PROOF,
    CMSG_REFER_A_FRIEND,
    CMSG_REMOVE_GLYPH,
    CMSG_REPAIR_ITEM,
    CMSG_REPOP_REQUEST,
    CMSG_REPORT_PVP_AFK,
    CMSG_REQUEST_ACCOUNT_DATA,
    CMSG_REQUEST_PARTY_MEMBER_STATS,
    CMSG_REQUEST_PET_INFO,
    CMSG_REQUEST_PLAYER_VEHICLE_EXIT,
    CMSG_REQUEST_PVP_OPTIONS_ENABLED,
    CMSG_REQUEST_RAID_INFO,
    CMSG_REQUEST_RATED_BG_INFO,
    CMSG_REQUEST_VEHICLE_EXIT,
    CMSG_REQUEST_VEHICLE_NEXT_SEAT,
    CMSG_REQUEST_VEHICLE_PREV_SEAT,
    CMSG_REQUEST_VEHICLE_SWITCH_SEAT,
    CMSG_RESET_FACTION_CHEAT,
    CMSG_RESET_INSTANCES,
    CMSG_RESURRECT_RESPONSE,
    CMSG_RETURN_TO_GRAVEYARD,
    CMSG_RUN_SCRIPT,
    CMSG_SAVE_DANCE,
    CMSG_SAVE_PLAYER,
    CMSG_SEARCH_LFG_JOIN,
    CMSG_SEARCH_LFG_LEAVE,
    CMSG_SELF_RES,
    CMSG_SELL_ITEM,
    CMSG_SEND_COMBAT_TRIGGER,
    CMSG_SEND_GENERAL_TRIGGER,
    CMSG_SEND_LOCAL_EVENT,
    CMSG_SEND_MAIL,
    CMSG_SERVERTIME,
    CMSG_SERVER_BROADCAST,
    CMSG_SERVER_INFO_QUERY,
    CMSG_SETDEATHBINDPOINT,
    CMSG_SETSHEATHED,
    CMSG_SET_ACTIONBAR_TOGGLES,
    CMSG_SET_ACTION_BUTTON,
    CMSG_SET_ACTIVE_MOVER,
    CMSG_SET_ACTIVE_VOICE_CHANNEL,
    CMSG_SET_ALLOW_LOW_LEVEL_RAID1,
    CMSG_SET_ALLOW_LOW_LEVEL_RAID2,
    CMSG_SET_AMMO,
    CMSG_SET_CHANNEL_WATCH,
    CMSG_SET_CONTACT_NOTES,
    CMSG_SET_CRITERIA_CHEAT,
    CMSG_SET_DURABILITY_CHEAT,
    CMSG_SET_EXPLORATION,
    CMSG_SET_EXPLORATION_ALL,
    CMSG_SET_FACTION_ATWAR,
    CMSG_SET_FACTION_CHEAT,
    CMSG_SET_FACTION_INACTIVE,
    CMSG_SET_GLYPH,
    CMSG_SET_GLYPH_SLOT,
    CMSG_SET_GRANTABLE_LEVELS,
    CMSG_SET_GUILD_BANK_TEXT,
    CMSG_SET_LFG_COMMENT,
    CMSG_SET_PLAYER_DECLINED_NAMES,
    CMSG_SET_PRIMARY_TALENT_TREE,
    CMSG_SET_PVP_RANK_CHEAT,
    CMSG_SET_PVP_TITLE,
    CMSG_SET_RUNE_COOLDOWN,
    CMSG_SET_RUNE_COUNT,
    CMSG_SET_SAVED_INSTANCE_EXTEND,
    CMSG_SET_SELECTION,
    CMSG_SET_SKILL_CHEAT,
    CMSG_SET_TAXI_BENCHMARK_MODE,
    CMSG_SET_TITLE,
    CMSG_SET_TITLE_SUFFIX,
    CMSG_SET_TRADE_GOLD,
    CMSG_SET_TRADE_ITEM,
    CMSG_SET_WATCHED_FACTION,
    CMSG_SHOWING_CLOAK,
    CMSG_SHOWING_HELM,
    CMSG_SKILL_BUY_RANK,
    CMSG_SKILL_BUY_STEP,
    CMSG_SOCKET_GEMS,
    CMSG_SPELLCLICK,
    CMSG_SPIRIT_HEALER_ACTIVATE,
    CMSG_SPLIT_ITEM,
    CMSG_STABLE_CHANGE_SLOT,
    CMSG_STABLE_REVIVE_PET,
    CMSG_STANDSTATECHANGE,
    CMSG_START_QUEST,
    CMSG_STOP_DANCE,
    CMSG_STORE_LOOT_IN_SLOT,
    CMSG_SUMMON_RESPONSE,
    CMSG_SWAP_INV_ITEM,
    CMSG_SWAP_ITEM,
    CMSG_SYNC_DANCE,
    CMSG_TARGET_CAST,
    CMSG_TARGET_SCRIPT_CAST,
    CMSG_TAXICLEARALLNODES,
    CMSG_TAXICLEARNODE,
    CMSG_TAXIENABLEALLNODES,
    CMSG_TAXIENABLENODE,
    CMSG_TAXINODE_STATUS_QUERY,
    CMSG_TAXIQUERYAVAILABLENODES,
    CMSG_TAXISHOWNODES,
    CMSG_TELEPORT_TO_UNIT,
    CMSG_TEXT_EMOTE,
    CMSG_TIME_SYNC_RESP,
    CMSG_TOGGLE_PVP,
    CMSG_TOTEM_DESTROYED,
    CMSG_TRAINER_BUY_SPELL,
    CMSG_TRAINER_LIST,
    CMSG_TRANSFORM,
    CMSG_TRIGGER_CINEMATIC_CHEAT,
    CMSG_TURN_IN_PETITION,
    CMSG_TUTORIAL_CLEAR,
    CMSG_TUTORIAL_FLAG,
    CMSG_TUTORIAL_RESET,
    CMSG_UNACCEPT_TRADE,
    CMSG_UNITANIMTIER_CHEAT,
    CMSG_UNKNOWN_1296,
    CMSG_UNKNOWN_1303,
    CMSG_UNKNOWN_1320,
    CMSG_UNLEARN_DANCE_MOVE,
    CMSG_UNLEARN_SKILL,
    CMSG_UNLEARN_SPELL,
    CMSG_UNLEARN_TALENTS,
    CMSG_UNUSED2,
    CMSG_UPDATE_ACCOUNT_DATA,
    CMSG_UPDATE_MISSILE_TRAJECTORY,
    CMSG_UPDATE_PROJECTILE_POSITION,
    CMSG_USE_ITEM,
    CMSG_VOICE_SESSION_ENABLE,
    CMSG_VOICE_SET_TALKER_MUTED_REQUEST,
    CMSG_WARDEN_DATA,
    CMSG_WHO,
    CMSG_WHOIS,
    CMSG_WORLD_LOGIN,
    CMSG_WORLD_STATE_UI_TIMER_UPDATE,
    CMSG_WORLD_TELEPORT,
    CMSG_WRAP_ITEM,
    CMSG_ZONEUPDATE,
    MSG_AUCTION_HELLO,
    MSG_CHANNEL_START,
    MSG_CHANNEL_UPDATE,
    MSG_CORPSE_QUERY,
    MSG_DELAY_GHOST_TELEPORT,
    MSG_GM_ACCOUNT_ONLINE,
    MSG_GM_BIND_OTHER,
    MSG_GM_CHANGE_ARENA_RATING,
    MSG_GM_DESTROY_CORPSE,
    MSG_GM_GEARRATING,
    MSG_GM_RESETINSTANCELIMIT,
    MSG_GM_SHOWLABEL,
    MSG_GM_SUMMON,
    MSG_GUILD_BANK_LOG_QUERY,
    MSG_GUILD_BANK_MONEY_WITHDRAWN,
    MSG_GUILD_EVENT_LOG_QUERY,
    MSG_GUILD_PERMISSIONS,
    MSG_INSPECT_ARENA_TEAMS,
    MSG_LIST_STABLED_PETS,
    MSG_MINIMAP_PING,
    MSG_MOVE_FALL_LAND,
    MSG_MOVE_FEATHER_FALL,
    MSG_MOVE_HEARTBEAT,
    MSG_MOVE_HOVER,
    MSG_MOVE_JUMP,
    MSG_MOVE_KNOCK_BACK,
    MSG_MOVE_ROOT,
    MSG_MOVE_SET_ALL_SPEED_CHEAT,
    MSG_MOVE_SET_FACING,
    MSG_MOVE_SET_FLIGHT_BACK_SPEED,
    MSG_MOVE_SET_FLIGHT_BACK_SPEED_CHEAT,
    MSG_MOVE_SET_FLIGHT_SPEED,
    MSG_MOVE_SET_FLIGHT_SPEED_CHEAT,
    MSG_MOVE_SET_PITCH,
    MSG_MOVE_SET_PITCH_RATE,
    MSG_MOVE_SET_PITCH_RATE_CHEAT,
    MSG_MOVE_SET_RAW_POSITION_ACK,
    MSG_MOVE_SET_RUN_BACK_SPEED,
    MSG_MOVE_SET_RUN_BACK_SPEED_CHEAT,
    MSG_MOVE_SET_RUN_MODE,
    MSG_MOVE_SET_RUN_SPEED,
    MSG_MOVE_SET_RUN_SPEED_CHEAT,
    MSG_MOVE_SET_SWIM_BACK_SPEED,
    MSG_MOVE_SET_SWIM_BACK_SPEED_CHEAT,
    MSG_MOVE_SET_SWIM_SPEED,
    MSG_MOVE_SET_SWIM_SPEED_CHEAT,
    MSG_MOVE_SET_TURN_RATE,
    MSG_MOVE_SET_TURN_RATE_CHEAT,
    MSG_MOVE_SET_WALK_MODE,
    MSG_MOVE_SET_WALK_SPEED,
    MSG_MOVE_SET_WALK_SPEED_CHEAT,
    MSG_MOVE_START_ASCEND,
    MSG_MOVE_START_BACKWARD,
    MSG_MOVE_START_DESCEND,
    MSG_MOVE_START_FORWARD,
    MSG_MOVE_START_PITCH_DOWN,
    MSG_MOVE_START_PITCH_UP,
    MSG_MOVE_START_STRAFE_LEFT,
    MSG_MOVE_START_STRAFE_RIGHT,
    MSG_MOVE_START_SWIM,
    MSG_MOVE_START_SWIM_CHEAT,
    MSG_MOVE_START_TURN_LEFT,
    MSG_MOVE_START_TURN_RIGHT,
    MSG_MOVE_STOP,
    MSG_MOVE_STOP_ASCEND,
    MSG_MOVE_STOP_PITCH,
    MSG_MOVE_STOP_STRAFE,
    MSG_MOVE_STOP_SWIM,
    MSG_MOVE_STOP_SWIM_CHEAT,
    MSG_MOVE_STOP_TURN,
    MSG_MOVE_TELEPORT,
    MSG_MOVE_TELEPORT_ACK,
    MSG_MOVE_TELEPORT_CHEAT,
    MSG_MOVE_TIME_SKIPPED,
    MSG_MOVE_TOGGLE_COLLISION_CHEAT,
    MSG_MOVE_TOGGLE_FALL_LOGGING,
    MSG_MOVE_TOGGLE_GRAVITY_CHEAT,
    MSG_MOVE_TOGGLE_LOGGING,
    MSG_MOVE_UNROOT,
    MSG_MOVE_UPDATE_CAN_FLY,
    MSG_MOVE_WATER_WALK,
    MSG_MOVE_WORLDPORT_ACK,
    MSG_NOTIFY_PARTY_SQUELCH,
    MSG_PARTY_ASSIGNMENT,
    MSG_PETITION_DECLINE,
    MSG_PETITION_RENAME,
    MSG_PVP_LOG_DATA,
    MSG_QUERY_GUILD_BANK_TEXT,
    MSG_QUERY_NEXT_MAIL_TIME,
    MSG_QUEST_PUSH_RESULT,
    MSG_RAID_READY_CHECK,
    MSG_RAID_READY_CHECK_CONFIRM,
    MSG_RAID_READY_CHECK_FINISHED,
    MSG_RAID_TARGET_UPDATE,
    MSG_RANDOM_ROLL,
    MSG_SAVE_GUILD_EMBLEM,
    MSG_SET_DUNGEON_DIFFICULTY,
    MSG_SET_RAID_DIFFICULTY,
    MSG_TABARDVENDOR_ACTIVATE,
    MSG_TALENT_WIPE_CONFIRM,
    OBSOLETE_DROP_ITEM,
    SMSG_ACCOUNT_DATA_TIMES,
    SMSG_ACHIEVEMENT_DELETED,
    SMSG_ACHIEVEMENT_EARNED,
    SMSG_ACTION_BUTTONS,
    SMSG_ACTIVATETAXIREPLY,
    SMSG_ADDON_INFO,
    SMSG_ADD_RUNE_POWER,
    SMSG_AI_REACTION,
    SMSG_ALL_ACHIEVEMENT_DATA,
    SMSG_AREA_SPIRIT_HEALER_TIME,
    SMSG_AREA_TRIGGER_MESSAGE,
    SMSG_ARENA_ERROR,
    SMSG_ARENA_OPPONENT_UPDATE,
    SMSG_ARENA_TEAM_CHANGE_FAILED_QUEUED,
    SMSG_ARENA_TEAM_COMMAND_RESULT,
    SMSG_ARENA_TEAM_EVENT,
    SMSG_ARENA_TEAM_INVITE,
    SMSG_ARENA_TEAM_QUERY_RESPONSE,
    SMSG_ARENA_TEAM_ROSTER,
    SMSG_ARENA_TEAM_STATS,
    SMSG_ATTACKERSTATEUPDATE,
    SMSG_ATTACKSTART,
    SMSG_ATTACKSTOP,
    SMSG_ATTACKSWING_BADFACING,
    SMSG_ATTACKSWING_CANT_ATTACK,
    SMSG_ATTACKSWING_DEADTARGET,
    SMSG_ATTACKSWING_NOTINRANGE,
    SMSG_AUCTION_BIDDER_LIST_RESULT,
    SMSG_AUCTION_BIDDER_NOTIFICATION,
    SMSG_AUCTION_COMMAND_RESULT,
    SMSG_AUCTION_LIST_PENDING_SALES,
    SMSG_AUCTION_LIST_RESULT,
    SMSG_AUCTION_OWNER_LIST_RESULT,
    SMSG_AUCTION_OWNER_NOTIFICATION,
    SMSG_AUCTION_REMOVED_NOTIFICATION,
    SMSG_AURACASTLOG,
    SMSG_AURA_UPDATE,
    SMSG_AURA_UPDATE_ALL,
    SMSG_AUTH_CHALLENGE,
    SMSG_AUTH_RESPONSE,
    SMSG_AVAILABLE_VOICE_CHANNEL,
    SMSG_BARBER_SHOP_RESULT,
    SMSG_BATTLEFIELD_LIST,
    SMSG_BATTLEFIELD_MGR_EJECTED,
    SMSG_BATTLEFIELD_MGR_EJECT_PENDING,
    SMSG_BATTLEFIELD_MGR_ENTERED,
    SMSG_BATTLEFIELD_MGR_ENTRY_INVITE,
    SMSG_BATTLEFIELD_MGR_QUEUE_INVITE,
    SMSG_BATTLEFIELD_MGR_QUEUE_REQUEST_RESPONSE,
    SMSG_BATTLEFIELD_MGR_STATE_CHANGE,
    SMSG_BATTLEFIELD_PORT_DENIED,
    SMSG_BATTLEFIELD_STATUS1,
    SMSG_BATTLEFIELD_STATUS2,
    SMSG_BATTLEFIELD_STATUS3,
    SMSG_BATTLEFIELD_STATUS4,
    SMSG_BATTLEGROUND_INFO_THROTTLED,
    SMSG_BATTLEGROUND_PLAYER_JOINED,
    SMSG_BATTLEGROUND_PLAYER_LEFT,
    SMSG_BATTLEGROUND_PLAYER_POSITIONS,
    SMSG_BINDER_CONFIRM,
    SMSG_BINDPOINTUPDATE,
    SMSG_BINDZONEREPLY,
    SMSG_BREAK_TARGET,
    SMSG_BUY_BANK_SLOT_RESULT,
    SMSG_BUY_FAILED,
    SMSG_BUY_ITEM,
    SMSG_CALENDAR_ACTION_PENDING,
    SMSG_CALENDAR_ARENA_TEAM,
    SMSG_CALENDAR_COMMAND_RESULT,
    SMSG_CALENDAR_EVENT_INVITE,
    SMSG_CALENDAR_EVENT_INVITE_ALERT,
    SMSG_CALENDAR_EVENT_INVITE_REMOVED,
    SMSG_CALENDAR_EVENT_INVITE_REMOVED_ALERT,
    SMSG_CALENDAR_EVENT_INVITE_STATUS_ALERT,
    SMSG_CALENDAR_EVENT_MODERATOR_STATUS_ALERT,
    SMSG_CALENDAR_EVENT_REMOVED_ALERT,
    SMSG_CALENDAR_EVENT_STATUS,
    SMSG_CALENDAR_EVENT_UPDATED_ALERT,
    SMSG_CALENDAR_FILTER_GUILD,
    SMSG_CALENDAR_RAID_LOCKOUT_ADDED,
    SMSG_CALENDAR_RAID_LOCKOUT_REMOVED,
    SMSG_CALENDAR_SEND_CALENDAR,
    SMSG_CALENDAR_SEND_EVENT,
    SMSG_CALENDAR_SEND_NUM_PENDING,
    SMSG_CALENDAR_UPDATE_INVITE_LIST,
    SMSG_CALENDAR_UPDATE_INVITE_LIST2,
    SMSG_CALENDAR_UPDATE_INVITE_LIST3,
    SMSG_CAMERA_SHAKE,
    SMSG_CANCEL_AUTO_REPEAT,
    SMSG_CANCEL_COMBAT,
    SMSG_CAST_FAILED,
    SMSG_CHANNEL_LIST,
    SMSG_CHANNEL_MEMBER_COUNT,
    SMSG_CHANNEL_NOTIFY,
    SMSG_CHARACTER_LOGIN_FAILED,
    SMSG_CHARACTER_PROFILE,
    SMSG_CHARACTER_PROFILE_REALM_CONNECTED,
    SMSG_CHAR_CREATE,
    SMSG_CHAR_CUSTOMIZE,
    SMSG_CHAR_DELETE,
    SMSG_CHAR_ENUM,
    SMSG_CHAR_FACTION_CHANGE,
    SMSG_CHAR_RENAME,
    SMSG_CHAT_PLAYER_AMBIGUOUS,
    SMSG_CHAT_PLAYER_NOT_FOUND,
    SMSG_CHAT_RESTRICTED,
    SMSG_CHAT_WRONG_FACTION,
    SMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY_RESPONSE,
    SMSG_CHEAT_DUMP_ITEMS_DEBUG_ONLY_RESPONSE_WRITE_FILE,
    SMSG_CHEAT_PLAYER_LOOKUP,
    SMSG_CHECK_FOR_BOTS,
    SMSG_CLEAR_COOLDOWN,
    SMSG_CLEAR_EXTRA_AURA_INFO_OBSOLETE,
    SMSG_CLEAR_FAR_SIGHT_IMMEDIATE,
    SMSG_CLEAR_TARGET,
    SMSG_CLIENTCACHE_VERSION,
    SMSG_CLIENT_CONTROL_UPDATE,
    SMSG_COMBAT_LOG_MULTIPLE,
    SMSG_COMMENTATOR_GET_PLAYER_INFO,
    SMSG_COMMENTATOR_MAP_INFO,
    SMSG_COMMENTATOR_PLAYER_INFO,
    SMSG_COMMENTATOR_STATE_CHANGED,
    SMSG_COMPLAIN_RESULT,
    SMSG_COMPRESSED_MOVES,
    SMSG_COMPRESSED_UPDATE_OBJECT,
    SMSG_COMSAT_CONNECT_FAIL,
    SMSG_COMSAT_DISCONNECT,
    SMSG_COMSAT_RECONNECT_TRY,
    SMSG_CONTACT_LIST,
    SMSG_CONVERT_RUNE,
    SMSG_COOLDOWN_CHEAT,
    SMSG_COOLDOWN_EVENT,
    SMSG_CORPSE_MAP_POSITION_QUERY_RESPONSE,
    SMSG_CORPSE_NOT_IN_INSTANCE,
    SMSG_CORPSE_RECLAIM_DELAY,
    SMSG_CREATURE_QUERY_RESPONSE,
    SMSG_CRITERIA_DELETED,
    SMSG_CRITERIA_UPDATE,
    SMSG_CROSSED_INEBRIATION_THRESHOLD,
    SMSG_DAMAGE_CALC_LOG,
    SMSG_DAMAGE_DONE_OBSOLETE,
    SMSG_DANCE_QUERY_RESPONSE,
    SMSG_DEATH_RELEASE_LOC,
    SMSG_DEBUGAURAPROC,
    SMSG_DEBUG_LIST_TARGETS,
    SMSG_DEFENSE_MESSAGE,
    SMSG_DESTROY_OBJECT,
    SMSG_DESTRUCTIBLE_BUILDING_DAMAGE,
    SMSG_DISMOUNT,
    SMSG_DISMOUNTRESULT,
    SMSG_DISPEL_FAILED,
    SMSG_DUEL_COMPLETE,
    SMSG_DUEL_COUNTDOWN,
    SMSG_DUEL_INBOUNDS,
    SMSG_DUEL_OUTOFBOUNDS,
    SMSG_DUEL_REQUESTED,
    SMSG_DUEL_WINNER,
    SMSG_DUMP_OBJECTS_DATA,
    SMSG_DURABILITY_DAMAGE_DEATH,
    SMSG_DYNAMIC_DROP_ROLL_RESULT,
    SMSG_ECHO_PARTY_SQUELCH,
    SMSG_EMOTE,
    SMSG_ENABLE_BARBER_SHOP,
    SMSG_ENCHANTMENTLOG,
    SMSG_ENVIRONMENTALDAMAGELOG,
    SMSG_EQUIPMENT_SET_LIST,
    SMSG_EQUIPMENT_SET_SAVED,
    SMSG_EQUIPMENT_SET_USE_RESULT,
    SMSG_EXPECTED_SPAM_RECORDS,
    SMSG_EXPLORATION_EXPERIENCE,
    SMSG_FEATURE_SYSTEM_STATUS,
    SMSG_FEIGN_DEATH_RESISTED,
    SMSG_FISH_ESCAPED,
    SMSG_FISH_NOT_HOOKED,
    SMSG_FLIGHT_SPLINE_SYNC,
    SMSG_FORCEACTIONSHOW,
    SMSG_FORCED_DEATH_UPDATE,
    SMSG_FORCE_DISPLAY_UPDATE,
    SMSG_FORCE_FLIGHT_BACK_SPEED_CHANGE,
    SMSG_FORCE_FLIGHT_SPEED_CHANGE,
    SMSG_FORCE_MOVE_ROOT,
    SMSG_FORCE_MOVE_UNROOT,
    SMSG_FORCE_PITCH_RATE_CHANGE,
    SMSG_FORCE_RUN_BACK_SPEED_CHANGE,
    SMSG_FORCE_RUN_SPEED_CHANGE,
    SMSG_FORCE_SEND_QUEUED_PACKETS,
    SMSG_FORCE_SWIM_BACK_SPEED_CHANGE,
    SMSG_FORCE_SWIM_SPEED_CHANGE,
    SMSG_FORCE_TURN_RATE_CHANGE,
    SMSG_FORCE_UNK1_SPEED_CHANGE,
    SMSG_FORCE_UNK2_SPEED_CHANGE,
    SMSG_FORCE_WALK_SPEED_CHANGE,
    SMSG_FRIEND_STATUS,
    SMSG_GAMEOBJECT_CUSTOM_ANIM,
    SMSG_GAMEOBJECT_DESPAWN_ANIM,
    SMSG_GAMEOBJECT_PAGETEXT,
    SMSG_GAMEOBJECT_QUERY_RESPONSE,
    SMSG_GAMEOBJECT_RESET_STATE,
    SMSG_GAMESPEED_SET,
    SMSG_GAMETIMEBIAS_SET,
    SMSG_GAMETIME_SET,
    SMSG_GAMETIME_UPDATE,
    SMSG_GHOSTEE_GONE,
    SMSG_GMRESPONSE_DB_ERROR,
    SMSG_GMRESPONSE_RECEIVED,
    SMSG_GMRESPONSE_STATUS_UPDATE,
    SMSG_GMTICKET_CREATE,
    SMSG_GMTICKET_DELETETICKET,
    SMSG_GMTICKET_GETTICKET,
    SMSG_GMTICKET_SYSTEMSTATUS,
    SMSG_GMTICKET_UPDATETEXT,
    SMSG_GM_MESSAGECHAT,
    SMSG_GM_TICKET_STATUS_UPDATE,
    SMSG_GODMODE,
    SMSG_GOGOGO_OBSOLETE,
    SMSG_GOSSIP_COMPLETE,
    SMSG_GOSSIP_MESSAGE,
    SMSG_GOSSIP_POI,
    SMSG_GROUPACTION_THROTTLED,
    SMSG_GROUP_CANCEL,
    SMSG_GROUP_DECLINE,
    SMSG_GROUP_DESTROYED,
    SMSG_GROUP_INVITE,
    SMSG_GROUP_JOINED_BATTLEGROUND,
    SMSG_GROUP_LIST,
    SMSG_GROUP_SET_LEADER,
    SMSG_GROUP_UNINVITE,
    SMSG_GUILD_BANK_LIST,
    SMSG_GUILD_COMMAND_RESULT,
    SMSG_GUILD_DECLINE,
    SMSG_GUILD_EVENT,
    SMSG_GUILD_INFO,
    SMSG_GUILD_INVITE,
    SMSG_GUILD_MAX_DAILY_XP,
    SMSG_GUILD_NEWS_UPDATE,
    SMSG_GUILD_QUERY_RESPONSE,
    SMSG_GUILD_RANK,
    SMSG_GUILD_RANKS_UPDATE,
    SMSG_GUILD_REWARDS_LIST,
    SMSG_GUILD_ROSTER,
    SMSG_GUILD_TRADESKILL_UPDATE,
    SMSG_GUILD_UPDATE_ROSTER,
    SMSG_GUILD_XP_UPDATE,
    SMSG_HEALTH_UPDATE,
    SMSG_HIGHEST_THREAT_UPDATE,
    SMSG_IGNORE_DIMINISHING_RETURNS_CHEAT,
    SMSG_IGNORE_REQUIREMENTS_CHEAT,
    SMSG_INITIALIZE_FACTIONS,
    SMSG_INITIAL_SPELLS,
    SMSG_INIT_CURRENCY,
    SMSG_INIT_EXTRA_AURA_INFO_OBSOLETE,
    SMSG_INIT_WORLD_STATES,
    SMSG_INSPECT,
    SMSG_INSPECT_HONOR_STATS,
    SMSG_INSPECT_TALENT,
    SMSG_INSTANCE_DIFFICULTY,
    SMSG_INSTANCE_LOCK_WARNING_QUERY,
    SMSG_INSTANCE_RESET,
    SMSG_INSTANCE_RESET_FAILED,
    SMSG_INSTANCE_SAVE_CREATED,
    SMSG_INVALIDATE_DANCE,
    SMSG_INVALIDATE_PLAYER,
    SMSG_INVALID_PROMOTION_CODE,
    SMSG_INVENTORY_CHANGE_FAILURE,
    SMSG_ITEM_COOLDOWN,
    SMSG_ITEM_ENCHANT_TIME_UPDATE,
    SMSG_ITEM_NAME_QUERY_RESPONSE,
    SMSG_ITEM_PUSH_RESULT,
    SMSG_ITEM_QUERY_MULTIPLE_RESPONSE,
    SMSG_ITEM_QUERY_SINGLE_RESPONSE,
    SMSG_ITEM_REFUND_INFO_RESPONSE,
    SMSG_ITEM_REFUND_RESULT,
    SMSG_ITEM_TEXT_QUERY_RESPONSE,
    SMSG_ITEM_TIME_UPDATE,
    SMSG_JOINED_BATTLEGROUND_QUEUE,
    SMSG_KICK_REASON,
    SMSG_LEARNED_DANCE_MOVES,
    SMSG_LEARNED_SPELL,
    SMSG_LEVELUP_INFO,
    SMSG_LFG_BOOT_PROPOSAL_UPDATE,
    SMSG_LFG_DISABLED,
    SMSG_LFG_JOIN_RESULT,
    SMSG_LFG_OFFER_CONTINUE,
    SMSG_LFG_OPEN_FROM_GOSSIP,
    SMSG_LFG_PARTY_INFO,
    SMSG_LFG_PLAYER_INFO,
    SMSG_LFG_PLAYER_REWARD,
    SMSG_LFG_PROPOSAL_UPDATE,
    SMSG_LFG_QUEUE_STATUS,
    SMSG_LFG_ROLE_CHECK_UPDATE,
    SMSG_LFG_ROLE_CHOSEN,
    SMSG_LFG_TELEPORT_DENIED,
    SMSG_LFG_UPDATE_LIST,
    SMSG_LFG_UPDATE_PARTY,
    SMSG_LFG_UPDATE_PLAYER,
    SMSG_LIST_INVENTORY,
    SMSG_LOGIN_SETTIMESPEED,
    SMSG_LOGIN_VERIFY_WORLD,
    SMSG_LOGOUT_CANCEL_ACK,
    SMSG_LOGOUT_COMPLETE,
    SMSG_LOGOUT_RESPONSE,
    SMSG_LOG_XPGAIN,
    SMSG_LOOT_ALL_PASSED,
    SMSG_LOOT_CLEAR_MONEY,
    SMSG_LOOT_ITEM_NOTIFY,
    SMSG_LOOT_LIST,
    SMSG_LOOT_MASTER_LIST,
    SMSG_LOOT_MONEY_NOTIFY,
    SMSG_LOOT_RELEASE_RESPONSE,
    SMSG_LOOT_REMOVED,
    SMSG_LOOT_RESPONSE,
    SMSG_LOOT_ROLL,
    SMSG_LOOT_ROLL_WON,
    SMSG_LOOT_SLOT_CHANGED,
    SMSG_LOOT_START_ROLL,
    SMSG_LOTTERY_QUERY_RESULT_OBSOLETE,
    SMSG_LOTTERY_RESULT_OBSOLETE,
    SMSG_MAIL_LIST_RESULT,
    SMSG_MEETINGSTONE_COMPLETE,
    SMSG_MEETINGSTONE_IN_PROGRESS,
    SMSG_MEETINGSTONE_MEMBER_ADDED,
    SMSG_MEETINGSTONE_SETQUEUE,
    SMSG_MESSAGECHAT,
    SMSG_MINIGAME_MOVE_FAILED,
    SMSG_MINIGAME_SETUP,
    SMSG_MINIGAME_STATE,
    SMSG_MIRRORIMAGE_DATA,
    SMSG_MODIFY_COOLDOWN,
    SMSG_MONSTER_MOVE,
    SMSG_MONSTER_MOVE_TRANSPORT,
    SMSG_MOTD,
    SMSG_MOUNTRESULT,
    SMSG_MOUNTSPECIAL_ANIM,
    SMSG_MOVE_ABANDON_TRANSPORT,
    SMSG_MOVE_FEATHER_FALL,
    SMSG_MOVE_KNOCK_BACK,
    SMSG_MOVE_LAND_WALK,
    SMSG_MOVE_LEVITATING,
    SMSG_MOVE_NORMAL_FALL,
    SMSG_MOVE_SET_CAN_FLY,
    SMSG_MOVE_SET_FLIGHT,
    SMSG_MOVE_SET_HOVER,
    SMSG_MOVE_SET_WALK_IN_AIR,
    SMSG_MOVE_UNSET_CAN_FLY,
    SMSG_MOVE_UNSET_FLIGHT,
    SMSG_MOVE_UNSET_HOVER,
    SMSG_MOVE_UNSET_WALK_IN_AIR,
    SMSG_MOVE_WATER_WALK,
    SMSG_MULTIPLE_PACKETS,
    SMSG_NAME_QUERY_RESPONSE,
    SMSG_NEW_TAXI_PATH,
    SMSG_NEW_WORLD,
    SMSG_NOTIFICATION,
    SMSG_NOTIFY_DANCE,
    SMSG_NOTIFY_DEST_LOC_SPELL_CAST,
    SMSG_NPC_TEXT_UPDATE,
    SMSG_NPC_WONT_TALK,
    SMSG_OFFER_PETITION_ERROR,
    SMSG_ON_CANCEL_EXPECTED_RIDE_VEHICLE_AURA,
    SMSG_OPEN_CONTAINER,
    SMSG_OVERRIDE_LIGHT,
    SMSG_PAGE_TEXT_QUERY_RESPONSE,
    SMSG_PARTYKILLLOG,
    SMSG_PARTY_COMMAND_RESULT,
    SMSG_PARTY_MEMBER_STATS,
    SMSG_PARTY_MEMBER_STATS_FULL,
    SMSG_PAUSE_MIRROR_TIMER,
    SMSG_PERIODICAURALOG,
    SMSG_PETGODMODE,
    SMSG_PETITION_QUERY_RESPONSE,
    SMSG_PETITION_SHOWLIST,
    SMSG_PETITION_SHOW_SIGNATURES,
    SMSG_PETITION_SIGN_RESULTS,
    SMSG_PET_ACTION_FEEDBACK,
    SMSG_PET_ACTION_SOUND,
    SMSG_PET_BROKEN,
    SMSG_PET_CAST_FAILED,
    SMSG_PET_DISMISS_SOUND,
    SMSG_PET_GUIDS,
    SMSG_PET_LEARNED_SPELL,
    SMSG_PET_MODE,
    SMSG_PET_NAME_INVALID,
    SMSG_PET_NAME_QUERY_RESPONSE,
    SMSG_PET_REMOVED_SPELL,
    SMSG_PET_RENAMEABLE,
    SMSG_PET_SPELLS,
    SMSG_PET_TAME_FAILURE,
    SMSG_PET_UNLEARN_CONFIRM,
    SMSG_PET_UPDATE_COMBO_POINTS,
    SMSG_PLAYED_TIME,
    SMSG_PLAYERBINDERROR,
    SMSG_PLAYERBOUND,
    SMSG_PLAYER_DIFFICULTY_CHANGE,
    SMSG_PLAYER_SKINNED,
    SMSG_PLAYER_VEHICLE_DATA,
    SMSG_PLAY_DANCE,
    SMSG_PLAY_MUSIC,
    SMSG_PLAY_OBJECT_SOUND,
    SMSG_PLAY_SOUND,
    SMSG_PLAY_SPELL_IMPACT,
    SMSG_PLAY_SPELL_VISUAL,
    SMSG_PLAY_TIME_WARNING,
    SMSG_PONG,
    SMSG_POWER_UPDATE,
    SMSG_PRE_RESURRECT,
    SMSG_PROCRESIST,
    SMSG_PROPOSE_LEVEL_GRANT,
    SMSG_PUREMOUNT_CANCELLED_OBSOLETE,
    SMSG_PVP_CREDIT,
    SMSG_QUERY_QUESTS_COMPLETED_RESPONSE,
    SMSG_QUERY_TIME_RESPONSE,
    SMSG_QUESTGIVER_OFFER_REWARD,
    SMSG_QUESTGIVER_QUEST_COMPLETE,
    SMSG_QUESTGIVER_QUEST_DETAILS,
    SMSG_QUESTGIVER_QUEST_FAILED,
    SMSG_QUESTGIVER_QUEST_INVALID,
    SMSG_QUESTGIVER_QUEST_LIST,
    SMSG_QUESTGIVER_REQUEST_ITEMS,
    SMSG_QUESTGIVER_STATUS,
    SMSG_QUESTGIVER_STATUS_MULTIPLE,
    SMSG_QUESTLOG_FULL,
    SMSG_QUESTUPDATE_ADD_ITEM,
    SMSG_QUESTUPDATE_ADD_KILL,
    SMSG_QUESTUPDATE_ADD_PVP_KILL,
    SMSG_QUESTUPDATE_COMPLETE,
    SMSG_QUESTUPDATE_FAILED,
    SMSG_QUESTUPDATE_FAILEDTIMER,
    SMSG_QUEST_CONFIRM_ACCEPT,
    SMSG_QUEST_FORCE_REMOVED,
    SMSG_QUEST_POI_QUERY_RESPONSE,
    SMSG_QUEST_QUERY_RESPONSE,
    SMSG_RAID_GROUP_ONLY,
    SMSG_RAID_INSTANCE_INFO,
    SMSG_RAID_INSTANCE_MESSAGE,
    SMSG_RAID_READY_CHECK_ERROR,
    SMSG_READ_ITEM_FAILED,
    SMSG_READ_ITEM_OK,
    SMSG_REALM_SPLIT,
    SMSG_REAL_GROUP_UPDATE,
    SMSG_RECEIVED_MAIL,
    SMSG_REDIRECT_CLIENT,
    SMSG_REFER_A_FRIEND_FAILURE,
    SMSG_REMOVED_SPELL,
    SMSG_REPORT_PVP_AFK_RESULT,
    SMSG_RESET_FAILED_NOTIFY,
    SMSG_RESISTLOG,
    SMSG_RESPOND_INSPECT_ACHIEVEMENTS,
    SMSG_RESURRECT_FAILED,
    SMSG_RESURRECT_REQUEST,
    SMSG_RESYNC_RUNES,
    SMSG_RWHOIS,
    SMSG_SCRIPT_MESSAGE,
    SMSG_SELL_ITEM,
    SMSG_SEND_MAIL_RESULT,
    SMSG_SEND_QUEUED_PACKETS,
    SMSG_SEND_UNLEARN_SPELLS,
    SMSG_SERVERTIME,
    SMSG_SERVER_BUCK_DATA,
    SMSG_SERVER_BUCK_DATA_START,
    SMSG_SERVER_FIRST_ACHIEVEMENT,
    SMSG_SERVER_INFO_RESPONSE,
    SMSG_SERVER_MESSAGE,
    SMSG_SET_EXTRA_AURA_INFO_NEED_UPDATE_OBSOLETE,
    SMSG_SET_EXTRA_AURA_INFO_OBSOLETE,
    SMSG_SET_FACTION_ATWAR,
    SMSG_SET_FACTION_STANDING,
    SMSG_SET_FACTION_VISIBLE,
    SMSG_SET_FLAT_SPELL_MODIFIER,
    SMSG_SET_FORCED_REACTIONS,
    SMSG_SET_PCT_SPELL_MODIFIER,
    SMSG_SET_PHASE_SHIFT,
    SMSG_SET_PLAYER_DECLINED_NAMES_RESULT,
    SMSG_SET_PROFICIENCY,
    SMSG_SET_PROJECTILE_POSITION,
    SMSG_SHOWTAXINODES,
    SMSG_SHOW_BANK,
    SMSG_SPELLBREAKLOG,
    SMSG_SPELLDAMAGESHIELD,
    SMSG_SPELLDISPELLOG,
    SMSG_SPELLENERGIZELOG,
    SMSG_SPELLHEALLOG,
    SMSG_SPELLINSTAKILLLOG,
    SMSG_SPELLLOGEXECUTE,
    SMSG_SPELLLOGMISS,
    SMSG_SPELLNONMELEEDAMAGELOG,
    SMSG_SPELLORDAMAGE_IMMUNE,
    SMSG_SPELLSTEALLOG,
    SMSG_SPELL_CHANCE_PROC_LOG,
    SMSG_SPELL_CHANCE_RESIST_PUSHBACK,
    SMSG_SPELL_COOLDOWN,
    SMSG_SPELL_DELAYED,
    SMSG_SPELL_FAILED_OTHER,
    SMSG_SPELL_FAILURE,
    SMSG_SPELL_GO,
    SMSG_SPELL_START,
    SMSG_SPELL_UPDATE_CHAIN_TARGETS,
    SMSG_SPIRIT_HEALER_CONFIRM,
    SMSG_SPLINE_MOVE_FEATHER_FALL,
    SMSG_SPLINE_MOVE_LAND_WALK,
    SMSG_SPLINE_MOVE_NORMAL_FALL,
    SMSG_SPLINE_MOVE_ROOT,
    SMSG_SPLINE_MOVE_SET_FLYING,
    SMSG_SPLINE_MOVE_SET_HOVER,
    SMSG_SPLINE_MOVE_SET_RUN_MODE,
    SMSG_SPLINE_MOVE_SET_WALK_MODE,
    SMSG_SPLINE_MOVE_START_SWIM,
    SMSG_SPLINE_MOVE_STOP_SWIM,
    SMSG_SPLINE_MOVE_UNKNOWN_1235,
    SMSG_SPLINE_MOVE_UNKNOWN_1236,
    SMSG_SPLINE_MOVE_UNROOT,
    SMSG_SPLINE_MOVE_UNSET_FLYING,
    SMSG_SPLINE_MOVE_UNSET_HOVER,
    SMSG_SPLINE_MOVE_WATER_WALK,
    SMSG_SPLINE_SET_FLIGHT_BACK_SPEED,
    SMSG_SPLINE_SET_FLIGHT_SPEED,
    SMSG_SPLINE_SET_PITCH_RATE,
    SMSG_SPLINE_SET_RUN_BACK_SPEED,
    SMSG_SPLINE_SET_RUN_SPEED,
    SMSG_SPLINE_SET_SWIM_BACK_SPEED,
    SMSG_SPLINE_SET_SWIM_SPEED,
    SMSG_SPLINE_SET_TURN_RATE,
    SMSG_SPLINE_SET_WALK_SPEED,
    SMSG_STABLE_RESULT,
    SMSG_STANDSTATE_CHANGE_FAILURE_OBSOLETE,
    SMSG_STANDSTATE_UPDATE,
    SMSG_START_MIRROR_TIMER,
    SMSG_STOP_DANCE,
    SMSG_STOP_MIRROR_TIMER,
    SMSG_SUMMON_CANCEL,
    SMSG_SUMMON_REQUEST,
    SMSG_SUPERCEDED_SPELL,
    SMSG_TALENTS_INFO,
    SMSG_TALENTS_INVOLUNTARILY_RESET,
    SMSG_TAXINODE_STATUS,
    SMSG_TEXT_EMOTE,
    SMSG_THREAT_CLEAR,
    SMSG_THREAT_REMOVE,
    SMSG_THREAT_UPDATE,
    SMSG_TIME_SYNC_REQ,
    SMSG_TITLE_EARNED,
    SMSG_TOGGLE_XP_GAIN,
    SMSG_TOTEM_CREATED,
    SMSG_TRADE_STATUS,
    SMSG_TRADE_STATUS_EXTENDED,
    SMSG_TRAINER_BUY_RESULT,
    SMSG_TRAINER_LIST,
    SMSG_TRANSFER_ABORTED,
    SMSG_TRANSFER_PENDING,
    SMSG_TRIGGER_CINEMATIC,
    SMSG_TRIGGER_MOVIE,
    SMSG_TURN_IN_PETITION_RESULTS,
    SMSG_TUTORIAL_FLAGS,
    SMSG_UNIT_SPELLCAST_START,
    SMSG_UNKNOWN_1240,
    SMSG_UNKNOWN_1276,
    SMSG_UNKNOWN_1295,
    SMSG_UNKNOWN_1302,
    SMSG_UNKNOWN_1304,
    SMSG_UNKNOWN_1308,
    SMSG_UNKNOWN_1310,
    SMSG_UNKNOWN_1311,
    SMSG_UNKNOWN_1312,
    SMSG_UNKNOWN_1314,
    SMSG_UNKNOWN_1315,
    SMSG_UNKNOWN_1316,
    SMSG_UNKNOWN_1317,
    SMSG_UNKNOWN_1329,
    SMSG_UPDATE_ACCOUNT_DATA,
    SMSG_UPDATE_ACCOUNT_DATA_COMPLETE,
    SMSG_UPDATE_COMBO_POINTS,
    SMSG_UPDATE_CURRENCY,
    SMSG_UPDATE_CURRENCY_WEEK_LIMIT,
    SMSG_UPDATE_INSTANCE_ENCOUNTER_UNIT,
    SMSG_UPDATE_INSTANCE_OWNERSHIP,
    SMSG_UPDATE_ITEM_ENCHANTMENTS,
    SMSG_UPDATE_LAST_INSTANCE,
    SMSG_UPDATE_LFG_LIST,
    SMSG_UPDATE_OBJECT,
    SMSG_UPDATE_WORLD_STATE,
    SMSG_USERLIST_ADD,
    SMSG_USERLIST_REMOVE,
    SMSG_USERLIST_UPDATE,
    SMSG_VOICESESSION_FULL,
    SMSG_VOICE_CHAT_STATUS,
    SMSG_VOICE_PARENTAL_CONTROLS,
    SMSG_VOICE_SESSION_ADJUST_PRIORITY,
    SMSG_VOICE_SESSION_ENABLE,
    SMSG_VOICE_SESSION_LEAVE,
    SMSG_VOICE_SESSION_ROSTER_UPDATE,
    SMSG_VOICE_SET_TALKER_MUTED,
    SMSG_WARDEN_DATA,
    SMSG_WEATHER,
    SMSG_WHO,
    SMSG_WHOIS,
    SMSG_WORLD_STATE_UI_TIMER_UPDATE,
    SMSG_ZONE_UNDER_ATTACK,
    NUM_OPCODES
};

/*
NOTES:
0x1850 open reforging
*/
extern void InitOpcodeTable();

/// Player state
enum SessionStatus
{
    STATUS_AUTHED = 0,                                      // Player authenticated (_player == NULL, m_playerRecentlyLogout = false or will be reset before handler call, m_GUID have garbage)
    STATUS_LOGGEDIN,                                        // Player in game (_player != NULL, m_GUID == _player->GetGUID(), inWorld())
    STATUS_TRANSFER,                                        // Player transferring to another map (_player != NULL, m_GUID == _player->GetGUID(), !inWorld())
    STATUS_LOGGEDIN_OR_RECENTLY_LOGGOUT,                    // _player!= NULL or _player == NULL && m_playerRecentlyLogout, m_GUID store last _player guid)
    STATUS_NEVER,                                           // Opcode not accepted from client (deprecated or server side only)
    STATUS_UNHANDLED                                        // Opcode not handled yet
};

enum PacketProcessing
{
    PROCESS_INPLACE = 0,                                    //process packet whenever we receive it - mostly for non-handled or non-implemented packets
    PROCESS_THREADUNSAFE,                                   //packet is not thread-safe - process it in World::UpdateSessions()
    PROCESS_THREADSAFE                                      //packet is thread-safe - process it in Map::Update()
};

class WorldPacket;

struct OpcodeHandler
{
    char const* name;
    SessionStatus status;
    PacketProcessing packetProcessing;
    Opcodes enumValue;
    void (WorldSession::*handler)(WorldPacket& recvPacket);
};

#define MAX_MSG_TYPES 0xFFFF
extern OpcodeHandler opcodeTable[MAX_MSG_TYPES];
extern uint16 opcodesEnumToNumber[NUM_OPCODES];


/// Lookup opcode name for human understandable logging
inline const char* LookupOpcodeName(uint32 id)
{
    if (id >= MAX_MSG_TYPES)
        return "Received unknown opcode, it's more than max!";
    return opcodeTable[id].name;
}

inline Opcodes LookupOpcodeEnum(uint32 id)
{
    if (id >= MAX_MSG_TYPES)
        return CMSG_UNUSED2;
    return opcodeTable[id].enumValue;
}

inline uint16 LookupOpcodeNumber(uint32 enumValue)
{
    if (enumValue >= NUM_OPCODES)   // check can be removed for performance
        return 0;
    return opcodesEnumToNumber[enumValue];
}
#endif
/// @}
