#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_006690CC(undefined4 *param_1,undefined1 param_2);
extern int DAT_003ad73c;
extern int DAT_003ad740;
extern undefined4 DAT_003ad744;
extern undefined4 DAT_003ad748;
extern uint DAT_003ad74c;
extern undefined4 DAT_003ad750;
extern undefined4 DAT_003ad754;
extern undefined4 DAT_003ad758;
extern undefined4 *DAT_003ad75c;
extern undefined4 *DAT_003ad760;
extern undefined4 *DAT_003ad764;
extern undefined4 *DAT_003ad768;
extern undefined *DAT_003ad76c;
extern int DAT_003ad770;
extern uint DAT_003ad784;
extern int *DAT_003ad9f0;
extern int *DAT_003ad9f4;
extern uint *DAT_003ad9f8;
extern undefined4 *DAT_003ad9fc;
extern undefined4 DAT_003ada00;
extern char s_cState_Attack_003ad774[];
extern char s_cState_Delete_003ad9e0[];

// USA 003AD40C <- EU 003AD3E8 (Ghidra, non-matching)
// GLOBAL DAT_003ad73c int
// GLOBAL DAT_003ad740 int
// GLOBAL DAT_003ad744 undefined4
// GLOBAL DAT_003ad748 undefined4
// GLOBAL DAT_003ad74c uint
// GLOBAL DAT_003ad750 undefined4
// GLOBAL DAT_003ad754 undefined4
// GLOBAL DAT_003ad758 undefined4
// GLOBAL DAT_003ad75c undefined4 *
// GLOBAL DAT_003ad760 undefined4 *
// GLOBAL DAT_003ad764 undefined4 *
// GLOBAL DAT_003ad768 undefined4 *
// GLOBAL DAT_003ad76c undefined *
// GLOBAL DAT_003ad770 int
// GLOBAL DAT_003ad784 uint
// GLOBAL DAT_003ad9f0 int *
// GLOBAL DAT_003ad9f4 int *
// GLOBAL DAT_003ad9f8 uint *
// GLOBAL DAT_003ad9fc undefined4 *
// GLOBAL DAT_003ada00 undefined4
// GLOBAL s_cState_Attack_003ad774 string
// GLOBAL s_cState_Delete_003ad9e0 string

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined4 * func_003AD40C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(uint * *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 * *)(albw_frame + 0x18))
  #define local_34 ((uint *)(albw_frame + 0x1c))
  piVar3 = func_00150E40(param_1,param_2);
  iVar9 = DAT_003ad73c;
  *piVar3 = DAT_003ad73c;
  piVar3[200] = iVar9 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  iVar5 = func_0054D89C((int)(puVar4 + -0x103),0);
  iVar9 = DAT_003ad740;
  puVar4[0xc] = iVar5;
  uVar14 = DAT_003ad74c;
  uVar12 = DAT_003ad748;
  uVar11 = *(undefined4 *)(iVar9 + 8);
  puVar4[0xf] = *(undefined4 *)(iVar9 + 4);
  puVar4[0x10] = uVar11;
  uVar18 = DAT_003ad754;
  uVar11 = DAT_003ad750;
  uVar22 = CONCAT44(uVar12,DAT_003ad754);
  puVar4[0xd] = DAT_003ad744;
  puVar4[0xe] = puVar4 + -0x103;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = uVar12;
  puVar4[0x16] = uVar14;
  puVar4[0x17] = uVar11;
  puVar4[0x15] = 0;
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar7 = DAT_003ad75c;
  puVar4[0x1a] = uVar12;
  uVar12 = DAT_003ad758;
  puVar4[0x1b] = uVar18;
  puVar4[0x1c] = uVar12;
  puVar4[0x1d] = uVar18;
  uVar12 = puVar7[1];
  uVar11 = puVar7[2];
  puVar13 = puVar4 + -0x103;
  puVar4[0x1e] = *puVar7;
  puVar4[0x1f] = uVar12;
  puVar4[0x20] = uVar11;
  uVar12 = DAT_003ad760[1];
  uVar11 = DAT_003ad760[2];
  puVar4[0x21] = *DAT_003ad760;
  puVar4[0x22] = uVar12;
  puVar7 = DAT_003ad764;
  puVar4[0x23] = uVar11;
  local_38 = puVar4 + 0x24;
  puVar4[0x24] = *puVar7;
  puVar4[0x25] = *puVar7;
  puVar4[0x26] = *puVar7;
  puVar4[0x27] = *DAT_003ad768;
  puVar4[0x28] = 0;
  puVar4[0x2a] = uVar18;
  puVar4[0x2b] = puVar4[-0x100];
  *(undefined1 *)(puVar4 + 0x2c) = 0;
  iVar5 = func_0054D964((int)puVar13,0);
  puVar4[0xb] = iVar5;
  uVar6 = *(uint *)(iVar5 + 0x2c);
  *(uint *)(iVar5 + 0x2c) = uVar6 | 8;
  *(uint *)(puVar4[0xb] + 0x2c) = uVar6 | 0x10008;
  puVar7 = (undefined4 *)func_0010BAB4(100);
  uVar12 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    uVar12 = func_004EE484(puVar7);
  }
  puVar4[10] = uVar12;
  iVar5 = puVar4[0xb];
  *(undefined4 *)(iVar5 + 4) = puVar4[-0xf];
  *(undefined4 *)(iVar5 + 8) = puVar4[-0xe];
  *(undefined4 *)(iVar5 + 0xc) = puVar4[-0xd];
  func_004356B4((int *)puVar4[0xb]);
  local_34[0] = puVar4[-0x50];
  objStack_50[1] = (uint)(puVar4 + 0xd);
  objStack_50[0] = (uint)*(short *)(puVar4 + -0xee);
  objStack_50[2] = uVar14;
  (*(undefined2 *)((char *)&objStack_50[2] + 0)) = (undefined2)uVar14;
  uVar2 = (undefined2)objStack_50[2];
  objStack_50[2] = uVar14;
  func_0014EB8C(puVar4[10],puVar4[0xb],(undefined2 *)puVar4[-0x1b],local_34,
                *(short *)(puVar4 + -0xee),objStack_50[1],uVar2);
  *(undefined1 *)((int)puVar4 + 6) = 2;
  puVar4[5] = puVar13;
  iVar5 = func_0010BA78(0x20);
  puVar4[6] = iVar5;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 2;
  puVar7 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar9 + 0x40);
    iVar10 = iVar10 + -1;
    puVar7[2] = *(undefined4 *)(iVar9 + 0x3c);
    puVar7[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar9 + 0x40);
    puVar7[4] = *(undefined4 *)(iVar9 + 0x3c);
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar14 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar4[8] = puVar7;
  if (uVar14 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar9 + 0x48);
      *puVar7 = *(undefined4 *)(iVar9 + 0x44);
      puVar7[1] = uVar12;
      puVar8 = puVar7;
    }
    for (iVar5 = (int)uVar14 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = *(undefined4 *)(iVar9 + 0x48);
      puVar8[2] = *(undefined4 *)(iVar9 + 0x44);
      puVar8[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar9 + 0x48);
      puVar8[4] = *(undefined4 *)(iVar9 + 0x44);
      puVar8[5] = uVar12;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 2;
    iVar5 = func_00100118((int)(puVar7 + 2),DAT_003ad76c,0x24,2);
  }
  if (iVar5 != 0) {
    puVar4[3] = iVar5;
    puVar4[2] = 2;
  }
  iVar5 = DAT_003ad770;
  puVar4[-0x2e] = puVar4;
  objStack_50[3] = DAT_003ad784;
  *(undefined2 *)(iVar5 + (int)puVar13) = 2;
  local_3c = (uint *)s_cState_Attack_003ad774;
  local_40 = objStack_50[3];
  iVar5 = puVar4[3];
  puVar15 = *(uint **)(iVar5 + 4);
  (**(code **)(objStack_50[3] + 8))(&local_40);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_3c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_003ad794;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_003ad794:
  if (*(int *)(iVar5 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar15,local_3c,uVar14);
  *(undefined1 *)((int)puVar15 + uVar14) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x10);
  uVar11 = *(undefined4 *)(iVar9 + 0x14);
  uVar18 = *(undefined4 *)(iVar9 + 0x18);
  uVar19 = *(undefined4 *)(iVar9 + 0x1c);
  uVar20 = *(undefined4 *)(iVar9 + 0x20);
  *puVar7 = *(undefined4 *)(iVar9 + 0xc);
  puVar7[1] = uVar12;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar11;
  puVar7[1] = uVar18;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar19;
  puVar7[1] = uVar20;
  local_40 = objStack_50[3];
  local_3c = (uint *)s_cState_Delete_003ad9e0;
  uVar14 = puVar4[2];
  if (uVar14 < 2) {
    iVar5 = puVar4[3];
    uVar6 = uVar14;
  }
  else {
    uVar6 = puVar4[3];
  }
  if (1 < uVar14) {
    iVar5 = uVar6 + 0x24;
  }
  puVar15 = *(uint **)(iVar5 + 4);
  (**(code **)(objStack_50[3] + 8))(&local_40);
  uVar14 = 0;
  do {
    if (*(char *)((int)local_3c + uVar14) == '\0') {
      if ((int)uVar14 < 0x40001) goto LAB_003ad854;
      break;
    }
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 0x40001);
  uVar14 = 0;
LAB_003ad854:
  if (*(int *)(iVar5 + 8) <= (int)uVar14) {
    uVar14 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_40 + 8))(&local_40);
  func_0010E3C4(puVar15,local_3c,uVar14);
  *(undefined1 *)((int)puVar15 + uVar14) = 0;
  iVar5 = puVar4[6];
  uVar12 = *(undefined4 *)(iVar9 + 0x28);
  uVar11 = *(undefined4 *)(iVar9 + 0x2c);
  uVar18 = *(undefined4 *)(iVar9 + 0x30);
  uVar19 = *(undefined4 *)(iVar9 + 0x34);
  uVar20 = *(undefined4 *)(iVar9 + 0x38);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar9 + 0x24);
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = uVar11;
  *(undefined4 *)(iVar9 + 0xc) = uVar18;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 8) = uVar19;
  *(undefined4 *)(iVar9 + 0xc) = uVar20;
  func_006690CC(puVar4,0);
  fVar21 = ALBW_AS_F32(uVar22);
  bVar16 = false;
  if (ALBW_AS_F32(puVar4[0x21]) == fVar21) {
    bVar16 = ALBW_AS_F32(puVar4[0x22]) == fVar21;
  }
  bVar17 = false;
  if (bVar16) {
    bVar17 = ALBW_AS_F32(puVar4[0x23]) == fVar21;
  }
  if (!bVar17) {
    func_001512B4(puVar4[0xc],(float *)(puVar4 + -0xf));
    objStack_50[0] = puVar4[0x21];
    objStack_50[2] = puVar4[0x23];
    objStack_50[1] = (uint)((ulonglong)uVar22 >> 0x20);
    func_00151150(puVar4[0xc],(float *)objStack_50);
  }
  puVar7 = (undefined4 *)func_0052FBA0(*DAT_003ad9f0 + 0x3dbbc,puVar4[-0xef]);
  if ((puVar7 != (undefined4 *)0x0) && (iVar9 = func_00588BE4((int)puVar7), iVar9 == *DAT_003ad9f4))
  {
    if (((*DAT_003ad9f8 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_003ad9f8), iVar9 != 0)) {
      *DAT_003ad9fc = DAT_003ada00;
    }
    iVar9 = (**(code **)*puVar7)(puVar7,DAT_003ad9fc);
    if (iVar9 == 0) {
      puVar7 = (undefined4 *)0x0;
    }
    uVar12 = puVar7[0x13c];
    uVar11 = puVar7[0x13d];
    uVar18 = puVar7[0x13e];
    local_38[3] = puVar7[0x13f];
    *local_38 = uVar12;
    local_38[1] = uVar11;
    local_38[2] = uVar18;
    puVar4[0x2b] = puVar7[0x147];
  }
  return puVar13;
}

