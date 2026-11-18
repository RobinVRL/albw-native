#include "ghidra_types.h"

extern int func_0048C320(int *param_1,int param_2,int param_3);

// USA 00166620 <- EU 00166624 (Ghidra, non-matching)

undefined4 func_00166620(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0x18);
  if ((int)uVar4 < 1) {
    uVar2 = 0;
  }
  else {
    uVar1 = uVar4 & 1;
    if (uVar1 != 0) {
      unaff_r4 = *(int *)(param_1 + 0x20);
    }
    uVar2 = uVar1;
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = uVar5;
        if (*(int *)(unaff_r4 + uVar2 * 4) == param_2) goto LAB_001666a4;
        uVar5 = uVar2 + 1;
        uVar2 = uVar1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  if ((int)uVar2 < (int)uVar4) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x20) + uVar2 * 4) == param_2) {
LAB_001666a4:
        if ((int)uVar2 < 0) {
          return 0;
        }
        if (uVar4 - 1 < uVar4) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x20) + (uVar4 - 1) * 4);
        }
        else {
          iVar3 = 0;
        }
        if (iVar3 == param_2) {
          *(undefined1 *)(param_1 + 0xa5) = 1;
        }
        return func_0048C320((int *)(param_1 + 0x18),uVar2,1);
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + uVar2 * 4 + 4) == param_2) {
        uVar2 = uVar2 + 1;
        goto LAB_001666a4;
      }
      uVar2 = uVar2 + 2;
    } while ((int)uVar2 < (int)uVar4);
  }
  return 0;
}

