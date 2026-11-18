#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_00151358(int *param_1);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_004FC8D8(int param_1,int param_2);
extern undefined4 DAT_0050173c;
extern int DAT_00501740;
extern undefined4 DAT_00501744;
extern undefined4 DAT_00501748;
extern int DAT_0050174c;
extern uint DAT_00501750;
extern undefined4 DAT_00501754;
extern undefined4 DAT_00501758;

// USA 00501568 <- EU 00501540 (Ghidra, non-matching)
// GLOBAL DAT_0050173c undefined4
// GLOBAL DAT_00501740 int
// GLOBAL DAT_00501744 undefined4
// GLOBAL DAT_00501748 undefined4
// GLOBAL DAT_0050174c int
// GLOBAL DAT_00501750 uint
// GLOBAL DAT_00501754 undefined4
// GLOBAL DAT_00501758 undefined4

void func_00501568(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  
  uVar12 = CONCAT44(DAT_0050173c,DAT_0050173c);
  puVar2 = (undefined4 *)func_0010BAB4(0x20);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_0015137C(puVar2,param_1,0);
  }
  iVar8 = DAT_00501740;
  *(int **)(param_1 + 0x8f0) = piVar3;
  iVar4 = (int)((ulonglong)uVar12 >> 0x20);
  piVar3[4] = iVar4;
  piVar3[5] = iVar8;
  piVar3[6] = iVar4;
  func_00151358(piVar3);
  uVar1 = DAT_00501748;
  uVar13 = DAT_00501744;
  iVar4 = *(int *)(param_1 + 0x8f0);
  fVar11 = ALBW_AS_F32(uVar12);
  uVar12 = CONCAT44(DAT_00501748,iVar8);
  *(undefined4 *)(iVar4 + 4) = DAT_00501744;
  *(undefined4 *)(iVar4 + 8) = uVar1;
  *(undefined4 *)(iVar4 + 0xc) = uVar13;
  func_004FC8D8(param_1 + 0x5a8,*(int *)(param_1 + 0x8f0));
  iVar8 = DAT_0050174c;
  iVar4 = 0;
  uVar15 = (ulonglong)DAT_00501750;
  uVar14 = CONCAT44(DAT_00501758,DAT_00501754);
  iVar10 = 0;
  do {
    puVar9 = (undefined4 *)(param_1 + 0x8f4 + iVar4 * 0x18);
    *puVar9 = *(undefined4 *)(param_1 + 0x3d0);
    puVar9[1] = *(undefined4 *)(param_1 + 0x3d4);
    puVar9[2] = *(undefined4 *)(param_1 + 0x3d8);
    puVar9[5] = *(undefined4 *)(param_1 + 1000);
    piVar3 = func_0014DF18(*(int *)(param_1 + 0x2d0),*(undefined4 *)(iVar8 + 4),*(int *)(iVar8 + 8),
                           iVar10 + 1,0,0);
    puVar9[3] = piVar3;
    func_004FC1CC(param_1,(int)piVar3,0xb,ALBW_AS_F32(uVar15));
    iVar5 = puVar9[3];
    iVar7 = *(int *)(param_1 + 0x40c);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(iVar7 + 0x74);
    *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar7 + 0x78);
    *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(iVar7 + 0x7c);
    puVar6 = (undefined4 *)func_0010BAB4(0x20);
    puVar2 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar2 = func_0015137C(puVar6,param_1,0);
    }
    puVar9[4] = puVar2;
    func_004FC8D8(param_1 + 0x5a8,(int)puVar2);
    if (iVar10 == 0) {
      fVar11 = fVar11 * ALBW_AS_F32(uVar14);
    }
    piVar3 = (int *)puVar9[4];
    if (iVar10 != 0) {
      fVar11 = fVar11 * ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
    }
    piVar3[4] = (int)ALBW_AS_U32(fVar11);
    piVar3[5] = (int)uVar12;
    piVar3[6] = (int)ALBW_AS_U32(fVar11);
    func_00151358(piVar3);
    iVar5 = puVar9[4];
    iVar4 = iVar4 + 1;
    iVar10 = iVar10 + 1;
    *(undefined4 *)(iVar5 + 4) = uVar13;
    *(int *)(iVar5 + 8) = (int)((ulonglong)uVar12 >> 0x20);
    *(undefined4 *)(iVar5 + 0xc) = uVar13;
  } while (iVar4 != 2);
  iVar8 = 0;
  do {
    iVar4 = iVar8 + 1;
    puVar2 = (undefined4 *)(param_1 + 0x924 + iVar8 * 0x14);
    *puVar2 = *(undefined4 *)(param_1 + 0x3d0);
    puVar2[1] = *(undefined4 *)(param_1 + 0x3d4);
    puVar2[2] = *(undefined4 *)(param_1 + 0x3d8);
    puVar2[4] = *(undefined4 *)(param_1 + 0x3d4);
    puVar2[3] = *(undefined4 *)(param_1 + 1000);
    iVar8 = iVar4;
  } while (iVar4 != 0x10);
  return;
}

