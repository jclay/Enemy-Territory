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

//===========================================================================
//
// Name:         l_log.c
// Function:     log file stuff
// Programmer:   Mr Elusive (MrElusive@demigod.demon.nl)
// Last update:  1997-12-31
// Tab Size:     3
//===========================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QPATH 64
#include "../bspc/qbsp.h"

#define MAX_LOGFILENAMESIZE 1024

typedef struct logfile_s {
  char filename[MAX_LOGFILENAMESIZE];
  FILE* fp;
  int numwrites;
} logfile_t;

logfile_t logfile;

//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
void Log_Open(char* filename) {
  if (!filename || !strlen(filename)) {
    printf("openlog <filename>\n");
    return;
  }  // end if
  if (logfile.fp) {
    printf("log file %s is already opened\n", logfile.filename);
    return;
  }  // end if
  logfile.fp = fopen(filename, "wb");
  if (!logfile.fp) {
    printf("can't open the log file %s\n", filename);
    return;
  }  // end if
  strncpy(logfile.filename, filename, MAX_LOGFILENAMESIZE);
  //	printf("Opened log %s\n", logfile.filename);
}  // end of the function Log_Create
//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
void Log_Close(void) {
  if (!logfile.fp) {
    printf("no log file to close\n");
    return;
  }  // end if
  if (fclose(logfile.fp)) {
    printf("can't close log file %s\n", logfile.filename);
    return;
  }  // end if
  logfile.fp = NULL;
  //	printf("Closed log %s\n", logfile.filename);
}  // end of the function Log_Close
//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
void Log_Shutdown(void) {
  if (logfile.fp) {
    Log_Close();
  }
}  // end of the function Log_Shutdown
//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
void Log_Print(char* fmt, ...) {
  va_list ap;
#ifdef WINBSPC
  char buf[2048];
#endif  // WINBSPC

  if (verbose) {
    va_start(ap, fmt);
#ifdef WINBSPC
    Q_vsnprintf(buf, sizeof(buf), fmt, ap);
    WinBSPCPrint(buf);
#else
    vprintf(fmt, ap);
#endif  // WINBSPS
    va_end(ap);
  }  // end if

  va_start(ap, fmt);
  if (logfile.fp) {
    vfprintf(logfile.fp, fmt, ap);
    fflush(logfile.fp);
  }  // end if
  va_end(ap);
}  // end of the function Log_Print
//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
void Log_Write(char* fmt, ...) {
  va_list ap;

  if (!logfile.fp) {
    return;
  }
  va_start(ap, fmt);
  vfprintf(logfile.fp, fmt, ap);
  va_end(ap);
  fflush(logfile.fp);
}  // end of the function Log_Write
//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
void Log_WriteTimeStamped(char* fmt, ...) {
  va_list ap;

  if (!logfile.fp) {
    return;
  }
  /*	fprintf(logfile.fp, "%d   %02d:%02d:%02d:%02d   ",
                                          logfile.numwrites,
                                          (int) (botlibglobals.time / 60 / 60),
                                          (int) (botlibglobals.time / 60),
                                          (int) (botlibglobals.time),
                                          (int) ((int) (botlibglobals.time *
     100)) -
                                                          ((int)
     botlibglobals.time) * 100);*/
  va_start(ap, fmt);
  vfprintf(logfile.fp, fmt, ap);
  va_end(ap);
  logfile.numwrites++;
  fflush(logfile.fp);
}  // end of the function Log_Write
//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
FILE* Log_FileStruct(void) {
  return logfile.fp;
}  // end of the function Log_FileStruct
//===========================================================================
//
// Parameter:				-
// Returns:					-
// Changes Globals:		-
//===========================================================================
void Log_Flush(void) {
  if (logfile.fp) {
    fflush(logfile.fp);
  }
}  // end of the function Log_Flush
