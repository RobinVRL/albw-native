#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E5B90(int param_1,undefined1 param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4);
extern int func_001E5CEC(int param_1);
extern int func_001E5F14(undefined4 *param_1,uint *param_2);
extern int func_0024100C(int param_1);
extern int func_00241164(int param_1);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065F194(undefined4 *param_1,undefined1 param_2);
extern int DAT_00241954;
extern undefined4 DAT_00241958;
extern int *DAT_0024195c;
extern float DAT_00241960;
extern uint DAT_00241964;
extern uint DAT_00241968;
extern undefined4 *DAT_0024196c;
extern undefined *DAT_00241970;
extern int DAT_00241974;
extern int DAT_00241984;
extern float DAT_00241c9c;
extern char s_cState_End_00241c90[];
extern char s_cState_Move_00241988[];
extern char s_cState_Reverse_00241c80[];
extern char s_cState_Wait_00241978[];

// USA 00241554 <- EU 00241554 (Ghidra, non-matching)
// GLOBAL DAT_00241954 int
// GLOBAL DAT_00241958 undefined4
// GLOBAL DAT_0024195c int *
// GLOBAL DAT_00241960 float
// GLOBAL DAT_00241964 uint
// GLOBAL DAT_00241968 uint
// GLOBAL DAT_0024196c undefined4 *
// GLOBAL DAT_00241970 undefined *
// GLOBAL DAT_00241974 int
// GLOBAL DAT_00241984 int
// GLOBAL DAT_00241c9c float
// GLOBAL s_cState_End_00241c90 string
// GLOBAL s_cState_Move_00241988 string
// GLOBAL s_cState_Reverse_00241c80 string
// GLOBAL s_cState_Wait_00241978 string

/* WARNING: Variable defined which should be unmapped: objStack_b4 */

undefined4 * func_00241554(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fparam_3;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_b4 ((uint *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x70))
  #define local_4c (*(uint * *)(albw_frame + 0x74))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x94))
  #define local_28 (*(uint * *)(albw_frame + 0x98))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)func_001E5F14(param_1,param_2);
  iVar5 = DAT_00241954;
  piVar4[200] = DAT_00241954 + 0x70;
  *piVar4 = iVar5;
  piVar4[300] = 0;
  piVar4[0x12d] = 0;
  iVar5 = func_0054D89C((int)piVar4,0);
  piVar4[0x12e] = iVar5;
  iVar5 = func_0054D89C((int)piVar4,1);
  piVar4[0x12f] = iVar5;
  puVar6 = func_0010A794(piVar4 + 0x130);
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  puVar16 = puVar6 + -0x130;
  objStack_b4[0] = 0;
  objStack_b4[1] = 0;
  uVar7 = func_0014E428((int)puVar16,0,0,0,1,0,0);
  puVar6[-4] = uVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  puVar9 = (uint *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_0016A2FC(puVar8,1,DAT_00241958,1);
  }
  puVar6[-3] = puVar9;
  func_00169688(puVar9,0,DAT_0024195c,*(int *)(puVar6[-0x7c] + 0x1c8));
  uVar15 = 0;
  func_0016A02C(puVar6[-3],-1,(int *)0xffffffff,0);
  objStack_b4[2] = (uint)(objStack_b4 + 3);
  objStack_b4[1] = 3;
  objStack_b4[0] = 1;
  objStack_b4[3] = 0;
  objStack_b4[8] = uVar15 | 0xff;
  objStack_b4[4] = DAT_00241964;
  objStack_b4[5] = (uint)ALBW_AS_U32(DAT_00241960);
  objStack_b4[6] = DAT_00241968;
  objStack_b4[7] = (uint)ALBW_AS_U32(DAT_00241960);
  fparam_3 = DAT_00241960;
  uVar15 = DAT_00241964;
  func_0016898C(puVar6[-3],objStack_b4);
  *(uint *)(*(int *)(puVar6[-3] + 0x14) + 0x10) = uVar15;
  func_00168E9C((int *)puVar6[-3],puVar6[-4],(int *)0x0);
  func_003249E0((int)puVar16,0);
  func_00324964((int)puVar16);
  func_00241164((int)puVar16);
  *(undefined1 *)((int)puVar6 + 6) = 4;
  puVar6[5] = puVar16;
  iVar5 = func_0010BA78(0x40);
  puVar6[6] = iVar5;
  puVar8 = DAT_0024196c;
  puVar6[7] = iVar5 + (uint)*(byte *)((int)puVar6 + 6) * 8;
  iVar12 = 4;
  puVar10 = (undefined4 *)(iVar5 + -8);
  do {
    uVar7 = puVar8[0xf];
    iVar12 = iVar12 + -1;
    puVar10[2] = puVar8[0xe];
    puVar10[3] = uVar7;
    uVar7 = puVar8[0xf];
    puVar10[4] = puVar8[0xe];
    puVar10[5] = uVar7;
    puVar10 = puVar10 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)((int)puVar6 + 6);
  uVar15 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar15 << 3);
  puVar6[8] = puVar10;
  if (uVar15 != 0) {
    puVar11 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar8[5];
      *puVar10 = puVar8[4];
      puVar10[1] = uVar7;
      puVar11 = puVar10;
    }
    for (iVar5 = (int)uVar15 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar7 = puVar8[5];
      puVar11[2] = puVar8[4];
      puVar11[3] = uVar7;
      uVar7 = puVar8[5];
      puVar11[4] = puVar8[4];
      puVar11[5] = uVar7;
      puVar11 = puVar11 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = DAT_00241970;
  iVar5 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar8[1] = 4;
    *puVar8 = 0x24;
    iVar5 = func_00100118((int)(puVar8 + 2),puVar2,0x24,4);
  }
  if (iVar5 != 0) {
    puVar6[2] = 4;
    puVar6[3] = iVar5;
  }
  iVar5 = DAT_00241974;
  puVar6[-0x5b] = puVar6;
  iVar12 = DAT_00241984;
  *(undefined2 *)(iVar5 + (int)puVar16) = 4;
  local_4c = (uint *)s_cState_Wait_00241978;
  local_50 = iVar12;
  iVar5 = puVar6[3];
  puVar9 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar12 + 8))(&local_50);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_4c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00241888;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00241888:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar15) {
    uVar15 = iVar5 - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar9,local_4c,uVar15);
  *(undefined1 *)((int)puVar9 + uVar15) = 0;
  puVar8 = (undefined4 *)puVar6[6];
  uVar13 = DAT_0024196c[2];
  uVar17 = DAT_0024196c[4];
  uVar18 = DAT_0024196c[1];
  uVar19 = DAT_0024196c[3];
  uVar7 = DAT_0024196c[5];
  *puVar8 = *DAT_0024196c;
  puVar8[1] = uVar18;
  puVar8 = (undefined4 *)puVar6[7];
  *puVar8 = uVar13;
  puVar8[1] = uVar19;
  puVar8 = (undefined4 *)puVar6[8];
  *puVar8 = uVar17;
  puVar8[1] = uVar7;
  local_4c = (uint *)s_cState_Move_00241988;
  local_50 = iVar12;
  if ((uint)puVar6[2] < 2) {
    iVar5 = puVar6[3];
  }
  else {
    iVar5 = puVar6[3] + 0x24;
  }
  puVar9 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar12 + 8))(&local_50);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_4c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_002419a0;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_002419a0:
  if (*(int *)(iVar5 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar9,local_4c,uVar15);
  puVar8 = DAT_0024196c;
  *(undefined1 *)((int)puVar9 + uVar15) = 0;
  iVar5 = puVar6[6];
  uVar7 = puVar8[8];
  uVar13 = puVar8[4];
  uVar19 = puVar8[7];
  uVar17 = puVar8[9];
  uVar18 = puVar8[5];
  *(undefined4 *)(iVar5 + 8) = puVar8[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar19;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 8) = uVar7;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  iVar5 = puVar6[8];
  *(undefined4 *)(iVar5 + 8) = uVar13;
  *(undefined4 *)(iVar5 + 0xc) = uVar18;
  local_4c = (uint *)s_cState_Reverse_00241c80;
  local_50 = iVar12;
  if ((uint)puVar6[2] < 3) {
    iVar5 = puVar6[3];
  }
  else {
    iVar5 = puVar6[3] + 0x48;
  }
  puVar9 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar12 + 8))(&local_50);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_4c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00241a78;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00241a78:
  if (*(int *)(iVar5 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  func_0010E3C4(puVar9,local_4c,uVar15);
  *(undefined1 *)((int)puVar9 + uVar15) = 0;
  puVar8 = DAT_0024196c;
  iVar5 = puVar6[6];
  uVar17 = DAT_0024196c[4];
  uVar18 = DAT_0024196c[0xd];
  uVar19 = DAT_0024196c[5];
  uVar7 = DAT_0024196c[0xb];
  uVar13 = DAT_0024196c[0xc];
  *(undefined4 *)(iVar5 + 0x10) = DAT_0024196c[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar7;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(undefined4 *)(iVar5 + 0x14) = uVar18;
  iVar5 = puVar6[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar17;
  *(undefined4 *)(iVar5 + 0x14) = uVar19;
  local_4c = (uint *)s_cState_End_00241c90;
  local_50 = iVar12;
  uVar15 = puVar6[2];
  if (uVar15 < 4) {
    iVar5 = puVar6[3];
    uVar14 = uVar15;
  }
  else {
    iVar5 = iVar12;
    uVar14 = puVar6[3];
  }
  if (3 < uVar15) {
    iVar5 = uVar14 + 0x6c;
  }
  puVar9 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar12 + 8))(&local_50);
  uVar15 = 0;
  do {
    if (*(char *)((int)local_4c + uVar15) == '\0') {
      if ((int)uVar15 < 0x40001) goto LAB_00241b50;
      break;
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < 0x40001);
  uVar15 = 0;
LAB_00241b50:
  if (*(int *)(iVar5 + 8) <= (int)uVar15) {
    uVar15 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_50 + 8))(&local_50);
  uVar14 = uVar15;
  func_0010E3C4(puVar9,local_4c,uVar15);
  *(undefined1 *)((int)puVar9 + uVar15) = 0;
  piVar4 = puVar8 + 4;
  iVar5 = puVar6[6];
  iVar12 = *piVar4;
  uVar7 = puVar8[5];
  uVar13 = puVar8[0xf];
  uVar17 = puVar8[0x10];
  uVar18 = puVar8[0x11];
  *(undefined4 *)(iVar5 + 0x18) = puVar8[0xe];
  *(undefined4 *)(iVar5 + 0x1c) = uVar13;
  iVar5 = puVar6[7];
  *(undefined4 *)(iVar5 + 0x18) = uVar17;
  *(undefined4 *)(iVar5 + 0x1c) = uVar18;
  iVar5 = puVar6[8];
  *(int *)(iVar5 + 0x18) = iVar12;
  *(undefined4 *)(iVar5 + 0x1c) = uVar7;
  func_0065F194(puVar6,0);
  func_001E5B90((int)puVar16,0,ALBW_AS_F32(puVar6[-0x3c]),ALBW_AS_F32(puVar6[-0x3b]),ALBW_AS_F32(puVar6[-0x3a]),
                fparam_3,DAT_00241c9c);
  func_001512B4(puVar6[-2],(float *)(puVar6 + -0x3c));
  if ((*(short *)((int)local_28 + 0x32) != 0) && (bVar3 = func_00588BF0((int)puVar16,0), bVar3)) {
    iVar12 = *(int *)(puVar6[-3] + 0x14);
    iVar5 = iVar12;
    if (*(float *)(iVar12 + 8) != *(float *)(iVar12 + 0x14)) {
      iVar5 = 1;
      *(float *)(iVar12 + 8) = *(float *)(iVar12 + 0x14);
      *(undefined1 *)(iVar12 + 0x26) = 1;
    }
    func_00169A80((int *)puVar6[-3],iVar5,uVar14,piVar4);
    func_00168E9C((int *)puVar6[-3],puVar6[-4],(int *)0x0);
    func_001E5CEC((int)puVar16);
  }
  func_0024100C((int)puVar16);
  return puVar16;
}

