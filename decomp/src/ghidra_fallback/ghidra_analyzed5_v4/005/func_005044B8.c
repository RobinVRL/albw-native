#include "ghidra_types.h"


// USA 005044B8 <- EU 00504490 (Ghidra, non-matching)

void func_005044B8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x5c) + iVar1 * 4);
      iVar1 = iVar1 + 1;
      *puVar2 = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 **)(param_1 + 0x60) = puVar2;
    } while (iVar1 < *(int *)(param_1 + 0x54));
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x658) = 0;
  return;
}

