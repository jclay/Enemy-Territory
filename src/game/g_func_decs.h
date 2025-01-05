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

extern void Info_SetValueForKey_Big(char* s,
                                    const char* key,
                                    const char* value);
extern void Info_SetValueForKey(char* s, const char* key, const char* value);
extern qboolean Info_Validate(const char* s);
extern void Info_RemoveKey_Big(char* s, const char* key);
extern void Info_RemoveKey(char* s, const char* key);
extern void Info_NextPair(const char** head, char* key, char* value);
extern char* Info_ValueForKey(const char* s, const char* key);
extern float* tv(float x, float y, float z);
extern char* QDECL va(char* format, ...);
extern void QDECL Com_sprintf(char* dest, int size, const char* fmt, ...);
extern char* Q_CleanDirName(char* dirname);
extern qboolean Q_isBadDirChar(char c);
extern char* Q_CleanStr(char* string);
extern int Q_PrintStrlen(const char* string);
extern void Q_strcat(char* dest, int size, const char* src);
extern char* Q_strupr(char* s1);
extern char* Q_strlwr(char* s1);
extern int Q_stricmp(const char* s1, const char* s2);
extern int Q_strncmp(const char* s1, const char* s2, int n);
extern int Q_stricmpn(const char* s1, const char* s2, int n);
extern void Q_strncpyz(char* dest, const char* src, int destsize);
extern char* Q_strrchr(const char* string, int c);
extern int Q_isforfilename(int c);
extern int Q_isalphanumeric(int c);
extern int Q_isnumeric(int c);
extern int Q_isalpha(int c);
extern int Q_isupper(int c);
extern int Q_islower(int c);
extern int Q_isprint(int c);
extern int Com_ParseInfos(char* buf, int max, char infos[][MAX_INFO_STRING]);
extern void Parse3DMatrix(char** buf_p, int z, int y, int x, float* m);
extern void Parse2DMatrix(char** buf_p, int y, int x, float* m);
extern void Parse1DMatrix(char** buf_p, int x, float* m);
extern void SkipRestOfLine(char** data);
extern void SkipBracedSection(char** program);
extern void SkipBracedSection_Depth(char** program, int depth);
extern void COM_MatchToken(char** buf_p, char* match);
extern char* COM_ParseExt(char** data_p, qboolean allowLineBreaks);
extern int COM_Compress(char* data_p);
extern void COM_ParseWarning(char* format, ...);
extern void COM_ParseError(char* format, ...);
extern char* COM_Parse(char** data_p);
extern int COM_GetCurrentParseLine(void);
extern void COM_SetCurrentParseLine(int line);
extern void COM_RestoreParseSession(char** data_p);
extern void COM_BackupParseSession(char** data_p);
extern void COM_BeginParseSession(const char* name);
extern void Swap_Init(void);
extern float FloatNoSwap(float f);
extern float FloatSwap(float f);
extern qint64 Long64NoSwap(qint64 ll);
extern qint64 Long64Swap(qint64 ll);
extern int LongNoSwap(int l);
extern int LongSwap(int l);
extern short ShortNoSwap(short l);
extern short ShortSwap(short l);
extern float BigFloat(float l);
extern qint64 BigLong64(qint64 l);
extern int BigLong(int l);
extern short BigShort(short l);
extern float LittleFloat(float l);
extern qint64 LittleLong64(qint64 l);
extern int LittleLong(int l);
extern short LittleShort(short l);
extern void COM_BitClear(int array[], int bitNum);
extern void COM_BitSet(int array[], int bitNum);
extern qboolean COM_BitCheck(const int array[], int bitNum);
extern void COM_DefaultExtension(char* path,
                                 int maxSize,
                                 const char* extension);
extern void COM_StripFilename(char* in, char* out);
extern void COM_StripExtension2(const char* in, char* out, int destsize);
extern void COM_StripExtension(const char* in, char* out);
extern char* COM_SkipPath(char* pathname);
extern void COM_FixPath(char* pathname);
extern float Com_Clamp(float min, float max, float value);
extern float Q_fabs(float f);
extern float Q_rsqrt(float number);
extern void VectorRotate(vec3_t in, vec3_t matrix[3], vec3_t out);
extern void MakeNormalVectors(const vec3_t forward, vec3_t right, vec3_t up);
extern void ProjectPointOnPlane(vec3_t dst,
                                const vec3_t p,
                                const vec3_t normal);
extern void AxisCopy(vec3_t in[3], vec3_t out[3]);
extern void AxisClear(vec3_t axis[3]);
extern void AnglesToAxis(const vec3_t angles, vec3_t axis[3]);
extern void vectoangles(const vec3_t value1, vec3_t angles);
extern void RotateAroundDirection(vec3_t axis[3], float yaw);
extern void RotatePointAroundVertex(vec3_t pnt,
                                    float rot_x,
                                    float rot_y,
                                    float rot_z,
                                    const vec3_t origin);
extern void RotatePointAroundVector(vec3_t dst,
                                    const vec3_t dir,
                                    const vec3_t point,
                                    float degrees);
extern qboolean PlaneFromPoints(vec4_t plane,
                                const vec3_t a,
                                const vec3_t b,
                                const vec3_t c);
extern float NormalizeColor(const vec3_t in, vec3_t out);
extern unsigned ColorBytes4(float r, float g, float b, float a);
extern unsigned ColorBytes3(float r, float g, float b);
extern void ByteToDir(int b, vec3_t dir);
extern int DirToByte(vec3_t dir);
extern signed short ClampShort(int i);
extern signed char ClampChar(int i);
extern float Q_crandom(int* seed);
extern float Q_random(int* seed);
extern int Q_rand(int* seed);
extern qboolean Bullet_Fire_Extended(gentity_t* source,
                                     gentity_t* attacker,
                                     vec3_t start,
                                     vec3_t end,
                                     float spread,
                                     int damage,
                                     qboolean distance_falloff);
extern void Bullet_Fire(gentity_t* ent,
                        float spread,
                        int damage,
                        qboolean distance_falloff);
extern void Bullet_Endpos(gentity_t* ent, float spread, vec3_t* end);
extern void EmitterCheck(gentity_t* ent, gentity_t* attacker, trace_t* tr);
extern void RubbleFlagCheck(gentity_t* ent, trace_t tr);
extern float G_GetWeaponSpread(int weapon);
extern int G_GetWeaponDamage(int weapon);
extern void SnapVectorTowards(vec3_t v, vec3_t to);
extern void weapon_smokeBombExplode(gentity_t* ent);
extern void Weapon_Artillery(gentity_t* ent);
extern void G_GlobalClientEvent(int event, int param, int client);
extern void artillerySpotterThink(gentity_t* ent);
extern void artilleryGoAway(gentity_t* ent);
extern void artilleryThink(gentity_t* ent);
extern void artilleryThink_real(gentity_t* ent);
extern void weapon_callAirStrike(gentity_t* ent);
extern qboolean weapon_checkAirStrike(gentity_t* ent);
extern void weapon_callSecondPlane(gentity_t* ent);
extern void weapon_checkAirStrikeThink2(gentity_t* ent);
extern void weapon_checkAirStrikeThink1(gentity_t* ent);
extern void G_AddAirstrikeToCounters(gentity_t* ent);
extern qboolean G_AvailableAirstrikes(gentity_t* ent);
extern void G_AirStrikeExplode(gentity_t* self);
extern void Weapon_Engineer(gentity_t* ent);
extern void trap_EngineerTrace(trace_t* results,
                               const vec3_t start,
                               const vec3_t mins,
                               const vec3_t maxs,
                               const vec3_t end,
                               int passEntityNum,
                               int contentmask);
extern qboolean G_LandmineSpotted(gentity_t* ent);
extern team_t G_LandmineTeam(gentity_t* ent);
extern qboolean G_LandmineUnarmed(gentity_t* ent);
extern qboolean G_LandmineArmed(gentity_t* ent);
extern qboolean G_LandmineTriggered(gentity_t* ent);
extern void AutoBuildConstruction(gentity_t* constructible);
extern int EntsThatRadiusCanDamage(vec3_t origin,
                                   float radius,
                                   int* damagedList);
extern void Weapon_AdrenalineSyringe(gentity_t* ent);
extern void Weapon_Syringe(gentity_t* ent);
extern qboolean ReviveEntity(gentity_t* ent, gentity_t* traceEnt);
extern void Weapon_MagicAmmo(gentity_t* ent);
extern void G_PlaceTripmine(gentity_t* ent);
extern void Weapon_Medic(gentity_t* ent);
extern void MagicSink(gentity_t* self);
extern void Weapon_Knife(gentity_t* ent);
extern int G_GetWeaponClassForMOD(meansOfDeath_t mod);
extern qboolean G_WeaponIsExplosive(meansOfDeath_t mod);
extern int G_Unreferee_v(gentity_t* ent,
                         unsigned int dwVoteIndex,
                         char* arg,
                         char* arg2,
                         qboolean fRefereeCmd);
extern int G_Warmupfire_v(gentity_t* ent,
                          unsigned int dwVoteIndex,
                          char* arg,
                          char* arg2,
                          qboolean fRefereeCmd);
extern void G_WarmupDamageTypeList(gentity_t* ent);
extern int G_Timelimit_v(gentity_t* ent,
                         unsigned int dwVoteIndex,
                         char* arg,
                         char* arg2,
                         qboolean fRefereeCmd);
extern int G_BalancedTeams_v(gentity_t* ent,
                             unsigned int dwVoteIndex,
                             char* arg,
                             char* arg2,
                             qboolean fRefereeCmd);
extern int G_AntiLag_v(gentity_t* ent,
                       unsigned int dwVoteIndex,
                       char* arg,
                       char* arg2,
                       qboolean fRefereeCmd);
extern int G_FriendlyFire_v(gentity_t* ent,
                            unsigned int dwVoteIndex,
                            char* arg,
                            char* arg2,
                            qboolean fRefereeCmd);
extern int G_SwapTeams_v(gentity_t* ent,
                         unsigned int dwVoteIndex,
                         char* arg,
                         char* arg2,
                         qboolean fRefereeCmd);
extern int G_StartMatch_v(gentity_t* ent,
                          unsigned int dwVoteIndex,
                          char* arg,
                          char* arg2,
                          qboolean fRefereeCmd);
extern int G_ShuffleTeams_v(gentity_t* ent,
                            unsigned int dwVoteIndex,
                            char* arg,
                            char* arg2,
                            qboolean fRefereeCmd);
extern int G_Referee_v(gentity_t* ent,
                       unsigned int dwVoteIndex,
                       char* arg,
                       char* arg2,
                       qboolean fRefereeCmd);
extern int G_Pub_v(gentity_t* ent,
                   unsigned int dwVoteIndex,
                   char* arg,
                   char* arg2,
                   qboolean fRefereeCmd);
extern int G_Nextmap_v(gentity_t* ent,
                       unsigned int dwVoteIndex,
                       char* arg,
                       char* arg2,
                       qboolean fRefereeCmd);
extern int G_Mutespecs_v(gentity_t* ent,
                         unsigned int dwVoteIndex,
                         char* arg,
                         char* arg2,
                         qboolean fRefereeCmd);
extern int G_MatchReset_v(gentity_t* ent,
                          unsigned int dwVoteIndex,
                          char* arg,
                          char* arg2,
                          qboolean fRefereeCmd);
extern int G_MapRestart_v(gentity_t* ent,
                          unsigned int dwVoteIndex,
                          char* arg,
                          char* arg2,
                          qboolean fRefereeCmd);
extern int G_Campaign_v(gentity_t* ent,
                        unsigned int dwVoteIndex,
                        char* arg,
                        char* arg2,
                        qboolean fRefereeCmd);
extern int G_Map_v(gentity_t* ent,
                   unsigned int dwVoteIndex,
                   char* arg,
                   char* arg2,
                   qboolean fRefereeCmd);
extern int G_UnMute_v(gentity_t* ent,
                      unsigned int dwVoteIndex,
                      char* arg,
                      char* arg2,
                      qboolean fRefereeCmd);
extern int G_Mute_v(gentity_t* ent,
                    unsigned int dwVoteIndex,
                    char* arg,
                    char* arg2,
                    qboolean fRefereeCmd);
extern int G_Kick_v(gentity_t* ent,
                    unsigned int dwVoteIndex,
                    char* arg,
                    char* arg2,
                    qboolean fRefereeCmd);
extern int G_Gametype_v(gentity_t* ent,
                        unsigned int dwVoteIndex,
                        char* arg,
                        char* arg2,
                        qboolean fRefereeCmd);
extern void G_GametypeList(gentity_t* ent);
extern int G_Comp_v(gentity_t* ent,
                    unsigned int dwVoteIndex,
                    char* arg,
                    char* arg2,
                    qboolean fRefereeCmd);
extern void G_voteSetVoteString(const char* desc);
extern void G_voteSetValue(const char* desc, const char* cvar);
extern void G_voteSetOnOff(const char* desc, const char* cvar);
extern int G_voteProcessOnOff(gentity_t* ent,
                              char* arg,
                              char* arg2,
                              qboolean fRefereeCmd,
                              int curr_setting,
                              int vote_allow,
                              int vote_type);
extern void G_voteCurrentSetting(gentity_t* ent,
                                 const char* cmd,
                                 const char* setting);
extern void G_playersMessage(gentity_t* ent);
extern void G_voteDisableMessage(gentity_t* ent, const char* cmd);
extern qboolean G_voteDescription(gentity_t* ent,
                                  qboolean fRefereeCmd,
                                  int cmd);
extern void G_voteFlags(void);
extern void G_voteHelp(gentity_t* ent, qboolean fShowVote);
extern int G_voteCmdCheck(gentity_t* ent,
                          char* arg,
                          char* arg2,
                          qboolean fRefereeCmd);
extern team_t G_GetTeamFromEntity(gentity_t* ent);
extern void G_PrintClientSpammyCenterPrint(int entityNum, char* text);
extern void G_ParseCampaigns(void);
extern qboolean G_MapIsValidCampaignStartMap(void);
extern void G_SetEntState(gentity_t* ent, entState_t state);
extern int DebugLine(vec3_t start, vec3_t end, int color);
extern void G_ProcessTagConnect(gentity_t* ent, qboolean clearAngles);
extern qboolean infront(gentity_t* self, gentity_t* other);
extern void G_SetAngle(gentity_t* ent, vec3_t angle);
extern void G_SetOrigin(gentity_t* ent, vec3_t origin);
extern void G_AnimScriptSound(int soundIndex, vec3_t org, int client);
extern void G_Sound(gentity_t* ent, int soundIndex);
extern void G_AddEvent(gentity_t* ent, int event, int eventParm);
extern void G_AddPredictableEvent(gentity_t* ent, int event, int eventParm);
extern void G_KillBox(gentity_t* ent);
extern gentity_t* G_PopupMessage(popupMessageType_t type);
extern gentity_t* G_TempEntity(vec3_t origin, int event);
extern void G_FreeEntity(gentity_t* ed);
extern qboolean G_EntitiesFree(void);
extern gentity_t* G_Spawn(void);
extern void G_InitGentity(gentity_t* e);
extern void G_SetMovedir(vec3_t angles, vec3_t movedir);
extern char* vtosf(const vec3_t v);
extern char* vtos(const vec3_t v);
extern void G_UseTargets(gentity_t* ent, gentity_t* activator);
extern void G_UseEntity(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern qboolean G_AllowTeamsAllowed(gentity_t* ent, gentity_t* activator);
extern gentity_t* G_PickTarget(char* targetname);
extern gentity_t* G_FindByTargetnameFast(gentity_t* from,
                                         const char* match,
                                         int hash);
extern gentity_t* G_FindByTargetname(gentity_t* from, const char* match);
extern gentity_t* G_Find(gentity_t* from, int fieldofs, const char* match);
extern void G_TeamCommand(team_t team, char* cmd);
extern int G_StringIndex(const char* string);
extern int G_CharacterIndex(const char* name);
extern int G_ShaderIndex(char* name);
extern int G_SkinIndex(const char* name);
extern int G_SoundIndex(const char* name);
extern int G_ModelIndex(char* name);
extern int G_FindConfigstringIndex(const char* name,
                                   int start,
                                   int max,
                                   qboolean create);
extern const char* BuildShaderStateConfig();
extern void AddRemap(const char* oldShader,
                     const char* newShader,
                     float timeOffset);
extern void SP_trigger_concussive_dust(gentity_t* self);
extern void trigger_concussive_touch(gentity_t* ent,
                                     gentity_t* other,
                                     trace_t* trace);
extern void SP_trigger_objective_info(gentity_t* ent);
extern void Think_SetupObjectiveInfo(gentity_t* ent);
extern void Touch_ObjectiveInfo(gentity_t* ent,
                                gentity_t* other,
                                trace_t* trace);
extern void G_SetConfigStringValue(int num, const char* key, const char* value);
extern void constructible_indicator_think(gentity_t* ent);
extern void explosive_indicator_think(gentity_t* ent);
extern void SP_trigger_flagonly_multiple(gentity_t* ent);
extern void SP_trigger_flagonly(gentity_t* ent);
extern void Touch_flagonly_multiple(gentity_t* ent,
                                    gentity_t* other,
                                    trace_t* trace);
extern void Touch_flagonly(gentity_t* ent, gentity_t* other, trace_t* trace);
extern void SP_gas(gentity_t* self);
extern void SP_trigger_aidoor(gentity_t* ent);
extern void trigger_aidoor_stayopen(gentity_t* ent,
                                    gentity_t* other,
                                    trace_t* trace);
extern void SP_trigger_once(gentity_t* ent);
extern void SP_func_timer(gentity_t* self);
extern void func_timer_use(gentity_t* self,
                           gentity_t* other,
                           gentity_t* activator);
extern void func_timer_think(gentity_t* self);
extern void SP_trigger_ammo(gentity_t* self);
extern void SP_misc_cabinet_supply(gentity_t* self);
extern void trigger_ammo_setup(gentity_t* self);
extern void trigger_ammo_think(gentity_t* self);
extern void ammo_touch(gentity_t* self, gentity_t* other, trace_t* trace);
extern qboolean G_IsAllowedAmmo(gentity_t* ent);
extern void SP_trigger_heal(gentity_t* self);
extern void SP_misc_cabinet_health(gentity_t* self);
extern void trigger_heal_setup(gentity_t* self);
extern void trigger_heal_think(gentity_t* self);
extern void heal_touch(gentity_t* self, gentity_t* other, trace_t* trace);
extern qboolean G_IsAllowedHeal(gentity_t* ent);
extern void SP_trigger_hurt(gentity_t* self);
extern void hurt_use(gentity_t* self, gentity_t* other, gentity_t* activator);
extern void hurt_think(gentity_t* ent);
extern void hurt_touch(gentity_t* self, gentity_t* other, trace_t* trace);
extern void SP_trigger_teleport(gentity_t* self);
extern void trigger_teleporter_touch(gentity_t* self,
                                     gentity_t* other,
                                     trace_t* trace);
extern void SP_target_push(gentity_t* self);
extern void Use_target_push(gentity_t* self,
                            gentity_t* other,
                            gentity_t* activator);
extern void SP_trigger_push(gentity_t* self);
extern void trigger_push_use(gentity_t* self,
                             gentity_t* other,
                             gentity_t* activator);
extern void AimAtTarget(gentity_t* self);
extern void trigger_push_touch(gentity_t* self,
                               gentity_t* other,
                               trace_t* trace);
extern void SP_trigger_always(gentity_t* ent);
extern void trigger_always_think(gentity_t* ent);
extern void SP_trigger_multiple(gentity_t* ent);
extern void Touch_Multi(gentity_t* self, gentity_t* other, trace_t* trace);
extern void Use_Multi(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void multi_trigger(gentity_t* ent, gentity_t* activator);
extern void multi_wait(gentity_t* ent);
extern void InitTrigger(gentity_t* self);
extern void G_UpdateTeamMapData(void);
extern void G_SendMapEntityInfo(gentity_t* e);
extern void G_SendSpectatorMapEntityInfo(gentity_t* e);
extern void G_UpdateTeamMapData_CommandmapMarker(gentity_t* ent);
extern void G_UpdateTeamMapData_LandMine(gentity_t* ent,
                                         qboolean forceAllied,
                                         qboolean forceAxis);
extern void G_UpdateTeamMapData_Player(gentity_t* ent,
                                       qboolean forceAllied,
                                       qboolean forceAxis);
extern void G_UpdateTeamMapData_Destruct(gentity_t* ent);
extern void G_UpdateTeamMapData_Tank(gentity_t* ent);
extern void G_UpdateTeamMapData_Construct(gentity_t* ent);
extern void G_ResetTeamMapData();
extern qboolean G_VisibleFromBinoculars(gentity_t* viewer,
                                        gentity_t* ent,
                                        vec3_t origin);
extern void G_SetupFrustum_ForBinoculars(gentity_t* ent);
extern void G_SetupFrustum(gentity_t* ent);
extern mapEntityData_t* G_FindMapEntityDataSingleClient(
    mapEntityData_Team_t* teamList,
    mapEntityData_t* start,
    int entNum,
    int clientNum);
extern mapEntityData_t* G_FindMapEntityData(mapEntityData_Team_t* teamList,
                                            int entNum);
extern mapEntityData_t* G_AllocMapEntityData(mapEntityData_Team_t* teamList);
extern mapEntityData_t* G_FreeMapEntityData(mapEntityData_Team_t* teamList,
                                            mapEntityData_t* mEnt);
extern void G_InitMapEntityData(mapEntityData_Team_t* teamList);
extern void G_PushMapEntityToBuffer(char* buffer,
                                    int size,
                                    mapEntityData_t* mEnt);
extern qboolean G_desiredFollow(gentity_t* ent, int nTeam);
extern qboolean G_allowFollow(gentity_t* ent, int nTeam);
extern int G_blockoutTeam(gentity_t* ent, int nTeam);
extern void G_removeSpecInvite(int team);
extern void G_swapTeamLocks(void);
extern void G_updateSpecLock(int nTeam, qboolean fLock);
extern qboolean G_teamJoinCheck(int team_num, gentity_t* ent);
extern void G_verifyMatchState(int nTeam);
extern qboolean G_readyMatchState(void);
extern qboolean G_checkReady(void);
extern int G_teamID(gentity_t* ent);
extern void G_shuffleTeams(void);
extern int QDECL G_SortPlayersByXP(const void* a, const void* b);
extern void G_swapTeams(void);
extern void G_teamReset(int team_num, qboolean fClearSpecLock);
extern int Team_ClassForString(char* string);
extern void SP_team_WOLF_checkpoint(gentity_t* ent);
extern void checkpoint_spawntouch(gentity_t* self,
                                  gentity_t* other,
                                  trace_t* trace);
extern void checkpoint_touch(gentity_t* self, gentity_t* other, trace_t* trace);
extern void checkpoint_think(gentity_t* self);
extern void checkpoint_hold_think(gentity_t* self);
extern void checkpoint_use(gentity_t* ent,
                           gentity_t* other,
                           gentity_t* activator);
extern void checkpoint_use_think(gentity_t* self);
extern void SP_team_WOLF_objective(gentity_t* ent);
extern void objective_Register(gentity_t* self);
extern void team_wolf_objective_use(gentity_t* self,
                                    gentity_t* other,
                                    gentity_t* activator);
extern void SP_team_CTF_bluespawn(gentity_t* ent);
extern void SP_team_CTF_redspawn(gentity_t* ent);
extern void SP_team_CTF_blueplayer(gentity_t* ent);
extern void SP_team_CTF_redplayer(gentity_t* ent);
extern void Use_Team_Spawnpoint(gentity_t* ent,
                                gentity_t* other,
                                gentity_t* activator);
extern void Use_Team_InitialSpawnpoint(gentity_t* ent,
                                       gentity_t* other,
                                       gentity_t* activator);
extern void CheckTeamStatus(void);
extern void TeamplayInfoMessage(team_t team);
extern gentity_t* SelectCTFSpawnPoint(team_t team,
                                      int teamstate,
                                      vec3_t origin,
                                      vec3_t angles,
                                      int spawnObjective);
extern gentity_t* SelectRandomTeamSpawnPoint(int teamstate,
                                             team_t team,
                                             int spawnObjective);
extern int FindClosestObjectiveIndex(vec3_t source);
extern int FindFarthestObjectiveIndex(vec3_t source);
extern int Pickup_Team(gentity_t* ent, gentity_t* other);
extern int Team_TouchEnemyFlag(gentity_t* ent, gentity_t* other, int team);
extern int Team_TouchOurFlag(gentity_t* ent, gentity_t* other, int team);
extern void Team_DroppedFlagThink(gentity_t* ent);
extern void Team_ReturnFlag(gentity_t* ent);
extern void Team_ReturnFlagSound(gentity_t* ent, int team);
extern void Team_ResetFlags(void);
extern void Team_ResetFlag(gentity_t* ent);
extern void Team_CheckHurtCarrier(gentity_t* targ, gentity_t* attacker);
extern void Team_FragBonuses(gentity_t* targ,
                             gentity_t* inflictor,
                             gentity_t* attacker);
extern qboolean OnSameTeam(gentity_t* ent1, gentity_t* ent2);
extern void QDECL PrintMsg(gentity_t* ent, const char* fmt, ...);
extern const char* TeamColorString(int team);
extern const char* OtherTeamName(int team);
extern const char* TeamName(int team);
extern int OtherTeam(int team);
extern void Team_InitGame(void);
extern void SP_target_rumble(gentity_t* self);
extern void target_rumble_use(gentity_t* ent,
                              gentity_t* other,
                              gentity_t* activator);
extern void target_rumble_think(gentity_t* ent);
extern void SP_target_script_trigger(gentity_t* ent);
extern void target_script_trigger_use(gentity_t* ent,
                                      gentity_t* other,
                                      gentity_t* activator);
extern void SP_target_smoke(gentity_t* ent);
extern void smoke_init(gentity_t* ent);
extern void smoke_toggle(gentity_t* ent, gentity_t* self, gentity_t* activator);
extern void smoke_think(gentity_t* ent);
extern void SP_target_alarm(gentity_t* ent);
extern void Use_Target_Alarm(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void SP_target_lock(gentity_t* ent);
extern void SP_target_autosave(gentity_t* ent);
extern void SP_target_counter(gentity_t* ent);
extern void SP_target_fog(gentity_t* ent);
extern void Use_target_fog(gentity_t* ent,
                           gentity_t* other,
                           gentity_t* activator);
extern void Use_Target_Lock(gentity_t* ent,
                            gentity_t* other,
                            gentity_t* activator);
extern void Use_Target_Counter(gentity_t* ent,
                               gentity_t* other,
                               gentity_t* activator);
extern void SP_target_location(gentity_t* self);
extern void SP_target_position(gentity_t* self);
extern void SP_target_kill(gentity_t* self);
extern void target_kill_use(gentity_t* self,
                            gentity_t* other,
                            gentity_t* activator);
extern void G_KillEnts(const char* target,
                       gentity_t* ignore,
                       gentity_t* killer,
                       meansOfDeath_t mod);
extern void SP_target_relay(gentity_t* self);
extern void relay_AIScript_AlertEntity(gentity_t* self);
extern void target_relay_use(gentity_t* self,
                             gentity_t* other,
                             gentity_t* activator);
extern void SP_target_teleporter(gentity_t* self);
extern void target_teleporter_use(gentity_t* self,
                                  gentity_t* other,
                                  gentity_t* activator);
extern void SP_target_laser(gentity_t* self);
extern void target_laser_start(gentity_t* self);
extern void target_laser_use(gentity_t* self,
                             gentity_t* other,
                             gentity_t* activator);
extern void target_laser_off(gentity_t* self);
extern void target_laser_on(gentity_t* self);
extern void target_laser_think(gentity_t* self);
extern void SP_misc_beam(gentity_t* self);
extern void misc_beam_start(gentity_t* self);
extern void misc_beam_think(gentity_t* self);
extern void SP_target_speaker(gentity_t* ent);
extern void target_speaker_multiple(gentity_t* ent);
extern void Use_Target_Speaker(gentity_t* ent,
                               gentity_t* other,
                               gentity_t* activator);
extern void SP_target_print(gentity_t* ent);
extern void Use_Target_Print(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void SP_target_score(gentity_t* ent);
extern void Use_Target_Score(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void SP_target_delay(gentity_t* ent);
extern void Use_Target_Delay(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void Think_Target_Delay(gentity_t* ent);
extern void SP_target_remove_powerups(gentity_t* ent);
extern void Use_target_remove_powerups(gentity_t* ent,
                                       gentity_t* other,
                                       gentity_t* activator);
extern void SP_target_give(gentity_t* ent);
extern void Use_Target_Give(gentity_t* ent,
                            gentity_t* other,
                            gentity_t* activator);
extern void G_CheckMenDown(void);
extern void G_CheckForNeededClasses(void);
extern void G_SendSystemMessage(sysMsg_t message, int team);
extern int G_GetSysMessageNumber(const char* sysMsg);
extern qboolean G_NeedEngineers(int team);
extern void CreateMapServerEntities();
extern void CreateServerEntityFromData(char* classname,
                                       char* targetname,
                                       char* target,
                                       vec3_t origin,
                                       int spawnflags,
                                       vec3_t angle);
extern void InitServerEntitySetupFunc(g_serverEntity_t* ent);
extern g_serverEntity_t* FindServerEntity(g_serverEntity_t* from,
                                          int fieldofs,
                                          char* match);
extern void InitialServerEntitySetup();
extern g_serverEntity_t* CreateServerEntity(gentity_t* ent);
extern g_serverEntity_t* GetFreeServerEntity();
extern g_serverEntity_t* GetServerEntity(int num);
extern void InitServerEntities(void);
extern qboolean ConsoleCommand(void);
extern void Svcmd_RevivePlayer(char* name);
extern void Svcmd_ListCampaigns_f(void);
extern void Svcmd_Campaign_f(void);
extern void Svcmd_ShuffleTeams_f(void);
extern void Svcmd_SwapTeams_f(void);
extern void Svcmd_ResetMatch_f(qboolean fDoReset, qboolean fDoRestart);
extern void Svcmd_StartMatch_f(void);
extern void Svcmd_ForceTeam_f(void);
extern gclient_t* G_GetPlayerByName(char* name);
extern gclient_t* G_GetPlayerByNum(int clientNum);
extern gclient_t* ClientForString(const char* s);
extern void Svcmd_EntityList_f(void);
extern void ClearMaxLivesBans();
extern void Svcmd_RemoveIP_f(void);
extern void Svcmd_AddIP_f(void);
extern void G_ProcessIPBans(void);
extern void AddMaxLivesGUID(char* str);
extern void AddMaxLivesBan(const char* str);
extern void AddIPBan(const char* str);
extern void AddIP(ipFilterList_t* ipFilterList, const char* str);
extern qboolean G_FilterMaxLivesPacket(char* from);
extern qboolean G_FilterMaxLivesIPPacket(char* from);
extern qboolean G_FilterIPBanPacket(char* from);
extern qboolean G_FilterPacket(ipFilterList_t* ipFilterList, char* from);
extern ipXPStorage_t* G_FindIpData(ipXPStorageList_t* ipXPStorageList,
                                   char* from);
extern void PrintMaxLivesGUID();
extern qboolean StringToFilter(const char* s, ipFilter_t* f);
extern void G_BuildEndgameStats(void);
extern void G_DebugAddSkillPoints(gentity_t* ent,
                                  skillType_t skill,
                                  float points,
                                  const char* reason);
extern void G_DebugAddSkillLevel(gentity_t* ent, skillType_t skill);
extern void G_DebugCloseSkillLog(void);
extern void G_DebugOpenSkillLog(void);
extern void G_AddKillSkillPointsForDestruction(
    gentity_t* attacker,
    meansOfDeath_t mod,
    g_constructible_stats_t* constructibleStats);
extern void G_AddKillSkillPoints(gentity_t* attacker,
                                 meansOfDeath_t mod,
                                 hitRegion_t hr,
                                 qboolean splash);
extern void G_LoseKillSkillPoints(gentity_t* tker,
                                  meansOfDeath_t mod,
                                  hitRegion_t hr,
                                  qboolean splash);
extern void G_AddSkillPoints(gentity_t* ent, skillType_t skill, float points);
extern void G_LoseSkillPoints(gentity_t* ent, skillType_t skill, float points);
extern void G_SetPlayerSkill(gclient_t* client, skillType_t skill);
extern void G_SetPlayerScore(gclient_t* client);
extern void G_PrintAccuracyLog(gentity_t* ent);
extern void G_LogRegionHit(gentity_t* ent, hitRegion_t hr);
extern void G_LogTeamKill(gentity_t* ent, weapon_t weap);
extern void G_LogKill(gentity_t* ent, weapon_t weap);
extern void G_LogDeath(gentity_t* ent, weapon_t weap);
extern void G_SpawnEntitiesFromString(void);
extern void SP_worldspawn(void);
extern qboolean G_ParseSpawnVars(void);
extern char* G_AddSpawnVarToken(const char* string);
extern void G_SpawnGEntityFromSpawnVars(void);
extern void G_ParseField(const char* key, const char* value, gentity_t* ent);
extern char* G_NewString(const char* string);
extern qboolean G_CallSpawn(gentity_t* ent);
extern qboolean G_SpawnVector2DExt(const char* key,
                                   const char* defaultString,
                                   float* out,
                                   const char* file,
                                   int line);
extern qboolean G_SpawnVectorExt(const char* key,
                                 const char* defaultString,
                                 float* out,
                                 const char* file,
                                 int line);
extern qboolean G_SpawnIntExt(const char* key,
                              const char* defaultString,
                              int* out,
                              const char* file,
                              int line);
extern qboolean G_SpawnFloatExt(const char* key,
                                const char* defaultString,
                                float* out,
                                const char* file,
                                int line);
extern qboolean G_SpawnStringExt(const char* key,
                                 const char* defaultString,
                                 char** out,
                                 const char* file,
                                 int line);
extern void G_WriteSessionData(qboolean restart);
extern void G_InitWorldSession(void);
extern void G_InitSessionData(gclient_t* client, char* userinfo);
extern void G_ReadSessionData(gclient_t* client);
extern void G_CalcRank(gclient_t* client);
extern void G_ClientSwap(gclient_t* client);
extern void G_WriteClientSessionData(gclient_t* client, qboolean restart);
extern qboolean etpro_ScriptAction_SetValues(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AbortIfNotSinglePlayer(gentity_t* ent,
                                                      char* params);
extern qboolean G_ScriptAction_AbortIfWarmup(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Cvar(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SpawnBot(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_ConstructibleDuration(gentity_t* ent,
                                                     char* params);
extern qboolean G_ScriptAction_ConstructibleWeaponclass(gentity_t* ent,
                                                        char* params);
extern qboolean G_ScriptAction_ConstructibleHealth(gentity_t* ent,
                                                   char* params);
extern qboolean G_ScriptAction_ConstructibleDestructXPBonus(gentity_t* ent,
                                                            char* params);
extern qboolean G_ScriptAction_ConstructibleConstructXPBonus(gentity_t* ent,
                                                             char* params);
extern qboolean G_ScriptAction_ConstructibleChargeBarReq(gentity_t* ent,
                                                         char* params);
extern qboolean G_ScriptAction_ConstructibleClass(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Construct(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetBotGoalPriority(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetAASState(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetBotGoalState(gentity_t* ent, char* params);
extern qboolean G_IsValidBotStateGoal(gentity_t* ent);
extern qboolean G_ScriptAction_BotDebugging(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_RemoveBot(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_PrintGlobalAccum(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_PrintAccum(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetHQStatus(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_RepairMG42(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_StopCam(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetInitialCamera(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_StartCam(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetState(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetDamagable(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_RemoveEntity(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetRoundTimelimit(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_EndRound(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Announce(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Announce_Icon(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_TeamVoiceAnnounce(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_RemoveTeamVoiceAnnounce(gentity_t* ent,
                                                       char* params);
extern qboolean G_ScriptAction_AddTeamVoiceAnnounce(gentity_t* ent,
                                                    char* params);
extern qboolean G_ScriptAction_SetDefendingTeam(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetWinner(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_VoiceAnnounce(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetDebugLevel(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_ObjectiveStatus(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetMainObjective(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_NumberofObjectives(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AlliedRespawntime(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AxisRespawntime(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AIScriptName(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_EntityScriptName(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_StopSound(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Halt(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_TagConnect(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_ResetScript(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_FaceAngles(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Print(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_GlobalAccum(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Accum(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_EnableSpeaker(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_DisableSpeaker(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_ToggleSpeaker(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AlertEntity(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_PlayAnim(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_MusicFade(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_MusicQueue(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_MusicStop(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_MusicPlay(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_MusicStart(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_FadeAllSounds(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_PlaySound(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Trigger(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Wait(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_GotoMarker(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetGlobalFog(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_Kill(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_DisableMessage(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AddTankAmmo(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetTankAmmo(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AllowTankEnter(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AllowTankExit(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SpawnRubble(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetChargeTimeFactor(gentity_t* ent,
                                                   char* params);
extern qboolean G_ScriptAction_AbortMove(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_FollowSpline(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_StopRotation(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetRotation(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetSpeed(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_StartAnimation(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_UnFreezeAnimation(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_FreezeAnimation(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_AttatchToTrain(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_FollowPath(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_ShaderRemapFlush(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_ShaderRemap(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_ChangeModel(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetAutoSpawn(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetPosition(gentity_t* ent, char* params);
extern qboolean G_ScriptAction_SetModelFromBrushmodel(gentity_t* ent,
                                                      char* params);
extern void SP_script_multiplayer(gentity_t* ent);
extern void SP_script_camera(gentity_t* ent);
extern void SP_script_model_med(gentity_t* ent);
extern void script_model_med_use(gentity_t* ent,
                                 gentity_t* other,
                                 gentity_t* activator);
extern void script_model_med_spawn(gentity_t* ent);
extern void SP_script_mover(gentity_t* ent);
extern void script_mover_blocked(gentity_t* ent, gentity_t* other);
extern void script_mover_use(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void script_mover_spawn(gentity_t* ent);
extern void script_mover_aas_blocking(gentity_t* ent);
extern void script_mover_set_blocking(gentity_t* ent);
extern void script_mover_die(gentity_t* self,
                             gentity_t* inflictor,
                             gentity_t* attacker,
                             int damage,
                             int mod);
extern void script_linkentity(gentity_t* ent);
extern void mountedmg42_fire(gentity_t* other);
extern qboolean G_Script_ScriptRun(gentity_t* ent);
extern void G_Script_ScriptEvent(gentity_t* ent, char* eventStr, char* params);
extern int G_Script_GetEventIndex(gentity_t* ent, char* eventStr, char* params);
extern void G_Script_EventStringInit(void);
extern void G_Script_ScriptChange(gentity_t* ent, int newScriptNum);
extern void G_Script_ScriptParse(gentity_t* ent);
extern void G_Script_ParseSpawnbot(char** ppScript,
                                   char params[],
                                   int paramsize);
extern void G_Script_ScriptLoad(void);
extern g_script_stack_action_t* G_Script_ActionForString(char* string);
extern int G_Script_EventForString(const char* string);
extern qboolean G_Script_EventMatch_IntInRange(g_script_event_t* event,
                                               char* eventParm);
extern qboolean G_Script_EventMatch_StringEqual(g_script_event_t* event,
                                                char* eventParm);
extern void G_refPrintf(gentity_t* ent, const char* fmt, ...);
extern int G_refClientnumForName(gentity_t* ent, const char* name);
extern void G_UnMuteClient();
extern void G_MuteClient();
extern void G_RemoveReferee();
extern void G_MakeReferee();
extern void G_PlayerBan();
extern void Cmd_AuthRcon_f(gentity_t* ent);
extern void G_refMute_cmd(gentity_t* ent, qboolean mute);
extern void G_refWarning_cmd(gentity_t* ent);
extern void G_refWarmup_cmd(gentity_t* ent);
extern void G_refSpeclockTeams_cmd(gentity_t* ent, qboolean fLock);
extern void G_refRemove_cmd(gentity_t* ent);
extern void G_refPlayerPut_cmd(gentity_t* ent, int team_id);
extern void G_refPause_cmd(gentity_t* ent, qboolean fPause);
extern void G_refLockTeams_cmd(gentity_t* ent, qboolean fLock);
extern void G_refAllReady_cmd(gentity_t* ent);
extern void G_ref_cmd(gentity_t* ent, unsigned int dwCommand, qboolean fValue);
extern void G_refHelp_cmd(gentity_t* ent);
extern qboolean G_refCommandCheck(gentity_t* ent, char* cmd);
extern void SP_props_flamethrower(gentity_t* ent);
extern void props_flamethrower_init(gentity_t* ent);
extern void props_flamethrower_use(gentity_t* ent,
                                   gentity_t* other,
                                   gentity_t* activator);
extern void props_flamethrower_think(gentity_t* ent);
extern void SP_props_footlocker(gentity_t* self);
extern void props_locker_death(gentity_t* ent,
                               gentity_t* inflictor,
                               gentity_t* attacker,
                               int damage,
                               int mod);
extern void props_locker_mass(gentity_t* ent);
extern void props_locker_spawn_item(gentity_t* ent);
extern void init_locker(gentity_t* ent);
extern void props_locker_pain(gentity_t* ent,
                              gentity_t* attacker,
                              int damage,
                              vec3_t point);
extern void props_locker_use(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void props_locker_endrattle(gentity_t* ent);
extern void Spawn_Junk(gentity_t* ent);
extern void SP_props_statueBRUSH(gentity_t* self);
extern void SP_props_statue(gentity_t* ent);
extern void props_statue_touch(gentity_t* self,
                               gentity_t* other,
                               trace_t* trace);
extern void props_statue_death(gentity_t* ent,
                               gentity_t* inflictor,
                               gentity_t* attacker,
                               int damage,
                               int mod);
extern void props_statue_animate(gentity_t* ent);
extern void props_statue_blocked(gentity_t* ent);
extern void SP_skyportal(gentity_t* ent);
extern void SP_props_decor_Scale(gentity_t* ent);
extern void SP_props_decorBRUSH(gentity_t* self);
extern void SP_props_decoration(gentity_t* ent);
extern void props_touch(gentity_t* self, gentity_t* other, trace_t* trace);
extern void Use_props_decoration(gentity_t* ent,
                                 gentity_t* self,
                                 gentity_t* activator);
extern void props_decoration_death(gentity_t* ent,
                                   gentity_t* inflictor,
                                   gentity_t* attacker,
                                   int damage,
                                   int mod);
extern void props_decoration_animate(gentity_t* ent);
extern void SP_props_snowGenerator(gentity_t* ent);
extern void props_snowGenerator_use(gentity_t* ent,
                                    gentity_t* other,
                                    gentity_t* activator);
extern void props_snowGenerator_think(gentity_t* ent);
extern void SP_props_castlebed(gentity_t* ent);
extern void props_castlebed_die(gentity_t* ent,
                                gentity_t* inflictor,
                                gentity_t* attacker,
                                int damage,
                                int mod);
extern void props_castlebed_animate(gentity_t* ent);
extern void props_castlebed_touch(gentity_t* ent,
                                  gentity_t* other,
                                  trace_t* trace);
extern void SP_Props_58x112tablew(gentity_t* ent);
extern void props_58x112tablew_die(gentity_t* ent,
                                   gentity_t* inflictor,
                                   gentity_t* attacker,
                                   int damage,
                                   int mod);
extern void props_58x112tablew_think(gentity_t* ent);
extern void SP_Props_Flipping_Table(gentity_t* ent);
extern void props_flippy_blocked(gentity_t* ent, gentity_t* other);
extern void props_flippy_table_die(gentity_t* ent,
                                   gentity_t* inflictor,
                                   gentity_t* attacker,
                                   int damage,
                                   int mod);
extern void flippy_table_animate(gentity_t* ent);
extern void flippy_table_use(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void SP_Props_Crate32x64(gentity_t* ent);
extern void props_crate32x64_die(gentity_t* ent,
                                 gentity_t* inflictor,
                                 gentity_t* attacker,
                                 int damage,
                                 int mod);
extern void props_crate32x64_think(gentity_t* ent);
extern void SP_crate_32(gentity_t* self);
extern void SP_crate_64(gentity_t* self);
extern void crate_die(gentity_t* ent,
                      gentity_t* inflictor,
                      gentity_t* attacker,
                      int damage,
                      int mod);
extern void crate_animate(gentity_t* ent);
extern void touch_crate_64(gentity_t* self, gentity_t* other, trace_t* trace);
extern void SP_Props_Flamebarrel(gentity_t* ent);
extern void Props_Barrel_Think(gentity_t* self);
extern void Props_Barrel_Die(gentity_t* ent,
                             gentity_t* inflictor,
                             gentity_t* attacker,
                             int damage,
                             int mod);
extern void OilSlick_remove(gentity_t* ent);
extern void OilSlick_remove_think(gentity_t* ent);
extern void Props_Barrel_Pain(gentity_t* ent,
                              gentity_t* attacker,
                              int damage,
                              vec3_t point);
extern void SP_OilParticles(gentity_t* ent);
extern qboolean validOilSlickSpawnPoint(vec3_t point, gentity_t* ent);
extern void Delayed_Leak_Think(gentity_t* ent);
extern void OilParticles_think(gentity_t* ent);
extern void SP_OilSlick(gentity_t* ent);
extern void smoker_think(gentity_t* ent);
extern void barrel_smoke(gentity_t* ent);
extern void Props_Barrel_Animate(gentity_t* ent);
extern void Props_Barrel_Touch(gentity_t* self,
                               gentity_t* other,
                               trace_t* trace);
extern void SP_Props_Desklamp(gentity_t* ent);
extern void SP_props_shard_generator(gentity_t* ent);
extern void Use_Props_Shard_Generator(gentity_t* ent,
                                      gentity_t* other,
                                      gentity_t* activator);
extern void SP_Props_DamageInflictor(gentity_t* ent);
extern void Use_DamageInflictor(gentity_t* ent,
                                gentity_t* other,
                                gentity_t* activator);
extern void SP_Props_ChairChatArm(gentity_t* ent);
extern void SP_Props_ChairChat(gentity_t* ent);
extern void SP_Props_ChateauChair(gentity_t* ent);
extern void SP_Props_ChairSide(gentity_t* ent);
extern void SP_Props_ChairHiback(gentity_t* ent);
extern void SP_Props_Chair(gentity_t* ent);
extern void Props_Chair_Skyboxtouch(gentity_t* ent);
extern void Props_Chair_Die(gentity_t* ent,
                            gentity_t* inflictor,
                            gentity_t* attacker,
                            int damage,
                            int mod);
extern void Prop_Break_Sound(gentity_t* ent);
extern void Spawn_Shard(gentity_t* ent,
                        gentity_t* inflictor,
                        int quantity,
                        int type);
extern void Props_Chair_Animate(gentity_t* ent);
extern void Props_Chair_Touch(gentity_t* self,
                              gentity_t* other,
                              trace_t* trace);
extern void Prop_Check_Ground(gentity_t* self);
extern qboolean Prop_Touch(gentity_t* self, gentity_t* other, vec3_t v);
extern void Props_Chair_Think(gentity_t* self);
extern void Props_Activated(gentity_t* self);
extern void Props_TurnLightsOff(gentity_t* self);
extern void Just_Got_Thrown(gentity_t* self);
extern void SP_Props_Locker_Tall(gentity_t* ent);
extern void props_locker_tall_die(gentity_t* ent,
                                  gentity_t* inflictor,
                                  gentity_t* attacker,
                                  int damage,
                                  int mod);
extern void locker_tall_think(gentity_t* ent);
extern void SP_Props_RadioSEVEN(gentity_t* ent);
extern void props_radio_dieSEVEN(gentity_t* ent,
                                 gentity_t* inflictor,
                                 gentity_t* attacker,
                                 int damage,
                                 int mod);
extern void SP_Props_Radio(gentity_t* ent);
extern void props_radio_die(gentity_t* ent,
                            gentity_t* inflictor,
                            gentity_t* attacker,
                            int damage,
                            int mod);
extern void SP_Props_Bench(gentity_t* ent);
extern void props_bench_die(gentity_t* ent,
                            gentity_t* inflictor,
                            gentity_t* attacker,
                            int damage,
                            int mod);
extern void props_bench_think(gentity_t* ent);
extern void InitProp(gentity_t* ent);
extern void propExplosion(gentity_t* ent);
extern void propExplosionLarge(gentity_t* ent);
extern void SP_Dust(gentity_t* ent);
extern void dust_angles_think(gentity_t* ent);
extern void dust_use(gentity_t* ent, gentity_t* self, gentity_t* activator);
extern void SP_SmokeDust(gentity_t* ent);
extern void smokedust_use(gentity_t* ent,
                          gentity_t* self,
                          gentity_t* activator);
extern void SP_props_gunsparks(gentity_t* ent);
extern void SP_props_sparks(gentity_t* ent);
extern void sparks_angles_think(gentity_t* ent);
extern void Psparks_think(gentity_t* ent);
extern void PGUNsparks_use(gentity_t* ent,
                           gentity_t* self,
                           gentity_t* activator);
extern void prop_smoke(gentity_t* ent);
extern void Psmoke_think(gentity_t* ent);
extern void SP_props_box_64(gentity_t* self);
extern void touch_props_box_64(gentity_t* self,
                               gentity_t* other,
                               trace_t* trace);
extern void SP_props_box_48(gentity_t* self);
extern void touch_props_box_48(gentity_t* self,
                               gentity_t* other,
                               trace_t* trace);
extern void SP_props_box_32(gentity_t* self);
extern void touch_props_box_32(gentity_t* self,
                               gentity_t* other,
                               trace_t* trace);
extern void moveit(gentity_t* ent, float yaw, float dist);
extern void DropToFloor(gentity_t* ent);
extern void DropToFloorG(gentity_t* ent);
extern qboolean G_smvRunCamera(gentity_t* ent);
extern void G_smvAllRemoveSingleClient(int pID);
extern void G_smvRemoveInvalidClients(gentity_t* ent, int nTeam);
extern void G_smvUpdateClientCSList(gentity_t* ent);
extern void G_smvRegenerateClients(gentity_t* ent, int clientList);
extern unsigned int G_smvGenerateClientList(gentity_t* ent);
extern void G_smvRemoveEntityInMVList(gentity_t* ent, mview_t* ref);
extern qboolean G_smvLocateEntityInMVList(gentity_t* ent,
                                          int pID,
                                          qboolean fRemove);
extern void G_smvAddView(gentity_t* ent, int pID);
extern void G_smvDel_cmd(gentity_t* ent);
extern void G_smvAddTeam_cmd(gentity_t* ent, int nTeam);
extern void G_smvAdd_cmd(gentity_t* ent);
extern qboolean G_smvCommands(gentity_t* ent, char* cmd);
extern void G_LinkDebris(void);
extern void G_LinkDamageParents(void);
extern void SP_func_debris(gentity_t* ent);
extern debrisChunk_t* G_AllocDebrisChunk(void);
extern void SP_func_brushmodel(gentity_t* ent);
extern void func_brushmodel_delete(gentity_t* ent);
extern void SP_func_constructible(gentity_t* ent);
extern void func_constructiblespawn(gentity_t* ent);
extern void func_constructible_underconstructionthink(gentity_t* ent);
extern void func_constructible_explode(gentity_t* self,
                                       gentity_t* inflictor,
                                       gentity_t* attacker,
                                       int damage,
                                       int mod);
extern void func_constructible_spawn(gentity_t* self,
                                     gentity_t* other,
                                     gentity_t* activator);
extern void func_constructible_use(gentity_t* self,
                                   gentity_t* other,
                                   gentity_t* activator);
extern void InitConstructible(gentity_t* ent);
extern void G_Activate(gentity_t* ent, gentity_t* activator);
extern void SP_func_invisible_user(gentity_t* ent);
extern void use_invisible_user(gentity_t* ent,
                               gentity_t* other,
                               gentity_t* activator);
extern void SP_func_explosive(gentity_t* ent);
extern void SP_target_explosion(gentity_t* ent);
extern void target_explosion_use(gentity_t* self,
                                 gentity_t* other,
                                 gentity_t* attacker);
extern void InitExplosive(gentity_t* ent);
extern void func_explosive_spawn(gentity_t* self,
                                 gentity_t* other,
                                 gentity_t* activator);
extern void func_explosive_alert(gentity_t* self);
extern void func_explosive_use(gentity_t* self,
                               gentity_t* other,
                               gentity_t* activator);
extern void func_explosive_touch(gentity_t* self,
                                 gentity_t* other,
                                 trace_t* trace);
extern void func_explosive_explode(gentity_t* self,
                                   gentity_t* inflictor,
                                   gentity_t* attacker,
                                   int damage,
                                   int mod);
extern void BecomeExplosion(gentity_t* self);
extern void ThrowDebris(gentity_t* self,
                        char* modelname,
                        float speed,
                        vec3_t origin);
extern void SP_target_effect(gentity_t* ent);
extern void target_effect(gentity_t* self,
                          gentity_t* other,
                          gentity_t* activator);
extern void SP_func_door_rotating(gentity_t* ent);
extern void SP_func_pendulum(gentity_t* ent);
extern void SP_func_bobbing(gentity_t* ent);
extern void SP_func_rotating(gentity_t* ent);
extern void Use_Func_Rotate(gentity_t* ent,
                            gentity_t* other,
                            gentity_t* activator);
extern void SP_func_static(gentity_t* ent);
extern void SP_func_leaky(gentity_t* ent);
extern void G_BlockThink(gentity_t* ent);
extern void Static_Pain(gentity_t* ent,
                        gentity_t* attacker,
                        int damage,
                        vec3_t point);
extern void Use_Static(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void SP_func_train_rotating(gentity_t* self);
extern void Think_SetupTrainTargets_rotating(gentity_t* ent);
extern void Reached_Train_rotating(gentity_t* ent);
extern void Think_BeginMoving_rotating(gentity_t* ent);
extern void SP_func_train(gentity_t* self);
extern void SP_info_limbo_camera(gentity_t* self);
extern void info_limbo_camera_setup(gentity_t* self);
extern void SP_info_train_spline_main(gentity_t* self);
extern void SP_path_corner_2(gentity_t* self);
extern void SP_path_corner(gentity_t* self);
extern void Think_SetupTrainTargets(gentity_t* ent);
extern void Reached_Train(gentity_t* ent);
extern void Think_BeginMoving(gentity_t* ent);
extern void SP_func_button(gentity_t* ent);
extern void Touch_Button(gentity_t* ent, gentity_t* other, trace_t* trace);
extern void SP_func_plat(gentity_t* ent);
extern void SpawnPlatTrigger(gentity_t* ent);
extern void Touch_PlatCenterTrigger(gentity_t* ent,
                                    gentity_t* other,
                                    trace_t* trace);
extern void Touch_Plat(gentity_t* ent, gentity_t* other, trace_t* trace);
extern void SP_func_secret(gentity_t* ent);
extern void SP_func_door(gentity_t* ent);
extern void G_TryDoor(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void DoorSetSounds(gentity_t* ent, int doortype, qboolean isRotating);
extern void Door_reverse_sounds(gentity_t* ent);
extern void finishSpawningKeyedMover(gentity_t* ent);
extern qboolean findNonAIBrushTargeter(gentity_t* ent);
extern void Think_MatchTeam(gentity_t* ent);
extern void Think_SpawnNewDoorTrigger(gentity_t* ent);
extern void Touch_DoorTrigger(gentity_t* ent, gentity_t* other, trace_t* trace);
extern void Blocked_DoorRotate(gentity_t* ent, gentity_t* other);
extern void Blocked_Door(gentity_t* ent, gentity_t* other);
extern void InitMoverRotate(gentity_t* ent);
extern void InitMover(gentity_t* ent);
extern void Use_BinaryMover(gentity_t* ent,
                            gentity_t* other,
                            gentity_t* activator);
extern void Use_TrinaryMover(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void Reached_TrinaryMover(gentity_t* ent);
extern qboolean IsBinaryMoverBlocked(gentity_t* ent,
                                     gentity_t* other,
                                     gentity_t* activator);
extern void Reached_BinaryMover(gentity_t* ent);
extern void ReturnToPos1Rotate(gentity_t* ent);
extern void GotoPos3(gentity_t* ent);
extern void ReturnToPos2(gentity_t* ent);
extern void ReturnToPos1(gentity_t* ent);
extern void MatchTeamReverseAngleOnSlaves(gentity_t* teamLeader,
                                          int moverState,
                                          int time);
extern void MatchTeam(gentity_t* teamLeader, int moverState, int time);
extern void SetMoverState(gentity_t* ent, moverState_t moverState, int time);
extern void G_RunMover(gentity_t* ent);
extern void G_MoverTeam(gentity_t* ent);
extern qboolean G_MoverPush(gentity_t* pusher,
                            vec3_t move,
                            vec3_t amove,
                            gentity_t** obstacle);
extern qboolean G_TryPushingEntity(gentity_t* check,
                                   gentity_t* pusher,
                                   vec3_t move,
                                   vec3_t amove);
extern void G_TestEntityMoveTowardsPos(gentity_t* ent, vec3_t pos);
extern void G_TestEntityDropToFloor(gentity_t* ent, float maxdrop);
extern gentity_t* G_TestEntityPosition(gentity_t* ent);
extern gentity_t* fire_mortar(gentity_t* self, vec3_t start, vec3_t dir);
extern qboolean visible(gentity_t* self, gentity_t* other);
extern void fire_lead(gentity_t* self, vec3_t start, vec3_t dir, int damage);
extern gentity_t* fire_flamebarrel(gentity_t* self, vec3_t start, vec3_t dir);
extern gentity_t* fire_rocket(gentity_t* self, vec3_t start, vec3_t dir);
extern gentity_t* fire_grenade(gentity_t* self,
                               vec3_t start,
                               vec3_t dir,
                               int grenadeWPID);
extern qboolean G_LandmineSnapshotCallback(int entityNum, int clientNum);
extern void G_LandminePrime(gentity_t* self);
extern void LandminePostThink(gentity_t* self);
extern void G_LandmineThink(gentity_t* self);
extern qboolean sEntWillTriggerMine(gentity_t* ent, gentity_t* mine);
extern void G_TripMinePrime(gentity_t* ent);
extern void G_TripMineThink(gentity_t* ent);
extern void LandMinePostTrigger(gentity_t* self);
extern void LandMineTrigger(gentity_t* self);
extern void G_FreeSatchel(gentity_t* ent);
extern qboolean G_ExplodeSatchels(gentity_t* ent);
extern void G_ExplodeMines(gentity_t* ent);
extern qboolean G_HasDroppedItem(gentity_t* ent, int modType);
extern gentity_t* G_FindSatchel(gentity_t* ent);
extern qboolean G_SweepForLandmines(vec3_t origin, float radius, int team);
extern int G_CountTeamLandmines(team_t team);
extern void G_FadeItems(gentity_t* ent, int modType);
extern void DynaFree(gentity_t* self);
extern void DynaSink(gentity_t* self);
extern gentity_t* fire_flamechunk(gentity_t* self, vec3_t start, vec3_t dir);
extern void G_RunFlamechunk(gentity_t* ent);
extern void G_FlameDamage(gentity_t* self, gentity_t* ignoreent);
extern void G_BurnTarget(gentity_t* self, gentity_t* body, qboolean directhit);
extern int G_PredictMissile(gentity_t* ent,
                            int duration,
                            vec3_t endPos,
                            qboolean allowBounce);
extern void G_PredictBounceMissile(gentity_t* ent,
                                   trajectory_t* pos,
                                   trace_t* trace,
                                   int time);
extern void G_RunMissile(gentity_t* ent);
extern void Landmine_Check_Ground(gentity_t* self);
extern void G_RunBomb(gentity_t* ent);
extern void G_MissileDie(gentity_t* self,
                         gentity_t* inflictor,
                         gentity_t* attacker,
                         int damage,
                         int mod);
extern void G_ExplodeMissile(gentity_t* ent);
extern void M_think(gentity_t* ent);
extern void G_MissileImpact(gentity_t* ent, trace_t* trace, int impactDamage);
extern void G_BounceMissile(gentity_t* ent, trace_t* trace);
extern void G_TempTraceIgnorePlayersAndBodies(void);
extern void G_TempTraceIgnoreEntity(gentity_t* ent);
extern void G_ResetTempTraceIgnoreEnts(void);
extern void G_InitTempTraceIgnoreEnts(void);
extern void SP_misc_commandmap_marker(gentity_t* ent);
extern void SP_misc_landmine(gentity_t* ent);
extern void landmine_setup(gentity_t* ent);
extern void SP_misc_constructiblemarker(gentity_t* ent);
extern void constructiblemarker_setup(gentity_t* ent);
extern void SP_misc_firetrails(gentity_t* ent);
extern void misc_firetrails_think(gentity_t* ent);
extern void firetrail_use(gentity_t* ent,
                          gentity_t* other,
                          gentity_t* activator);
extern void firetrail_die(gentity_t* ent);
extern void SP_misc_spawner(gentity_t* ent);
extern void misc_spawner_use(gentity_t* ent,
                             gentity_t* other,
                             gentity_t* activator);
extern void misc_spawner_think(gentity_t* ent);
extern void SP_misc_flak(gentity_t* self);
extern void flak_spawn(gentity_t* ent);
extern void Flak_Animate(gentity_t* ent);
extern void SP_mg42(gentity_t* self);
extern void mg42_spawn(gentity_t* ent);
extern void mg42_use(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void mg42_die(gentity_t* self,
                     gentity_t* inflictor,
                     gentity_t* attacker,
                     int damage,
                     int mod);
extern void mg42_stopusing(gentity_t* self);
extern void mg42_think(gentity_t* self);
extern void mg42_track(gentity_t* self, gentity_t* other);
extern void mg42_fire(gentity_t* other);
extern void mg42_touch(gentity_t* self, gentity_t* other, trace_t* trace);
extern void SP_aagun(gentity_t* self);
extern void aagun_spawn(gentity_t* gun);
extern void aagun_touch(gentity_t* self, gentity_t* other, trace_t* trace);
extern void aagun_fire(gentity_t* other);
extern void aagun_stopusing(gentity_t* self);
extern void aagun_think(gentity_t* self);
extern void aagun_track(gentity_t* self, gentity_t* other);
extern void aagun_die(gentity_t* self,
                      gentity_t* inflictor,
                      gentity_t* attacker,
                      int damage,
                      int mod);
extern void aagun_use(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void clamp_hweapontofirearc(gentity_t* self, vec3_t dang);
extern void clamp_playerbehindgun(gentity_t* self,
                                  gentity_t* other,
                                  vec3_t dang);
extern void Fire_Lead_Ext(gentity_t* ent,
                          gentity_t* activator,
                          float spread,
                          int damage,
                          vec3_t muzzle,
                          vec3_t forward,
                          vec3_t right,
                          vec3_t up,
                          int mod);
extern void flakPuff(vec3_t origin);
extern void SP_dlight(gentity_t* ent);
extern void use_dlight(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void shutoff_dlight(gentity_t* ent);
extern void dlight_finish_spawning(gentity_t* ent);
extern void SP_corona(gentity_t* ent);
extern void use_corona(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void SP_shooter_grenade(gentity_t* ent);
extern void SP_shooter_rocket(gentity_t* ent);
extern void SP_shooter_mortar(gentity_t* ent);
extern void InitShooter(gentity_t* ent, int weapon);
extern void Use_Shooter(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void SP_misc_portal_camera(gentity_t* ent);
extern void SP_misc_portal_surface(gentity_t* ent);
extern void locateCamera(gentity_t* ent);
extern void SP_misc_light_surface(gentity_t* ent);
extern void SP_misc_vis_dummy_multiple(gentity_t* ent);
extern void SP_misc_vis_dummy(gentity_t* ent);
extern void locateMaster(gentity_t* ent);
extern void SP_misc_gamemodel(gentity_t* ent);
extern void SP_misc_model(gentity_t* ent);
extern void SP_misc_spotlight(gentity_t* ent);
extern void spotlight_finish_spawning(gentity_t* ent);
extern void use_spotlight(gentity_t* ent,
                          gentity_t* other,
                          gentity_t* activator);
extern void SP_misc_grabber_trap(gentity_t* ent);
extern void grabber_wake_touch(gentity_t* ent,
                               gentity_t* other,
                               trace_t* trace);
extern void grabber_use(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern void grabber_wake(gentity_t* ent);
extern void grabber_pain(gentity_t* ent,
                         gentity_t* attacker,
                         int damage,
                         vec3_t point);
extern void grabber_close(gentity_t* ent, gentity_t* other, trace_t* trace);
extern void grabber_attack(gentity_t* ent);
extern void grabber_die(gentity_t* ent,
                        gentity_t* inflictor,
                        gentity_t* attacker,
                        int damage,
                        int mod);
extern void grabber_think_hit(gentity_t* ent);
extern void grabber_think_idle(gentity_t* ent);
extern void SP_misc_teleporter_dest(gentity_t* ent);
extern void TeleportPlayer(gentity_t* player, vec3_t origin, vec3_t angles);
extern void SP_lightJunior(gentity_t* self);
extern void SP_light(gentity_t* self);
extern void SP_info_notnull(gentity_t* self);
extern void SP_info_null(gentity_t* self);
extern void SP_info_camp(gentity_t* self);
extern void Svcmd_GameMem_f(void);
extern void G_InitMemory(void);
extern void* G_Alloc(int size);
extern void G_resetModeState(void);
extern void G_resetRoundState(void);
extern void G_statsPrint(gentity_t* ent, int nType);
extern int G_checkServerToggle(vmCvar_t* cv);
extern void G_matchInfoDump(unsigned int dwDumpType);
extern void G_printMatchInfo(gentity_t* ent);
extern void G_parseStats(char* pszStatsInfo);
extern void G_deleteStats(int nClient);
extern char* G_createStats(gentity_t* refEnt);
extern unsigned int G_weapStatIndex_MOD(unsigned int iWeaponMOD);
extern void G_addStatsHeadShot(gentity_t* attacker, int mod);
extern void G_addStats(gentity_t* targ,
                       gentity_t* attacker,
                       int dmg_ref,
                       int mod);
extern void G_spawnPrintf(int print_type, int print_time, gentity_t* owner);
extern void G_delayPrint(gentity_t* dpent);
extern void G_globalSound(char* sound);
extern void G_printFull(char* str, gentity_t* ent);
extern void G_loadMatchGame(void);
extern void G_initMatch(void);
extern void G_RunItem(gentity_t* ent);
extern void G_RunItemProp(gentity_t* ent, vec3_t origin);
extern void G_BounceItem(gentity_t* ent, trace_t* trace);
extern void G_SpawnItem(gentity_t* ent, gitem_t* item);
extern void FinishSpawningItem(gentity_t* ent);
extern void Use_Item(gentity_t* ent, gentity_t* other, gentity_t* activator);
extern gentity_t* Drop_Item(gentity_t* ent,
                            gitem_t* item,
                            float angle,
                            qboolean novelocity);
extern gentity_t* LaunchItem(gitem_t* item,
                             vec3_t origin,
                             vec3_t velocity,
                             int ownerNum);
extern void Touch_Item(gentity_t* ent, gentity_t* other, trace_t* trace);
extern void Touch_Item_Auto(gentity_t* ent, gentity_t* other, trace_t* trace);
extern void RespawnItem(gentity_t* ent);
extern int Pickup_Health(gentity_t* ent, gentity_t* other);
extern int Pickup_Weapon(gentity_t* ent, gentity_t* other);
extern qboolean G_CanPickupWeapon(weapon_t weapon, gentity_t* ent);
extern void G_DropWeapon(gentity_t* ent, weapon_t weapon);
extern weapon_t G_GetPrimaryWeaponForClient(gclient_t* client);
extern qboolean AddMagicAmmo(gentity_t* receiver, int numOfClips);
extern int Pickup_Ammo(gentity_t* ent, gentity_t* other);
extern int Add_Ammo(gentity_t* ent, int weapon, int count, qboolean fillClip);
extern void Fill_Clip(playerState_t* ps, int weapon);
extern int AddToClip(playerState_t* ps,
                     int weapon,
                     int ammomove,
                     int outOfReserve);
extern int Pickup_Holdable(gentity_t* ent, gentity_t* other);
extern void UseHoldableItem(gentity_t* ent, int item);
extern int Pickup_Treasure(gentity_t* ent, gentity_t* other);
extern int Pickup_Clipboard(gentity_t* ent, gentity_t* other);
extern int Pickup_Key(gentity_t* ent, gentity_t* other);
extern int Pickup_Powerup(gentity_t* ent, gentity_t* other);
extern void Cmd_FireTeam_MP_f(gentity_t* ent);
extern fireteamData_t* G_FindFreePublicFireteam(team_t team);
extern int G_FireteamNumberForString(const char* name, team_t team);
extern void G_ProposeFireTeamPlayer(int entityNum, int otherEntityNum);
extern void G_ApplyToFireTeam(int entityNum, int fireteamNum);
extern void G_KickFireTeamPlayer(int entityNum, int otherEntityNum);
extern void G_WarnFireTeamPlayer(int entityNum, int otherEntityNum);
extern void G_DestroyFireteam(int entityNum);
extern void G_InviteToFireTeam(int entityNum, int otherEntityNum);
extern void G_RemoveClientFromFireteams(int entityNum,
                                        qboolean update,
                                        qboolean print);
extern void G_AddClientToFireteam(int entityNum, int leaderNum);
extern void G_RegisterFireteam(int entityNum);
extern int G_FindFreeFireteamIdent(team_t team);
extern qboolean G_IsFireteamLeader(int entityNum, fireteamData_t** teamNum);
extern qboolean G_IsOnFireteam(int entityNum, fireteamData_t** teamNum);
extern void G_UpdateFireteamConfigString(fireteamData_t* ft);
extern int G_CountTeamFireteams(team_t team);
extern team_t G_GetFireteamTeam(fireteamData_t* ft);
extern fireteamData_t* G_FindFreeFireteam();
extern void G_configSet(int dwMode, qboolean doComp);
extern void G_Damage(gentity_t* targ,
                     gentity_t* inflictor,
                     gentity_t* attacker,
                     vec3_t dir,
                     vec3_t point,
                     int damage,
                     int dflags,
                     int mod);
extern qboolean IsArmShot(gentity_t* targ,
                          gentity_t* ent,
                          vec3_t point,
                          int mod);
extern qboolean IsLegShot(gentity_t* targ, vec3_t dir, vec3_t point, int mod);
extern qboolean IsHeadShot(gentity_t* targ, vec3_t dir, vec3_t point, int mod);
extern gentity_t* G_BuildLeg(gentity_t* ent);
extern gentity_t* G_BuildHead(gentity_t* ent);
extern qboolean IsHeadShotWeapon(int mod);
extern void player_die(gentity_t* self,
                       gentity_t* inflictor,
                       gentity_t* attacker,
                       int damage,
                       int meansOfDeath);
extern void body_die(gentity_t* self,
                     gentity_t* inflictor,
                     gentity_t* attacker,
                     int damage,
                     int meansOfDeath);
extern void GibEntity(gentity_t* self, int killer);
extern void LookAtKiller(gentity_t* self,
                         gentity_t* inflictor,
                         gentity_t* attacker);
extern void TossClientItems(gentity_t* self);
extern void AddKillScore(gentity_t* ent, int score);
extern void AddScore(gentity_t* ent, int score);
extern void G_weaponRankings_cmd(gentity_t* ent,
                                 unsigned int dwCommand,
                                 qboolean state);
extern void G_weaponStatsLeaders_cmd(gentity_t* ent,
                                     qboolean doTop,
                                     qboolean doWindow);
extern int QDECL SortStats(const void* a, const void* b);
extern void G_teamready_cmd(gentity_t* ent,
                            unsigned int dwCommand,
                            qboolean state);
extern void G_statsall_cmd(gentity_t* ent,
                           unsigned int dwCommand,
                           qboolean fDump);
extern void G_weaponStats_cmd(gentity_t* ent,
                              unsigned int dwCommand,
                              qboolean fDump);
extern void G_speclock_cmd(gentity_t* ent,
                           unsigned int dwCommand,
                           qboolean fLock);
extern void G_specinvite_cmd(gentity_t* ent,
                             unsigned int dwCommand,
                             qboolean fLock);
extern void G_scores_cmd(gentity_t* ent,
                         unsigned int dwCommand,
                         qboolean fValue);
extern void G_say_teamnl_cmd(gentity_t* ent,
                             unsigned int dwCommand,
                             qboolean fValue);
extern void G_ready_cmd(gentity_t* ent, unsigned int dwCommand, qboolean state);
extern void G_players_cmd(gentity_t* ent,
                          unsigned int dwCommand,
                          qboolean fValue);
extern void G_pause_cmd(gentity_t* ent,
                        unsigned int dwCommand,
                        qboolean fPause);
extern void G_lock_cmd(gentity_t* ent, unsigned int dwCommand, qboolean fLock);
extern void G_commands_cmd(gentity_t* ent,
                           unsigned int dwCommand,
                           qboolean fValue);
extern void G_noTeamControls(gentity_t* ent);
extern qboolean G_cmdDebounce(gentity_t* ent, const char* pszCommandName);
extern qboolean G_commandHelp(gentity_t* ent,
                              char* pszCommand,
                              unsigned int dwCommand);
extern qboolean G_commandCheck(gentity_t* ent, char* cmd, qboolean fDoAnytime);
extern void ClientCommand(int clientNum);
extern void Cmd_SwapPlacesWithBot_f(gentity_t* ent, int botNum);
extern void Cmd_UnIgnore_f(gentity_t* ent);
extern void Cmd_TicketTape_f(void);
extern void Cmd_Ignore_f(gentity_t* ent);
extern void Cmd_SelectedObjective_f(gentity_t* ent);
extern void Cmd_IntermissionWeaponAccuracies_f(gentity_t* ent);
extern void G_CalcClientAccuracies(void);
extern void Cmd_IntermissionPlayerKillsDeaths_f(gentity_t* ent);
extern void Cmd_IntermissionReady_f(gentity_t* ent);
extern void G_MakeUnready(gentity_t* ent);
extern void G_MakeReady(gentity_t* ent);
extern void Cmd_IntermissionWeaponStats_f(gentity_t* ent);
extern void Cmd_WeaponStat_f(gentity_t* ent);
extern void Cmd_SetSniperSpot_f(gentity_t* clent);
extern void Cmd_SetSpawnPoint_f(gentity_t* ent);
extern void SetPlayerSpawn(gentity_t* ent, int spawn, qboolean update);
extern void G_UpdateSpawnCounts(void);
extern void Cmd_Activate2_f(gentity_t* ent);
extern void Cmd_Activate_f(gentity_t* ent);
extern void G_LeaveTank(gentity_t* ent, qboolean position);
extern qboolean Do_Activate_f(gentity_t* ent, gentity_t* traceEnt);
extern qboolean Do_Activate2_f(gentity_t* ent, gentity_t* traceEnt);
extern qboolean G_TankIsMountable(gentity_t* ent, gentity_t* other);
extern qboolean G_TankIsOccupied(gentity_t* ent);
extern void Cmd_InterruptCamera_f(gentity_t* ent);
extern void Cmd_SetCameraOrigin_f(gentity_t* ent);
extern void Cmd_StopCamera_f(gentity_t* ent);
extern void Cmd_StartCamera_f(gentity_t* ent);
extern void Cmd_SetViewpos_f(gentity_t* ent);
extern qboolean G_canPickupMelee(gentity_t* ent);
extern void Cmd_Vote_f(gentity_t* ent);
extern qboolean G_FindFreeComplainIP(gclient_t* cl, ipFilter_t* ip);
extern qboolean Cmd_CallVote_f(gentity_t* ent,
                               unsigned int dwCommand,
                               qboolean fRefCommand);
extern void Cmd_Where_f(gentity_t* ent);
extern void G_Voice(gentity_t* ent,
                    gentity_t* target,
                    int mode,
                    const char* id,
                    qboolean voiceonly);
extern void G_VoiceTo(gentity_t* ent,
                      gentity_t* other,
                      int mode,
                      const char* id,
                      qboolean voiceonly);
extern void Cmd_Say_f(gentity_t* ent, int mode, qboolean arg0);
extern void G_Say(gentity_t* ent,
                  gentity_t* target,
                  int mode,
                  const char* chatText);
extern void G_SayTo(gentity_t* ent,
                    gentity_t* other,
                    int mode,
                    int color,
                    const char* name,
                    const char* message,
                    qboolean localize);
extern void G_EntitySoundNoCut(gentity_t* ent, const char* soundId, int volume);
extern void G_EntitySound(gentity_t* ent, const char* soundId, int volume);
extern void Cmd_FollowCycle_f(gentity_t* ent, int dir);
extern void Cmd_Follow_f(gentity_t* ent,
                         unsigned int dwCommand,
                         qboolean fValue);
extern void Cmd_TeamBot_f(gentity_t* foo);
extern void Cmd_SetWeapons_f(gentity_t* ent,
                             unsigned int dwCommand,
                             qboolean fValue);
extern void Cmd_SetClass_f(gentity_t* ent,
                           unsigned int dwCommand,
                           qboolean fValue);
extern void Cmd_ResetSetup_f(gentity_t* ent);
extern void Cmd_Team_f(gentity_t* ent, unsigned int dwCommand, qboolean fValue);
extern void G_SetClientWeapons(gentity_t* ent,
                               weapon_t w1,
                               weapon_t w2,
                               qboolean updateclient);
extern qboolean G_IsWeaponDisabled(gentity_t* ent, weapon_t weapon);
extern int G_TeamCount(gentity_t* ent, weapon_t weap);
extern qboolean G_IsHeavyWeapon(weapon_t weap);
extern int G_NumPlayersOnTeam(team_t team);
extern int G_NumPlayersWithWeapon(weapon_t weap, team_t team);
extern void StopFollowing(gentity_t* ent);
extern qboolean SetTeam(gentity_t* ent,
                        char* s,
                        qboolean force,
                        weapon_t w1,
                        weapon_t w2,
                        qboolean setweapons);
extern void G_TeamDataForString(const char* teamstr,
                                int clientNum,
                                team_t* team,
                                spectatorState_t* sState,
                                int* specClient);
extern void Cmd_Kill_f(gentity_t* ent);
extern void Cmd_Noclip_f(gentity_t* ent);
extern void Cmd_Notarget_f(gentity_t* ent);
extern void Cmd_Nofatigue_f(gentity_t* ent);
extern void Cmd_God_f(gentity_t* ent);
extern void Cmd_Give_f(gentity_t* ent);
extern void Cmd_ListBotGoals_f(gentity_t* ent);
extern int ClientNumberFromString(gentity_t* to, char* s);
extern void SanitizeString(char* in, char* out, qboolean fToLower);
extern char* ConcatArgs(int start);
extern qboolean CheatsOk(gentity_t* ent);
extern void Cmd_Score_f(gentity_t* ent);
extern void G_SendScore(gentity_t* ent);
extern void ClientStoreSurfaceFlags(int clientNum, int surfaceFlags);
extern void ClientDisconnect(int clientNum);
extern void ClientSpawn(gentity_t* ent, qboolean revived);
extern gentity_t* SelectSpawnPointFromList(char* list,
                                           vec3_t spawn_origin,
                                           vec3_t spawn_angles);
extern void ClientBegin(int clientNum);
extern int G_ComputeMaxLives(gclient_t* cl, int maxRespawns);
extern char* ClientConnect(int clientNum, qboolean firstTime, qboolean isBot);
extern void ClientUserinfoChanged(int clientNum);
extern void G_StartPlayerAppropriateSound(gentity_t* ent, char* soundType);
extern void AddMedicTeamBonus(gclient_t* client);
extern int G_CountTeamMedics(team_t team, qboolean alivecheck);
extern void SetWolfSpawnWeapons(gclient_t* client);
extern qboolean AddWeaponToPlayer(gclient_t* client,
                                  weapon_t weapon,
                                  int ammo,
                                  int ammoclip,
                                  qboolean setcurrent);
extern team_t PickTeam(int ignoreClientNum);
extern team_t TeamCount(int ignoreClientNum, int team);
extern void respawn(gentity_t* ent);
extern void reinforce(gentity_t* ent);
extern void limbo(gentity_t* ent, qboolean makeCorpse);
extern void SetClientViewAnglePitch(gentity_t* ent, vec_t angle);
extern void SetClientViewAngle(gentity_t* ent, vec3_t angle);
extern void CopyToBodyQue(gentity_t* ent);
extern void BodySink(gentity_t* ent);
extern void BodySink2(gentity_t* ent);
extern void BodyUnlink(gentity_t* ent);
extern void InitBodyQue(void);
extern gentity_t* SelectSpectatorSpawnPoint(vec3_t origin, vec3_t angles);
extern gentity_t* SelectSpawnPoint(vec3_t avoidPoint,
                                   vec3_t origin,
                                   vec3_t angles);
extern gentity_t* SelectRandomDeathmatchSpawnPoint(void);
extern gentity_t* SelectNearestDeathmatchSpawnPoint(vec3_t from);
extern qboolean SpotWouldTelefrag(gentity_t* spot);
extern void SP_info_player_intermission(gentity_t* ent);
extern void SP_info_player_start(gentity_t* ent);
extern void SP_info_player_checkpoint(gentity_t* ent);
extern void SP_info_player_deathmatch(gentity_t* ent);
extern void G_UpdateCharacter(gclient_t* client);
extern void G_RegisterPlayerClasses(void);
extern qboolean G_RegisterCharacter(const char* characterFile,
                                    bg_character_t* character);
extern void G_RemoveFromAllIgnoreLists(int clientNum);
extern void SP_bot_landmine_area(gentity_t* ent);
extern void SP_bot_seek_cover_sequence(gentity_t* ent);
extern void bot_seek_cover_sequence_init(gentity_t* ent);
extern void bot_seek_cover_sequence_touch(gentity_t* self,
                                          gentity_t* other,
                                          trace_t* trace);
extern void SP_bot_axis_seek_cover_spot(gentity_t* ent);
extern void SP_bot_seek_cover_spot(gentity_t* ent);
extern void SP_Seek_Cover_Spawn(gentity_t* ent, int team);
extern void SP_SeekCover_Setup(g_serverEntity_t* ent);
extern void bot_seek_cover_spot_think(g_serverEntity_t* ent);
extern void SP_bot_jump_dest(gentity_t* ent);
extern void SP_bot_jump_source(gentity_t* ent);
extern void SP_bot_attractor(gentity_t* ent);
extern void SP_bot_landminespot_spot(gentity_t* ent);
extern void bot_landminespot_setup(gentity_t* self);
extern void SP_bot_sniper_spot(gentity_t* ent);
extern void SP_ai_marker(gentity_t* ent);
extern void SP_AIMarker_Setup(g_serverEntity_t* ent);
extern void ServerEntityDropToFloor(g_serverEntity_t* ent);
extern void BotDropToFloor(gentity_t* ent);
extern void G_InitBots(qboolean restart);
extern void G_BotDelayedInit(gentity_t* ent);
extern char* G_GetBotInfoByName(const char* name);
extern char* G_GetBotInfoByNumber(int num);
extern void Svcmd_RemoveBot_f(void);
extern int G_RemoveNamedBot(char* name);
extern void Svcmd_SpawnBot();
extern void G_SpawnBot(const char* text);
extern void G_BotParseCharacterParms(char* characterFile, int* characterInt);
extern int G_ClassForString(char* string);
extern void Svcmd_AddBot_f(void);
extern int Bot_GetWeaponForClassAndTeam(int classNum,
                                        int teamNum,
                                        const char* weaponName);
extern qboolean G_BotConnect(int clientNum, qboolean restart);
extern void G_QueueBotBegin(int clientNum);
extern void G_CheckBotSpawn(void);
extern void G_CheckMinimumPlayers(void);
extern int G_CountBotPlayers(int team);
extern int G_CountHumanPlayers(int team);
extern int G_RemoveRandomBot(int team);
extern void G_AddRandomBot(int team);
extern const char* G_GetArenaInfoByMap(const char* map);
extern void G_Trace(gentity_t* ent,
                    trace_t* results,
                    const vec3_t start,
                    const vec3_t mins,
                    const vec3_t maxs,
                    const vec3_t end,
                    int passEntityNum,
                    int contentmask);
extern void G_HistoricalTraceEnd(gentity_t* ent);
extern void G_HistoricalTraceBegin(gentity_t* ent);
extern void G_HistoricalTrace(gentity_t* ent,
                              trace_t* results,
                              const vec3_t start,
                              const vec3_t mins,
                              const vec3_t maxs,
                              const vec3_t end,
                              int passEntityNum,
                              int contentmask);
extern int G_SwitchBodyPartEntity(gentity_t* ent);
extern void G_DettachBodyParts();
extern void G_AttachBodyParts(gentity_t* ent);
extern void G_ResetMarkers(gentity_t* ent);
extern void G_AdjustClientPositions(gentity_t* ent, int time, qboolean forward);
extern void G_StoreClientPosition(gentity_t* ent);
extern void SP_alarm_box(gentity_t* ent);
extern void alarmbox_finishspawning(gentity_t* ent);
extern void alarmbox_die(gentity_t* ent,
                         gentity_t* inflictor,
                         gentity_t* attacker,
                         int damage,
                         int mod);
extern void alarmbox_use(gentity_t* ent, gentity_t* other, gentity_t* foo);
extern void alarmbox_updateparts(gentity_t* ent, qboolean matestoo);
extern void ClientEndFrame(gentity_t* ent);
extern void WolfReviveBbox(gentity_t* self);
extern void WolfRevivePushEnt(gentity_t* self, gentity_t* other);
extern qboolean StuckInClient(gentity_t* self);
extern void SpectatorClientEndFrame(gentity_t* ent);
extern void G_RunClient(gentity_t* ent);
extern void ClientThink(int clientNum);
extern void ClientThink_real(gentity_t* ent);
extern void WolfFindMedic(gentity_t* self);
extern void SendPendingPredictableEvents(playerState_t* ps);
extern void ClientEvents(gentity_t* ent, int oldEventSequence);
extern void ClientIntermissionThink(gclient_t* client);
extern void ClientTimerActions(gentity_t* ent, int msec);
extern qboolean ClientInactivityTimer(gclient_t* client);
extern void SpectatorThink(gentity_t* ent, usercmd_t* ucmd);
extern void G_TouchTriggers(gentity_t* ent);
extern void ClientImpacts(gentity_t* ent, pmove_t* pm);
extern void CheckBotImpacts(gentity_t* ent, gentity_t* other);
extern qboolean ReadyToConstruct(gentity_t* ent,
                                 gentity_t* constructible,
                                 qboolean updateState);
extern qboolean ReadyToCallArtillery(gentity_t* ent);
extern qboolean ClientNeedsAmmo(int client);
extern void PushBot(gentity_t* ent, gentity_t* other);
extern void G_SetClientSound(gentity_t* ent);
extern void P_WorldEffects(gentity_t* ent);
extern void P_DamageFeedback(gentity_t* player);
extern void etpro_FinalizeTracemapClamp(int* x, int* y);
extern int BG_GetTracemapGroundCeil(void);
extern int BG_GetTracemapGroundFloor(void);
extern float BG_GetGroundHeightAtPoint(vec3_t pos);
extern float BG_GetSkyGroundHeightAtPoint(vec3_t pos);
extern float BG_GetSkyHeightAtPoint(vec3_t pos);
extern qboolean BG_LoadTraceMap(char* rawmapname,
                                vec2_t world_mins,
                                vec2_t world_maxs);
extern extWeaponStats_t BG_WeapStatForWeapon(weapon_t iWeaponID);
extern qboolean BG_LoadSpeakerScript(const char* filename);
extern qboolean BG_SS_StoreSpeaker(bg_speaker_t* speaker);
extern qboolean BG_SS_DeleteSpeaker(int index);
extern bg_speaker_t* BG_GetScriptSpeaker(int index);
extern int BG_GetIndexForSpeaker(bg_speaker_t* speaker);
extern int BG_NumScriptSpeakers(void);
extern void BG_ClearScriptSpeakerPool(void);
extern void PM_StepSlideMove(qboolean gravity);
extern qboolean PM_SlideMove(qboolean gravity);
extern skillType_t BG_ClassSkillForClass(int classnum);
extern int BG_ClassTextToClass(char* token);
extern const char* BG_ClassLetterForNumber(int classNum);
extern const char* BG_ClassnameForNumber(int classNum);
extern const char* BG_ShortClassnameForNumber(int classNum);
extern qboolean BG_WeaponIsPrimaryForClassAndTeam(int classnum,
                                                  team_t team,
                                                  weapon_t weapon);
extern qboolean BG_ClassHasWeapon(bg_playerclass_t* classInfo, weapon_t weap);
extern bg_playerclass_t* BG_PlayerClassForPlayerState(playerState_t* ps);
extern bg_playerclass_t* BG_GetPlayerClassInfo(int team, int cls);
extern bg_character_t* BG_FindCharacter(const char* characterFile);
extern bg_character_t* BG_FindFreeCharacter(const char* characterFile);
extern void BG_ClearCharacterPool(void);
extern bg_character_t* BG_GetCharacterForPlayerstate(playerState_t* ps);
extern bg_character_t* BG_GetCharacter(int team, int cls);
extern qboolean BG_ParseCharacterFile(const char* filename,
                                      bg_characterDef_t* characterDef);
extern qboolean BG_StoreCampaignSave(const char* filename,
                                     cpsFile_t* file,
                                     const char* profile);
extern qboolean BG_LoadCampaignSave(const char* filename,
                                    cpsFile_t* file,
                                    const char* profile);
extern qboolean BG_R_RegisterAnimationGroup(const char* filename,
                                            animModelInfo_t* animModelInfo);
extern void BG_ClearAnimationPool(void);
extern void BG_AnimUpdatePlayerStateConditions(pmove_t* pmove);
extern animation_t* BG_GetAnimationForIndex(animModelInfo_t* animModelInfo,
                                            int index);
extern int BG_GetAnimScriptEvent(playerState_t* ps,
                                 scriptAnimEventTypes_t event);
extern int BG_GetAnimScriptAnimation(int client,
                                     animModelInfo_t* animModelInfo,
                                     aistateEnum_t aistate,
                                     scriptAnimMoveTypes_t movetype);
extern void BG_ClearConditionBitFlag(int client, int condition, int bitNumber);
extern void BG_SetConditionBitFlag(int client, int condition, int bitNumber);
extern qboolean BG_GetConditionBitFlag(int client,
                                       int condition,
                                       int bitNumber);
extern int BG_GetConditionValue(int client,
                                int condition,
                                qboolean checkConversion);
extern void BG_UpdateConditionValue(int client,
                                    int condition,
                                    int value,
                                    qboolean checkConversion);
extern char* BG_GetAnimString(animModelInfo_t* animModelInfo, int anim);
extern int BG_AnimScriptEvent(playerState_t* ps,
                              animModelInfo_t* animModelInfo,
                              scriptAnimEventTypes_t event,
                              qboolean isContinue,
                              qboolean force);
extern int BG_AnimScriptCannedAnimation(playerState_t* ps,
                                        animModelInfo_t* animModelInfo);
extern int BG_AnimScriptAnimation(playerState_t* ps,
                                  animModelInfo_t* animModelInfo,
                                  scriptAnimMoveTypes_t movetype,
                                  qboolean isContinue);
extern int BG_ExecuteCommand(playerState_t* ps,
                             animModelInfo_t* animModelInfo,
                             animScriptCommand_t* scriptCommand,
                             qboolean setTimer,
                             qboolean isContinue,
                             qboolean force);
extern int BG_PlayAnimName(playerState_t* ps,
                           animModelInfo_t* animModelInfo,
                           char* animName,
                           animBodyPart_t bodyPart,
                           qboolean setTimer,
                           qboolean isContinue,
                           qboolean force);
extern int BG_PlayAnim(playerState_t* ps,
                       animModelInfo_t* animModelInfo,
                       int animNum,
                       animBodyPart_t bodyPart,
                       int forceDuration,
                       qboolean setTimer,
                       qboolean isContinue,
                       qboolean force);
extern void BG_ClearAnimTimer(playerState_t* ps, animBodyPart_t bodyPart);
extern animScriptItem_t* BG_FirstValidItem(int client, animScript_t* script);
extern qboolean BG_EvaluateConditions(int client, animScriptItem_t* scriptItem);
extern void BG_AnimParseAnimScript(animModelInfo_t* animModelInfo,
                                   animScriptData_t* scriptData,
                                   const char* filename,
                                   char* input);
extern qboolean BG_ParseConditions(char** text_pp,
                                   animScriptItem_t* scriptItem);
extern void BG_ParseConditionBits(char** text_pp,
                                  animStringItem_t* stringTable,
                                  int condIndex,
                                  int result[2]);
extern void BG_InitWeaponStrings(void);
extern char* BG_CopyStringIntoBuffer(char* string,
                                     char* buffer,
                                     int bufSize,
                                     int* offset);
extern int BG_IndexForString(char* token,
                             animStringItem_t* strings,
                             qboolean allowFail);
extern animation_t* BG_AnimationForString(char* string,
                                          animModelInfo_t* animModelInfo);
extern void QDECL BG_AnimParseError(const char* msg, ...);
extern long BG_StringHashValue_Lwr(const char* fname);
extern long BG_StringHashValue(const char* fname);
