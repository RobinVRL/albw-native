#include "ghidra_types.h"


// USA 00530780 <- EU 00530758 (Ghidra, non-matching)

undefined4 func_00530780(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0xeb4) < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xeb4) + -1 + *(int *)(param_1 + 0xeb0);
    if (*(int *)(param_1 + 0xeac) <= iVar2) {
      iVar2 = iVar2 - *(int *)(param_1 + 0xeac);
    }
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0xea8) + iVar2 * 0x1c);
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    param_2[3] = puVar3[3];
    param_2[4] = puVar3[4];
    param_2[5] = puVar3[5];
    param_2[6] = puVar3[6];
    if (*(int *)(param_1 + 0xef4) < 1) {
      puVar3 = *(undefined4 **)(param_1 + 0xee8);
    }
    else {
      iVar2 = *(int *)(param_1 + 0xef4) + -1 + *(int *)(param_1 + 0xef0);
      if (*(int *)(param_1 + 0xeec) <= iVar2) {
        iVar2 = iVar2 - *(int *)(param_1 + 0xeec);
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0xee8) + iVar2 * 0xc);
    }
    uVar1 = *puVar3;
    uVar4 = puVar3[1];
    param_3[2] = puVar3[2];
    *param_3 = uVar1;
    param_3[1] = uVar4;
    uVar1 = 1;
  }
  return uVar1;
}

