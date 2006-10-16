/***************************************************************************
 *   Copyright (C) 2005/06 by The Quassel Team                             *
 *   devel@quassel-irc.org                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef _MSGCODES_H_
#define _MSGCODES_H_

/** Contains numeric codes for the named commands. */
enum CmdCodes {
  CMD_ADMIN = 1, CMD_AMSG, CMD_AWAY, CMD_BAN, CMD_CTCP, CMD_CYCLE, CMD_DEHALFOP, CMD_DEOP, CMD_DEVOICE,
  CMD_HALFOP, CMD_INFO, CMD_INVITE, CMD_JOIN, CMD_KICK, CMD_KICKBAN, CMD_LIST, CMD_LUSERS, CMD_ME,
  CMD_MODE, CMD_MOTD, CMD_MSG, CMD_NAMES, CMD_NICK, CMD_NOTICE, CMD_OP, CMD_PART, CMD_PING, CMD_PONG,
  CMD_PRIVMSG, CMD_QUERY, CMD_QUIT, CMD_QUOTE, CMD_STATS, CMD_TIME, CMD_TOPIC, CMD_UNBAN, CMD_USERHOST,
  CMD_USERS, CMD_VERSION, CMD_VOICE, CMD_WALLOPS, CMD_WHO, CMD_WHOIS, CMD_WHOWAS
};



#endif
