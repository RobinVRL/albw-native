#include "ghidra_types.h"

extern int func_0013FC48(int param_1);

// USA 00140E68 <- EU 00140E68 (Ghidra, non-matching)

undefined4 func_00140E68(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x504) == 0) ||
     (iVar1 = *(int *)(param_1 + 0x504) + -1, *(int *)(param_1 + 0x504) = iVar1, iVar1 == 0)) {
    uVar2 = *(int *)(param_1 + 0x4f8) + 1;
    *(uint *)(param_1 + 0x4f8) = uVar2;
    uVar3 = *(uint *)(*(int *)(param_1 + 0x40c) + 0x20);
    if (uVar2 == uVar3) {
      return func_0013FC48(param_1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x40c) + 0x28);
    if ((iVar1 == 0 || uVar3 <= uVar2) || (iVar1 = *(int *)(iVar1 + uVar2 * 4), iVar1 == 0)) {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(iVar1 + 0x48);
    }
  }
  return 0;
}

