#include "ghidra_types.h"

extern int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5 ,undefined4 param_6,int param_7);
extern undefined4 *DAT_005b78c8;
extern undefined4 *DAT_005b78cc;
extern undefined4 *DAT_005b78d0;
extern undefined4 DAT_005b78e0;
extern undefined4 DAT_005b7908;
extern undefined4 DAT_005b790c;
extern undefined4 *DAT_005b7910;
extern undefined DAT_005b7914;
extern undefined DAT_005b791c;
extern undefined DAT_005b7924;
extern undefined DAT_005b7928;
extern undefined4 DAT_005b7950;
extern undefined4 *DAT_005b7954;
extern undefined DAT_005b7958;
extern undefined DAT_005b7960;
extern undefined4 DAT_005b7968;
extern undefined4 DAT_005b796c;
extern undefined4 DAT_005b7970;
extern undefined4 DAT_005b7974;
extern undefined4 DAT_005b7978;
extern undefined4 DAT_005b797c;
extern undefined4 *DAT_005b7980;
extern undefined4 DAT_005b7984;
extern undefined4 DAT_005b7988;
extern undefined4 *DAT_005b798c;
extern undefined DAT_005b7990;
extern uint *DAT_005b79b0;
extern undefined4 DAT_005b79b4;
extern undefined4 *DAT_005b79b8;
extern undefined4 DAT_005b79bc;
extern undefined4 *DAT_005b79c0;
extern undefined DAT_005b79c4;
extern uint *DAT_005b79e8;
extern undefined4 DAT_005b79ec;
extern undefined4 *DAT_005b79f0;
extern char s_N_ArrowB_00_005b78e4[];
extern char s_N_ArrowL_00_005b78f0[];
extern char s_N_ArrowR_00_005b78fc[];
extern char s_N_ArrowT_00_005b78d4[];
extern char s_NpcZoraQueenBig_005b79a0[];
extern char s_NpcZoraQueenSmall_005b79d4[];
extern char s_struggle_after_005b7940[];
extern char s_struggle_before_005b7930[];

// USA 005B7648 <- EU 005B7620 (Ghidra, non-matching)
// GLOBAL DAT_005b78c8 undefined4 *
// GLOBAL DAT_005b78cc undefined4 *
// GLOBAL DAT_005b78d0 undefined4 *
// GLOBAL DAT_005b78e0 undefined4
// GLOBAL DAT_005b7908 undefined4
// GLOBAL DAT_005b790c undefined4
// GLOBAL DAT_005b7910 undefined4 *
// GLOBAL DAT_005b7914 undefined
// GLOBAL DAT_005b791c undefined
// GLOBAL DAT_005b7924 undefined
// GLOBAL DAT_005b7928 undefined
// GLOBAL DAT_005b7950 undefined4
// GLOBAL DAT_005b7954 undefined4 *
// GLOBAL DAT_005b7958 undefined
// GLOBAL DAT_005b7960 undefined
// GLOBAL DAT_005b7968 undefined4
// GLOBAL DAT_005b796c undefined4
// GLOBAL DAT_005b7970 undefined4
// GLOBAL DAT_005b7974 undefined4
// GLOBAL DAT_005b7978 undefined4
// GLOBAL DAT_005b797c undefined4
// GLOBAL DAT_005b7980 undefined4 *
// GLOBAL DAT_005b7984 undefined4
// GLOBAL DAT_005b7988 undefined4
// GLOBAL DAT_005b798c undefined4 *
// GLOBAL DAT_005b7990 undefined
// GLOBAL DAT_005b79b0 uint *
// GLOBAL DAT_005b79b4 undefined4
// GLOBAL DAT_005b79b8 undefined4 *
// GLOBAL DAT_005b79bc undefined4
// GLOBAL DAT_005b79c0 undefined4 *
// GLOBAL DAT_005b79c4 undefined
// GLOBAL DAT_005b79e8 uint *
// GLOBAL DAT_005b79ec undefined4
// GLOBAL DAT_005b79f0 undefined4 *
// GLOBAL s_N_ArrowB_00_005b78e4 string
// GLOBAL s_N_ArrowL_00_005b78f0 string
// GLOBAL s_N_ArrowR_00_005b78fc string
// GLOBAL s_N_ArrowT_00_005b78d4 string
// GLOBAL s_NpcZoraQueenBig_005b79a0 string
// GLOBAL s_NpcZoraQueenSmall_005b79d4 string
// GLOBAL s_struggle_after_005b7940 string
// GLOBAL s_struggle_before_005b7930 string

undefined8 func_005B7648(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined * *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(char * *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(undefined * *)(albw_frame + 0x24))
  puVar1 = DAT_005b78c8;
  *DAT_005b78c8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar8 = DAT_005b78e0;
  puVar1 = DAT_005b78cc;
  *DAT_005b78cc = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005b78d0;
  DAT_005b78d0[1] = s_N_ArrowT_00_005b78d4;
  *puVar1 = uVar8;
  puVar1[3] = s_N_ArrowB_00_005b78e4;
  puVar1[2] = uVar8;
  puVar1[5] = s_N_ArrowL_00_005b78f0;
  puVar1[4] = uVar8;
  puVar1[6] = uVar8;
  puVar1[7] = s_N_ArrowR_00_005b78fc;
  puVar1 = DAT_005b7910;
  DAT_005b7910[1] = &DAT_005b7914;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005b791c;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_005b7924;
  puVar1[6] = uVar8;
  puVar1[10] = &DAT_005b7928;
  puVar1[9] = uVar8;
  puVar1[0xd] = s_struggle_before_005b7930;
  puVar1[0xc] = uVar8;
  puVar1[0xf] = uVar8;
  puVar1[0x10] = s_struggle_after_005b7940;
  puVar1 = DAT_005b7954;
  DAT_005b7954[1] = &DAT_005b7914;
  *puVar1 = uVar8;
  puVar1[4] = &DAT_005b791c;
  puVar1[3] = uVar8;
  puVar1[7] = &DAT_005b7958;
  puVar1[6] = uVar8;
  puVar1[9] = uVar8;
  puVar1[10] = &DAT_005b7960;
  uVar2 = DAT_005b7984;
  puVar1 = DAT_005b7980;
  uVar6 = DAT_005b797c;
  uVar5 = DAT_005b7978;
  DAT_005b7980[3] = DAT_005b7978;
  puVar1[4] = uVar6;
  puVar1[5] = uVar2;
  uVar4 = DAT_005b7974;
  uVar3 = DAT_005b7970;
  uVar2 = DAT_005b796c;
  *puVar1 = DAT_005b796c;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[6] = 10;
  *(undefined2 *)(puVar1 + 7) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x1e) = 0xb4;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x22) = 0xf;
  *(undefined1 *)((int)puVar1 + 0x23) = 0x1e;
  *(undefined1 *)(puVar1 + 9) = 10;
  uVar7 = DAT_005b7988;
  puVar1[0xd] = uVar5;
  puVar1[0xe] = uVar6;
  puVar1[0xf] = uVar7;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar4;
  puVar1[0x10] = 0xf;
  *(undefined2 *)(puVar1 + 0x11) = 0x5f;
  *(undefined2 *)((int)puVar1 + 0x46) = 0xb4;
  *(undefined1 *)(puVar1 + 0x12) = 0xec;
  *(undefined1 *)((int)puVar1 + 0x49) = 0xd8;
  *(undefined1 *)((int)puVar1 + 0x4a) = 0x14;
  *(undefined1 *)((int)puVar1 + 0x4b) = 0x14;
  *(undefined1 *)(puVar1 + 0x13) = 10;
  puVar1 = DAT_005b798c;
  DAT_005b798c[2] = DAT_005b798c + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_2c = &DAT_005b7990;
  local_34 = s_NpcZoraQueenBig_005b79a0;
  local_30 = uVar8;
  local_38 = uVar8;
  func_0019B51C(DAT_005b79b8,DAT_005b79b4,*DAT_005b79b0,(int)&local_38,DAT_005b798c,&local_30,0);
  puVar1 = DAT_005b79c0;
  DAT_005b79c0[2] = DAT_005b79c0 + 3;
  puVar1[1] = 5;
  *puVar1 = 0;
  local_1c = &DAT_005b79c4;
  local_24 = s_NpcZoraQueenSmall_005b79d4;
  local_20 = uVar8;
  local_28 = uVar8;
  uVar8 = func_0019B51C(DAT_005b79f0,DAT_005b79ec,*DAT_005b79e8,(int)&local_28,DAT_005b79c0,
                        &local_20,0);
  return CONCAT44(DAT_005b79bc,uVar8);
}

