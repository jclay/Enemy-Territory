/*
===========================================================================

Wolfenstein: Enemy Territory GPL Source Code
Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.

This file is part of the Wolfenstein: Enemy Territory GPL Source Code (Wolf ET
Source Code).

Wolf ET Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Wolf ET Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Wolf ET Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Wolf: ET Source Code is also subject to certain additional
terms. You should have received a copy of these additional terms immediately
following the terms and conditions of the GNU General Public License which
accompanied the Wolf ET Source Code.  If not, please request a copy in writing
from id Software at the address below.

If you have questions concerning this license or the applicable additional
terms, you may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite
120, Rockville, Maryland 20850 USA.

===========================================================================
*/

#include "../game/q_shared.h"
#include "../qcommon/qcommon.h"
#include "client.h"

/*
==============
CL_Netchan_Encode

        // first 12 bytes of the data are always:
        long serverId;
        long messageAcknowledge;
        long reliableAcknowledge;

==============
*/
static void CL_Netchan_Encode(msg_t* msg) {
  int serverId, messageAcknowledge, reliableAcknowledge;
  int i, index, srdc, sbit, soob;
  byte key, *string;

  if (msg->cursize <= CL_ENCODE_START) {
    return;
  }

  srdc = msg->readcount;
  sbit = msg->bit;
  soob = msg->oob;

  msg->bit = 0;
  msg->readcount = 0;
  msg->oob = 0;

  serverId = MSG_ReadLong(msg);
  messageAcknowledge = MSG_ReadLong(msg);
  reliableAcknowledge = MSG_ReadLong(msg);

  msg->oob = soob;
  msg->bit = sbit;
  msg->readcount = srdc;

  string =
      (byte*)
          clc.serverCommands[reliableAcknowledge & (MAX_RELIABLE_COMMANDS - 1)];
  index = 0;
  //
  key = clc.challenge ^ serverId ^ messageAcknowledge;
  for (i = CL_ENCODE_START; i < msg->cursize; i++) {
    // modify the key with the last received now acknowledged server command
    if (!string[index]) {
      index = 0;
    }
    if (string[index] > 127 || string[index] == '%') {
      key ^= '.' << (i & 1);
    } else {
      key ^= string[index] << (i & 1);
    }
    index++;
    // encode the data with this key
    *(msg->data + i) = (*(msg->data + i)) ^ key;
  }
}

/*
==============
CL_Netchan_Decode

        // first four bytes of the data are always:
        long reliableAcknowledge;

==============
*/
static void CL_Netchan_Decode(msg_t* msg) {
  long reliableAcknowledge, i, index;
  byte key, *string;
  int srdc, sbit, soob;

  srdc = msg->readcount;
  sbit = msg->bit;
  soob = msg->oob;

  msg->oob = 0;

  reliableAcknowledge = MSG_ReadLong(msg);

  msg->oob = soob;
  msg->bit = sbit;
  msg->readcount = srdc;

  string =
      clc.reliableCommands[reliableAcknowledge & (MAX_RELIABLE_COMMANDS - 1)];
  index = 0;
  // xor the client challenge with the netchan sequence number (need something
  // that changes every message)
  key = clc.challenge ^ LittleLong(*(unsigned*)msg->data);
  for (i = msg->readcount + CL_DECODE_START; i < msg->cursize; i++) {
    // modify the key with the last sent and with this message acknowledged
    // client command
    if (!string[index]) {
      index = 0;
    }
    if (string[index] > 127 || string[index] == '%') {
      key ^= '.' << (i & 1);
    } else {
      key ^= string[index] << (i & 1);
    }
    index++;
    // decode the data with this key
    *(msg->data + i) = *(msg->data + i) ^ key;
  }
}

/*
=================
CL_Netchan_TransmitNextFragment
=================
*/
void CL_Netchan_TransmitNextFragment(netchan_t* chan) {
  Netchan_TransmitNextFragment(chan);
}

extern qboolean SV_GameIsSinglePlayer(void);

/*
================
CL_WriteBinaryMessage
================
*/
static void CL_WriteBinaryMessage(msg_t* msg) {
  if (!clc.binaryMessageLength) {
    return;
  }

  MSG_Uncompressed(msg);

  if ((msg->cursize + clc.binaryMessageLength) >= msg->maxsize) {
    clc.binaryMessageOverflowed = qtrue;
    return;
  }

  MSG_WriteData(msg, clc.binaryMessage, clc.binaryMessageLength);
  clc.binaryMessageLength = 0;
  clc.binaryMessageOverflowed = qfalse;
}

/*
================
CL_Netchan_Transmit
================
*/
void CL_Netchan_Transmit(netchan_t* chan, msg_t* msg) {
  MSG_WriteByte(msg, clc_EOF);
  CL_WriteBinaryMessage(msg);

  if (!SV_GameIsSinglePlayer()) {
    CL_Netchan_Encode(msg);
  }
  Netchan_Transmit(chan, msg->cursize, msg->data);
}

extern int oldsize;
int newsize = 0;

/*
=================
CL_Netchan_Process
=================
*/
qboolean CL_Netchan_Process(netchan_t* chan, msg_t* msg) {
  int ret;

  ret = Netchan_Process(chan, msg);
  if (!ret) {
    return qfalse;
  }
  if (!SV_GameIsSinglePlayer()) {
    CL_Netchan_Decode(msg);
  }
  newsize += msg->cursize;
  return qtrue;
}
