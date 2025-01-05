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

extern int BotObjectiveFunc(bot_state_t* bs);
extern int BotBehaviourFunc(bot_state_t* bs);
extern int BotEngagementFunc(bot_state_t* bs);
extern void BotSetLeaderTagEnt(bot_state_t* bs);
extern int EntGetNumBotFollowers(int entNum);
extern int BotGetLeader(bot_state_t* bs, qboolean onlyRequested);
extern qboolean G_RequestedFollow(bot_state_t* bs, int client);
extern void BotSpawnSpecialEntities(void);
extern void BotVoiceChatAfterTeamIdleTime(int client,
                                          const char* id,
                                          int mode,
                                          int delay,
                                          qboolean voiceonly,
                                          int idleTime,
                                          qboolean forceIfDead);
extern void AI_Team_Init_All_Teams();
extern void AI_Team_Init(AI_Team_t* thisOne);
extern void BotVoiceChatAfterIdleTime(int client,
                                      const char* id,
                                      int mode,
                                      int delay,
                                      qboolean voiceonly,
                                      int idleTime,
                                      qboolean forceIfDead);
extern void BotSendVoiceChat(bot_state_t* bs,
                             const char* id,
                             int mode,
                             int delay,
                             qboolean voiceonly,
                             qboolean forceIfDead);
extern void BotDelayedVoiceChat(gentity_t* ent);
extern void BotCheckVoiceChatResponse(bot_state_t* bs);
extern void BotRecordVoiceChat(int client,
                               int destclient,
                               const char* id,
                               int mode,
                               qboolean noResponse);
extern qboolean BotClass_LtCheckGiveAmmo(bot_state_t* bs,
                                         int maxTravelTime,
                                         bot_goal_t* goal);
extern qboolean G_RequestedAmmo(bot_state_t* bs, int client, qboolean clear);
extern qboolean BotClass_MedicCheckGiveHealth(bot_state_t* bs,
                                              int maxTravelTime,
                                              bot_goal_t* goal);
extern qboolean G_RequestedHealth(bot_state_t* bs,
                                  int client,
                                  qboolean clearRequest);
extern qboolean BotClass_MedicCheckRevives(bot_state_t* bs,
                                           int maxtravel,
                                           bot_goal_t* goal,
                                           qboolean lookForBots);
extern qboolean BotClass_CovertOpsCheckDisguises(bot_state_t* bs,
                                                 int maxTravel,
                                                 bot_goal_t* goal);
extern void BotTeamOrders(bot_state_t* bs);
extern void BotCTFOrders_BothFlagsAtBase(bot_state_t* bs);
extern void BotCTFOrders_EnemyFlagNotAtBase(bot_state_t* bs);
extern void BotCTFOrders_FlagNotAtBase(bot_state_t* bs);
extern void BotCTFOrders_BothFlagsNotAtBase(bot_state_t* bs);
extern int BotSuggestWeapon(bot_state_t* bs, team_t team);
extern int BotSuggestClass(bot_state_t* bs, team_t team);
extern qboolean BotCheckNeedEngineer(bot_state_t* bs, team_t team);
extern int BotNumTeamClasses(team_t team, int mpClass, int ignore);
extern int BotNumTeamMembers(int team);
extern int BotGetConstructibles(team_t team,
                                int* list,
                                int listSize,
                                qboolean ignoreBuilt);
extern int BotGetTargetDynamite(int* list, int listSize, gentity_t* target);
extern int GetTargetExplosives(team_t team, qboolean ignoreDynamite);
extern int BotGetTargetExplosives(team_t team,
                                  int* list,
                                  int listSize,
                                  qboolean ignoreDynamite);
extern int BotGetTargetsForSatchelCharge(team_t team,
                                         int* list,
                                         int listSize,
                                         qboolean ignoreSatchelCharge);
extern gentity_t* G_FindSatchelChargeTargetForTeam(gentity_t* trav,
                                                   team_t team);
extern gentity_t* G_FindDynamiteTargetForTeam(gentity_t* trav, team_t team);
extern gentity_t* G_IsConstructible(team_t team, gentity_t* toi);
extern gentity_t* G_ConstructionForTeam(gentity_t* toi, team_t team);
extern qboolean G_ConstructionIsDestroyable(gentity_t* ent);
extern qboolean G_ConstructionIsPartlyBuilt(gentity_t* ent);
extern qboolean G_ConstructionIsFullyBuilt(gentity_t* ent);
extern qboolean G_ConstructionBegun(gentity_t* ent);
extern gentity_t* G_FindSatchels(gentity_t* start);
extern gentity_t* G_FindLandmine(gentity_t* start);
extern gentity_t* G_FindSmokeBomb(gentity_t* start);
extern gentity_t* G_FindDynamite(gentity_t* start);
extern gentity_t* G_FindMissile(gentity_t* start, weapon_t weap);
extern int BotFindSparseDefendArea(bot_state_t* bs,
                                   bot_goal_t* goal,
                                   qboolean force);
extern qboolean BotFindDroppedFlag(gentity_t** returnEnt);
extern void BotSayTeamOrder(bot_state_t* bs, int toclient);
extern int BotSortTeamMatesByBaseTravelTime(bot_state_t* bs,
                                            int* teammates,
                                            int maxteammates);
extern int BotClientTravelTimeToGoal(int client, bot_goal_t* goal);
extern int BotFlagAtBase(int team, gentity_t** returnEnt);
extern int BotGetTeamFlagCarrier(bot_state_t* bs);
extern gentity_t* BotGetEnemyFlagCarrier(bot_state_t* bs);
extern float* BotSortPlayersByTraveltime(int areanum, int* list, int numList);
extern float* BotSortPlayersByDistance(vec3_t target, int* list, int numList);
extern int BotNumTeamMatesWithTargetAndCloser(bot_state_t* bs,
                                              int targetEntity,
                                              int targetArea,
                                              int* list,
                                              int maxList,
                                              int playerType);
extern int BotNumTeamMatesWithTargetByClass(bot_state_t* bs,
                                            int targetEntity,
                                            int* list,
                                            int maxList,
                                            int playerType);
extern int BotNumTeamMatesWithTarget(bot_state_t* bs,
                                     int targetEntity,
                                     int* list,
                                     int maxList);
extern int BotNumTeamMates(bot_state_t* bs, int* list, int maxList);
extern int BotValidTeamLeader(bot_state_t* bs);
extern qboolean Bot_ScriptAction_SetCivilian(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetAmmoAmount(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetScriptAutonomy(bot_state_t* bs,
                                                   char* params);
extern qboolean Bot_ScriptAction_FireAtTarget(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_Announce(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetActiveWeapon(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetSpeedCoefficient(bot_state_t* bs,
                                                     char* params);
extern qboolean Bot_ScriptAction_SetCloseHearingRange(bot_state_t* bs,
                                                      char* params);
extern qboolean Bot_ScriptAction_SetFarSeeingRange(bot_state_t* bs,
                                                   char* params);
extern qboolean Bot_ScriptAction_SetVisionRange(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetFireCycleTime(bot_state_t* bs,
                                                  char* params);
extern qboolean Bot_ScriptAction_SetFireRate(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_BotDebugging(gentity_t* ent, char* params);
extern qboolean Bot_ScriptAction_PrintGlobalAccum(gentity_t* ent, char* params);
extern qboolean Bot_ScriptAction_PrintAccum(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetProne(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetCrouch(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetHearingRange(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetFieldOfView(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_ResetScript(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_NoTarget(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_MovementAutonomy(bot_state_t* bs,
                                                  char* params);
extern qboolean Bot_ScriptAction_SetMovementAutonomy(bot_state_t* bs,
                                                     char* params);
extern qboolean Bot_ScriptAction_Cvar(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_FollowLeader(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_GlobalAccum(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetClass(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetWeapon(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_PlaySoundAtPlayer(bot_state_t* bs,
                                                   char* params);
extern qboolean Bot_ScriptAction_MountMG42(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetAttribute(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_AbortIfWarmup(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_Logging(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_Trigger(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_MoveToMarker(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_Wait(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_Accum(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SpawnBot(bot_state_t* bs, char* params);
extern qboolean Bot_ScriptAction_SetAccumToPlayerCount(bot_state_t* bs,
                                                       char* params);
extern qboolean Bot_ScriptAction_Print(bot_state_t* bs, char* params);
extern void Bot_ScriptError(bot_state_t* bs, char* fmt, ...);
extern qboolean Bot_ScriptAction_SetSpeed(bot_state_t* bs, char* params);
extern void Bot_ScriptThink(void);
extern void Bot_ScriptLog_Entry(bot_state_t* bs,
                                qboolean showDetails,
                                char* preText,
                                char* fmt,
                                ...);
extern int Bot_Script_GetCurrentLine(bot_state_t* bs);
extern qboolean Bot_ScriptRun(bot_state_t* bs, qboolean force);
extern void Bot_TeamScriptEvent(int team, char* eventStr, char* params);
extern void Bot_ForceScriptEvent(int entityNum, char* eventStr, char* params);
extern void Bot_ScriptEvent(int entityNum, char* eventStr, char* params);
extern void Bot_ScriptChange(bot_state_t* bs, int newScriptNum);
extern char* Bot_LineText(char* text);
extern qboolean Bot_ScriptInitBot(int entnum);
extern void Bot_ScriptParse(bot_script_data_t* bsd, char** text);
extern void Bot_ScriptParseAllCharacters();
extern void Bot_ScriptLoad(void);
extern bot_script_stack_action_t* Bot_ActionForString(char* string);
extern int Bot_EventForString(char* string);
extern qboolean Bot_EventMatch_IntInRange(bot_script_event_t* event,
                                          char* eventParm);
extern qboolean Bot_EventMatch_StringEqual(bot_script_event_t* event,
                                           char* eventParm);
extern int Bot_FindSriptGlobalData(bot_script_data_t* data);
extern void BotDebugViewClient(int client);
extern void BotInitMovementAutonomyPos(gentity_t* bot);
extern void BotSetIdealViewAngles(int clientNum, vec3_t angle);
extern void GetBotAmmo(int clientNum, int* weapon, int* ammo, int* ammoclip);
extern void GetBotAutonomies(int clientNum,
                             int* weapAutonomy,
                             int* moveAutonomy);
extern void BotDebug(int clientNum);
extern void BotRecordAttack(int src, int dest);
extern void BotRecordTeamDeath(int client);
extern void G_SetAASBlockingEntity(gentity_t* ent, int blocking);
extern qboolean BotCoop();
extern qboolean BotSinglePlayer();
extern gentity_t* BotFindEntityForName(char* name);
extern gentity_t* BotFindNextStaticEntity(gentity_t* start,
                                          botStaticEntityEnum_t entityEnum);
extern void BotBuildStaticEntityCache(void);
extern gentity_t* BotGetEntity(int entityNum);
extern bot_state_t* FindBotByName(char* botName);
extern gentity_t* BotFindEntity(gentity_t* from, int fieldofs, char* match);
extern int BotAIShutdown(int restart);
extern int BotAISetup(int restart);
extern int BotInitLibrary(void);
extern int BotAIStartFrame(int time);
extern int BotAIThinkFrame(int time);
extern void BotPreProcessAI();
extern int BotAILoadMap(int restart);
extern void BotResetState(bot_state_t* bs);
extern int BotAIShutdownClient(int client);
extern int BotAISetupClient(int client, struct bot_settings_s* settings);
extern void BotSetUpCharacter(bot_state_t* bs);
extern void BotSetCharacterAttributes(bot_state_t* bs,
                                      BotDefaultAttributes_t* defaults);
extern void ParseBotDefaultAttributes(char* fileName);
extern void BotGetInitialAttributes(bot_state_t* bs);
extern void BotScheduleBotThink(void);
extern int BotAI(int client, float thinktime);
extern int BotTravelFlagsForClient(int client);
extern void BotAIRegularUpdate(void);
extern void BotUpdateInput(bot_state_t* bs, int time);
extern void BotInputToUserCommand(bot_state_t* bs,
                                  bot_input_t* bi,
                                  usercmd_t* ucmd,
                                  int delta_angles[3],
                                  int time);
extern void BotSpeedBonus(int clientNum);
extern void BotChangeViewAngles(bot_state_t* bs, float thinktime);
extern float BotChangeViewAngle(float angle, float ideal_angle, float speed);
extern float AngleDifference(float ang1, float ang2);
extern void BotAI_SetNumBots(int numbots);
extern int BotAI_GetNumBots(void);
extern void BotEntityInfo(int entnum, aas_entityinfo_t* info);
extern void BotInterbreeding(void);
extern void QDECL BotAI_BotInitialChat(bot_state_t* bs, char* type, ...);
extern int BotAI_GetSnapshotEntity(int clientNum,
                                   int sequence,
                                   entityState_t* state);
extern int BotAI_GetEntityState(int entityNum, entityState_t* state);
extern int BotAI_GetClientState(int clientNum, playerState_t* state);
extern void BotAI_Trace(bsp_trace_t* bsptrace,
                        vec3_t start,
                        vec3_t mins,
                        vec3_t maxs,
                        vec3_t end,
                        int passent,
                        int contentmask);
extern void QDECL BotAI_Print(int type, char* fmt, ...);
extern qboolean BotEntityWithinView(bot_state_t* bs, int viewEnt);
extern void BotPickupWeapon(int client, int weaponnum, qboolean alreadyHave);
extern void BotCountLandMines(void);
extern gentity_t* BotGetVisibleDamagableScriptMover(bot_state_t* bs);
extern int BotBestTargetWeapon(bot_state_t* bs, int targetNum);
extern void BotSetPOW(int entityNum, qboolean isPOW);
extern void BotUpdateViewAngles(bot_state_t* bs,
                                bot_goal_t* goal,
                                bot_moveresult_t moveresult);
extern void BotFindAndAttackEnemy(bot_state_t* bs);
extern qboolean EnemyIsCloseEnoughToFight(bot_state_t* bs);
extern float BotHealthScale(int entnum);
extern int BotCanSnipe(bot_state_t* bs, qboolean checkAmmo);
extern qboolean BotIsConstructible(team_t team, int toiNum);
extern qboolean BotGetReachableEntityArea(bot_state_t* bs,
                                          int entityNum,
                                          bot_goal_t* goal);
extern qboolean BotEntityTargetClassnameMatch(int entityNum,
                                              const char* classname);
extern qboolean BotDirectMoveToGoal(bot_state_t* bs,
                                    bot_goal_t* goal,
                                    bot_moveresult_t* moveresult);
extern qboolean BotBattleNewNode(bot_state_t* bs);
extern int BotTravelTimeToEntity(bot_state_t* bs, int entnum);
extern int BotReduceListByTravelTime(int* list,
                                     int numList,
                                     vec3_t destpos,
                                     int destarea,
                                     int traveltime);
extern int BotGetArea(int entnum);
extern float* BotGetOrigin(int entnum);
extern float* BotGetEye(int entnum);
extern qboolean BotSeekCover(bot_state_t* bs);
extern int BotLastHurt(bot_state_t* bs);
extern int BotLastAttacked(bot_state_t* bs);
extern qboolean BotEnemyCarryingFlag(int entnum);
extern void BotShareLastAttacked(bot_state_t* bs);
extern void BotEnemyFire(bot_state_t* bs);
extern void BotCheckVoiceChats(bot_state_t* bs);
extern void BotDefaultNode(bot_state_t* bs);
extern qboolean BotFindSpecialGoals(bot_state_t* bs);
extern qboolean BotCheckEmergencyTargets(bot_state_t* bs);
extern int BotScriptAutonomyForString(char* string);
extern char* BotStringForWeaponAutonomy(int value);
extern int BotWeaponAutonomyForString(char* string);
extern char* BotStringForMovementAutonomy(int value);
extern int BotMovementAutonomyForString(char* string);
extern void BotCalculateMg42Spots(void);
extern void BotDropFlag(bot_state_t* bs);
extern void BotClearGoal(bot_goal_t* goal);
extern int BotGetRandomVisibleSniperSpot(bot_state_t* bs);
extern int BotGetNumVisibleSniperSpots(bot_state_t* bs);
extern int BotBestMG42Spot(bot_state_t* bs, qboolean force);
extern int BotBestLandmineSpotingSpot(bot_state_t* bs);
extern int BotBestSniperSpot(bot_state_t* bs);
extern void BotGetAimAccuracySkill(bot_state_t* bs,
                                   float* outAimAccuracy,
                                   float* outAimSkill);
extern void BotRecordDeath(int client, int enemy);
extern void BotRecordPain(int client, int enemy, int mod);
extern void BotRecordKill(int client, int enemy);
extern void BotRecordTeamChange(int client);
extern void BotMoveToIntermission(int client);
extern void BotSetBlockEnt(int client, int blocker);
extern void BotShutdownDeathmatchAI(void);
extern void BotSetupDeathmatchAI(void);
extern void BotDeathmatchAI(bot_state_t* bs, float thinktime);
extern void BotPowThink(bot_state_t* bs);
extern void BotDeathmatchAIFirstCalled(bot_state_t* bs);
extern void BotDumpNodeSwitches(bot_state_t* bs);
extern void BotResetNodeSwitches(void);
extern void BotUpdateReconInfo(bot_state_t* bs);
extern void BotCheckAlert(bot_state_t* bs);
extern void BotCheckAir(bot_state_t* bs);
extern void BotCheckSnapshot(bot_state_t* bs);
extern void BotCheckEvents(bot_state_t* bs, entityState_t* state);
extern void BotAIBlocked(bot_state_t* bs,
                         bot_moveresult_t* moveresult,
                         int activate);
extern void BotModelMinsMaxs(int modelindex, vec3_t mins, vec3_t maxs);
extern void BotSetMovedir(vec3_t angles, vec3_t movedir);
extern int BotEntityToActivate(int entitynum);
extern void BotMapScripts(bot_state_t* bs);
extern qboolean BotCheckAttack(bot_state_t* bs);
extern qboolean BotScopedWeapon(int weapon);
extern qboolean BotThrottleWeapon(int weapon);
extern qboolean BotMoveWhileFiring(int weapon);
extern void BotAimAtEnemySP(bot_state_t* bs);
extern void BotAimAtEnemy(bot_state_t* bs);
extern float swayrand(float x, float y);
extern float BotGetReactionTime(bot_state_t* bs);
extern int BotFindEnemyMP(bot_state_t* bs,
                          int curenemy,
                          qboolean ignoreViewRestrictions);
extern void BotSortClientsByDistance(vec3_t srcpos,
                                     int* sorted,
                                     qboolean hasPanzer);
extern qboolean BotHasWeaponWithRange(bot_state_t* bs, float dist);
extern float BotWeaponRange(bot_state_t* bs, int weaponnum);
extern void BotFindEnemies(bot_state_t* bs,
                           int* dangerSpots,
                           int* dangerSpotCount);
extern qboolean BotIsValidTarget(bot_state_t* bs, int target, int curenemy);
extern float BotGetEntitySurfaceSoundCoefficient(int clientNum);
extern void BotUpdateAlertStateSquadSensingInfo(bot_state_t* bs,
                                                qboolean canSeeTarget,
                                                qboolean heardFootSteps,
                                                qboolean heardShooting);
extern qboolean ChangeBotAlertState(bot_state_t* bs,
                                    aistateEnum_t newAlertState,
                                    qboolean force);
extern float BotNoLeaderPenalty(bot_state_t* bs);
extern qboolean BotDangerousGoal(bot_state_t* bs, bot_goal_t* goal);
extern void BotIgnoreGoal(bot_state_t* bs, bot_goal_t* goal, int duration);
extern qboolean BotCheckMovementAutonomy(bot_state_t* bs, bot_goal_t* goal);
extern void sAdjustPointTowardsPlayer(vec3_t playerLoc,
                                      vec3_t endPos,
                                      qboolean shouldLoop,
                                      vec3_t outPos);
extern float sAngleBetweenVectors(vec3_t a, vec3_t b);
extern void botindicator_think(gentity_t* ent);
extern qboolean BotGoalForEntity(bot_state_t* bs,
                                 int entityNum,
                                 bot_goal_t* goal,
                                 int urgency);
extern qboolean BotGoalWithinMovementAutonomy(bot_state_t* bs,
                                              bot_goal_t* goal,
                                              int urgency);
extern qboolean BotPointWithinRawMovementAutonomy(bot_state_t* bs,
                                                  vec3_t point);
extern qboolean BotPointWithinMovementAutonomy(bot_state_t* bs,
                                               bot_goal_t* goal,
                                               vec3_t point);
extern qboolean BotWithinLeaderFollowDist(bot_state_t* bs);
extern float BotGetFollowAutonomyDist(bot_state_t* bs);
extern float BotGetMovementAutonomyRange(bot_state_t* bs, bot_goal_t* goal);
extern float BotGetRawMovementAutonomyRange(bot_state_t* bs);
extern qboolean BotGetMovementAutonomyPos(bot_state_t* bs, vec3_t pos);
extern int BotGetMovementAutonomyLevel(bot_state_t* bs);
extern qboolean BotCheckAttackAtPos(int entnum,
                                    int enemy,
                                    vec3_t pos,
                                    qboolean ducking,
                                    qboolean allowHitWorld);
extern qboolean BotVisibleFromPos(vec3_t srcorigin,
                                  int srcnum,
                                  vec3_t destorigin,
                                  int destent,
                                  qboolean dummy);
extern float BotEntityVisible(int viewer,
                              vec3_t eye,
                              vec3_t viewangles,
                              float fov,
                              int ent,
                              vec3_t entorigin);
extern qboolean BotEntInvisibleBySmokeBomb(vec3_t start, vec3_t end);
extern qboolean InFieldOfVision(vec3_t viewangles, float fov, vec3_t angles);
extern int BotSameTeam(bot_state_t* bs, int entnum);
extern bot_moveresult_t BotAttackMove(bot_state_t* bs, int tfl);
extern void BotRoamGoal(bot_state_t* bs, vec3_t goal);
extern void BotGoForPowerups(bot_state_t* bs);
extern void BotDontAvoid(bot_state_t* bs, char* itemname);
extern void BotGoCamp(bot_state_t* bs, bot_goal_t* goal);
extern int BotCanAndWantsToRocketJump(bot_state_t* bs);
extern int BotWantsToHelp(bot_state_t* bs);
extern int BotWantsToChase(bot_state_t* bs);
extern int BotWantsToRetreat(bot_state_t* bs);
extern float BotAggression(bot_state_t* bs);
extern int TeamPlayIsOn(void);
extern void BotInitWaypoints(void);
extern void BotFreeWaypoints(bot_waypoint_t* wp);
extern bot_waypoint_t* BotFindWayPoint(bot_waypoint_t* waypoints, char* name);
extern bot_waypoint_t* BotCreateWayPoint(char* name,
                                         vec3_t origin,
                                         int areanum);
extern qboolean EntityHasQuad(aas_entityinfo_t* entinfo);
extern qboolean EntityIsChatting(aas_entityinfo_t* entinfo);
extern qboolean EntityIsShooting(aas_entityinfo_t* entinfo);
extern qboolean EntityIsInvisible(aas_entityinfo_t* entinfo);
extern qboolean EntityInLimbo(aas_entityinfo_t* entinfo);
extern qboolean EntityIsDead(aas_entityinfo_t* entinfo);
extern qboolean BotInSlime(bot_state_t* bs);
extern qboolean BotInLava(bot_state_t* bs);
extern qboolean BotIntermission(bot_state_t* bs);
extern qboolean BotIsObserver(bot_state_t* bs);
extern qboolean BotIsPOW(bot_state_t* bs);
extern qboolean BotIsDead(bot_state_t* bs);
extern void BotSetTeleportTime(bot_state_t* bs);
extern void BotBattleUseItems(bot_state_t* bs);
extern void BotUpdateBattleInventory(bot_state_t* bs, int enemy);
extern void BotUpdateInventory(bot_state_t* bs);
extern void BotSetupForMovement(bot_state_t* bs);
extern void BotCycleWeapon(bot_state_t* bs);
extern void BotChooseWeapon(bot_state_t* bs);
extern int BotBestFightWeapon(bot_state_t* bs);
extern float BotWeaponWantScale(bot_state_t* bs, weapon_t weapon);
extern int BotTeamMatesNearEnemy(bot_state_t* bs);
extern float BotWeaponClosestDist(int weaponnum);
extern qboolean BotWeaponOnlyUseIfInInRange(int weaponnum);
extern qboolean BotWeaponCharged(bot_state_t* bs, int weapon);
extern qboolean G_WeaponCharged(playerState_t* ps,
                                team_t team,
                                int weapon,
                                int* skill);
extern qboolean BotGotEnoughAmmoForWeapon(bot_state_t* bs, int weapon);
extern char* EasyClientName(int client, char* buf, int size);
extern char* stristr(char* str, char* charset);
extern int ClientFromName(char* name);
extern char* ClientSkin(int client, char* skin, int size);
extern char* ClientName(int client, char* name, int size);
extern qboolean BotFindNearbyGoal(bot_state_t* bs);
extern qboolean BotFindNearbyTriggerGoal(bot_state_t* bs);
extern int BotReachableBBoxAreaNum(bot_state_t* bs,
                                   vec3_t absmin,
                                   vec3_t absmax);
extern int BotPointAreaNum(int entnum, vec3_t origin);
extern int BotFirstLadderArea(int entnum, int* areas, int numareas);
extern int BotFirstReachabilityArea(int entnum,
                                    vec3_t origin,
                                    int* areas,
                                    int numareas,
                                    qboolean distCheck);
extern qboolean BotCarryingFlag(int client);
extern int AINode_MP_NavigateFromVoid(bot_state_t* bs);
extern void AIEnter_MP_NavigateFromVoid(bot_state_t* bs);
extern int AINode_MP_MoveToAutonomyRange(bot_state_t* bs);
extern void AIEnter_MP_MoveToAutonomyRange(bot_state_t* bs);
extern int AINode_MP_Script_MoveToMarker(bot_state_t* bs);
extern void AIEnter_MP_Script_MoveToMarker(bot_state_t* bs);
extern int AINode_MP_Battle_Retreat(bot_state_t* bs);
extern void AIEnter_MP_Battle_Retreat(bot_state_t* bs);
extern int AINode_MP_Battle_Chase(bot_state_t* bs);
extern void AIEnter_MP_Battle_Chase(bot_state_t* bs);
extern int AINode_MP_Battle_Fight(bot_state_t* bs);
extern void AIEnter_MP_Battle_Fight(bot_state_t* bs);
extern int AINode_MP_DisarmDynamite(bot_state_t* bs);
extern void AIEnter_MP_DisarmDynamite(bot_state_t* bs);
extern int AINode_MP_PlantMine(bot_state_t* bs);
extern void AIEnter_MP_PlantMine(bot_state_t* bs);
extern int AINode_MP_ConstructibleTarget(bot_state_t* bs);
extern void AIEnter_MP_ConstructibleTarget(bot_state_t* bs);
extern int AINode_MP_DynamiteTarget(bot_state_t* bs);
extern void AIEnter_MP_DynamiteTarget(bot_state_t* bs);
extern int AINode_MP_SatchelChargeTarget(bot_state_t* bs);
extern void AIEnter_MP_SatchelChargeTarget(bot_state_t* bs);
extern int AINode_MP_TouchTarget(bot_state_t* bs);
extern void AIEnter_MP_TouchTarget(bot_state_t* bs);
extern int AINode_MP_DefendTarget(bot_state_t* bs);
extern void AIEnter_MP_DefendTarget(bot_state_t* bs);
extern int AINode_MP_SniperSpot(bot_state_t* bs);
extern void AIEnter_MP_SniperSpot(bot_state_t* bs);
extern int AINode_MP_ScanForLandmines(bot_state_t* bs);
extern void AIEnter_MP_ScanForLandmines(bot_state_t* bs);
extern int AINode_MP_MG42Mount(bot_state_t* bs);
extern void AIEnter_MP_MG42Mount(bot_state_t* bs);
extern int AINode_MP_MG42Scan(bot_state_t* bs);
extern void AIEnter_MP_MG42Scan(bot_state_t* bs);
extern int AINode_MP_Battle_MobileMG42(bot_state_t* bs);
extern void AIEnter_MP_Battle_MobileMG42(bot_state_t* bs);
extern int AINode_MP_FixMG42(bot_state_t* bs);
extern void AIEnter_MP_FixMG42(bot_state_t* bs);
extern int AINode_MP_AttackTarget(bot_state_t* bs);
extern void AIEnter_MP_AttackTarget(bot_state_t* bs);
extern int AINode_MP_PanzerTarget(bot_state_t* bs);
extern void AIEnter_MP_PanzerTarget(bot_state_t* bs);
extern int AINode_MP_MedicRevive(bot_state_t* bs);
extern void AIEnter_MP_MedicRevive(bot_state_t* bs);
extern int AINode_MP_MedicGiveHealth(bot_state_t* bs);
extern void AIEnter_MP_MedicGiveHealth(bot_state_t* bs);
extern int AINode_MP_GiveAmmo(bot_state_t* bs);
extern void AIEnter_MP_GiveAmmo(bot_state_t* bs);
extern int AINode_MP_AvoidDanger(bot_state_t* bs);
extern void AIEnter_MP_AvoidDanger(bot_state_t* bs);
extern int AINode_MP_Seek_NBG(bot_state_t* bs);
extern void AIEnter_MP_Seek_NBG(bot_state_t* bs);
extern int AINode_MP_Seek_ActivateEntity(bot_state_t* bs);
extern void AIEnter_MP_Seek_ActivateEntity(bot_state_t* bs);
extern int AINode_MP_Respawn(bot_state_t* bs);
extern void AIEnter_MP_Respawn(bot_state_t* bs);
extern int AINode_MP_Stand(bot_state_t* bs);
extern void AIEnter_MP_Stand(bot_state_t* bs);
extern int AINode_MP_Observer(bot_state_t* bs);
extern void AIEnter_MP_Observer(bot_state_t* bs);
extern int AINode_MP_Intermission(bot_state_t* bs);
extern void AIEnter_MP_Intermission(bot_state_t* bs);
extern void BotMP_MoveToGoal(bot_state_t* bs,
                             bot_moveresult_t* result,
                             int movestate,
                             bot_goal_t* goal,
                             int travelflags);
extern qboolean BotMP_FindGoal(bot_state_t* bs);
extern qboolean BotMP_FindGoal_New(bot_state_t* bs);
extern qboolean BotMP_AlreadyDoing_FastOut(bot_state_t* bs, botgoalFind_t* bg);
extern void BotMP_FindGoal_PostProcessGoal(bot_state_t* bs,
                                           botgoalFind_t* bg,
                                           bot_goal_t* goal);
extern botMPpg_t BotMP_FindGoal_ProcessGoal(bot_state_t* bs,
                                            botgoalFind_t* bg,
                                            bot_goal_t* target_goal);
extern int BotMP_FindGoal_ClassForGoalType(botgoalFindType_t type);
extern int QDECL BotMP_FindGoals_Sort_CovertOps(const void* a, const void* b);
extern int QDECL BotMP_FindGoals_Sort_Engineer(const void* a, const void* b);
extern int QDECL BotMP_FindGoals_Sort_Standard(const void* a, const void* b);
extern int BotMP_FindGoal_BuildGoalList(bot_state_t* bs,
                                        botgoalFind_t* pGoals,
                                        int maxGoals);
extern qboolean BotMP_CheckEmergencyGoals(bot_state_t* bs);
extern qboolean BotMP_CheckClassActions(bot_state_t* bs);
extern int BotMatchMessage(bot_state_t* bs, char* message);
extern void BotMatch_Kill(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_LeadTheWay(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_WhereAreYou(bot_state_t* bs, bot_match_t* match);
extern float BotNearestVisibleItem(bot_state_t* bs,
                                   char* itemname,
                                   bot_goal_t* goal);
extern void BotMatch_WhatIsMyCommand(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_WhatAreYouDoing(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_WhoIsTeamLeader(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_StopTeamLeaderShip(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_StartTeamLeaderShip(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_Dismiss(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_FormationSpace(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_CheckPoint(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_WhichTeam(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_LeaveSubteam(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_JoinSubteam(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_ReturnFlag(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_RushBase(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_GetFlag(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_Patrol(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_Camp(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_GetItem(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_DefendKeyArea(bot_state_t* bs, bot_match_t* match);
extern void BotMatch_HelpAccompany(bot_state_t* bs, bot_match_t* match);
extern int BotGPSToPosition(char* buf, vec3_t position);
extern int BotAddressedToBot(bot_state_t* bs, bot_match_t* match);
extern int BotGetPatrolWaypoints(bot_state_t* bs, bot_match_t* match);
extern int NumPlayersOnSameTeam(bot_state_t* bs);
extern int FindEnemyByName(bot_state_t* bs, char* name);
extern int FindClientByName(char* name);
extern float BotGetTime(bot_match_t* match);
extern int BotGetMessageTeamGoal(bot_state_t* bs,
                                 char* goalname,
                                 bot_goal_t* goal);
extern int BotGetItemTeamGoal(char* goalname, bot_goal_t* goal);
