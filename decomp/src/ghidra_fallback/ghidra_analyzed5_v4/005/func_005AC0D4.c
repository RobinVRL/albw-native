#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005ac2b0;
extern undefined4 *DAT_005ac2b4;
extern undefined4 *DAT_005ac2b8;
extern undefined4 DAT_005ac2c8;
extern undefined4 DAT_005ac2f0;
extern undefined4 DAT_005ac2f4;
extern undefined4 *DAT_005ac2f8;
extern undefined DAT_005ac2fc;
extern undefined DAT_005ac304;
extern undefined DAT_005ac30c;
extern undefined DAT_005ac314;
extern undefined DAT_005ac31c;
extern undefined DAT_005ac328;
extern undefined DAT_005ac330;
extern undefined DAT_005ac340;
extern uint DAT_005ac354;
extern uint DAT_005ac358;
extern undefined4 *DAT_005ac35c;
extern undefined4 DAT_005ac360;
extern undefined4 DAT_005ac364;
extern undefined4 DAT_005ac368;
extern undefined4 DAT_005ac36c;
extern undefined4 DAT_005ac370;
extern undefined4 DAT_005ac374;
extern undefined DAT_005ac378;
extern undefined4 DAT_005ac394;
extern uint *DAT_005ac398;
extern undefined4 DAT_005ac39c;
extern undefined4 *DAT_005ac3a0;
extern undefined4 DAT_005ac3a4;
extern char s_N_ArrowB_00_005ac2cc[];
extern char s_N_ArrowL_00_005ac2d8[];
extern char s_N_ArrowR_00_005ac2e4[];
extern char s_N_ArrowT_00_005ac2bc[];
extern char s_NpcFollower_005ac388[];
extern char s_catch_005ac320[];
extern char s_response_005ac348[];
extern char s_watch_005ac338[];

// USA 005AC0D4 <- EU 005AC0AC (Ghidra, non-matching)
// GLOBAL DAT_005ac2b0 undefined4 *
// GLOBAL DAT_005ac2b4 undefined4 *
// GLOBAL DAT_005ac2b8 undefined4 *
// GLOBAL DAT_005ac2c8 undefined4
// GLOBAL DAT_005ac2f0 undefined4
// GLOBAL DAT_005ac2f4 undefined4
// GLOBAL DAT_005ac2f8 undefined4 *
// GLOBAL DAT_005ac2fc undefined
// GLOBAL DAT_005ac304 undefined
// GLOBAL DAT_005ac30c undefined
// GLOBAL DAT_005ac314 undefined
// GLOBAL DAT_005ac31c undefined
// GLOBAL DAT_005ac328 undefined
// GLOBAL DAT_005ac330 undefined
// GLOBAL DAT_005ac340 undefined
// GLOBAL DAT_005ac354 uint
// GLOBAL DAT_005ac358 uint
// GLOBAL DAT_005ac35c undefined4 *
// GLOBAL DAT_005ac360 undefined4
// GLOBAL DAT_005ac364 undefined4
// GLOBAL DAT_005ac368 undefined4
// GLOBAL DAT_005ac36c undefined4
// GLOBAL DAT_005ac370 undefined4
// GLOBAL DAT_005ac374 undefined4
// GLOBAL DAT_005ac378 undefined
// GLOBAL DAT_005ac394 undefined4
// GLOBAL DAT_005ac398 uint *
// GLOBAL DAT_005ac39c undefined4
// GLOBAL DAT_005ac3a0 undefined4 *
// GLOBAL DAT_005ac3a4 undefined4
// GLOBAL s_N_ArrowB_00_005ac2cc string
// GLOBAL s_N_ArrowL_00_005ac2d8 string
// GLOBAL s_N_ArrowR_00_005ac2e4 string
// GLOBAL s_N_ArrowT_00_005ac2bc string
// GLOBAL s_NpcFollower_005ac388 string
// GLOBAL s_catch_005ac320 string
// GLOBAL s_response_005ac348 string
// GLOBAL s_watch_005ac338 string

undefined8 func_005AC0D4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005ac2b0;
  DAT_005ac2b0[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar7 = DAT_005ac2c8;
  puVar1 = DAT_005ac2b4;
  *DAT_005ac2b4 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005ac2b8;
  DAT_005ac2b8[1] = s_N_ArrowT_00_005ac2bc;
  *puVar1 = uVar7;
  puVar1[3] = s_N_ArrowB_00_005ac2cc;
  puVar1[2] = uVar7;
  puVar1[5] = s_N_ArrowL_00_005ac2d8;
  puVar1[4] = uVar7;
  puVar1[6] = uVar7;
  puVar1[7] = s_N_ArrowR_00_005ac2e4;
  puVar1 = DAT_005ac2f8;
  DAT_005ac2f8[1] = &DAT_005ac2fc;
  *puVar1 = uVar7;
  puVar1[4] = &DAT_005ac304;
  puVar1[3] = uVar7;
  puVar1[7] = &DAT_005ac30c;
  puVar1[6] = uVar7;
  puVar1[10] = &DAT_005ac314;
  puVar1[9] = uVar7;
  puVar1[0xd] = &DAT_005ac31c;
  puVar1[0xc] = uVar7;
  puVar1[0x10] = s_catch_005ac320;
  puVar1[0xf] = uVar7;
  puVar1[0x13] = &DAT_005ac328;
  puVar1[0x12] = uVar7;
  puVar1[0x16] = &DAT_005ac330;
  puVar1[0x15] = uVar7;
  puVar1[0x19] = s_watch_005ac338;
  puVar1[0x18] = uVar7;
  puVar1[0x1c] = &DAT_005ac340;
  puVar1[0x1b] = uVar7;
  puVar1[0x1e] = uVar7;
  puVar1[0x1f] = s_response_005ac348;
  puVar1 = DAT_005ac2b0;
  uVar8 = func_00114608(DAT_005ac358,DAT_005ac354);
  *puVar1 = (int)uVar8;
  uVar6 = DAT_005ac374;
  uVar5 = DAT_005ac370;
  uVar4 = DAT_005ac36c;
  uVar3 = DAT_005ac368;
  uVar2 = DAT_005ac364;
  puVar1 = DAT_005ac35c;
  *DAT_005ac35c = DAT_005ac360;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar5;
  puVar1[5] = uVar6;
  puVar1[6] = 0xe;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 0x14;
  puVar1[10] = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005ac378;
  local_24 = s_NpcFollower_005ac388;
  local_20 = uVar7;
  uStack_28 = uVar7;
  uVar7 = func_0019B51C(DAT_005ac3a0,DAT_005ac39c,*DAT_005ac398,(int)&uStack_28,DAT_005ac394,
                        &local_20,0);
  return CONCAT44(DAT_005ac3a4,uVar7);
}

