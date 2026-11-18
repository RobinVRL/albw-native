#include "ghidra_types.h"

extern int func_0036ABF4(int param_1);
extern int func_0048C320(int *param_1,int param_2,int param_3);
extern int *DAT_001e3684;

// USA 001E34F0 <- EU 001E34F0 (Ghidra, non-matching)
// GLOBAL DAT_001e3684 int *

undefined4 func_001E34F0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r5;
  uint uVar4;
  bool bVar5;
  
  bVar5 = *(char *)(*DAT_001e3684 + 0x70) != '\x01';
  if (bVar5) {
    param_3 = *(int *)(param_1 + 0x6c);
  }
  if (!bVar5 || param_3 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    return 0;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  if ((int)uVar4 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar4 & 1;
    if (uVar3 != 0) {
      unaff_r5 = *(int *)(param_1 + 0x58);
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      do {
        if (*(int *)(unaff_r5 + uVar1 * 4) == param_3) goto LAB_001e3594;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar3);
    }
  }
  uVar1 = uVar3;
  if ((int)uVar1 < (int)uVar4) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x58) + uVar1 * 4) == param_3) goto LAB_001e3594;
      unaff_r5 = uVar1 * 4 + 4;
      if (*(int *)(*(int *)(param_1 + 0x58) + unaff_r5) == param_3) {
        uVar1 = uVar1 + 1;
        goto LAB_001e3594;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar4);
  }
LAB_001e35bc:
  if (uVar4 == 0) {
    *(undefined1 *)(param_3 + 0xe) = 1;
  }
  if (*(int *)(param_1 + 0x50) < *(int *)(param_1 + 0x54)) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x50) * 4) =
         *(undefined4 *)(param_1 + 0x6c);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  uVar4 = *(uint *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x6c);
  if ((int)uVar4 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar4 & 1;
    if (uVar3 != 0) {
      unaff_r5 = *(int *)(param_1 + 0x3c);
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      do {
        if (*(int *)(unaff_r5 + uVar1 * 4) == iVar2) goto LAB_001e3670;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar3);
    }
  }
  uVar1 = uVar3;
  if ((int)uVar1 < (int)uVar4) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x3c) + uVar1 * 4) == iVar2) goto LAB_001e3670;
      if (*(int *)(*(int *)(param_1 + 0x3c) + uVar1 * 4 + 4) == iVar2) {
        uVar1 = uVar1 + 1;
        goto LAB_001e3670;
      }
      uVar1 = uVar1 + 2;
    } while ((int)uVar1 < (int)uVar4);
  }
  uVar1 = 0xffffffff;
LAB_001e3670:
  return func_0048C320((int *)(param_1 + 0x34),uVar1,1);
LAB_001e3594:
  if (uVar1 != 0xffffffff) {
    if (uVar1 != 0) {
      return 0;
    }
    return func_0036ABF4(param_3);
  }
  goto LAB_001e35bc;
}

