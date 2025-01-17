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

#include "cg_local.h"

rankicon_t rankicons[NUM_EXPERIENCE_LEVELS][2] = {
    {{0, "gfx/hud/ranks/rank1", 128, 128},
     {0, "models/players/temperate/common/rank1", 128, 128}},
    {{0, "gfx/hud/ranks/rank2", 128, 128},
     {0, "models/players/temperate/common/rank2", 128, 128}},
    {{0, "gfx/hud/ranks/rank3", 128, 128},
     {0, "models/players/temperate/common/rank3", 128, 128}},
    {{0, "gfx/hud/ranks/rank4", 128, 128},
     {0, "models/players/temperate/common/rank4", 128, 128}},
    {{0, "gfx/hud/ranks/rank5", 128, 128},
     {0, "models/players/temperate/common/rank5", 128, 128}},
    {{0, "gfx/hud/ranks/rank6", 128, 128},
     {0, "models/players/temperate/common/rank6", 128, 128}},
    {{0, "gfx/hud/ranks/rank7", 128, 128},
     {0, "models/players/temperate/common/rank7", 128, 128}},
    {{0, "gfx/hud/ranks/rank8", 128, 128},
     {0, "models/players/temperate/common/rank8", 128, 128}},
    {{0, "gfx/hud/ranks/rank9", 128, 128},
     {0, "models/players/temperate/common/rank9", 128, 128}},
    {{0, "gfx/hud/ranks/rank10", 128, 128},
     {0, "models/players/temperate/common/rank10", 128, 128}},
    {{0, "gfx/hud/ranks/rank11", 128, 128},
     {0, "models/players/temperate/common/rank11", 128, 128}},
};

void CG_LoadRankIcons(void) {
  int i;

  for (i = 1; i < NUM_EXPERIENCE_LEVELS; i++) {
    rankicons[i][0].shader =
        trap_R_RegisterShaderNoMip(rankicons[i][0].iconname);
    rankicons[i][1].shader =
        trap_R_RegisterShaderNoMip(rankicons[i][1].iconname);
  }
}
