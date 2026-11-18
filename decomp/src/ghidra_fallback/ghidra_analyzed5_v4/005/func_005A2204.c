#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005a238c;
extern undefined4 *DAT_005a2390;
extern undefined4 *DAT_005a2394;
extern undefined4 DAT_005a23a4;
extern undefined4 DAT_005a23cc;
extern undefined4 DAT_005a23d0;
extern undefined4 *DAT_005a23d4;
extern undefined DAT_005a23d8;
extern undefined DAT_005a23e0;
extern undefined DAT_005a23e8;
extern undefined DAT_005a23f0;
extern undefined DAT_005a23f8;
extern undefined DAT_005a23fc;
extern undefined4 DAT_005a241c;
extern undefined4 *DAT_005a2420;
extern undefined4 DAT_005a2424;
extern undefined4 DAT_005a2428;
extern undefined4 DAT_005a242c;
extern undefined4 DAT_005a2430;
extern undefined4 DAT_005a2434;
extern undefined4 DAT_005a2438;
extern undefined DAT_005a243c;
extern undefined4 DAT_005a2458;
extern uint *DAT_005a245c;
extern undefined4 DAT_005a2460;
extern undefined4 *DAT_005a2464;
extern undefined4 DAT_005a2468;
extern char s_N_ArrowB_00_005a23a8[];
extern char s_N_ArrowL_00_005a23b4[];
extern char s_N_ArrowR_00_005a23c0[];
extern char s_N_ArrowT_00_005a2398[];
extern char s_NpcDanpei_005a244c[];
extern char s_fear_talk_005a2410[];
extern char s_fear_wait_005a2404[];

// USA 005A2204 <- EU 005A21DC (Ghidra, non-matching)
// GLOBAL DAT_005a238c undefined4 *
// GLOBAL DAT_005a2390 undefined4 *
// GLOBAL DAT_005a2394 undefined4 *
// GLOBAL DAT_005a23a4 undefined4
// GLOBAL DAT_005a23cc undefined4
// GLOBAL DAT_005a23d0 undefined4
// GLOBAL DAT_005a23d4 undefined4 *
// GLOBAL DAT_005a23d8 undefined
// GLOBAL DAT_005a23e0 undefined
// GLOBAL DAT_005a23e8 undefined
// GLOBAL DAT_005a23f0 undefined
// GLOBAL DAT_005a23f8 undefined
// GLOBAL DAT_005a23fc undefined
// GLOBAL DAT_005a241c undefined4
// GLOBAL DAT_005a2420 undefined4 *
// GLOBAL DAT_005a2424 undefined4
// GLOBAL DAT_005a2428 undefined4
// GLOBAL DAT_005a242c undefined4
// GLOBAL DAT_005a2430 undefined4
// GLOBAL DAT_005a2434 undefined4
// GLOBAL DAT_005a2438 undefined4
// GLOBAL DAT_005a243c undefined
// GLOBAL DAT_005a2458 undefined4
// GLOBAL DAT_005a245c uint *
// GLOBAL DAT_005a2460 undefined4
// GLOBAL DAT_005a2464 undefined4 *
// GLOBAL DAT_005a2468 undefined4
// GLOBAL s_N_ArrowB_00_005a23a8 string
// GLOBAL s_N_ArrowL_00_005a23b4 string
// GLOBAL s_N_ArrowR_00_005a23c0 string
// GLOBAL s_N_ArrowT_00_005a2398 string
// GLOBAL s_NpcDanpei_005a244c string
// GLOBAL s_fear_talk_005a2410 string
// GLOBAL s_fear_wait_005a2404 string

undefined8 func_005A2204(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005a238c;
  *DAT_005a238c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005a23a4;
  puVar1 = DAT_005a2390;
  *DAT_005a2390 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005a2394;
  DAT_005a2394[1] = s_N_ArrowT_00_005a2398;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005a23a8;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005a23b4;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005a23c0;
  puVar1 = DAT_005a23d4;
  DAT_005a23d4[1] = &DAT_005a23d8;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005a23e0;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005a23e8;
  puVar1[6] = local_20;
  puVar1[10] = &DAT_005a23f0;
  puVar1[9] = local_20;
  puVar1[0xd] = &DAT_005a23f8;
  puVar1[0xc] = local_20;
  puVar1[0x10] = &DAT_005a23fc;
  puVar1[0xf] = local_20;
  puVar1[0x13] = s_fear_wait_005a2404;
  puVar1[0x12] = local_20;
  puVar1[0x15] = local_20;
  puVar1[0x16] = s_fear_talk_005a2410;
  uVar5 = DAT_005a2438;
  uVar4 = DAT_005a2434;
  uVar3 = DAT_005a2430;
  uVar2 = DAT_005a242c;
  uVar6 = DAT_005a2428;
  puVar1 = DAT_005a2420;
  *DAT_005a2420 = DAT_005a2424;
  puVar1[1] = uVar6;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 0xf;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x28;
  *(undefined1 *)(puVar1 + 9) = 0x14;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005a243c;
  local_24 = s_NpcDanpei_005a244c;
  uStack_28 = local_20;
  uVar6 = func_0019B51C(DAT_005a2464,DAT_005a2460,*DAT_005a245c,(int)&uStack_28,DAT_005a2458,
                        &local_20,0);
  return CONCAT44(DAT_005a2468,uVar6);
}

