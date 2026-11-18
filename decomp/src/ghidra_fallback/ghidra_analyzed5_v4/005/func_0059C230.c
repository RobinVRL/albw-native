#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_0059c41c;
extern undefined4 *DAT_0059c420;
extern undefined4 *DAT_0059c424;
extern undefined4 DAT_0059c434;
extern undefined4 DAT_0059c45c;
extern undefined4 DAT_0059c460;
extern undefined4 *DAT_0059c464;
extern undefined DAT_0059c468;
extern undefined DAT_0059c470;
extern undefined DAT_0059c478;
extern undefined DAT_0059c480;
extern undefined4 DAT_0059c4a0;
extern undefined4 *DAT_0059c4a4;
extern undefined4 DAT_0059c4a8;
extern undefined4 *DAT_0059c4ac;
extern undefined4 DAT_0059c4b0;
extern undefined4 DAT_0059c4b4;
extern undefined4 DAT_0059c4b8;
extern undefined4 DAT_0059c4bc;
extern undefined4 DAT_0059c4c0;
extern undefined4 DAT_0059c4c4;
extern undefined4 *DAT_0059c4c8;
extern undefined4 DAT_0059c4d4;
extern undefined4 *DAT_0059c4d8;
extern undefined DAT_0059c4dc;
extern uint *DAT_0059c4f0;
extern undefined4 DAT_0059c4f4;
extern undefined4 *DAT_0059c4f8;
extern undefined4 DAT_0059c4fc;
extern char s_HandR_0059c4cc[];
extern char s_N_ArrowB_00_0059c438[];
extern char s_N_ArrowL_00_0059c444[];
extern char s_N_ArrowR_00_0059c450[];
extern char s_N_ArrowT_00_0059c428[];
extern char s_NpcHilda_0059c4e4[];
extern char s_talk_down_0059c494[];
extern char s_wait_down_0059c488[];

// USA 0059C230 <- EU 0059C208 (Ghidra, non-matching)
// GLOBAL DAT_0059c41c undefined4 *
// GLOBAL DAT_0059c420 undefined4 *
// GLOBAL DAT_0059c424 undefined4 *
// GLOBAL DAT_0059c434 undefined4
// GLOBAL DAT_0059c45c undefined4
// GLOBAL DAT_0059c460 undefined4
// GLOBAL DAT_0059c464 undefined4 *
// GLOBAL DAT_0059c468 undefined
// GLOBAL DAT_0059c470 undefined
// GLOBAL DAT_0059c478 undefined
// GLOBAL DAT_0059c480 undefined
// GLOBAL DAT_0059c4a0 undefined4
// GLOBAL DAT_0059c4a4 undefined4 *
// GLOBAL DAT_0059c4a8 undefined4
// GLOBAL DAT_0059c4ac undefined4 *
// GLOBAL DAT_0059c4b0 undefined4
// GLOBAL DAT_0059c4b4 undefined4
// GLOBAL DAT_0059c4b8 undefined4
// GLOBAL DAT_0059c4bc undefined4
// GLOBAL DAT_0059c4c0 undefined4
// GLOBAL DAT_0059c4c4 undefined4
// GLOBAL DAT_0059c4c8 undefined4 *
// GLOBAL DAT_0059c4d4 undefined4
// GLOBAL DAT_0059c4d8 undefined4 *
// GLOBAL DAT_0059c4dc undefined
// GLOBAL DAT_0059c4f0 uint *
// GLOBAL DAT_0059c4f4 undefined4
// GLOBAL DAT_0059c4f8 undefined4 *
// GLOBAL DAT_0059c4fc undefined4
// GLOBAL s_HandR_0059c4cc string
// GLOBAL s_N_ArrowB_00_0059c438 string
// GLOBAL s_N_ArrowL_00_0059c444 string
// GLOBAL s_N_ArrowR_00_0059c450 string
// GLOBAL s_N_ArrowT_00_0059c428 string
// GLOBAL s_NpcHilda_0059c4e4 string
// GLOBAL s_talk_down_0059c494 string
// GLOBAL s_wait_down_0059c488 string

undefined8 func_0059C230(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_0059c41c;
  *DAT_0059c41c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_0059c434;
  puVar1 = DAT_0059c420;
  *DAT_0059c420 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059c424;
  DAT_0059c424[1] = s_N_ArrowT_00_0059c428;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_0059c438;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_0059c444;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_0059c450;
  puVar1 = DAT_0059c464;
  DAT_0059c464[1] = &DAT_0059c468;
  *puVar1 = local_20;
  puVar1[4] = &DAT_0059c470;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_0059c478;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_0059c480;
  puVar1[9] = local_20;
  puVar1[0xd] = s_wait_down_0059c488;
  puVar1[0xc] = local_20;
  puVar1[0xf] = local_20;
  puVar1[0x10] = s_talk_down_0059c494;
  puVar1 = DAT_0059c4a4;
  DAT_0059c4a4[1] = &DAT_0059c468;
  *puVar1 = local_20;
  puVar1[4] = &DAT_0059c470;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_0059c478;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_0059c480;
  puVar1[9] = local_20;
  puVar1[0xd] = s_wait_down_0059c488;
  puVar1[0xc] = local_20;
  puVar1[0xf] = local_20;
  puVar1[0x10] = s_talk_down_0059c494;
  uVar5 = DAT_0059c4c4;
  uVar4 = DAT_0059c4c0;
  uVar3 = DAT_0059c4bc;
  uVar2 = DAT_0059c4b8;
  uVar6 = DAT_0059c4b4;
  puVar1 = DAT_0059c4ac;
  *DAT_0059c4ac = DAT_0059c4b0;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0x14;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 10;
  puVar1 = DAT_0059c4c8;
  DAT_0059c4c8[1] = s_HandR_0059c4cc;
  *puVar1 = local_20;
  puVar1 = DAT_0059c4d8;
  puVar7 = DAT_0059c4d8 + 3;
  *DAT_0059c4d8 = 0;
  puVar1[1] = 5;
  puVar1[2] = puVar7;
  local_1c = &DAT_0059c4dc;
  local_24 = s_NpcHilda_0059c4e4;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_0059c4f8,DAT_0059c4f4,*DAT_0059c4f0,(int)&uStack_28,DAT_0059c4d8,
                        &local_20,0);
  return CONCAT44(DAT_0059c4fc,uVar6);
}

