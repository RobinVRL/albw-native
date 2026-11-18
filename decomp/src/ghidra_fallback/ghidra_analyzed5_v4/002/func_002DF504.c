#include "ghidra_types.h"


// USA 002DF504 <- EU 002DF4E0 (Ghidra, non-matching)

void * func_002DF504(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r4;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((int)uVar3 < 1) {
    uVar2 = 0;
  }
  else {
    uVar1 = uVar3 & 1;
    if (uVar1 != 0) {
      unaff_r4 = *(int *)(param_1 + 0x20);
    }
    uVar2 = uVar1;
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = uVar4;
        if (*(int *)(unaff_r4 + uVar2 * 4) == param_2) goto LAB_002df558;
        uVar4 = uVar2 + 1;
        uVar2 = uVar1;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  if ((int)uVar2 < (int)uVar3) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x20) + uVar2 * 4) == param_2) goto LAB_002df558;
      if (*(int *)(*(int *)(param_1 + 0x20) + uVar2 * 4 + 4) == param_2) {
        uVar2 = uVar2 + 1;
        goto LAB_002df558;
      }
      uVar2 = uVar2 + 2;
    } while ((int)uVar2 < (int)uVar3);
  }
LAB_002df560:
  if ((int)uVar3 < *(int *)(param_1 + 0x1c)) {
    *(int *)(*(int *)(param_1 + 0x20) + uVar3 * 4) = param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  return (void *)param_1;
LAB_002df558:
  if (-1 < (int)uVar2) {
    return (void *)param_1;
  }
  goto LAB_002df560;
}

