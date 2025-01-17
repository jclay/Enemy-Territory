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

/*****************************************************************************
 * name:		be_aas_debug.h
 *
 * desc:		AAS
 *
 *
 *****************************************************************************/

// clear the shown debug lines
void AAS_ClearShownDebugLines(void);
//
void AAS_ClearShownPolygons(void);
// show a debug line
void AAS_DebugLine(vec3_t start, vec3_t end, int color);
// show a permenent line
void AAS_PermanentLine(vec3_t start, vec3_t end, int color);
// show a permanent cross
void AAS_DrawPermanentCross(vec3_t origin, float size, int color);
// draw a cross in the plane
void AAS_DrawPlaneCross(vec3_t point,
                        vec3_t normal,
                        float dist,
                        int type,
                        int color);
// show a bounding box
void AAS_ShowBoundingBox(vec3_t origin, vec3_t mins, vec3_t maxs);
// show a face
void AAS_ShowFace(int facenum);
// show an area
void AAS_ShowArea(int areanum, int groundfacesonly);
//
void AAS_ShowAreaPolygons(int areanum, int color, int groundfacesonly);
// draw a cros
void AAS_DrawCross(vec3_t origin, float size, int color);
// print the travel type
void AAS_PrintTravelType(int traveltype);
// draw an arrow
void AAS_DrawArrow(vec3_t start, vec3_t end, int linecolor, int arrowcolor);
// visualize the given reachability
void AAS_ShowReachability(struct aas_reachability_s* reach);
// show the reachable areas from the given area
void AAS_ShowReachableAreas(int areanum);
