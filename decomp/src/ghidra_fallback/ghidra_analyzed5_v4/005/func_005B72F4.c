#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b7508;
extern undefined4 *DAT_005b750c;
extern undefined4 *DAT_005b7510;
extern undefined4 DAT_005b7520;
extern undefined4 DAT_005b7548;
extern undefined4 DAT_005b754c;
extern undefined4 *DAT_005b7550;
extern undefined DAT_005b7554;
extern undefined DAT_005b755c;
extern undefined DAT_005b7564;
extern undefined DAT_005b756c;
extern undefined4 DAT_005b75b0;
extern undefined4 *DAT_005b75b4;
extern undefined4 DAT_005b75b8;
extern undefined4 *DAT_005b75bc;
extern undefined4 DAT_005b75c8;
extern undefined4 DAT_005b75cc;
extern undefined4 *DAT_005b75d0;
extern undefined4 DAT_005b75d4;
extern undefined4 DAT_005b75d8;
extern undefined4 DAT_005b75dc;
extern undefined4 DAT_005b75e0;
extern undefined DAT_005b75e4;
extern undefined4 DAT_005b760c;
extern uint *DAT_005b7610;
extern undefined4 DAT_005b7614;
extern undefined4 *DAT_005b7618;
extern undefined4 DAT_005b761c;
extern char s_HandR_005b75c0[];
extern char s_N_ArrowB_00_005b7524[];
extern char s_N_ArrowL_00_005b7530[];
extern char s_N_ArrowR_00_005b753c[];
extern char s_N_ArrowT_00_005b7514[];
extern char s_NpcSahasGirl_005b75fc[];
extern char s_shock_wait_005b7574[];
extern char s_step_rod_005b7598[];
extern char s_talk_rod_005b758c[];
extern char s_wait_rod_005b7580[];
extern char s_walk_rod_005b75a4[];

// USA 005B72F4 <- EU 005B72CC (Ghidra, non-matching)
// GLOBAL DAT_005b7508 undefined4 *
// GLOBAL DAT_005b750c undefined4 *
// GLOBAL DAT_005b7510 undefined4 *
// GLOBAL DAT_005b7520 undefined4
// GLOBAL DAT_005b7548 undefined4
// GLOBAL DAT_005b754c undefined4
// GLOBAL DAT_005b7550 undefined4 *
// GLOBAL DAT_005b7554 undefined
// GLOBAL DAT_005b755c undefined
// GLOBAL DAT_005b7564 undefined
// GLOBAL DAT_005b756c undefined
// GLOBAL DAT_005b75b0 undefined4
// GLOBAL DAT_005b75b4 undefined4 *
// GLOBAL DAT_005b75b8 undefined4
// GLOBAL DAT_005b75bc undefined4 *
// GLOBAL DAT_005b75c8 undefined4
// GLOBAL DAT_005b75cc undefined4
// GLOBAL DAT_005b75d0 undefined4 *
// GLOBAL DAT_005b75d4 undefined4
// GLOBAL DAT_005b75d8 undefined4
// GLOBAL DAT_005b75dc undefined4
// GLOBAL DAT_005b75e0 undefined4
// GLOBAL DAT_005b75e4 undefined
// GLOBAL DAT_005b760c undefined4
// GLOBAL DAT_005b7610 uint *
// GLOBAL DAT_005b7614 undefined4
// GLOBAL DAT_005b7618 undefined4 *
// GLOBAL DAT_005b761c undefined4
// GLOBAL s_HandR_005b75c0 string
// GLOBAL s_N_ArrowB_00_005b7524 string
// GLOBAL s_N_ArrowL_00_005b7530 string
// GLOBAL s_N_ArrowR_00_005b753c string
// GLOBAL s_N_ArrowT_00_005b7514 string
// GLOBAL s_NpcSahasGirl_005b75fc string
// GLOBAL s_shock_wait_005b7574 string
// GLOBAL s_step_rod_005b7598 string
// GLOBAL s_talk_rod_005b758c string
// GLOBAL s_wait_rod_005b7580 string
// GLOBAL s_walk_rod_005b75a4 string

undefined8 func_005B72F4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005b7508;
  *DAT_005b7508 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005b7520;
  puVar1 = DAT_005b750c;
  *DAT_005b750c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b7510;
  DAT_005b7510[1] = s_N_ArrowT_00_005b7514;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005b7524;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005b7530;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005b753c;
  puVar1 = DAT_005b7550;
  DAT_005b7550[1] = &DAT_005b7554;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005b755c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005b7564;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005b756c;
  puVar1[9] = local_20;
  puVar1[0xd] = s_shock_wait_005b7574;
  puVar1[0xc] = local_20;
  puVar1[0x10] = s_wait_rod_005b7580;
  puVar1[0xf] = local_20;
  puVar1[0x13] = s_talk_rod_005b758c;
  puVar1[0x12] = local_20;
  puVar1[0x16] = s_step_rod_005b7598;
  puVar1[0x15] = local_20;
  puVar1[0x18] = local_20;
  puVar1[0x19] = s_walk_rod_005b75a4;
  puVar1 = DAT_005b75b4;
  DAT_005b75b4[1] = &DAT_005b7554;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005b755c;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005b7564;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005b756c;
  puVar1[9] = local_20;
  puVar1[0xc] = local_20;
  puVar1[0xd] = s_shock_wait_005b7574;
  puVar1 = DAT_005b75bc;
  DAT_005b75bc[1] = s_HandR_005b75c0;
  *puVar1 = local_20;
  uVar2 = DAT_005b75d8;
  puVar1 = DAT_005b75d0;
  uVar4 = DAT_005b75cc;
  *DAT_005b75d0 = DAT_005b75d4;
  uVar3 = DAT_005b75dc;
  puVar1[1] = uVar2;
  puVar1[2] = uVar4;
  uVar2 = DAT_005b75e0;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar2;
  puVar1[6] = 0xe;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x28;
  *(undefined1 *)(puVar1 + 9) = 10;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005b75e4;
  local_24 = s_NpcSahasGirl_005b75fc;
  uStack_28 = local_20;
  uVar4 = func_0019B51C(DAT_005b7618,DAT_005b7614,*DAT_005b7610,(int)&uStack_28,DAT_005b760c,
                        &local_20,0);
  return CONCAT44(DAT_005b761c,uVar4);
}

