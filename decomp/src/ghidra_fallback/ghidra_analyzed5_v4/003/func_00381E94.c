#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_0036D0C8(int *param_1,int param_2);
extern int func_0037F268(int param_1);
extern int func_0037FC58(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern void func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00547724(int *param_1);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00382290;
extern uint *DAT_00382294;
extern uint *DAT_00382298;
extern int DAT_0038229c;
extern undefined *DAT_003822a0;
extern undefined4 DAT_003822a4;
extern undefined4 DAT_003822a8;
extern int DAT_003822ac;
extern undefined4 DAT_003822b0;
extern undefined4 *DAT_003822b4;
extern undefined4 DAT_003822b8;
extern undefined4 *DAT_003822bc;
extern int DAT_003822c0;
extern int *DAT_003822c4;
extern float DAT_003822c8;
extern uint DAT_003822cc;
extern uint DAT_003822e0;
extern undefined *DAT_003827d8;
extern int DAT_003827dc;
extern undefined4 DAT_00382890;
extern float DAT_0038297c;
extern char s_Heishi1_003822d0[];
extern char s_Lhand_00382974[];
extern char s_cState_Die_00382884[];
extern char s_cState_FightAttack_00382850[];
extern char s_cState_FightMove_0038283c[];
extern char s_cState_Find_00382830[];
extern char s_cState_Guard_00382864[];
extern char s_cState_MenaceWait_0038281c[];
extern char s_cState_Move_00382810[];
extern char s_cState_OpDemoWait_003827e0[];
extern char s_cState_OpDemo_003827f4[];
extern char s_cState_Reaction_00382874[];
extern char s_cState_Wait_00382804[];
extern char s_chest_003822e4[];
extern char s_head0_003822d8[];

// USA 00381E94 <- EU 00381E70 (Ghidra, non-matching)
// GLOBAL DAT_00382290 int *
// GLOBAL DAT_00382294 uint *
// GLOBAL DAT_00382298 uint *
// GLOBAL DAT_0038229c int
// GLOBAL DAT_003822a0 undefined *
// GLOBAL DAT_003822a4 undefined4
// GLOBAL DAT_003822a8 undefined4
// GLOBAL DAT_003822ac int
// GLOBAL DAT_003822b0 undefined4
// GLOBAL DAT_003822b4 undefined4 *
// GLOBAL DAT_003822b8 undefined4
// GLOBAL DAT_003822bc undefined4 *
// GLOBAL DAT_003822c0 int
// GLOBAL DAT_003822c4 int *
// GLOBAL DAT_003822c8 float
// GLOBAL DAT_003822cc uint
// GLOBAL DAT_003822e0 uint
// GLOBAL DAT_003827d8 undefined *
// GLOBAL DAT_003827dc int
// GLOBAL DAT_00382890 undefined4
// GLOBAL DAT_0038297c float
// GLOBAL s_Heishi1_003822d0 string
// GLOBAL s_Lhand_00382974 string
// GLOBAL s_cState_Die_00382884 string
// GLOBAL s_cState_FightAttack_00382850 string
// GLOBAL s_cState_FightMove_0038283c string
// GLOBAL s_cState_Find_00382830 string
// GLOBAL s_cState_Guard_00382864 string
// GLOBAL s_cState_MenaceWait_0038281c string
// GLOBAL s_cState_Move_00382810 string
// GLOBAL s_cState_OpDemoWait_003827e0 string
// GLOBAL s_cState_OpDemo_003827f4 string
// GLOBAL s_cState_Reaction_00382874 string
// GLOBAL s_cState_Wait_00382804 string
// GLOBAL s_chest_003822e4 string
// GLOBAL s_head0_003822d8 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_00381E94(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  float fparam_1;
  undefined8 uVar20;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  iVar2 = func_00547724((int *)param_2);
  puVar7 = DAT_00382294;
  if (iVar2 != *DAT_00382290) {
    puVar7 = DAT_00382298;
  }
  piVar3 = func_004FD464(param_1,param_2,puVar7);
  iVar2 = DAT_0038229c;
  piVar3[200] = DAT_0038229c + 0x84;
  *piVar3 = iVar2;
  piVar3[0x22f] = 0;
  piVar3[0x230] = 0;
  piVar3[0x231] = 0;
  iVar2 = func_00100118((int)(piVar3 + 0x232),DAT_003822a0,0x20,10);
  *(undefined4 *)(iVar2 + 0x140) = DAT_003822a4;
  *(int *)(iVar2 + 0x144) = iVar2 + -0x8c8;
  *(undefined4 *)(iVar2 + 0x148) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x14c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x150) = 0;
  *(undefined1 *)(iVar2 + 0x168) = 0xf;
  uVar12 = DAT_003822a8;
  *(undefined1 *)(iVar2 + 0x169) = 0xff;
  *(undefined1 *)(iVar2 + 0x16a) = 0xff;
  *(undefined2 *)(iVar2 + 0x178) = 0;
  *(undefined2 *)(iVar2 + 0x17a) = 1;
  *(undefined4 *)(iVar2 + 0x17c) = uVar12;
  puVar4 = func_0010A794((undefined4 *)(iVar2 + 0x180));
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = puVar4[-0x19e];
  puVar4[0xd] = puVar4[-0x19d];
  puVar4[0xe] = puVar4[-0x19c];
  uVar19 = DAT_003822b8;
  uVar20 = CONCAT44(uVar12,DAT_003822b8);
  puVar4[0xf] = puVar4[-0x19e];
  puVar4[0x10] = puVar4[-0x19d];
  puVar4[0x11] = puVar4[-0x19c];
  puVar4[0x12] = puVar4[-0x19e];
  puVar4[0x13] = puVar4[-0x19d];
  puVar4[0x14] = puVar4[-0x19c];
  iVar2 = DAT_003822ac;
  uVar5 = *(undefined4 *)(DAT_003822ac + 0xc);
  uVar14 = *(undefined4 *)(DAT_003822ac + 0x10);
  puVar4[0x16] = puVar4 + -0x292;
  uVar11 = DAT_003822b0;
  puVar4[0x17] = uVar5;
  puVar4[0x18] = uVar14;
  puVar16 = puVar4 + -0x292;
  puVar4[0x15] = uVar11;
  uVar5 = *(undefined4 *)(iVar2 + 0x14);
  puVar4[0x1c] = *(undefined4 *)(iVar2 + 0x18);
  puVar9 = DAT_003822b4;
  puVar4[0x1b] = uVar5;
  puVar4[0x19] = uVar11;
  puVar4[0x1a] = puVar16;
  uVar11 = *puVar9;
  pfVar15 = (float *)puVar9[1];
  puVar4[0x1f] = puVar9[2];
  puVar4[0x1d] = uVar11;
  puVar4[0x1e] = pfVar15;
  puVar4[0x20] = 0;
  puVar4[0x21] = 0;
  puVar4[0x22] = 0;
  puVar4[0x23] = 0;
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = uVar12;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  puVar4[0x2a] = uVar12;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2d] = uVar12;
  *(undefined1 *)(puVar4 + 0x2e) = 5;
  puVar4[0x2f] = uVar19;
  puVar4[0x30] = uVar19;
  puVar4[0x31] = uVar19;
  puVar4[0x32] = uVar19;
  puVar4[0x33] = uVar12;
  puVar4[0x34] = uVar19;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  *(undefined1 *)(puVar4 + 0x37) = 0;
  *(undefined2 *)((int)puVar4 + 0xde) = 0;
  *(undefined2 *)(puVar4 + 0x38) = 0;
  *(undefined2 *)((int)puVar4 + 0xe2) = 0;
  *(undefined1 *)(puVar4 + 0x39) = 0;
  *(undefined1 *)((int)puVar4 + 0xe5) = 0;
  *(undefined1 *)((int)puVar4 + 0xe6) = 0;
  *(undefined1 *)((int)puVar4 + 0xe7) = 0;
  *(undefined1 *)(puVar4 + 0x3a) = 0;
  *(undefined1 *)((int)puVar4 + 0xe9) = 0;
  *(undefined1 *)((int)puVar4 + 0xea) = 0;
  *(undefined1 *)((int)puVar4 + 0xeb) = 0;
  *(undefined1 *)(puVar4 + 0x3b) = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3f] = 0;
  puVar4[0x41] = 0;
  puVar4[0x43] = 0;
  func_0036D0C8(puVar4 + -99,0);
  iVar2 = puVar4[-99];
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = func_0010983C(*DAT_003822bc,iVar2);
  }
  func_004FB344((int)puVar16,0x10);
  iVar8 = DAT_003822c0;
  uVar17 = 0;
  do {
    func_004FACA4((int)puVar16,uVar17,(int *)(iVar8 + uVar17 * 8));
    fparam_1 = ALBW_AS_F32(uVar20);
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x10);
  func_004FB468((int)puVar16);
  if (iVar2 != 1) {
    func_0010983C(*DAT_003822bc,iVar2);
  }
  iVar2 = func_00588BE4((int)puVar16);
  uVar17 = DAT_003822cc;
  if (iVar2 == *DAT_003822c4) {
    fVar21 = DAT_003822c8;
    func_004FB30C((int)puVar16,1);
    objStack_50[1] = (uint)s_Heishi1_003822d0;
    objStack_50[0] = uVar17;
    func_004FAC70((int)puVar16,0,(int *)objStack_50);
    func_004FB408((int)puVar16);
    iVar2 = *(int *)(puVar4[-0x18c] + 0x14);
    if (*(float *)(iVar2 + 8) != fVar21) {
      *(float *)(iVar2 + 8) = fVar21;
      *(undefined1 *)(iVar2 + 0x26) = 1;
    }
    *(float *)(*(int *)(puVar4[-0x18c] + 0x14) + 0x10) = fparam_1;
    *(undefined1 *)((int)puVar4 + 0xe9) = 1;
  }
  func_004F5BD8((int)puVar16,(uint *)0x0,(int **)0x0,pfVar15);
  iVar2 = DAT_003822ac;
  uVar12 = *(undefined4 *)(DAT_003822ac + 0x1c);
  uVar11 = *(undefined4 *)(DAT_003822ac + 0x20);
  puVar4[0x16] = puVar16;
  puVar4[0x17] = uVar12;
  puVar4[0x18] = uVar11;
  puVar4[-0x197] = puVar4 + 0x15;
  local_3c = s_head0_003822d8;
  local_40 = uVar17;
  uVar6 = func_00564A78(puVar4[-399],(int *)&local_40);
  uVar18 = DAT_003822e0;
  if (uVar6 != DAT_003822e0) {
    puVar4[-0xe] = uVar6;
    puVar7 = (uint *)(*(int *)(*(int *)(puVar4[-399] + 0x24) + 0xc) + uVar6 * 0x40);
    *puVar7 = *puVar7 | 0x10;
    *(undefined4 **)(puVar4[-399] + 0x16c) = puVar4 + -0x10;
  }
  local_3c = s_chest_003822e4;
  local_40 = uVar17;
  uVar6 = func_00564A78(puVar4[-399],(int *)&local_40);
  if (uVar6 != uVar18) {
    puVar4[-0xd] = uVar6;
    puVar7 = (uint *)(*(int *)(*(int *)(puVar4[-399] + 0x24) + 0xc) + uVar6 * 0x40);
    *puVar7 = *puVar7 | 0x10;
    *(undefined4 **)(puVar4[-399] + 0x16c) = puVar4 + -0x10;
  }
  puVar4[5] = puVar16;
  *(undefined1 *)((int)puVar4 + 6) = 0xb;
  iVar8 = func_0010BA78(0xb0);
  puVar4[6] = iVar8;
  puVar4[7] = iVar8 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar13 = 0xb;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar2 + 0xf0);
    iVar13 = iVar13 + -1;
    puVar9[2] = *(undefined4 *)(iVar2 + 0xec);
    puVar9[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar2 + 0xf0);
    puVar9[4] = *(undefined4 *)(iVar2 + 0xec);
    puVar9[5] = uVar12;
    puVar9 = puVar9 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar18 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar18 << 3);
  puVar4[8] = puVar9;
  if (uVar18 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar2 + 0x38);
      *puVar9 = *(undefined4 *)(iVar2 + 0x34);
      puVar9[1] = uVar12;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar18 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar12 = *(undefined4 *)(iVar2 + 0x38);
      puVar10[2] = *(undefined4 *)(iVar2 + 0x34);
      puVar10[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar2 + 0x38);
      puVar10[4] = *(undefined4 *)(iVar2 + 0x34);
      puVar10[5] = uVar12;
      puVar10 = puVar10 + 4;
    }
  }
  puVar9 = (undefined4 *)func_0010CEE0(0x194,(int *)0x0,4);
  iVar8 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 0x24;
    puVar9[1] = 0xb;
    iVar8 = func_00100118((int)(puVar9 + 2),DAT_003827d8,0x24,0xb);
  }
  if (iVar8 != 0) {
    puVar4[3] = iVar8;
    puVar4[2] = 0xb;
  }
  iVar8 = DAT_003827dc;
  puVar4[-0x1bd] = puVar4;
  *(undefined2 *)(iVar8 + (int)puVar16) = 0xb;
  local_3c = s_cState_OpDemoWait_003827e0;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,0,(int *)&local_40);
  puVar9 = (undefined4 *)puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0x30);
  uVar11 = *(undefined4 *)(iVar2 + 0x2c);
  uVar19 = *(undefined4 *)(iVar2 + 0x28);
  uVar5 = *(undefined4 *)(iVar2 + 0x34);
  uVar14 = *(undefined4 *)(iVar2 + 0x38);
  *puVar9 = *(undefined4 *)(iVar2 + 0x24);
  puVar9[1] = uVar19;
  puVar9 = (undefined4 *)puVar4[7];
  *puVar9 = uVar11;
  puVar9[1] = uVar12;
  puVar9 = (undefined4 *)puVar4[8];
  *puVar9 = uVar5;
  puVar9[1] = uVar14;
  local_3c = s_cState_OpDemo_003827f4;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,1,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0x40);
  uVar11 = *(undefined4 *)(iVar2 + 0x44);
  uVar19 = *(undefined4 *)(iVar2 + 0x48);
  *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 8) = uVar11;
  *(undefined4 *)(iVar8 + 0xc) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 8) = uVar5;
  *(undefined4 *)(iVar8 + 0xc) = uVar14;
  local_3c = s_cState_Wait_00382804;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,2,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0x50);
  uVar11 = *(undefined4 *)(iVar2 + 0x54);
  uVar19 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar8 + 0x14) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar11;
  *(undefined4 *)(iVar8 + 0x14) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar5;
  *(undefined4 *)(iVar8 + 0x14) = uVar14;
  local_3c = s_cState_Move_00382810;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,3,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0x60);
  uVar11 = *(undefined4 *)(iVar2 + 100);
  uVar19 = *(undefined4 *)(iVar2 + 0x68);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar2 + 0x5c);
  *(undefined4 *)(iVar8 + 0x1c) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar11;
  *(undefined4 *)(iVar8 + 0x1c) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar5;
  *(undefined4 *)(iVar8 + 0x1c) = uVar14;
  local_3c = s_cState_MenaceWait_0038281c;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,5,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0x70);
  uVar11 = *(undefined4 *)(iVar2 + 0x74);
  uVar19 = *(undefined4 *)(iVar2 + 0x78);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar2 + 0x6c);
  *(undefined4 *)(iVar8 + 0x2c) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x28) = uVar11;
  *(undefined4 *)(iVar8 + 0x2c) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x28) = uVar5;
  *(undefined4 *)(iVar8 + 0x2c) = uVar14;
  local_3c = s_cState_Find_00382830;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,4,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0x80);
  uVar11 = *(undefined4 *)(iVar2 + 0x84);
  uVar19 = *(undefined4 *)(iVar2 + 0x88);
  *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar2 + 0x7c);
  *(undefined4 *)(iVar8 + 0x24) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x20) = uVar11;
  *(undefined4 *)(iVar8 + 0x24) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x20) = uVar5;
  *(undefined4 *)(iVar8 + 0x24) = uVar14;
  local_3c = s_cState_FightMove_0038283c;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,6,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0x90);
  uVar11 = *(undefined4 *)(iVar2 + 0x94);
  uVar19 = *(undefined4 *)(iVar2 + 0x98);
  *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(iVar8 + 0x34) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x30) = uVar11;
  *(undefined4 *)(iVar8 + 0x34) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x30) = uVar5;
  *(undefined4 *)(iVar8 + 0x34) = uVar14;
  local_3c = s_cState_FightAttack_00382850;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,7,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0xa0);
  uVar11 = *(undefined4 *)(iVar2 + 0xa4);
  uVar19 = *(undefined4 *)(iVar2 + 0xa8);
  *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(iVar2 + 0x9c);
  *(undefined4 *)(iVar8 + 0x3c) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x38) = uVar11;
  *(undefined4 *)(iVar8 + 0x3c) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x38) = uVar5;
  *(undefined4 *)(iVar8 + 0x3c) = uVar14;
  local_3c = s_cState_Guard_00382864;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,8,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar19 = *(undefined4 *)(iVar2 + 0xb0);
  uVar12 = *(undefined4 *)(iVar2 + 0xb4);
  uVar11 = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)(iVar2 + 0xac);
  *(undefined4 *)(iVar8 + 0x44) = uVar19;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x40) = uVar12;
  *(undefined4 *)(iVar8 + 0x44) = uVar11;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x40) = uVar5;
  *(undefined4 *)(iVar8 + 0x44) = uVar14;
  local_3c = s_cState_Reaction_00382874;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,9,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar2 + 0xc0);
  uVar11 = *(undefined4 *)(iVar2 + 0xc4);
  uVar19 = *(undefined4 *)(iVar2 + 200);
  *(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)(iVar2 + 0xbc);
  *(undefined4 *)(iVar8 + 0x4c) = uVar12;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x48) = uVar11;
  *(undefined4 *)(iVar8 + 0x4c) = uVar19;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x48) = uVar5;
  *(undefined4 *)(iVar8 + 0x4c) = uVar14;
  local_3c = s_cState_Die_00382884;
  local_40 = uVar17;
  func_0010BEC4((int)puVar4,10,(int *)&local_40);
  iVar8 = puVar4[6];
  uVar19 = *(undefined4 *)(iVar2 + 0xd4);
  uVar11 = *(undefined4 *)(iVar2 + 0xd0);
  uVar12 = *(undefined4 *)(iVar2 + 0xd8);
  *(undefined4 *)(iVar8 + 0x50) = *(undefined4 *)(iVar2 + 0xcc);
  *(undefined4 *)(iVar8 + 0x54) = uVar11;
  iVar2 = puVar4[7];
  *(undefined4 *)(iVar2 + 0x50) = uVar19;
  *(undefined4 *)(iVar2 + 0x54) = uVar12;
  iVar2 = puVar4[8];
  *(undefined4 *)(iVar2 + 0x50) = uVar5;
  *(undefined4 *)(iVar2 + 0x54) = uVar14;
  func_002AF5FC((int)puVar16,0xc,-1);
  *(undefined1 *)((int)puVar4 + -0x2cb) = 0xd;
  piVar3 = (int *)0x7fff;
  *(undefined1 *)((int)puVar4 + -0x2ca) = 0xff;
  uVar11 = 0xffffffff;
  *(undefined1 *)((int)puVar4 + -0x2c9) = 0;
  func_004FC218((int)puVar16,'\v',-1,0x7fff);
  puVar4[-299] = puVar4[-299] | 0x8000;
  func_0037F268((int)puVar16);
  func_0037FC58((int)puVar16);
  uVar12 = DAT_00382890;
  puVar4[0x2c] = 4;
  puVar4[0x2d] = uVar12;
  puVar4[0x2b] = 0;
  if (*(char *)((int)puVar4 + 0xe9) != '\0') {
    func_00169A80((int *)puVar4[-0x18c],0,uVar11,piVar3);
    func_00168E9C((int *)puVar4[-0x18c],puVar4[-399],(int *)0x0);
  }
  local_3c = s_Lhand_00382974;
  local_40 = uVar17;
  uVar17 = func_00564A78(puVar4[-399],(int *)&local_40);
  puVar4[0x35] = uVar17;
  objStack_50[0] = 0x14;
  objStack_50[1] = 0;
  objStack_50[2] = 0x7fff;
  pfVar15 = (float *)0xffffffff;
  func_004FBA18((int)puVar16,0xe,0xf,-1,0x14,0,0x7fff,DAT_0038297c,fparam_1);
  puVar4[-299] = puVar4[-299] | 0x400000;
  if (*(short *)(puVar4 + -0x286) == 0) {
    func_006678C0(puVar4,2);
  }
  else {
    func_006678C0(puVar4,0);
  }
  func_004F5BD8((int)puVar16,(uint *)0x0,(int **)0x0,pfVar15);
  func_0037FC58((int)puVar16);
  return puVar16;
}

