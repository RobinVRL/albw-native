#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ed42c;
extern undefined4 *DAT_005ed430;
extern undefined4 *DAT_005ed434;
extern undefined4 DAT_005ed444;
extern undefined4 DAT_005ed46c;
extern undefined4 DAT_005ed470;
extern undefined4 *DAT_005ed474;
extern undefined4 DAT_005ed488;
extern undefined4 *DAT_005ed48c;
extern undefined4 DAT_005ed4d0;
extern char s_Gm_MGCommonText_005ed478[];
extern char s_N_ArrowB_00_005ed448[];
extern char s_N_ArrowL_00_005ed454[];
extern char s_N_ArrowR_00_005ed460[];
extern char s_N_ArrowT_00_005ed438[];
extern char s_N_Failure_00_005ed4c0[];
extern char s_N_Finish_00_005ed4a8[];
extern char s_N_PlayBall_005ed4b4[];
extern char s_N_Start_00_005ed490[];
extern char s_N_TimeUp_00_005ed49c[];

// USA 005ED378 <- EU 005ED350 (Ghidra, non-matching)
// GLOBAL DAT_005ed42c undefined4 *
// GLOBAL DAT_005ed430 undefined4 *
// GLOBAL DAT_005ed434 undefined4 *
// GLOBAL DAT_005ed444 undefined4
// GLOBAL DAT_005ed46c undefined4
// GLOBAL DAT_005ed470 undefined4
// GLOBAL DAT_005ed474 undefined4 *
// GLOBAL DAT_005ed488 undefined4
// GLOBAL DAT_005ed48c undefined4 *
// GLOBAL DAT_005ed4d0 undefined4
// GLOBAL s_Gm_MGCommonText_005ed478 string
// GLOBAL s_N_ArrowB_00_005ed448 string
// GLOBAL s_N_ArrowL_00_005ed454 string
// GLOBAL s_N_ArrowR_00_005ed460 string
// GLOBAL s_N_ArrowT_00_005ed438 string
// GLOBAL s_N_Failure_00_005ed4c0 string
// GLOBAL s_N_Finish_00_005ed4a8 string
// GLOBAL s_N_PlayBall_005ed4b4 string
// GLOBAL s_N_Start_00_005ed490 string
// GLOBAL s_N_TimeUp_00_005ed49c string

undefined4 func_005ED378(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ed42c;
  *DAT_005ed42c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ed444;
  puVar1 = DAT_005ed430;
  *DAT_005ed430 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ed434;
  DAT_005ed434[1] = s_N_ArrowT_00_005ed438;
  *puVar1 = uVar2;
  puVar1[3] = s_N_ArrowB_00_005ed448;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005ed454;
  puVar1[4] = uVar2;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005ed460;
  puVar1 = DAT_005ed474;
  DAT_005ed474[1] = s_Gm_MGCommonText_005ed478;
  *puVar1 = uVar2;
  puVar1 = DAT_005ed48c;
  DAT_005ed48c[1] = s_N_Start_00_005ed490;
  *puVar1 = uVar2;
  puVar1[3] = s_N_TimeUp_00_005ed49c;
  puVar1[2] = uVar2;
  puVar1[5] = s_N_Finish_00_005ed4a8;
  puVar1[4] = uVar2;
  puVar1[7] = s_N_PlayBall_005ed4b4;
  puVar1[6] = uVar2;
  puVar1[8] = uVar2;
  puVar1[9] = s_N_Failure_00_005ed4c0;
  return func_005902C0(0);
}

