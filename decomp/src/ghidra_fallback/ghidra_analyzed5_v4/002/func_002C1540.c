#include "ghidra_types.h"


// USA 002C1540 <- EU 002C151C (Ghidra, non-matching)

void func_002C1540(int param_1,float fparam_0)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(int *)(param_1 + 0x20) + 4) != 0) {
    do {
      iVar1 = **(int **)(param_1 + 0x20) + uVar2 * 0x154;
      if (*(int *)(iVar1 + 0x140) != 0) {
        *(float *)(iVar1 + 0xec) = fparam_0;
        *(undefined4 *)(iVar1 + 0xf0) = *(undefined4 *)(iVar1 + 0xf0);
      }
      if (*(int *)(iVar1 + 0x148) != 0) {
        *(float *)(iVar1 + 0x104) = fparam_0;
        *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(iVar1 + 0x108);
      }
      if (*(int *)(iVar1 + 0x150) != 0) {
        *(float *)(iVar1 + 0x11c) = fparam_0;
        *(undefined4 *)(iVar1 + 0x120) = *(undefined4 *)(iVar1 + 0x120);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x20) + 4));
  }
  return;
}

