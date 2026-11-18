#include "ghidra_types.h"

extern undefined4 *DAT_005ed1d4;
extern undefined4 *DAT_005ed1d8;
extern undefined4 *DAT_005ed1dc;
extern undefined4 DAT_005ed1ec;
extern undefined4 DAT_005ed214;
extern undefined4 DAT_005ed218;
extern undefined4 *DAT_005ed21c;
extern undefined4 DAT_005ed230;
extern undefined4 *DAT_005ed234;
extern undefined4 *DAT_005ed24c;
extern undefined4 *DAT_005ed260;
extern undefined4 DAT_005ed264;
extern undefined4 DAT_005ed268;
extern char s_Gm_DestinationIcon_005ed238[];
extern char s_Gm_LinkChecker_005ed220[];
extern char s_Gm_RaceGoalIcon_005ed250[];
extern char s_N_ArrowB_00_005ed1f0[];
extern char s_N_ArrowL_00_005ed1fc[];
extern char s_N_ArrowR_00_005ed208[];
extern char s_N_ArrowT_00_005ed1e0[];

// USA 005ED128 <- EU 005ED100 (Ghidra, non-matching)
// GLOBAL DAT_005ed1d4 undefined4 *
// GLOBAL DAT_005ed1d8 undefined4 *
// GLOBAL DAT_005ed1dc undefined4 *
// GLOBAL DAT_005ed1ec undefined4
// GLOBAL DAT_005ed214 undefined4
// GLOBAL DAT_005ed218 undefined4
// GLOBAL DAT_005ed21c undefined4 *
// GLOBAL DAT_005ed230 undefined4
// GLOBAL DAT_005ed234 undefined4 *
// GLOBAL DAT_005ed24c undefined4 *
// GLOBAL DAT_005ed260 undefined4 *
// GLOBAL DAT_005ed264 undefined4
// GLOBAL DAT_005ed268 undefined4
// GLOBAL s_Gm_DestinationIcon_005ed238 string
// GLOBAL s_Gm_LinkChecker_005ed220 string
// GLOBAL s_Gm_RaceGoalIcon_005ed250 string
// GLOBAL s_N_ArrowB_00_005ed1f0 string
// GLOBAL s_N_ArrowL_00_005ed1fc string
// GLOBAL s_N_ArrowR_00_005ed208 string
// GLOBAL s_N_ArrowT_00_005ed1e0 string

void func_005ED128(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ed1d4;
  *DAT_005ed1d4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ed1ec;
  puVar1 = DAT_005ed1d8;
  *DAT_005ed1d8 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ed1dc;
  DAT_005ed1dc[1] = s_N_ArrowT_00_005ed1e0;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ed1f0;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ed1fc;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ed208;
  puVar1 = DAT_005ed21c;
  DAT_005ed21c[1] = s_Gm_LinkChecker_005ed220;
  *puVar1 = uVar2;
  puVar1 = DAT_005ed234;
  DAT_005ed234[1] = s_Gm_DestinationIcon_005ed238;
  *puVar1 = uVar2;
  puVar1 = DAT_005ed24c;
  DAT_005ed24c[1] = s_Gm_RaceGoalIcon_005ed250;
  *puVar1 = uVar2;
  uVar2 = DAT_005ed268;
  puVar1 = DAT_005ed260;
  *DAT_005ed260 = DAT_005ed264;
  puVar1[1] = uVar2;
  return;
}

