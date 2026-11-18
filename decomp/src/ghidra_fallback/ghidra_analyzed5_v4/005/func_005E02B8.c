#include "ghidra_types.h"

extern int func_004FC6FC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4, undefined4 param_5,undefined4 *param_6,undefined4 param_7);
extern undefined4 *DAT_005e04b0;
extern undefined4 *DAT_005e04b4;
extern undefined4 *DAT_005e04b8;
extern undefined4 DAT_005e04c4;
extern undefined4 DAT_005e0558;
extern undefined4 DAT_005e055c;
extern undefined4 DAT_005e0560;
extern undefined4 DAT_005e0564;
extern undefined4 *DAT_005e0568;
extern undefined4 DAT_005e056c;
extern undefined4 *DAT_005e0570;
extern undefined4 DAT_005e0574;
extern undefined4 *DAT_005e0578;
extern undefined4 *DAT_005e057c;
extern undefined4 *DAT_005e0580;
extern undefined4 *DAT_005e0584;
extern undefined4 *DAT_005e0588;
extern undefined4 *DAT_005e058c;
extern undefined4 *DAT_005e0590;
extern undefined4 *DAT_005e0594;
extern undefined4 *DAT_005e0598;
extern undefined4 *DAT_005e059c;
extern undefined4 *DAT_005e05a0;
extern undefined4 *DAT_005e05a4;
extern undefined4 *DAT_005e05a8;
extern undefined4 *DAT_005e05ac;
extern undefined4 *DAT_005e05b0;
extern char s_damage00_005e04e8[];
extern char s_dead_back_ed00_005e0524[];
extern char s_dead_back_st00_005e0514[];
extern char s_dead_front_ed00_005e0504[];
extern char s_dead_front_st00_005e04f4[];
extern char s_fall00_005e0534[];
extern char s_find00_005e04d8[];
extern char s_kamae00_005e04e0[];
extern char s_piyopiyo00_005e053c[];
extern char s_spear_throw00_005e0548[];
extern char s_wait00_005e04bc[];
extern char s_walk00_005e04c8[];
extern char s_walk01_005e04d0[];

// USA 005E02B8 <- EU 005E0290 (Ghidra, non-matching)
// GLOBAL DAT_005e04b0 undefined4 *
// GLOBAL DAT_005e04b4 undefined4 *
// GLOBAL DAT_005e04b8 undefined4 *
// GLOBAL DAT_005e04c4 undefined4
// GLOBAL DAT_005e0558 undefined4
// GLOBAL DAT_005e055c undefined4
// GLOBAL DAT_005e0560 undefined4
// GLOBAL DAT_005e0564 undefined4
// GLOBAL DAT_005e0568 undefined4 *
// GLOBAL DAT_005e056c undefined4
// GLOBAL DAT_005e0570 undefined4 *
// GLOBAL DAT_005e0574 undefined4
// GLOBAL DAT_005e0578 undefined4 *
// GLOBAL DAT_005e057c undefined4 *
// GLOBAL DAT_005e0580 undefined4 *
// GLOBAL DAT_005e0584 undefined4 *
// GLOBAL DAT_005e0588 undefined4 *
// GLOBAL DAT_005e058c undefined4 *
// GLOBAL DAT_005e0590 undefined4 *
// GLOBAL DAT_005e0594 undefined4 *
// GLOBAL DAT_005e0598 undefined4 *
// GLOBAL DAT_005e059c undefined4 *
// GLOBAL DAT_005e05a0 undefined4 *
// GLOBAL DAT_005e05a4 undefined4 *
// GLOBAL DAT_005e05a8 undefined4 *
// GLOBAL DAT_005e05ac undefined4 *
// GLOBAL DAT_005e05b0 undefined4 *
// GLOBAL s_damage00_005e04e8 string
// GLOBAL s_dead_back_ed00_005e0524 string
// GLOBAL s_dead_back_st00_005e0514 string
// GLOBAL s_dead_front_ed00_005e0504 string
// GLOBAL s_dead_front_st00_005e04f4 string
// GLOBAL s_fall00_005e0534 string
// GLOBAL s_find00_005e04d8 string
// GLOBAL s_kamae00_005e04e0 string
// GLOBAL s_piyopiyo00_005e053c string
// GLOBAL s_spear_throw00_005e0548 string
// GLOBAL s_wait00_005e04bc string
// GLOBAL s_walk00_005e04c8 string
// GLOBAL s_walk01_005e04d0 string

void func_005E02B8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_c (*(undefined1 *)(albw_frame + 0x4))
  #define local_b (*(undefined1 *)(albw_frame + 0x5))
  #define local_a (*(undefined1 *)(albw_frame + 0x6))
  #define local_9 (*(undefined1 *)(albw_frame + 0x7))
  #define local_8 (*(undefined1 *)(albw_frame + 0x8))
  puVar1 = DAT_005e04b0;
  DAT_005e04b0[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar1 = DAT_005e04b4;
  *DAT_005e04b4 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005e04c4;
  puVar1 = DAT_005e04b8;
  *DAT_005e04b8 = DAT_005e04c4;
  puVar1[1] = s_wait00_005e04bc;
  puVar1[2] = uVar2;
  puVar1[3] = s_walk00_005e04c8;
  puVar1[4] = uVar2;
  puVar1[5] = s_walk01_005e04d0;
  puVar1[6] = uVar2;
  puVar1[7] = s_find00_005e04d8;
  puVar1[8] = uVar2;
  puVar1[9] = s_kamae00_005e04e0;
  puVar1[10] = uVar2;
  puVar1[0xb] = s_damage00_005e04e8;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = s_dead_front_st00_005e04f4;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = s_dead_front_ed00_005e0504;
  puVar1[0x10] = uVar2;
  puVar1[0x11] = s_dead_back_st00_005e0514;
  puVar1[0x12] = uVar2;
  puVar1[0x13] = s_dead_back_ed00_005e0524;
  puVar1[0x14] = uVar2;
  puVar1[0x15] = s_fall00_005e0534;
  puVar1[0x16] = uVar2;
  puVar1[0x17] = s_piyopiyo00_005e053c;
  puVar1[0x18] = uVar2;
  puVar1[0x19] = s_spear_throw00_005e0548;
  puVar4 = DAT_005e0568;
  uVar3 = DAT_005e0564;
  uVar2 = DAT_005e0560;
  *DAT_005e0568 = DAT_005e0560;
  puVar4[1] = uVar3;
  puVar4[2] = uVar3;
  puVar4[3] = uVar3;
  puVar4[4] = uVar3;
  uVar5 = DAT_005e056c;
  puVar4[5] = uVar2;
  puVar4[6] = uVar2;
  puVar4[7] = uVar3;
  puVar4[8] = uVar5;
  puVar1 = DAT_005e04b0;
  puVar4[9] = uVar5;
  puVar4[10] = uVar3;
  puVar4[0xb] = uVar2;
  *puVar1 = 0x20000000;
  local_c = 0;
  local_b = 0;
  local_a = 0;
  local_9 = 0xff;
  local_8 = 0xff;
  func_004FC6FC(DAT_005e0570,1,1,0,0,(undefined4 *)&local_c,0xb);
  puVar1 = DAT_005e0578;
  *DAT_005e0578 = *DAT_005e057c;
  puVar1[1] = *DAT_005e0580;
  puVar1[2] = *DAT_005e0584;
  puVar1[3] = *DAT_005e0588;
  puVar1[4] = *DAT_005e058c;
  puVar1[5] = *DAT_005e0590;
  puVar1[6] = *DAT_005e0594;
  puVar1[7] = *DAT_005e0598;
  puVar1[8] = *DAT_005e059c;
  puVar1[9] = *DAT_005e05a0;
  puVar1[10] = *DAT_005e05a4;
  puVar1[0xb] = *DAT_005e05a8;
  puVar1[0xc] = *DAT_005e05ac;
  puVar1[0xd] = *DAT_005e05b0;
  return;
}

