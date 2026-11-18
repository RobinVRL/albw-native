#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001E5B90(int param_1,undefined1 param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4);
extern int func_001E5CEC(int param_1);
extern int func_001E5F14(undefined4 *param_1,uint *param_2);
extern int func_002C9C78(int param_1);
extern int func_002C9DA0(int param_1);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00663810(undefined4 *param_1,undefined1 param_2);
extern int DAT_002ca554;
extern undefined4 DAT_002ca558;
extern int *DAT_002ca55c;
extern float DAT_002ca560;
extern uint DAT_002ca564;
extern uint DAT_002ca568;
extern undefined4 *DAT_002ca56c;
extern undefined *DAT_002ca570;
extern int DAT_002ca574;
extern int DAT_002ca584;
extern float DAT_002ca8b0;
extern char s_cState_End_002ca8a4[];
extern char s_cState_Move_002ca588[];
extern char s_cState_Reverse_002ca894[];
extern char s_cState_Wait_002ca578[];

// USA 002CA184 <- EU 002CA160 (Ghidra, non-matching)
// GLOBAL DAT_002ca554 int
// GLOBAL DAT_002ca558 undefined4
// GLOBAL DAT_002ca55c int *
// GLOBAL DAT_002ca560 float
// GLOBAL DAT_002ca564 uint
// GLOBAL DAT_002ca568 uint
// GLOBAL DAT_002ca56c undefined4 *
// GLOBAL DAT_002ca570 undefined *
// GLOBAL DAT_002ca574 int
// GLOBAL DAT_002ca584 int
// GLOBAL DAT_002ca8b0 float
// GLOBAL s_cState_End_002ca8a4 string
// GLOBAL s_cState_Move_002ca588 string
// GLOBAL s_cState_Reverse_002ca894 string
// GLOBAL s_cState_Wait_002ca578 string

/* WARNING: Variable defined which should be unmapped: objStack_b4 */

undefined4 * func_002CA184(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fparam_3;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define objStack_b4 ((uint *)(albw_frame + 0xc))
  #define local_58 (*(int *)(albw_frame + 0x68))
  #define local_54 (*(uint * *)(albw_frame + 0x6c))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x94))
  #define local_28 (*(uint * *)(albw_frame + 0x98))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)func_001E5F14(param_1,param_2);
  iVar8 = DAT_002ca554;
  piVar4[200] = DAT_002ca554 + 0x70;
  *piVar4 = iVar8;
  piVar4[300] = 0;
  piVar4[0x12d] = 0;
  puVar5 = func_0010A794(piVar4 + 0x12e);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  *(undefined1 *)((int)puVar5 + 0x31) = 0;
  puVar15 = puVar5 + -0x12e;
  objStack_b4[0] = 0;
  objStack_b4[1] = 0;
  uVar6 = func_0014E428((int)puVar15,0,0,0,1,0,0);
  puVar5[-2] = uVar6;
  puVar7 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = func_0016A2FC(puVar7,1,DAT_002ca558,1);
  }
  puVar5[-1] = puVar16;
  func_00169688(puVar16,0,DAT_002ca55c,*(int *)(puVar5[-0x7a] + 0x1c8));
  uVar14 = 0;
  func_0016A02C(puVar5[-1],-1,(int *)0xffffffff,0);
  objStack_b4[2] = (uint)(objStack_b4 + 3);
  objStack_b4[1] = 3;
  objStack_b4[0] = 1;
  objStack_b4[3] = 0;
  objStack_b4[8] = uVar14 | 0xff;
  objStack_b4[4] = DAT_002ca564;
  objStack_b4[5] = (uint)ALBW_AS_U32(DAT_002ca560);
  objStack_b4[6] = DAT_002ca568;
  objStack_b4[7] = (uint)ALBW_AS_U32(DAT_002ca560);
  fparam_3 = DAT_002ca560;
  uVar14 = DAT_002ca564;
  func_0016898C(puVar5[-1],objStack_b4);
  *(uint *)(*(int *)(puVar5[-1] + 0x14) + 0x10) = uVar14;
  func_00168E9C((int *)puVar5[-1],puVar5[-2],(int *)0x0);
  func_003249E0((int)puVar15,0);
  func_00324964((int)puVar15);
  func_002C9DA0((int)puVar15);
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = puVar15;
  iVar8 = func_0010BA78(0x40);
  puVar5[6] = iVar8;
  puVar7 = DAT_002ca56c;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar11 = 4;
  puVar9 = (undefined4 *)(iVar8 + -8);
  do {
    uVar6 = puVar7[0xf];
    iVar11 = iVar11 + -1;
    puVar9[2] = puVar7[0xe];
    puVar9[3] = uVar6;
    uVar6 = puVar7[0xf];
    puVar9[4] = puVar7[0xe];
    puVar9[5] = uVar6;
    puVar9 = puVar9 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar14 = (uint)bVar1;
  puVar9 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar5[8] = puVar9;
  if (uVar14 != 0) {
    puVar10 = puVar9 + -2;
    if ((bVar1 & 1) != 0) {
      uVar6 = puVar7[5];
      *puVar9 = puVar7[4];
      puVar9[1] = uVar6;
      puVar10 = puVar9;
    }
    for (iVar8 = (int)uVar14 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar6 = puVar7[5];
      puVar10[2] = puVar7[4];
      puVar10[3] = uVar6;
      uVar6 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar6;
      puVar10 = puVar10 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  puVar2 = DAT_002ca570;
  iVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[1] = 4;
    *puVar7 = 0x24;
    iVar8 = func_00100118((int)(puVar7 + 2),puVar2,0x24,4);
  }
  if (iVar8 != 0) {
    puVar5[2] = 4;
    puVar5[3] = iVar8;
  }
  iVar8 = DAT_002ca574;
  puVar5[-0x59] = puVar5;
  iVar11 = DAT_002ca584;
  *(undefined2 *)(iVar8 + (int)puVar15) = 4;
  local_54 = (uint *)s_cState_Wait_002ca578;
  local_58 = iVar11;
  iVar8 = puVar5[3];
  puVar16 = *(uint **)(iVar8 + 4);
  objStack_b4[6] = (uint)puVar5;
  (**(code **)(iVar11 + 8))(&local_58);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_54 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002ca488;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002ca488:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar14) {
    uVar14 = iVar8 - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar16,local_54,uVar14);
  puVar7 = DAT_002ca56c;
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar9 = (undefined4 *)puVar5[6];
  uVar6 = puVar7[1];
  uVar12 = puVar7[3];
  uVar17 = puVar7[2];
  uVar18 = puVar7[4];
  uVar19 = puVar7[5];
  *puVar9 = *puVar7;
  puVar9[1] = uVar6;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar17;
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  local_54 = (uint *)s_cState_Move_002ca588;
  local_58 = iVar11;
  if ((uint)puVar5[2] < 2) {
    iVar8 = puVar5[3];
  }
  else {
    iVar8 = puVar5[3] + 0x24;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar11 + 8))(&local_58);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_54 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002ca5a0;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002ca5a0:
  if (*(int *)(iVar8 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar16,local_54,uVar14);
  puVar7 = DAT_002ca56c;
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar8 = puVar5[6];
  uVar12 = puVar7[8];
  uVar17 = puVar7[4];
  uVar18 = puVar7[7];
  uVar19 = puVar7[9];
  uVar6 = puVar7[5];
  *(undefined4 *)(iVar8 + 8) = puVar7[6];
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 8) = uVar12;
  *(undefined4 *)(iVar8 + 0xc) = uVar19;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 8) = uVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar6;
  local_54 = (uint *)s_cState_Reverse_002ca894;
  local_58 = iVar11;
  if ((uint)puVar5[2] < 3) {
    iVar8 = puVar5[3];
  }
  else {
    iVar8 = puVar5[3] + 0x48;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar11 + 8))(&local_58);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_54 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002ca678;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002ca678:
  if (*(int *)(iVar8 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  func_0010E3C4(puVar16,local_54,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  puVar7 = DAT_002ca56c;
  iVar8 = puVar5[6];
  uVar6 = DAT_002ca56c[0xb];
  uVar17 = DAT_002ca56c[0xc];
  uVar12 = DAT_002ca56c[4];
  uVar18 = DAT_002ca56c[0xd];
  uVar19 = DAT_002ca56c[5];
  piVar4 = (int *)(iVar8 + 0x10);
  *piVar4 = DAT_002ca56c[10];
  *(undefined4 *)(iVar8 + 0x14) = uVar6;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar17;
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar12;
  *(undefined4 *)(iVar8 + 0x14) = uVar19;
  local_54 = (uint *)s_cState_End_002ca8a4;
  local_58 = iVar11;
  uVar14 = puVar5[2];
  if (uVar14 < 4) {
    iVar8 = puVar5[3];
    uVar13 = uVar14;
  }
  else {
    iVar8 = iVar11;
    uVar13 = puVar5[3];
  }
  if (3 < uVar14) {
    iVar8 = uVar13 + 0x6c;
  }
  puVar16 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar11 + 8))(&local_58);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_54 + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_002ca750;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_002ca750:
  if (*(int *)(iVar8 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_58 + 8))(&local_58);
  uVar13 = uVar14;
  func_0010E3C4(puVar16,local_54,uVar14);
  *(undefined1 *)((int)puVar16 + uVar14) = 0;
  iVar8 = puVar5[6];
  uVar6 = puVar7[0x11];
  uVar12 = puVar7[0x10];
  uVar17 = puVar7[4];
  uVar18 = puVar7[0xf];
  uVar19 = puVar7[5];
  *(undefined4 *)(iVar8 + 0x18) = puVar7[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar12;
  *(undefined4 *)(iVar8 + 0x1c) = uVar6;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar17;
  *(undefined4 *)(iVar8 + 0x1c) = uVar19;
  func_00663810((undefined4 *)objStack_b4[6],0);
  func_002C9C78((int)puVar15);
  func_001E5B90((int)puVar15,0,ALBW_AS_F32(puVar5[-0x3a]),ALBW_AS_F32(puVar5[-0x39]),ALBW_AS_F32(puVar5[-0x38]),
                fparam_3,DAT_002ca8b0);
  if ((*(short *)((int)local_28 + 0x32) != 0) && (bVar3 = func_00588BF0((int)puVar15,0), bVar3)) {
    iVar11 = *(int *)(puVar5[-1] + 0x14);
    iVar8 = iVar11;
    if (*(float *)(iVar11 + 8) != *(float *)(iVar11 + 0x14)) {
      iVar8 = 1;
      *(float *)(iVar11 + 8) = *(float *)(iVar11 + 0x14);
      *(undefined1 *)(iVar11 + 0x26) = 1;
    }
    func_00169A80((int *)puVar5[-1],iVar8,uVar13,piVar4);
    func_00168E9C((int *)puVar5[-1],puVar5[-2],(int *)0x0);
    func_001E5CEC((int)puVar15);
  }
  if ((short)local_28[10] == 0) {
    *(undefined1 *)(puVar5 + 0xc) = 0;
  }
  else {
    *(undefined1 *)(puVar5 + 0xc) = 1;
  }
  return puVar15;
}

