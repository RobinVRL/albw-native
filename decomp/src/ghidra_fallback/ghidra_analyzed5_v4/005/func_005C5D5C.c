#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005c606c;
extern undefined4 *DAT_005c6070;
extern undefined4 DAT_005c6080;
extern undefined4 DAT_005c60a8;
extern undefined4 DAT_005c60ac;
extern undefined DAT_005c60b0;
extern undefined DAT_005c60b8;
extern undefined DAT_005c60c0;
extern undefined DAT_005c60c8;
extern undefined DAT_005c60e8;
extern undefined4 DAT_005c611c;
extern undefined4 *DAT_005c6120;
extern undefined4 DAT_005c6124;
extern undefined4 DAT_005c6130;
extern uint DAT_005c613c;
extern undefined4 DAT_005c6140;
extern undefined4 DAT_005c6144;
extern undefined4 *DAT_005c6148;
extern undefined4 DAT_005c614c;
extern undefined4 DAT_005c6150;
extern undefined4 DAT_005c6154;
extern uint DAT_005c6158;
extern undefined4 DAT_005c615c;
extern uint DAT_005c6160;
extern uint DAT_005c6164;
extern undefined4 *DAT_005c6168;
extern undefined4 DAT_005c616c;
extern undefined4 DAT_005c6170;
extern undefined4 DAT_005c6174;
extern undefined4 DAT_005c6178;
extern undefined DAT_005c617c;
extern undefined4 DAT_005c6194;
extern uint *DAT_005c6198;
extern undefined4 DAT_005c619c;
extern undefined4 *DAT_005c61a0;
extern undefined4 DAT_005c61a4;
extern undefined4 *DAT_005c61a8;
extern char s_HandL_005c6128[];
extern char s_HandR_005c6134[];
extern char s_N_ArrowB_00_005c6084[];
extern char s_N_ArrowL_00_005c6090[];
extern char s_N_ArrowR_00_005c609c[];
extern char s_N_ArrowT_00_005c6074[];
extern char s_NpcMountaineer_005c6184[];
extern char s_carry_step_005c60d0[];
extern char s_carry_wait_005c60dc[];
extern char s_pose_loop_005c60f0[];
extern char s_throw_005c60fc[];
extern char s_throw_loop_005c6104[];
extern char s_walk_rock_005c6110[];

// USA 005C5D5C <- EU 005C5D34 (Ghidra, non-matching)
// GLOBAL DAT_005c606c undefined4 *
// GLOBAL DAT_005c6070 undefined4 *
// GLOBAL DAT_005c6080 undefined4
// GLOBAL DAT_005c60a8 undefined4
// GLOBAL DAT_005c60ac undefined4
// GLOBAL DAT_005c60b0 undefined
// GLOBAL DAT_005c60b8 undefined
// GLOBAL DAT_005c60c0 undefined
// GLOBAL DAT_005c60c8 undefined
// GLOBAL DAT_005c60e8 undefined
// GLOBAL DAT_005c611c undefined4
// GLOBAL DAT_005c6120 undefined4 *
// GLOBAL DAT_005c6124 undefined4
// GLOBAL DAT_005c6130 undefined4
// GLOBAL DAT_005c613c uint
// GLOBAL DAT_005c6140 undefined4
// GLOBAL DAT_005c6144 undefined4
// GLOBAL DAT_005c6148 undefined4 *
// GLOBAL DAT_005c614c undefined4
// GLOBAL DAT_005c6150 undefined4
// GLOBAL DAT_005c6154 undefined4
// GLOBAL DAT_005c6158 uint
// GLOBAL DAT_005c615c undefined4
// GLOBAL DAT_005c6160 uint
// GLOBAL DAT_005c6164 uint
// GLOBAL DAT_005c6168 undefined4 *
// GLOBAL DAT_005c616c undefined4
// GLOBAL DAT_005c6170 undefined4
// GLOBAL DAT_005c6174 undefined4
// GLOBAL DAT_005c6178 undefined4
// GLOBAL DAT_005c617c undefined
// GLOBAL DAT_005c6194 undefined4
// GLOBAL DAT_005c6198 uint *
// GLOBAL DAT_005c619c undefined4
// GLOBAL DAT_005c61a0 undefined4 *
// GLOBAL DAT_005c61a4 undefined4
// GLOBAL DAT_005c61a8 undefined4 *
// GLOBAL s_HandL_005c6128 string
// GLOBAL s_HandR_005c6134 string
// GLOBAL s_N_ArrowB_00_005c6084 string
// GLOBAL s_N_ArrowL_00_005c6090 string
// GLOBAL s_N_ArrowR_00_005c609c string
// GLOBAL s_N_ArrowT_00_005c6074 string
// GLOBAL s_NpcMountaineer_005c6184 string
// GLOBAL s_carry_step_005c60d0 string
// GLOBAL s_carry_wait_005c60dc string
// GLOBAL s_pose_loop_005c60f0 string
// GLOBAL s_throw_005c60fc string
// GLOBAL s_throw_loop_005c6104 string
// GLOBAL s_walk_rock_005c6110 string

void func_005C5D5C(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(undefined4 *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(undefined * *)(albw_frame + 0xc))
  puVar1 = DAT_005c606c;
  DAT_005c606c[6] = 0xffffffff;
  puVar1[7] = 0xffffffff;
  uVar3 = DAT_005c6080;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = DAT_005c6070;
  DAT_005c6070[1] = s_N_ArrowT_00_005c6074;
  *puVar2 = uVar3;
  puVar2[3] = s_N_ArrowB_00_005c6084;
  puVar2[2] = uVar3;
  puVar2[5] = s_N_ArrowL_00_005c6090;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_N_ArrowR_00_005c609c;
  puVar1[0xf] = &DAT_005c60b0;
  puVar1[0xe] = uVar3;
  puVar1[0x12] = &DAT_005c60b8;
  puVar1[0x11] = uVar3;
  puVar1[0x15] = &DAT_005c60c0;
  puVar1[0x14] = uVar3;
  puVar1[0x18] = &DAT_005c60c8;
  puVar1[0x17] = uVar3;
  puVar1[0x1b] = s_carry_step_005c60d0;
  puVar1[0x1a] = uVar3;
  puVar1[0x1e] = s_carry_wait_005c60dc;
  puVar1[0x1d] = uVar3;
  puVar1[0x21] = &DAT_005c60e8;
  puVar1[0x20] = uVar3;
  puVar1[0x24] = s_pose_loop_005c60f0;
  puVar1[0x23] = uVar3;
  puVar1[0x27] = s_throw_005c60fc;
  puVar1[0x26] = uVar3;
  puVar1[0x2a] = s_throw_loop_005c6104;
  puVar1[0x29] = uVar3;
  puVar1[0x2c] = uVar3;
  puVar1[0x2d] = s_walk_rock_005c6110;
  puVar2 = DAT_005c6120;
  DAT_005c6120[1] = &DAT_005c60b8;
  *puVar2 = uVar3;
  puVar2[3] = s_throw_005c60fc;
  puVar2[2] = uVar3;
  puVar2[5] = s_carry_wait_005c60dc;
  puVar2[4] = uVar3;
  puVar2[6] = uVar3;
  puVar2[7] = s_carry_step_005c60d0;
  puVar1[0xb] = s_HandL_005c6128;
  puVar1[10] = uVar3;
  puVar1[0xd] = s_HandR_005c6134;
  puVar1[0xc] = uVar3;
  uVar10 = DAT_005c614c;
  puVar2 = DAT_005c6148;
  uVar11 = DAT_005c6144;
  uVar9 = DAT_005c6140;
  uVar4 = DAT_005c613c;
  *DAT_005c6148 = DAT_005c6140;
  puVar2[1] = uVar11;
  puVar2[2] = uVar10;
  uVar12 = DAT_005c6154;
  uVar10 = DAT_005c6150;
  puVar2[3] = DAT_005c6150;
  puVar2[4] = uVar12;
  puVar2[5] = uVar10;
  uVar14 = func_00114608(0,uVar4);
  uVar8 = (undefined4)uVar14;
  *puVar1 = uVar8;
  puVar1[1] = uVar8;
  puVar1[2] = uVar8;
  uVar14 = func_00114608(DAT_005c6158,(uint)((ulonglong)uVar14 >> 0x20));
  puVar1[3] = (int)uVar14;
  uVar13 = DAT_005c615c;
  uVar14 = func_00114608(DAT_005c6160,(uint)((ulonglong)uVar14 >> 0x20));
  puVar1[4] = (int)uVar14;
  uVar14 = func_00114608(DAT_005c6164,(uint)((ulonglong)uVar14 >> 0x20));
  puVar1[5] = (int)uVar14;
  uVar7 = DAT_005c6178;
  uVar5 = DAT_005c6170;
  uVar8 = DAT_005c616c;
  puVar1 = DAT_005c6168;
  *DAT_005c6168 = uVar9;
  puVar1[1] = uVar11;
  puVar1[2] = uVar9;
  uVar6 = DAT_005c6174;
  puVar1[3] = uVar9;
  puVar1[4] = uVar11;
  puVar1[5] = uVar9;
  puVar1[6] = uVar10;
  puVar1[7] = uVar12;
  puVar1[8] = uVar10;
  puVar1[9] = uVar8;
  puVar1[0xc] = uVar12;
  puVar1[0xd] = uVar7;
  puVar1[0xe] = uVar13;
  puVar1[10] = uVar5;
  puVar1[0xb] = uVar6;
  puVar1[0xf] = 0xf;
  *(undefined2 *)(puVar1 + 0x10) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x42) = 0xb4;
  *(undefined1 *)(puVar1 + 0x11) = 0xee;
  *(undefined1 *)((int)puVar1 + 0x45) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x46) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x47) = 0x28;
  *(undefined1 *)(puVar1 + 0x12) = 0x14;
  puVar1[-0xb3] = 5;
  puVar1[-0xb2] = puVar1 + -0xb1;
  puVar1[-0xb4] = 0;
  local_34 = &DAT_005c617c;
  local_3c = s_NpcMountaineer_005c6184;
  local_38 = uVar3;
  local_40 = uVar3;
  func_0019B51C(DAT_005c61a0,DAT_005c619c,*DAT_005c6198,(int)&local_40,DAT_005c6194,&local_38,0);
  puVar1 = DAT_005c61a8;
  *DAT_005c61a8 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 1;
  return;
}

