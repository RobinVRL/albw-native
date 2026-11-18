#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_001712B4(undefined4 *param_1,int param_2,ushort *param_3);
extern int func_00330D98(undefined4 *param_1,int param_2,ushort *param_3);
extern int func_004CE0BC(int *param_1,int param_2,int param_3,int param_4,int param_5);
extern undefined4 DAT_002c3d74;

// USA 002C3B70 <- EU 002C3B4C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_002c3d74 undefined4

int * func_002C3B70(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  undefined4 unaff_r9;
  
  func_004CE0BC(param_1,param_2,param_3,param_4,param_5);
  iVar12 = *(int *)(*(int *)(param_2 + 8) + 0x44);
  func_0010B380(param_1 + 0x1a,iVar12,(int *)0x0,4);
  func_0010B380(param_1 + 0x5e,iVar12,(int *)0x0,4);
  func_0010B380(param_1 + 0x61,iVar12,(int *)0x0,4);
  if (0 < iVar12) {
    unaff_r9 = DAT_002c3d74;
  }
  iVar10 = 0;
  if (0 < iVar12) {
    do {
      puVar13 = (ushort *)(*(int *)(*(int *)(param_1[0x14] + 8) + 0x40) + iVar10 * 0x38);
      puVar1 = (undefined4 *)func_0010BAB4(0xb8);
      if (puVar1 == (undefined4 *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = func_00330D98(puVar1,(int)param_1,puVar13);
      }
      puVar2 = (undefined4 *)func_0010BAB4(0xb8);
      puVar1 = (undefined4 *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        puVar1 = func_001712B4(puVar2,(int)param_1,puVar13);
        puVar1[0x2b] = iVar11;
        *puVar1 = unaff_r9;
        iVar6 = *(int *)(puVar1[0x23] + 0x50);
        uVar3 = (uint)*(ushort *)puVar1[0x24];
        if (uVar3 < *(uint *)(iVar6 + 0xb4)) {
          puVar4 = (undefined1 *)(uVar3 + *(int *)(iVar6 + 0xb8));
        }
        else {
          puVar4 = *(undefined1 **)(iVar6 + 0xb8);
        }
        *(undefined1 *)(puVar1 + 0x2c) = *puVar4;
        iVar6 = *(int *)(puVar1[0x23] + 0x50);
        uVar3 = (uint)*(ushort *)puVar1[0x24];
        if (uVar3 < *(uint *)(iVar6 + 0xbc)) {
          puVar4 = (undefined1 *)(uVar3 + *(int *)(iVar6 + 0xc0));
        }
        else {
          puVar4 = *(undefined1 **)(iVar6 + 0xc0);
        }
        *(undefined1 *)((int)puVar1 + 0xb1) = *puVar4;
        *(undefined4 **)(iVar11 + 0xac) = puVar1;
      }
      piVar5 = param_1 + 0x5e;
      if (*piVar5 < param_1[0x5f]) {
        *(int *)(param_1[0x60] + *piVar5 * 4) = iVar11;
        *piVar5 = *piVar5 + 1;
      }
      piVar5 = param_1 + 0x61;
      if (*piVar5 < param_1[0x62]) {
        *(undefined4 **)(param_1[99] + *piVar5 * 4) = puVar1;
        *piVar5 = *piVar5 + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar12);
  }
  uVar3 = 0;
  param_1[0x17] = 0;
  if (0 < iVar12) {
    do {
      uVar7 = param_1[0x5e];
      uVar8 = uVar7;
      if (uVar3 < uVar7) {
        uVar8 = param_1[0x60];
      }
      piVar5 = param_1 + 0x17;
      if (uVar3 < uVar7) {
        uVar9 = *(undefined4 *)(uVar8 + uVar3 * 4);
      }
      else {
        uVar9 = 0;
      }
      if (*piVar5 < param_1[0x18]) {
        *(undefined4 *)(param_1[0x19] + *piVar5 * 4) = uVar9;
        *piVar5 = *piVar5 + 1;
      }
      uVar7 = param_1[0x61];
      uVar8 = uVar7;
      if (uVar3 < uVar7) {
        uVar8 = param_1[99];
      }
      piVar5 = param_1 + 0x1a;
      if (uVar3 < uVar7) {
        uVar9 = *(undefined4 *)(uVar8 + uVar3 * 4);
      }
      else {
        uVar9 = 0;
      }
      if (*piVar5 < param_1[0x1b]) {
        *(undefined4 *)(param_1[0x1c] + *piVar5 * 4) = uVar9;
        *piVar5 = *piVar5 + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar12);
  }
  param_1[0x59] = param_1[0x59] | 0x20000000;
  return param_1;
}

