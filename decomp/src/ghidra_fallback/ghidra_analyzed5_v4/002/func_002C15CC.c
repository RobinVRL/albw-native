#include "ghidra_types.h"


// USA 002C15CC <- EU 002C15A8 (Ghidra, non-matching)

void * func_002C15CC(int param_1,float fparam_0)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(int *)(param_1 + 0x20) + 4) != 0) {
    do {
      iVar1 = **(int **)(param_1 + 0x20) + uVar2 * 0x154;
      if (*(int *)(iVar1 + 0x140) != 0) {
        *(float *)(iVar1 + 0xf8) = fparam_0;
        *(undefined4 *)(iVar1 + 0xfc) = *(undefined4 *)(iVar1 + 0xfc);
      }
      if (*(int *)(iVar1 + 0x148) != 0) {
        *(float *)(iVar1 + 0x110) = fparam_0;
        *(undefined4 *)(iVar1 + 0x114) = *(undefined4 *)(iVar1 + 0x114);
      }
      if (*(int *)(iVar1 + 0x150) != 0) {
        *(float *)(iVar1 + 0x128) = fparam_0;
        *(undefined4 *)(iVar1 + 300) = *(undefined4 *)(iVar1 + 300);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(*(int *)(param_1 + 0x20) + 4));
  }
  return (void *)param_1;
}

