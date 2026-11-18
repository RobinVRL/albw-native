#include "ghidra_types.h"

extern int func_0026FB30(int param_1);
extern int *DAT_0016b548;
extern int *DAT_0016b54c;

// USA 0016B444 <- EU 0016B444 (Ghidra, non-matching)
// GLOBAL DAT_0016b548 int *
// GLOBAL DAT_0016b54c int *

undefined4 func_0016B444(int param_1,undefined1 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 0xf78) = 0;
  *(undefined1 *)(param_1 + 0xfa5) = param_2;
  *(undefined4 *)(param_1 + 0xf74) = 0;
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    uVar6 = *(uint *)(param_1 + 0x90);
    do {
      if (uVar3 < uVar6) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x98) + uVar3 * 4);
      }
      else {
        iVar7 = 0;
      }
      if (*(short *)(iVar7 + 6) == param_3) {
        if (uVar3 < uVar6) {
          uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x98) + uVar3 * 4);
        }
        else {
          uVar4 = 0;
        }
        *(undefined4 *)(param_1 + 0xf74) = uVar4;
        break;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar6);
  }
  bVar1 = false;
  if (*(int *)(*(int *)(param_1 + 0xf74) + 0x20) != 0) {
    if ((*DAT_0016b548 == 0) || (2 < (int)*(char *)(*DAT_0016b548 + 0x18) - 0x18U)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  uVar3 = 0;
  bVar5 = *(byte *)(*DAT_0016b54c + 0x2c1f);
  if (bVar1) {
    bVar5 = bVar5 | 8;
  }
  else {
    bVar5 = bVar5 & 0xf7;
  }
  *(byte *)(*DAT_0016b54c + 0x2c1f) = bVar5;
  do {
    piVar2 = (int *)(param_1 + 0xf9c);
    if (uVar3 < 2) {
      piVar2 = (int *)(param_1 + 0xf9c) + uVar3;
    }
    func_0026FB30(*piVar2);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  return 1;
}

