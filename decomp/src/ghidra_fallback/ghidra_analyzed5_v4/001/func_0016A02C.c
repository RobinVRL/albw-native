#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_0013388C(int *param_1,int param_2);
extern int func_003FA3F4(int *param_1,int param_2,int param_3);
extern int func_003FAF74(int *param_1,int param_2,uint param_3);
extern undefined4 DAT_0016a2a0;

// USA 0016A02C <- EU 0016A02C (Ghidra, non-matching)
// GLOBAL DAT_0016a2a0 undefined4

undefined4 func_0016A02C(int param_1,int param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *in_r12;
  
  iVar10 = 0;
  piVar11 = (int *)0x0;
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    piVar6 = *(int **)(param_1 + 8);
    uVar8 = *(uint *)(param_1 + 4);
    do {
      piVar9 = piVar6;
      if (uVar1 < uVar8) {
        piVar9 = piVar6 + uVar1;
      }
      if (*piVar9 != 0) {
        piVar9 = piVar6;
        if (uVar1 < uVar8) {
          in_r12 = piVar6 + uVar1;
          piVar9 = piVar6 + uVar1;
        }
        if (uVar8 <= uVar1) {
          in_r12 = piVar6;
        }
        in_r12 = (int *)(uint)*(ushort *)(*(int *)*in_r12 + 6);
        if (iVar10 < *(int *)(*(int *)*piVar9 + 0x10)) {
          iVar10 = *(int *)(*(int *)*piVar9 + 0x10);
        }
        if (piVar11 < in_r12) {
          piVar11 = in_r12;
        }
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar8);
  }
  if (0 < param_2) {
    iVar10 = param_2;
  }
  if (0 < (int)param_3) {
    piVar11 = param_3;
  }
  iVar4 = (int)piVar11 * 0x20;
  uVar1 = 0;
  if (iVar10 * 2 != 0) {
    uVar1 = iVar10 * 2 + 3U & 0xfffffffc;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  iVar3 = param_1;
  piVar6 = (int *)func_0010DB90();
  iVar3 = (**(code **)(*piVar6 + 0x18))
                    (piVar6,(uVar1 + iVar4) * iVar2,4,*(code **)(*piVar6 + 0x18),iVar3,param_2,
                     param_3);
  uVar8 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    do {
      if (uVar1 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = iVar3 + 3U & 0xfffffffc;
        iVar3 = uVar7 + uVar1;
      }
      if (uVar8 < *(uint *)(param_1 + 0x90)) {
        piVar6 = (int *)(*(int *)(param_1 + 0x94) + uVar8 * 0x14);
      }
      else {
        piVar6 = *(int **)(param_1 + 0x94);
      }
      func_003FA3F4(piVar6,uVar7,iVar10);
      if (iVar4 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = iVar3 + 3U & 0xfffffffc;
        iVar3 = uVar7 + iVar4;
      }
      if (uVar8 < *(uint *)(param_1 + 0x90)) {
        iVar2 = *(int *)(param_1 + 0x94) + uVar8 * 0x14;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x94);
      }
      func_003FAF74((int *)(iVar2 + 8),uVar7,(uint)piVar11);
      if (uVar8 < *(uint *)(param_1 + 0x90)) {
        iVar2 = *(int *)(param_1 + 0x94) + uVar8 * 0x14;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x94);
      }
      uVar8 = uVar8 + 1;
      *(undefined1 *)(iVar2 + 0x10) = 0;
    } while ((int)uVar8 < *(int *)(param_1 + 0x90));
  }
  iVar10 = iVar10 + 1;
  if ((0 < iVar10) && (iVar4 = func_0010CEE0(iVar10 * 2,(int *)0x0,4), iVar4 != 0)) {
    *(int *)(param_1 + 0xa0) = iVar4;
    *(int *)(param_1 + 0x9c) = iVar10;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if ((param_4 != 0) && (uVar1 = 0, 0 < *(int *)(param_1 + 4))) {
    do {
      if (uVar1 < *(uint *)(param_1 + 4)) {
        piVar11 = (int *)(*(int *)(param_1 + 8) + uVar1 * 4);
      }
      else {
        piVar11 = *(int **)(param_1 + 8);
      }
      if (*piVar11 != 0) {
        if (uVar1 < *(uint *)(param_1 + 4)) {
          puVar5 = (undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 4);
        }
        else {
          puVar5 = *(undefined4 **)(param_1 + 8);
        }
        func_0013388C((int *)*puVar5,param_4);
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(param_1 + 4));
  }
  *(undefined1 *)(param_1 + 0x85) = 1;
  return 1;
}

