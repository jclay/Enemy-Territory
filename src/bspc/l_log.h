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
// Name:         l_log.h
// Function:     log file stuff
// Programmer:   Mr Elusive (MrElusive@demigod.demon.nl)
// Last update:  1997-12-31
// Tab Size:     3
//===========================================================================

// open a log file
void Log_Open(char* filename);
// close the current log file
void Log_Close(void);
// close log file if present
void Log_Shutdown(void);
// print on stdout and write to the current opened log file
void Log_Print(char* fmt, ...);
// write to the current opened log file
void Log_Write(char* fmt, ...);
// write to the current opened log file with a time stamp
void Log_WriteTimeStamped(char* fmt, ...);
// returns the log file structure
FILE* Log_FileStruct(void);
// flush log file
void Log_Flush(void);

#ifdef WINBSPC
void WinBSPCPrint(char* str);
#endif  // WINBSPC
