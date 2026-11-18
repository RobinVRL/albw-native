#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c0298;
extern undefined4 *DAT_005c029c;
extern undefined4 *DAT_005c02a0;
extern undefined4 DAT_005c02b0;
extern undefined4 DAT_005c02d8;
extern undefined4 DAT_005c02dc;
extern undefined4 *DAT_005c02e0;
extern undefined4 DAT_005c02f0;
extern undefined4 *DAT_005c02f4;
extern undefined4 *DAT_005c0304;
extern undefined DAT_005c0308;
extern undefined DAT_005c0310;
extern undefined DAT_005c0318;
extern undefined DAT_005c0320;
extern undefined4 DAT_005c0328;
extern undefined4 DAT_005c032c;
extern undefined4 *DAT_005c0330;
extern undefined4 DAT_005c0334;
extern undefined4 DAT_005c0338;
extern undefined4 DAT_005c033c;
extern undefined4 DAT_005c0340;
extern undefined DAT_005c0344;
extern undefined4 DAT_005c0368;
extern uint *DAT_005c036c;
extern undefined4 DAT_005c0370;
extern undefined4 *DAT_005c0374;
extern undefined4 DAT_005c0378;
extern char s_N_ArrowB_00_005c02b4[];
extern char s_N_ArrowL_00_005c02c0[];
extern char s_N_ArrowR_00_005c02cc[];
extern char s_N_ArrowT_00_005c02a4[];
extern char s_NpcShadowLink_005c0358[];
extern char s_chest_jnt_005c02f8[];
extern char s_head_jnt_005c02e4[];

// USA 005C00D8 <- EU 005C00B0 (Ghidra, non-matching)
// GLOBAL DAT_005c0298 undefined4 *
// GLOBAL DAT_005c029c undefined4 *
// GLOBAL DAT_005c02a0 undefined4 *
// GLOBAL DAT_005c02b0 undefined4
// GLOBAL DAT_005c02d8 undefined4
// GLOBAL DAT_005c02dc undefined4
// GLOBAL DAT_005c02e0 undefined4 *
// GLOBAL DAT_005c02f0 undefined4
// GLOBAL DAT_005c02f4 undefined4 *
// GLOBAL DAT_005c0304 undefined4 *
// GLOBAL DAT_005c0308 undefined
// GLOBAL DAT_005c0310 undefined
// GLOBAL DAT_005c0318 undefined
// GLOBAL DAT_005c0320 undefined
// GLOBAL DAT_005c0328 undefined4
// GLOBAL DAT_005c032c undefined4
// GLOBAL DAT_005c0330 undefined4 *
// GLOBAL DAT_005c0334 undefined4
// GLOBAL DAT_005c0338 undefined4
// GLOBAL DAT_005c033c undefined4
// GLOBAL DAT_005c0340 undefined4
// GLOBAL DAT_005c0344 undefined
// GLOBAL DAT_005c0368 undefined4
// GLOBAL DAT_005c036c uint *
// GLOBAL DAT_005c0370 undefined4
// GLOBAL DAT_005c0374 undefined4 *
// GLOBAL DAT_005c0378 undefined4
// GLOBAL s_N_ArrowB_00_005c02b4 string
// GLOBAL s_N_ArrowL_00_005c02c0 string
// GLOBAL s_N_ArrowR_00_005c02cc string
// GLOBAL s_N_ArrowT_00_005c02a4 string
// GLOBAL s_NpcShadowLink_005c0358 string
// GLOBAL s_chest_jnt_005c02f8 string
// GLOBAL s_head_jnt_005c02e4 string

undefined8 func_005C00D8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined * *)(albw_frame + 0x14))
  puVar1 = DAT_005c0298;
  *DAT_005c0298 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  local_20 = DAT_005c02b0;
  puVar1 = DAT_005c029c;
  *DAT_005c029c = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005c02a0;
  DAT_005c02a0[1] = s_N_ArrowT_00_005c02a4;
  *puVar1 = local_20;
  puVar1[3] = s_N_ArrowB_00_005c02b4;
  puVar1[2] = local_20;
  puVar1[5] = s_N_ArrowL_00_005c02c0;
  puVar1[4] = local_20;
  puVar1[6] = local_20;
  puVar1[7] = s_N_ArrowR_00_005c02cc;
  puVar1 = DAT_005c02e0;
  DAT_005c02e0[1] = s_head_jnt_005c02e4;
  *puVar1 = local_20;
  puVar1 = DAT_005c02f4;
  DAT_005c02f4[1] = s_chest_jnt_005c02f8;
  *puVar1 = local_20;
  puVar1 = DAT_005c0304;
  DAT_005c0304[1] = &DAT_005c0308;
  *puVar1 = local_20;
  puVar1[4] = &DAT_005c0310;
  puVar1[3] = local_20;
  puVar1[7] = &DAT_005c0318;
  puVar1[6] = local_20;
  puVar1[9] = local_20;
  puVar1[10] = &DAT_005c0320;
  uVar2 = DAT_005c0338;
  puVar1 = DAT_005c0330;
  uVar5 = DAT_005c032c;
  *DAT_005c0330 = DAT_005c0334;
  uVar3 = DAT_005c033c;
  puVar1[1] = uVar5;
  uVar4 = DAT_005c0340;
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x32;
  *(undefined1 *)(puVar1 + 9) = 0x1e;
  puVar1[10] = 0;
  puVar1[0xb] = 0xffffffff;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[-0xa2] = 0;
  puVar1[-0xa1] = 5;
  puVar1[-0xa0] = puVar1 + -0x9f;
  local_1c = &DAT_005c0344;
  local_24 = s_NpcShadowLink_005c0358;
  uStack_28 = local_20;
  uVar5 = func_0019B51C(DAT_005c0374,DAT_005c0370,*DAT_005c036c,(int)&uStack_28,DAT_005c0368,
                        &local_20,0);
  return CONCAT44(DAT_005c0378,uVar5);
}

